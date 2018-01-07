package states;

import states.BuildSchematicState;
import flixel.addons.ui.FlxUIState;
import flixel.FlxG;
import dat.Data;
import openfl.Assets;
import flixel.system.debug.log.LogStyle;
import flixel.system.debug.FlxDebugger;

class MainMenuState extends FlxUIState
{
	static var dataLoaded = false;
    override public function create() 
	{
		_xml_id = "main_menu";
		super.create();

		FlxG.autoPause = false;
		//code adapted from: https://translate.google.com/translate?hl=en&sl=ja&u=http://haxeflixel.2dgames.jp/index.php%3FCastleDB%252FHaxe&prev=search
		if(!dataLoaded)
		{
        	var content:String = openfl.Assets.getText ( "source/dat/parts.cdb" ) ;
       	  // Load execution
        	Data.load( content ) ;
			Global.player = new Player();
			Global.logStyle = new LogStyle("[NOTICE]", "00FF40");

			dataLoaded = true;
			setupDebugger();
	//		#if debug
			FlxG.log.advanced("Attempting to create UDP socket", Global.logStyle);
			
			try
			{
				Global.socket = new lib.hxudp.UdpSocket();
				Global.socket.create();
			}
			catch(E:Dynamic){
				FlxG.log.advanced("Socket creation failed! Unknown exception!");
				return;
			}
			FlxG.log.advanced("Socket created successfully!");
		}
		
		
	}
	private function setupDebugger():Void
    {
        //FlxG.debugger.drawDebug=true;
        
        FlxG.debugger.visible = true;
        FlxG.debugger.setLayout(FlxDebuggerLayout.MICRO);
        
    }
	public override function getEvent(id:String, target:Dynamic, data:Dynamic, ?params:Array<Dynamic>):Void
	{
		if (params != null)
		{
			switch (id)
			{
				case "click_button":
					switch(Std.string(params[0]))
					{
						case "build_schematic":
							FlxG.switchState(new BuildSchematicState());
						case "server":
							Global.socket.bindMcast("127.0.0.1",1026);
							Global.socket.connectMcast("127.0.0.1", 1026);
							Global.server = true;
						case "client":
							Global.socket.bindMcast("127.0.0.1",1026);
							Global.socket.connectMcast("127.0.0.1", 1026);

					}
					
			}
		}
	}

}