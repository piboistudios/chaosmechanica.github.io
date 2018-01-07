package states;


import flixel.addons.ui.FlxUIState;
import flixel.addons.ui.FlxUIDropDownMenu;
import flixel.addons.ui.StrNameLabel;
import flixel.addons.ui.FlxUIInputText;
import flixel.addons.ui.FlxUIColorSwatch;
import flixel.FlxG;
import states.DemoState;
import dat.Data;

//TODO: write a static function for Part which gets the part from a number
class BuildSchematicState extends FlxUIState
{

    private var input:FlxUIInputText;
    private var headDrop:FlxUIDropDownMenu;
    private var legsDrop:FlxUIDropDownMenu;
    private var canBuild = true;
    private var armsDrop:FlxUIDropDownMenu;
    private var coreDrop:FlxUIDropDownMenu;
    private var thrusterDrop:FlxUIDropDownMenu;
    private var equip1Drop:FlxUIDropDownMenu;
    private var equip2Drop:FlxUIDropDownMenu;
    private var slotDrop:FlxUIDropDownMenu;
    private var timer:haxe.Timer;
    private var lineTest:FlxUIColorSwatch;
	override public function create() 
    {
		_xml_id = "build_schematic";
		super.create();
        fetchDropDownMenus();
        setupDropDownMenus();
        setupInputField();
        
        reinsertUIElements();
        
    }
    private function setupInputField():Void
    {
        //setup the mechanica name input field
        input = new FlxUIInputText(0, 0, 200, "Schematic Name");
        input.screenCenter();
        input.y = headDrop.y - 32;
        input.x -= 16;
        slotDrop = new FlxUIDropDownMenu(input.x + input.width + 16, input.y, [
            new StrNameLabel("1","1"), new StrNameLabel("2","2"), new StrNameLabel("3","3")
            ], new FlxUIDropDownHeader(48));
    }
    /*/
        headDrop.setData(Global.player.getPartsOfType(dat.CatData_partType.head));
        legsDrop.setData(Global.player.getPartsOfType(dat.CatData_partType.legs));
        armsDrop.setData(Global.player.getPartsOfType(dat.CatData_partType.arms));
        coreDrop.setData(Global.player.getPartsOfType(dat.CatData_partType.core));  
        thrusterDrop.setData(Global.player.getPartsOfType(dat.CatData_partType.thruster));
        equip1Drop.setData(Global.player.getPartsOfType(dat.CatData_partType.equip));
        equip2Drop.setData(Global.player.getPartsOfType(dat.CatData_partType.equip));//*/
    //*/
    private function fetchDropDownMenus():Void
    {
           
        headDrop = cast(_ui.getAsset("headdrop"), FlxUIDropDownMenu);
        legsDrop = cast(_ui.getAsset("legsdrop"), FlxUIDropDownMenu); 
        armsDrop = cast(_ui.getAsset("armsdrop"), FlxUIDropDownMenu);
        coreDrop = cast(_ui.getAsset("coredrop"), FlxUIDropDownMenu);
        thrusterDrop = cast(_ui.getAsset("thrusterdrop"), FlxUIDropDownMenu);
        equip1Drop = cast(_ui.getAsset("equip1drop"), FlxUIDropDownMenu);
        equip2Drop = cast(_ui.getAsset("equip2drop"), FlxUIDropDownMenu);
    }
    private function setupDropDownMenus():Void
   {
        
        headDrop = new FlxUIDropDownMenu(headDrop.x, headDrop.y, Global.player.getPartsOfType(dat.CatData_partType.head), new FlxUIDropDownHeader(200));
        legsDrop = new FlxUIDropDownMenu(legsDrop.x, legsDrop.y, Global.player.getPartsOfType(dat.CatData_partType.legs), new FlxUIDropDownHeader(200));
        armsDrop = new FlxUIDropDownMenu(armsDrop.x, armsDrop.y, Global.player.getPartsOfType(dat.CatData_partType.arms), new FlxUIDropDownHeader(200));
        coreDrop = new FlxUIDropDownMenu(coreDrop.x, coreDrop.y, Global.player.getPartsOfType(dat.CatData_partType.core), new FlxUIDropDownHeader(200));
        thrusterDrop = new FlxUIDropDownMenu(thrusterDrop.x, thrusterDrop.y, Global.player.getPartsOfType(dat.CatData_partType.thruster), new FlxUIDropDownHeader(200));
        equip1Drop = new FlxUIDropDownMenu(equip1Drop.x, equip1Drop.y, Global.player.getPartsOfType(dat.CatData_partType.equip), new FlxUIDropDownHeader(200));
        equip2Drop = new FlxUIDropDownMenu(equip2Drop.x, equip2Drop.y, Global.player.getPartsOfType(dat.CatData_partType.equip), new FlxUIDropDownHeader(200));
    //*/}
   }
    
    
    private function reinsertUIElements():Void
    
     {   //remove and reinsert ui elements to ensure proper layering
        remove(equip2Drop);
        remove(headDrop);
        remove(legsDrop);
        remove(armsDrop);
        remove(coreDrop);
        remove(equip1Drop);
        remove(thrusterDrop);
        add(equip2Drop);
        add(equip1Drop);
        add(thrusterDrop);
        add(armsDrop);
        add(legsDrop);
        add(coreDrop);
        add(headDrop);
        add(slotDrop);
        add(input);
     
    
    }

	public override function update(elapsed:Float):Void
    {
        super.update(elapsed);
    }
	public override function getRequest(id:String, target:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Dynamic
	{
		return null;
	}	
	private function backToMain(){
        FlxG.switchState(new MainMenuState());
    }
    private function startDemo()
    {
        FlxG.switchState(new DemoState());
    }
	public override function getEvent(id:String, target:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Void
	{
		if (params != null)
		{
			switch (id)
			{
				case "click_button":
					//do button thangz
                    switch(Std.string(params[0]))
                    {
                        case "build":
                            {
                                if(!canBuild) return;
                                canBuild = false;
                                FlxG.log.advanced("Building mech...", Global.logStyle);
                                var playerMech = Global.player.getMechanica();
                                Global.player.setMechanica(Std.parseInt(slotDrop.selectedId));
                                if(playerMech.buildFromParts(
                                    headDrop.selectedId, coreDrop.selectedId, armsDrop.selectedId, legsDrop.selectedId, 
                                    thrusterDrop.selectedId, equip1Drop.selectedId, equip2Drop.selectedId
                                )) //if the build succeeded
                                {
                                    FlxG.log.advanced("Build succeeded", Global.logStyle);
                                    playerMech.name = input.text;
                                    playerMech.enable();
                                    playerMech.controller = (!Global.server ? Global.player.controller : new util.control.TestNetworkController());
                                    haxe.Timer.delay(startDemo, 10);
                                   
                                }
                                else
                                {
                                    FlxG.log.advanced("Build failed", Global.logStyle);
                                    
                                }
                            }
                        case "back":
                            {
                                FlxG.switchState(new MainMenuState());
                            }
                    }
				case "click_dropdown":

					
			}
		}
	}
}