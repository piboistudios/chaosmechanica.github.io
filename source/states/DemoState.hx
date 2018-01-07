package states;

import flixel.FlxState;
import flixel.addons.editors.ogmo.FlxOgmoLoader;
import flixel.FlxObject;
//import flixel.math.FlxRect;
import flixel.FlxG;
//import flixel.system.debug.FlxDebugger;
import flixel.system.debug.watch.Tracker;
import math.MoreMath;
import flixel.math.FlxMath;
import util.interfaces.ICollider;
import util.mechanica.Mechanica;
import flixel.tile.FlxTilemap;
import haxe.io.Bytes;
import haxe.io.BytesInput;
import util.control.Controller;
//import flixel.math.FlxPoint;
import flixel.addons.display.FlxZoomCamera;
//import flixel.math.FlxMath;

class DemoState extends FlxState
{
    private var mapData:FlxOgmoLoader;
    public var map:FlxTilemap;
    private var playerMech:Mechanica;
    private var testMech:Mechanica;
    private var testMech2:Mechanica;

    override public function create()
    {
        super.create();
        playerMech = Global.player.getMechanica();
        setupEnvironment();
        setupDebugger();

    }
    private function setupEnvironment():Void
    {
        Global.setup();
        
        FlxG.worldBounds.set(720,720);
        mapData = new FlxOgmoLoader(AssetPaths.TestZone__oel); //generate map data from demozone map
        map = mapData.loadTilemap(AssetPaths.demozone__png, 32, 32, "environment"); //load map data to a tilemap
        //map.follow();//lock camera to map edges
        map.setTileProperties(1, FlxObject.NONE);
        map.setTileProperties(2, FlxObject.ANY);
        Global.map = map;
        add(map);

        Global.add(playerMech);
        testMech = buildTestMech();
        testMech2 = buildTestMech();
        testMech.enable();
        testMech2.enable();
        Global.add(testMech);
        Global.add(testMech2);
        mapData.loadEntities(placeEntities, "entities");
        
        FlxG.cameras.remove(FlxG.camera);
        FlxG.camera = FlxG.cameras.add(new FlxZoomCamera(0,0,640, 480, 1.4));

        FlxG.camera.follow(playerMech.core);
        Global.mechGroupA.add(playerMech);
        Global.mechGroupA.add(testMech2);
        Global.mechGroupB.add(testMech);
    }
    private function buildTestMech():Mechanica
    {
        var mech = new Mechanica();
        mech.buildFromParts("standardBrainCase", "standardKernel", "standardCarrier","standardLocomote","standardThruster","standardPistol","standardPistol");
        return mech;

    }
    private function setupDebugger():Void

    {
        FlxG.debugger.addTrackerProfile(new TrackerProfile(Mechanica, ["speed","velocity","drag", "locomotionStatus"]));
        
        FlxG.debugger.track(playerMech);
        //setup commands
        FlxG.console.registerClass(Global);
        FlxG.console.registerObject("socket", Global.socket);
        registerMechanicaParts();
        
    }
    private function registerMechanicaParts():Void
    {
            FlxG.console.registerObject("head", playerMech.head);
            FlxG.console.registerObject("core", playerMech.core);
            FlxG.console.registerObject("arms", playerMech.arms);
            FlxG.console.registerObject("legs", playerMech.legs);
            FlxG.console.registerObject("thruster", playerMech.thruster);
            //FlxG.console.registerObject("core", playerMech.core);
    }
    override public function update(elapsed:Float):Void
    {
     //-   fixJitter();
        super.update(elapsed);
        var mechanica = playerMech;
        FlxG.camera.angle = MoreMath.lerpAngle(FlxG.camera.angle, mechanica.angle * -1, elapsed * 5);
      //  FlxG.camera.angle = MoreMath.wrapAngle(FlxG.camera.angle);
        //FlxG.camera.setPosition(mechanica.x,mechanica.y);//FlxPoint.weak(mechanica.x, mechanica.y));
        FlxG.collide(Global.colliders, map);
        clientTest();
        serverTest();


        
    
        
       // FlxG.camera.angle = -playerMech.angle;
    }
    private function serverTest():Void
    {
        if(!Global.server)return;
        getAndDoData();
     //   sendOff();
    }
    private function getAndDoData():Void
    {
        var bytes = Bytes.alloc(80);
        var dataLen = Global.socket.receive(bytes);
        if(dataLen <= 4) return;
        var iStream = new BytesInput(bytes);
        var _data = Xml.parse(iStream.readString(dataLen)).firstElement();
        //FlxG.log.advanced(iStream.readString(dataLen), Global.logStyle);
        playerMech.x = Std.parseFloat(_data.get("x"));
        playerMech.y = Std.parseFloat(_data.get("y"));
        playerMech.angle = Std.parseFloat(_data.get("angle"));
    }
    private function clientTest():Void
        {
            if(Global.server)return;
            sendOff();
           // getAndDoData();
        }
    private function sendOff():Void
    {
        var message = "<netpos x=\"" + 
            Std.string(FlxMath.roundDecimal(playerMech.x,2)) + 
            "\" y=\"" + Std.string(FlxMath.roundDecimal(playerMech.y, 2)) + 
            "\" angle=\"" + Std.string(FlxMath.roundDecimal(playerMech.angle,2)) +
             "\" />";
            Global.socket.sendAll(Bytes.ofString(message));
    }
    private function collision(col1:Dynamic, col2:Dynamic):Void
    {
        var collider1:ICollider = null;
        var collider2:ICollider = null;
        FlxG.watch.addQuick("Collision", col1.toString() + ", " + col2.toString());
        if(Std.is(col1, ICollider))
        {
            collider1 = cast(col1, ICollider);
            collider1.collideWith(col2);

        }
        if(Std.is(col1, ICollider))
        {
            collider2 = cast(col1, ICollider);
            collider2.collideWith(col1);

        }
        if(collider1 != null) collider1.postCollision();
        if(collider2 != null) collider2.postCollision();
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
            playerMech.x = x;
            playerMech.y = y;
        }
        if(entName == "testMech")
        {
            testMech.x = x;
            testMech.y = y;
            testMech.controller = new Controller();
        }
        if(entName == "testMech2")
        
        {
            testMech2.x = x;
            testMech2.y = y;
            testMech2.controller = new Controller();
        }
    }



}