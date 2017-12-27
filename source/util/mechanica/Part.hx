package util.mechanica;

import flixel.addons.display.FlxNestedSprite;

interface IPart {
    public var number:String; //Part number
    public var desc:String; //description
    public var type:String;
    public function fabricateInfo(_number:String, _desc:String):Void;
}

class Part extends FlxNestedSprite implements IPart
{
    public var weight:Float = 0;
    public var desc:String = "No notes";
    //Part numbers are used to both describe and identify parts. 
    public var temp:Float = 0; //current temperature of part
    public var type:String;
    public var tempCutoff:Float = 0;//the highest tolerated operating temperature for the part
    public var number:String = "N/A"; //Part number

    
    public var make:String = "Universal"; //Manufacturer
    public var MSRP:Int = 50; //price of the part (Manufacturer Suggested Retail Price)
    public var imageFile:String;
    public var armorRating:Float = 0;
    public var enUsage:Float = 0; //How much EN is consumed maintaining operation for the part
    public var functional:Bool = true; //is the part currently ready for use
    public function fabricateInfo(_number:String, _desc:String):Void
    {
        number = _number;
        desc=_desc;
    }
}

class HeadUnit extends Part
{

    public var scanRange:Float;
    public var lockSpeed:Float;
    //public var lockingFunct; //this variable will be a function which handles locking on to targets
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="head";
    }    

}
class CoreUnit extends Part
{
    public var coolingRate:Float; //how fast heat dissipates
    public var regenRate:Float; //how fast EN regenerates
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="core";
    }
}
class CarrierUnit extends Part{
    public var stability:Float; //used differently across carrier units
    public var weightCapacity:Float; 
    public var performanceWeightCapacity:Float; //value from 0 to 1 representing the percentage of the max weight capacity at which performance begins to suffer
}
class ArmUnits extends CarrierUnit
{
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="arms";
    }
}
class LegUnits extends CarrierUnit
{
    public var topSpeed:Float;
    public var _acceleration:Float;
    public var turningSpeed:Float;
    public var brakingForce:Float;
    public var frameRate = 8;
    public var animated = true;
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="legs";
    }
}

class ThrusterUnit extends Part
{
    public var ignitionEnUsage:Float;
    public var driveEnUsage:Float;
    public var topSpeed:Float;
    public var _acceleration:Float;
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="thruster";
    }

}
class EquipmentUnit extends Part
{
    public var twoHanded = false;
    public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="equip";
    }
}
class FirearmUnit extends EquipmentUnit
{
    public var recoil = 0.0;
    public var firingRate = 0.5;
  //  private var weapon:FlxWeapon; //this will handle firing for the gun
}