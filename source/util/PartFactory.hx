package util;
import dat.Data;
import util.mechanica.Part;
import util.mechanica.Mechanica;
import flixel.FlxG;
//static class used for building parts from the castle database

class PartFactory {
    static public function buildPart(part:String):Part
    {
        if(!Global.partExists(part))
		{
			FlxG.log.advanced(part + " doesn't exist!", Global.logStyle);

			return null;
		}
        var partDat = Data.part.resolve(part);
		var catData = partDat.categoricalData;
		var partObj:Part;
		FlxG.log.advanced("Fetching categorical part data...", Global.logStyle);
		
		switch(catData.partType)
		{
			case dat.Data.CatData_partType.head:
			{
				FlxG.log.advanced("Building head: " + part, Global.logStyle);
				partObj = new HeadUnit();
				var catPartObj = cast(partObj, HeadUnit);
				var catPartData = catData.headDataObj;
				catPartObj.lockSpeed = catPartData.lockSpeed;
				catPartObj.scanRange = catPartData.scanRange;
			}
			case dat.Data.CatData_partType.core:
			{
				FlxG.log.advanced("Building core: " + part, Global.logStyle);
				partObj = new CoreUnit();
				var catPartObj = cast(partObj, CoreUnit);
				var catPartData = catData.coreDataObj;
				catPartObj.coolingRate = catPartData.coolingRate;
				catPartObj.regenRate = catPartData.regenRate;
				
			}
			case dat.Data.CatData_partType.arms:
			{
				FlxG.log.advanced("Building arms: " + part, Global.logStyle);
				partObj = new ArmUnits();
				var catPartObj = cast(partObj, CarrierUnit);
				var catPartData = catData.carrierDataObj;
				catPartObj.stability = catPartData.stability;
				catPartObj.weightCapacity = catPartData.weightCapacity;
				catPartObj.performanceWeightCapacity = catPartData.performanceWeightCapacity;


			}
			case dat.Data.CatData_partType.legs:
			{
				FlxG.log.advanced("Building legs: " + part, Global.logStyle);
				partObj = new LegUnits();
				var catPartObj = cast(partObj, LegUnits);
				var catPartData = catData.carrierDataObj;
				catPartObj.stability = catPartData.stability;
				catPartObj.weightCapacity = catPartData.weightCapacity;
				catPartObj.topSpeed = catPartData.legRef.topSpeed;
				catPartObj._acceleration = catPartData.legRef.acceleration;
                catPartObj.turningSpeed = catPartData.legRef.turningSpeed;
				catPartObj.brakingForce = catPartData.legRef.brakingForce;
				catPartObj.frameRate = catPartData.legRef.frameRate;
				catPartObj.animated = catPartData.legRef.animated;
			}
			case dat.Data.CatData_partType.thruster:
			{
				FlxG.log.advanced("Building thruster: " + part, Global.logStyle);
				partObj = new ThrusterUnit();	
				var catPartObj = cast(partObj, ThrusterUnit);
				var catPartData = catData.thrusterDataObj;
				catPartObj.topSpeed = catPartData.topSpeed;
				catPartObj._acceleration = catPartData.acceleration;
				catPartObj.driveEnUsage = catPartData.driveEnUsage;
				catPartObj.ignitionEnUsage = catPartData.ignitionEnUsage;

			}
			case dat.Data.CatData_partType.equip:
			{
				FlxG.log.advanced("Building equipment: " + part, Global.logStyle);
				partObj = new EquipmentUnit();
				var catPartObj = cast(partObj, EquipmentUnit);
				var catPartData = catData.equipDataObj;
				catPartObj.twoHanded = catPartData.twoHanded;

			}
			default:
				return null;
		}
		FlxG.log.advanced("Fetching common part data...", Global.logStyle);
		partObj.weight = partDat.weight;
		FlxG.log.advanced("Reading make...", Global.logStyle);
		partObj.make = Mechanica.makeToString(partDat.make);
		FlxG.log.advanced("Reading desc...", Global.logStyle);
		partObj.desc = partDat.desc;
		FlxG.log.advanced("Reading number...", Global.logStyle);
		partObj.number = partDat.number;
		FlxG.log.advanced("Reading enUsage...", Global.logStyle);
		partObj.enUsage = partDat.enUsage;
		FlxG.log.advanced("Reading tempCutoff...", Global.logStyle);
		partObj.tempCutoff = partDat.tempCutoff;
		FlxG.log.advanced("Reading armorRating...", Global.logStyle);
		partObj.armorRating = partDat.armorRating;
		if(partDat.imageFile != "")
		{
			partObj.imageFile = "assets/images/" + partDat.imageFile;
			partObj.loadGraphic(partObj.imageFile, true, 32, 32);
			if(catData.partType == dat.Data.CatData_partType.legs && catData.carrierDataObj.legRef.animated)
			{
				partObj.animation.add("locomote", [2, 3, 4, 5, 6, 7, 0, 1, 2], cast(partObj, LegUnits).frameRate, false);

			}
		}
        return partObj;

    }

}
