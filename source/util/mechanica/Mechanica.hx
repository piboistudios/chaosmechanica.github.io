/*TODO 12/19/2017:

-Define Mechanica class

pseudocode below:*/
package util.mechanica;

import flixel.addons.display.FlxNestedSprite;
import util.PartFactory;
import util.control.Controller;
import util.mechanica.MechanicaH;
import flixel.FlxG;
import math.MoreMath;
import util.mechanica.MechGroup;
import util.mechanica.MechBullet;
// import util.interfaces.ICollider;
import flixel.FlxObject;
import util.mechanica.Part;

class Mechanica extends FlxNestedSprite
{
	public var name = "Blank Schematic";
	//PARTS
	public var head:HeadUnit;
	public var core:CoreUnit;
	public var arms:ArmUnits;
	public var legs:LegUnits;
	public var thruster:ThrusterUnit;
	public var controller:Controller;
	public var equip1:FirearmUnit;
	public var team:MechGroup;
	public var equip2:FirearmUnit;
	
	//INTERNAL CONTROLS
	private var enabled = false; 		//can this mechanica receive and process input?
	private var speed:Float;			//current speed
	private var locomotionStatus:LocomotionStatus; //Used to determine how locomotion input data is processed 
	private var animatedThisFrame = false;			//Flag to prevent double-animating in the case of strafing while moving in two directions


