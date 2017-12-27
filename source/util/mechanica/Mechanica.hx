/*TODO 12/19/2017:

-Define Mechanica class

pseudocode below:*/
package util.mechanica;

import flixel.addons.display.FlxNestedSprite;
import util.mechanica.Part;
import util.PartFactory;
import util.control.Controller;
import util.mechanica.MechanicaH;
import flixel.math.FlxMath;
import flixel.FlxG;
import flixel.math.FlxPoint;
import math.MoreMath;

class Mechanica extends FlxNestedSprite
{
	public var name = "Blank Schematic";
	
	public var head:HeadUnit;
	public var core:CoreUnit;
	public var arms:ArmUnits;
	public var legs:LegUnits;
	public var thruster:ThrusterUnit;
	public var controller:Controller;
	public var equip1:EquipmentUnit;
	
	public var equip2:EquipmentUnit;
	
	
	private var enabled = false; 		//can this mechanica receive and process input?
	private var speed:Float;
	private var locomotionStatus:LocomotionStatus;		

	override public function new(?X:Float, ?Y:Float)//, ?Head:Null<HeadUnit>, ?Core:Null<CoreUnit>, ?Arms:Null<ArmUnits>, ?Legs:Null<LegUnits>, ?Thruster:Null<ThrusterUnit>, ?Equip1:Null<EquipmentUnit>, ?Equip2:Null<EquipmentUnit>)
	{
		super(X, Y);
		
		
	}
	public function getWeight():Float{
		return head.weight + core.weight + arms.weight + legs.weight + thruster.weight + ((equip1 != null) ? equip1.weight : 0) + ((equip2 != null) ? equip2.weight : 0);
	}
	public function getLoad():Float
	{
		return getWeight() - legs.weight;
	}
	public function valid():Bool
	{
		return (head != null && core != null && arms != null && legs != null && thruster != null);
	}
	private function runInput(paramsXml:Xml):Void
	{
		if(!enabled) return;
	
		switch(paramsXml.get("action"))
			{
				case "locomote":
					{
						//do walking stuff
						var direction = Std.parseInt(paramsXml.get("direction"));
						var performanceRedux = (
									(( getLoad() - (legs.performanceWeightCapacity * legs.weightCapacity) )
									/
									( legs.weightCapacity - (legs.weightCapacity * legs.performanceWeightCapacity ))
									));
						var limit = (performanceRedux > 0 ? (1-performanceRedux) * legs.topSpeed : legs.topSpeed);
						if(direction != 0)//if receiving movement input
						{
						//l	centerOrigin();
							var a = Math.cos(MoreMath.degToRad(angle+90));
							var b = Math.sin(MoreMath.degToRad(angle+90));
							var speedFactor = legs.topSpeed * legs._acceleration;
							speed += speedFactor;
							velocity.set(a*speed*direction, b*speed*direction);
							speed = Math.min(speed, limit);
							
							
							locomotionStatus = Walking;
						}
						else //initiate braking
						{
							speed = Math.max(speed-2, 0);
							locomotionStatus = Braking;
						}
						if(legs.animated && locomotionStatus != ThrusterEngaged && MoreMath.magnitude(velocity) >= 10)//if the mech hasn't come to a complete stop
							{
								legs.animation.getByName("locomote").frameRate = Std.int(Math.max(speed/limit * legs.frameRate, 2));
								legs.animation.play("locomote");
							}
						else //if the mech has come to a complete stop
						{
							locomotionStatus = Standing;
							if(legs.animated && legs.animation.curAnim != null && (legs.animation.curAnim.curFrame == 0 || legs.animation.curAnim.curFrame == 4))
							{
								legs.animation.finish();
							}
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
				case "thruster":
				{
					//do thruster stuff
				}
				case "equip1":
				{
					//do equipment 1 stuff
				}
				case "equip2":
				{

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
	}
	private function processInput():Void
	{
		var inputBuffer = controller.getBuffer();
		for(i in 0...inputBuffer.length)
		{
			runInput(inputBuffer[i]);
		}
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
		drag.x = drag.y = Math.max(legs.brakingForce - getLoad(), 25);
		rearrangeChildren();
		return returnBool;
	}
	private function rearrangeChildren():Void
	{
		removeAll();
		add(thruster);
		add(legs);
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
			}
			case EquipType.Equipment2:
			{
				if(equip2 != null) remove(equip2);
				equip2 = part;
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