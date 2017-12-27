package states;

import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.FlxObject;
import flixel.math.FlxRect;
import flixel.FlxG;
import flixel.system.debug.FlxDebugger;
import flixel.system.debug.watch.Tracker;
import math.MoreMath;
import util.mechanica.Mechanica;
import flixel.tile.FlxTilemap;
import flixel.math.FlxPoint;
import flixel.addons.display.FlxZoomCamera;
import flixel.math.FlxMath;

class DemoState extends FlxState
{
    private var mapData:FlxOgmoLoader;
    private var map:FlxTilemap;

    override public function create()
    {
        super.create();
        FlxG.worldBounds.set(720,720);
        mapData = new FlxOgmoLoader(AssetPaths.TestZone__oel); //generate map data from demozone map
        map = mapData.loadTilemap(AssetPaths.demozone__png, 32, 32, "environment"); //load map data to a tilemap
        //map.follow();//lock camera to map edges
        map.setTileProperties(1, FlxObject.NONE);
        map.setTileProperties(2, FlxObject.ANY);
        add(map);
        add(Global.player.getMechanica());
        mapData.loadEntities(placeEntities, "entities");
        FlxG.cameras.remove(FlxG.camera);
        FlxG.camera = FlxG.cameras.add(new FlxZoomCamera(0,0,640, 480, 1));

        FlxG.camera.follow(Global.player.getMechanica().core);
        FlxG.debugger.addTrackerProfile(new TrackerProfile(Mechanica, ["speed","velocity","drag"]));
        FlxG.debugger.track(Global.player.getMechanica());
        
        
       
    }
    
    override public function update(elapsed:Float):Void
    {
        fixJitter();
        super.update(elapsed);
        var mechanica = Global.player.getMechanica();
        FlxG.camera.angle = MoreMath.lerpAngle(FlxG.camera.angle, mechanica.angle * -1, elapsed * 5);
      //  FlxG.camera.angle = MoreMath.wrapAngle(FlxG.camera.angle);
        //FlxG.camera.setPosition(mechanica.x,mechanica.y);//FlxPoint.weak(mechanica.x, mechanica.y));
        FlxG.collide(mechanica, map);
    
        
       // FlxG.camera.angle = -Global.player.getMechanica().angle;
    }
    private function fixJitter():Void
    {
        FlxG.updateFramerate = FlxG.drawFramerate;
    }
    private function placeEntities(entName:String, entDat:Xml):Void
    {
        var x:Int = Std.parseInt(entDat.get("x"));
        var y:Int = Std.parseInt(entDat.get("x"));
        if(entName == "player")
        {
            Global.player.getMechanica().x = x;
            Global.player.getMechanica().y = y;
        }
    }



}