package;

import flixel.FlxState;
import flixel.addons.ui.FlxUIButton;
import flixel.group.FlxGroup;
import flixel.FlxSprite;
import flixel.FlxBasic;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.util.FlxColor;
import flixel.FlxG;
import flixel.math.FlxMath;
import UIBox;
import Part;
//import Global.*;

class Menu extends FlxState
{
    private var mainBackground:UIBox;
    private var extentX = {low:0, high: 0};
    private var extentY = {low:0, high: 0};
    override public function new(){
        super();
        mainBackground = new UIBox(0, 0, 0, 0, 0, 0, 0, 0, FlxColor.WHITE);
    
    }
    override public function add(obj:FlxBasic):FlxBasic
    {
        if(Std.is(obj, IFlxUIWidget) && obj != mainBackground)
        {
            var spriteObj:IFlxUIWidget = cast(obj, IFlxUIWidget);
            extentX.low = FlxMath.minInt(extentX.low, cast(spriteObj.x, Int));
            extentX.high = FlxMath.maxInt(extentX.high, cast(spriteObj.x + spriteObj.width, Int));
            extentY.low = FlxMath.minInt(extentY.low, cast(spriteObj.y, Int));
            extentY.high = FlxMath.maxInt(extentY.high, cast(spriteObj.y + spriteObj.height,Int));
            var color:FlxColor = FlxColor.WHITE;
            spriteObj.velocity.x = 1;
            var members:Array<IFlxUIWidget> = mainBackground.copyMembers();
            color.red = 12;
            color.blue = 28;
            color.green = 8;
            mainBackground = new UIBox(extentX.low, extentY.low,extentX.high - extentX.low, extentY.high - extentY.low, 4, 1, 24, 32, color);
            mainBackground.concatMembers(members);/*  */
            mainBackground.screenCenter();
            
            return super.add(obj);
        }
        else{
            return super.add(obj);
        }
    }
}

class MainMenuState extends Menu
{
    
    private var createMechButton:FlxUIButton;
    private var loadMechButton:FlxUIButton;
    private var exitButton:FlxUIButton;
    
    override public function create():Void
    {
        
        createMechButton = new FlxUIButton(0, 0, "Create Mech", createMech);
        loadMechButton = new FlxUIButton(0, 0, "Load Mech", loadMech);
        exitButton = new FlxUIButton(0, 0, "Exit", exitGame);
        createMechButton.screenCenter();
        loadMechButton.screenCenter();
        exitButton.screenCenter();
        loadMechButton.y = createMechButton.y + createMechButton.height;
        exitButton.y = loadMechButton.y + loadMechButton.height;
        add(mainBackground);
        add(createMechButton);
        add(loadMechButton);
        add(exitButton);
        
        super.create();

    }

    private function createMech():Void
    {
        //Bring player to MechCreationScreen
        FlxG.switchState(new MechCreationMenu());

    }
    private function loadMech():Void
    {
         //Bring player to Mech Slots Screen


    }
    private function exitGame():Void
    {
    }
    
}

class MechCreationMenu extends Menu
{
    //Buttons for assigning a head, core, arms, legs, firearms, and thrusters
    private var headSelect:FlxUIButton;
    private var coreSelect:FlxUIButton;
    private var armsSelect:FlxUIButton;
    private var legsSelect:FlxUIButton;
    private var firearm1Select:FlxUIButton;
    private var firearm2Select:FlxUIButton;
    private var thrusterSelect:FlxUIButton;

    private var headMenu:EquipmentMenu;
    private var coreMenu:EquipmentMenu;
    private var armsMenu:EquipmentMenu;
    private var legsMenu:EquipmentMenu;
    private var equipsMenu:EquipmentMenu;
    private var thrusterMenu:EquipmentMenu;

    override public function create():Void
    {
        super.create();
        headSelect = new FlxUIButton(0, 0, "Head", selectHead);
        coreSelect = new FlxUIButton(0, 0, "Core", selectCore);
        armsSelect = new FlxUIButton(0, 0, "Arms", selectArms);
        legsSelect = new FlxUIButton(0, 0, "Legs",selectLegs);
        firearm1Select = new FlxUIButton(0, 0, "Weapon 1", selectFirearm1);
        firearm2Select = new FlxUIButton(0, 0, "Weapon 2", selectFirearm2);
        thrusterSelect = new FlxUIButton(0, 0, "Thrusters", selectThrusters);
        var buttons:Array<FlxUIButton> = [headSelect, coreSelect, armsSelect, legsSelect, firearm1Select, firearm2Select, thrusterSelect];
        var counter:Int = 0;
        for(i in buttons){
        
            i.y += counter++ * i.height;
            i.screenCenter();
            add(i);
        }
        
        //setup heads
        headMenu = new EquipmentMenu();
        var headUnit:HeadUnit = new HeadUnit();
        headUnit.lockSpeed = 5;
        headUnit.scanRange = 1600;
        headMenu.addEquipment(headUnit);

        
    }
        

    
    private function selectHead():Void
    {

    }
    private function selectCore():Void
    {
        
    }
    private function selectArms():Void
    {
        
    }
    private function selectLegs():Void
    {
        
    }
    private function selectFirearm1():Void
    {
        
    }
    private function selectFirearm2():Void
    {
        
    }
    private function selectThrusters():Void
    {
        
    }
    
}

class EquipmentMenu extends Menu
{
    private var equipmentType:Type;
    private var equips:FlxGroup;
    private var backButton:FlxUIButton;

    override public function create()
    {
        super.create();
        

        
    }
    public function populateOptions():Void
    {
        
    }
    public function addEquipment(e):Void
    {
       // if(Type.getClass(e) != Part && Type.getC return;
        equips.add(e);
    }

}   