	override public function new(?X:Float, ?Y:Float)//, ?Head:Null<HeadUnit>, ?Core:Null<CoreUnit>, ?Arms:Null<ArmUnits>, ?Legs:Null<LegUnits>, ?Thruster:Null<ThrusterUnit>, ?Equip1:Null<EquipmentUnit>, ?Equip2:Null<EquipmentUnit>)
	{
		super(X, Y);
		
		
	}
	override public function add(v:FlxNestedSprite):FlxNestedSprite
	{
		super.add(v);
		if(Std.is(v, Part)) cast(v, Part).parent = this;
		return v;
	}
	public function getWeight():Float{ 			//this is the total weight of the mechanica
		return head.weight + core.weight + arms.weight + legs.weight + thruster.weight + ((equip1 != null) ? equip1.weight : 0) + ((equip2 != null) ? equip2.weight : 0);
	}
	public function getLoad():Float				//this is the load currently being carried by the leg units
	{
		return getWeight() - legs.weight;
	}
	public function valid():Bool				//is this a valid mechanica?
	{
		return (head != null && core != null && arms != null && legs != null && thruster != null);
	}
	public function bump(col1:Dynamic, col2:Dynamic):Bool
	{
	//	FlxG.log.advanced(name + " was hit by " + col);
		if(Std.is(col2, FlxObject))
		{
			if(Std.is(col2, MechBullet))
			{
				var bullet = cast(col2, MechBullet);
				if(bullet.parent.team != this.team)
				{
					struckBy(bullet);
					return true;
				}
				else return false;
			}
			FlxObject.separate(this, cast(col2, FlxObject));
		}
		return true;
	}
	public function struckBy(bullet:MechBullet):Void
	{
		FlxG.log.advanced(name + " was shot by " + bullet.parent.name);
	}
	public function postCollision():Void
	{

	}
	private function runInput(paramsXml:Xml):Void
	{
		if(!enabled) return;
		
		switch(paramsXml.get("action"))
			{
				case "locomote":
					{

						//do math
						var direction = Std.parseInt(paramsXml.get("direction"));							//Which directional input was used
						var angleOffset = (paramsXml.get("axis")=="x" ? -90 : 0);
						var performanceRedux = (
									(( getLoad() - (legs.performanceWeightCapacity * legs.weightCapacity) )
									/
									( legs.weightCapacity - (legs.weightCapacity * legs.performanceWeightCapacity ))
									));
						var baseSpeed = (locomotionStatus != ThrusterEngaged ? legs.topSpeed * legs._acceleration : thruster.topSpeed * thruster._acceleration);
						baseSpeed *= Global.speedScale;
						var limit = (performanceRedux > 0 ? (1-performanceRedux) * baseSpeed : baseSpeed);
						//handle animations
						var animate = !animatedThisFrame;
						if(animate)
						{	
							animatedThisFrame = true;
							if(legs.animated && locomotionStatus != ThrusterEngaged && MoreMath.magnitude(velocity) >= 10)//if the mech hasn't come to a complete stop
							{
								legs.animation.getByName("locomote").frameRate = Std.int(Math.max(speed/limit * legs.frameRate, 2));
								legs.animation.play("locomote");
							}
							else //if the mech has come to a complete stop
							{
								if(locomotionStatus != ThrusterEngaged) locomotionStatus = Standing;
								if(legs.animated && legs.animation.curAnim != null)
								{
									legs.animation.pause();
								}
							}
						}
						//do movement stuff
						
						if(direction != 0)//if receiving movement input
						{
						//l	centerOrigin();
							var a = Math.cos(MoreMath.degToRad(angle+90+angleOffset));
							var b = Math.sin(MoreMath.degToRad(angle+90+angleOffset));
							//var speedFactor = baseSpeed * legs._acceleration;
							if(animate) 
								{
								speed += baseSpeed;
								velocity.set(a*speed*direction, b*speed*direction);
								}
							else
							{

								velocity.add(a*speed*direction, b*speed*direction);
							}
							speed = Math.min(speed, limit);
							
							
							if(locomotionStatus != ThrusterEngaged) locomotionStatus = Walking;
						}
						else //initiate braking
						{
							if(locomotionStatus == Walking || locomotionStatus == Standing) speed = Math.max(speed-2, 0);
							locomotionStatus = Braking;
						}
					
						
						FlxG.watch.addQuick("magnitude:", MoreMath.magnitude(velocity));
						
					}
				case "steer":
				{
					//do steering stuff
					var direction = Std.parseInt(paramsXml.get("direction"));
					if(direction != 0)//if receiving steering input
					{
					//	centerOrigin();
					//	locomotionStatus.getName();
						angle += legs.turningSpeed * direction;
						speed--;
						if(angle < 0)
						{
							angle += 360;
						}
						if(angle > 360)
						{
							angle -= 360;
						}
					}
				}
				case "boost":
				{
					var mode = paramsXml.get("mode");
					
					var mobile = locomotionStatus == Walking || locomotionStatus == ThrusterEngaged;
					switch(mode)
					{	
						case "fire":
						{
							if(mobile)
							{
								locomotionStatus = ThrusterEngaged;
								thruster.flareSprite.visible = true;

								thruster.flareSprite.animation.play("engage");
								

							}
						}
						case "shutoff":
						{
		
							locomotionStatus = Standing;
							thruster.flareSprite.visible = false;
							thruster.flareSprite.animation.finish();
						}
					}
				}
				case "fire1":
				{
					//do equipment 1 stuff
					equip1.fire(angle-90);
				}
				case "fire2":
				{
					equip2.fire(angle-90);
				}
				case "aux1":
				{
					//for auxiliary commands; perhaps shoulder carriage units or additional optional parts
				}
				case "aux2":
				{
					//another auxiliary command; effectively allowing two auxiliary units as of now
				}
			}
	}
	override public function update(e:Float):Void
	{
		
		processInput();
		//Global.log("p: (" + Std.string(FlxMath.roundDecimal(x,1))+", "+Std.string(FlxMath.roundDecimal(y,1))+")   v: (" + Std.string(limevelocity.x) + ", " + Std.string(velocity.y) + ")");
		super.update(e);
		FlxG.overlap(this, Global.colliders, null, bump);
	}
	private function processInput():Void
	{
		if(controller == null) return;
		var inputBuffer = controller.getBuffer();
		for(i in 0...inputBuffer.length)
		{
			runInput(inputBuffer[i]);
		}
		concludeInput();
	}
	private function concludeInput():Void
	{
		animatedThisFrame = false;
	}
	//simply builds all the part ids via the PartFactory and then attempts to equip them, will return true if successful 
	//(if this is false, then valid() would have returned false for the build).
	public function buildFromParts(_head:String, _core:String, _arms:String, _legs:String, _thruster:String, ?_equip1:Null<String>, ?_equip2:Null<String>):Bool
	{
		FlxG.log.advanced("Building from parts...", Global.logStyle);
		var returnBool:Bool = true;
		returnBool = (returnBool && buildPart(EquipType.Head, _head));
		returnBool = (returnBool && buildPart(EquipType.Core, _core));
		returnBool = (returnBool && buildPart(EquipType.Arms, _arms));
		returnBool = (returnBool && buildPart(EquipType.Legs, _legs));
		returnBool = (returnBool && buildPart(EquipType.Thruster, _thruster));
		if(_equip1 != null)
		{
			returnBool = (returnBool && buildPart(EquipType.Equipment1, _equip1));
		}
		if(_equip2 != null)
		{
			returnBool = (returnBool && buildPart(EquipType.Equipment2, _equip2));
		}
		drag.x = drag.y = Math.min(Math.max(legs.brakingForce - getLoad(), 25), legs.topSpeed/2);
		rearrangeChildren();
		return returnBool;
	}
	/*private function removeAll():Void
	{
		for(i in this)
		{
			remove(i);
		}
	}*/
	private function rearrangeChildren():Void
	{
		removeAll();

		add(legs);
		add(thruster);
		
		add(arms);
		add(core);
		if(equip1 != null)
		{
			add(equip1);
		}
		if(equip2 != null)
		{
			add(equip2);
		}
		add(head);
	}
	private function buildPart(etype:EquipType, part:String):Bool
	{
		
		
		var partObj:Part = PartFactory.buildPart(part);
		
		return ((partObj != null) ? equip(etype, partObj) : false);
	}
	public function enable():Void
	{
		enabled = true;
		loadGraphic(AssetPaths.blank__png, false, 32, 32);
	//	generateSprite();
	}
	public function disable():Void
	{
		enabled = false;
	}
	public function isEnabled():Bool
	{
		return enabled;
	}
	static public function makeToString(make:dat.Data.Part_make):String
	{
		switch(make)
		{
			case dat.Data.Part_make.HYSPD:
				return "HYSPD";
			default:
				return "HYSPD";
		}
	}
	private function equip(etype:EquipType, part:Null<Dynamic>):Bool
	{
		if(part == null) return false;
		FlxG.log.advanced("Equipping " + cast(part, Part).desc, Global.logStyle);
		switch(etype)
		{
			case EquipType.Head:
			{
				if(head != null) remove(head);
				head = part;
			}
			case EquipType.Core:
			{
				if(core != null) remove(core);
				core = part;
			}
			case EquipType.Arms:
			{
				if(arms != null) remove(arms);
				arms = part;
			}
			case EquipType.Legs:
			{
				if(legs != null) remove(legs);
				legs = part;
			}
			case EquipType.Thruster:
			{
				if(thruster != null) remove(thruster);
				thruster = part;	
			}
			case EquipType.Equipment1:
			{
				if(equip1 != null) remove(equip1);
				equip1 = part;
				equip1.setOffset(8,0);
				equip1.setup(this);
			}
			case EquipType.Equipment2:
			{
				if(equip2 != null) remove(equip2);
				equip2 = part;
				equip2.setOffset(24,0);
				equip2.flipX = true;
				equip2.setup(this);
			}
			default:
				return false;
		}
		add(part);
		return true;
	}
}

enum EquipType{
	Head;
	Core;
	Arms;
	Legs;
	Thruster;
	Equipment1;
	Equipment2;
}