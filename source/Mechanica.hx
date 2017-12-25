/*TODO 12/19/2017:

-Define Mechanica class

pseudocode below:*/

import flixel.group.FlxSpriteGroup;
import dat.Data;
import openfl.Assets;
import flixel.graphics.FlxGraphic;

import Part;

class Mechanica extends FlxSpriteGroup
{
	public var name = "Blank Schematic";
	public var head:HeadUnit;
	public var core:CoreUnit;
	public var arms:ArmUnits;
	public var legs:LegUnits;
	public var thruster:ThrusterUnit;
	public var equip1:EquipmentUnit;
	public var equip2:EquipmentUnit;
		

	override public function new(?X:Float, ?Y:Float)//, ?Head:Null<HeadUnit>, ?Core:Null<CoreUnit>, ?Arms:Null<ArmUnits>, ?Legs:Null<LegUnits>, ?Thruster:Null<ThrusterUnit>, ?Equip1:Null<EquipmentUnit>, ?Equip2:Null<EquipmentUnit>)
	{
		super(X, Y);
		
	}
	public function buildFromParts(_head:String, _core:String, _arms:String, _legs:String, _thruster:String, ?_equip1:Null<String>, ?_equip2:Null<String>):Bool
	{
		Global.log("Building from parts...");
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
		return returnBool;
	}
	public function buildPart(etype:EquipType, part:String):Bool
	{
		if(!Global.partExists(part))
		{
			Global.log(part + " doesn't exist!");

			return false;
		}
		var partDat = Data.part.resolve(part);
		var partObj:Part;
		
		Global.log("Fetching categorical part data...");
		switch(etype)
		{
			case EquipType.Head:
			{
				Global.log("Building head: " + part);
				partObj = new HeadUnit();
				var catPartObj = cast(partObj, HeadUnit);
				var catPartData = partDat.categoricalData.headDataObj;
				catPartObj.lockSpeed = catPartData.lockSpeed;
				catPartObj.scanRange = catPartData.scanRange;
			}
			case EquipType.Core:
			{
				Global.log("Building core: " + part);
				partObj = new CoreUnit();
				var catPartObj = cast(partObj, CoreUnit);
				var catPartData = partDat.categoricalData.coreDataObj;
				catPartObj.coolingRate = catPartData.coolingRate;
				catPartObj.regenRate = catPartData.regenRate;
				
			}
			case EquipType.Arms:
			{
				Global.log("Building arms: " + part);
				partObj = new ArmUnits();
				var catPartObj = cast(partObj, CarrierUnit);
				var catPartData = partDat.categoricalData.carrierDataObj;
				catPartObj.stability = catPartData.stability;
				catPartObj.weightCapacity = catPartData.weightCapacity;


			}
			case EquipType.Legs:
			{
				Global.log("Building legs: " + part);
				partObj = new LegUnits();
				var catPartObj = cast(partObj, LegUnits);
				var catPartData = partDat.categoricalData.carrierDataObj;
				catPartObj.stability = catPartData.stability;
				catPartObj.weightCapacity = catPartData.weightCapacity;
				catPartObj.topSpeed = catPartData.legRef.topSpeed;
				catPartObj._acceleration = catPartData.legRef.acceleration;
			}
			case EquipType.Thruster:
			{
				Global.log("Building thruster: " + part);
				partObj = new ThrusterUnit();	
				var catPartObj = cast(partObj, ThrusterUnit);
				var catPartData = partDat.categoricalData.thrusterDataObj;
				catPartObj.topSpeed = catPartData.topSpeed;
				catPartObj._acceleration = catPartData.acceleration;
				catPartObj.driveEnUsage = catPartData.driveEnUsage;
				catPartObj.ignitionEnUsage = catPartData.ignitionEnUsage;

			}
			case EquipType.Equipment1, EquipType.Equipment2:
			{
				Global.log("Building equipment: " + part);
				partObj = new EquipmentUnit();
				var catPartObj = cast(partObj, EquipmentUnit);
				var catPartData = partDat.categoricalData.equipDataObj;
				catPartObj.twoHanded = catPartData.twoHanded;

			}
			default:
				return false;
		}
		Global.log("Fetching common part data...");
		partObj.weight = partDat.weight;
		Global.log("Reading make...");
		partObj.make = makeToString(partDat.make);
		Global.log("Reading desc...");
		partObj.desc = partDat.desc;
		Global.log("Reading number...");
		partObj.number = partDat.number;
		Global.log("Reading enUsage...");
		partObj.enUsage = partDat.enUsage;
		Global.log("Reading tempCutoff...");
		partObj.tempCutoff = partDat.tempCutoff;
		Global.log("Reading armorRating...");
		partObj.armorRating = partDat.armorRating;
		if(partDat.imageFile != "")
		{
			partObj.imageFile = "assets/images/" + partDat.imageFile;
			partObj.loadGraphic(partObj.imageFile);
		}

		return equip(etype, partObj);
	}
	private function makeToString(make:dat.Data.Part_make):String
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
		Global.log("Equipping " + cast(part, Part).desc);
		switch(etype)
		{
			case EquipType.Head:
			{
				if(head != null)
					remove(head);
				head = part;
			}
			case EquipType.Core:
			{
				if(core != null)
					remove(core);
				core = part;
			}
			case EquipType.Arms:
			{
				if(arms != null)
					remove(arms);
				arms = part;
			}
			case EquipType.Legs:
			{
				if(legs != null)
					remove(legs);
				legs = part;
			}
			case EquipType.Thruster:
			{
				if(thruster != null)
					remove(thruster);
				thruster = part;	
			}
			case EquipType.Equipment1:
			{
				if(equip1 != null)
					remove(equip1);
				equip1 = part;
			}
			case EquipType.Equipment2:
			{
				if(equip2 != null)
					remove(equip2 );
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