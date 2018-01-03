package util.mechanica;

import flixel.addons.display.FlxNestedSprite;
import flixel.FlxObject;
//import flixel.group.FlxSpriteGroup;
import flixel.addons.weapon.FlxWeapon;
import flixel.util.helpers.FlxBounds;
import flixel.math.FlxPoint;
import flixel.addons.weapon.FlxBullet;
import util.mechanica.Mechanica;
import flixel.FlxG;
import util.mechanica.MechBullet;
interface IPart {
    public var number:String; //Part number
    public var desc:String; //description
    public var type:String;
    public function fabricateInfo(_number:String, _desc:String):Void;
}

class Part extends FlxNestedSprite implements IPart
{
    public var parent:Mechanica;

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
    override public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        allowCollisions = FlxObject.NONE;   
    }
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
    override public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="head";
    }    

}
class CoreUnit extends Part
{
    public var coolingRate:Float; //how fast heat dissipates
    public var regenRate:Float; //how fast EN regenerates
    override public function new(?X:Float, ?Y:Float)
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
    override public function new(?X:Float, ?Y:Float)
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

    override public function new(?X:Float, ?Y:Float)
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
    public var flareSprite:FlxNestedSprite;
    private var canFire = true;
    override public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="thruster";
    }
    public function ready():Bool
    {
        return canFire;
    }
    public function fire()
    {
        canFire = false;

    }

}
class EquipmentUnit extends Part
{
    public var twoHanded = false;
    override public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        type="equip";
    }
    public function setup(mechanica:Mechanica):Void
    {

    }
    public function fire(p):Void
    {

    }
}
class FirearmUnit extends EquipmentUnit
{
    public var recoil = 0.0;
    public var firingRate = 0.5;
    public var bulletLifespan = 5.0;
    public var bulletSpeed:Float;
    private var weapon:FlxWeapon; //this will handle firing for the gun
    public var bulletType:String;
    private var firingWait = 0.0;
    private var bOffset:FlxPoint;
    override public function new(?X:Float, ?Y:Float)
    {
        super(X, Y);
        bOffset = new FlxPoint(0,0);
        
    }
    public function setOffset(x, y):Void
    {
        bOffset.x = x;
        bOffset.y = y;
    }
    override public function setup(mechanica:Mechanica):Void
    {
        weapon = new FlxWeapon(
            desc, 
            makeBullet, 
            PARENT(this, new FlxBounds<FlxPoint>(new FlxPoint(bOffset.x, bOffset.y), new FlxPoint(bOffset.x, bOffset.y)), true, 0), 
            SPEED(new FlxBounds<Float>(bulletSpeed-5, bulletSpeed+5)));
    }
  //  @:generic 
    private function makeBullet(weapon:FlxWeapon):FlxBullet
    {
        var bullet:FlxBullet = new ShellBullet(2, parent);//Type.ceateInstance(Type.resolveClass(bulletType), [bulletLifespan]);
        FlxG.state.add(bullet);
        return bullet;
    }
    override public function update(elapsed:Float):Void
    {
        super.update(elapsed);
        if(firingWait > 0) firingWait -= elapsed;
        else firingWait = 0;
    }
    public override function fire(angle:Float):Void
    {
        if(firingWait > 0) return;
        firingWait = firingRate;
        if(weapon.fireFromAngle(new FlxBounds<Float>(angle,angle)))
        {
            FlxG.log.advanced("Create a new bullet", Global.logStyle);
        }
        else
        {
            FlxG.log.advanced("Failed to create a new bullet", Global.logStyle);
        }

    }
}