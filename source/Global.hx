import dat.Data;
import flixel.addons.ui.FlxUIText;
import flixel.system.debug.log.LogStyle;

class Global
{
	static public var text:FlxUIText;
	static public var player:Player;
	static public var logStyle:LogStyle;
	
	static public function log(_text:String):Void
	{
		text.text = _text;
	}
	static public function setupDebugLogText(?initMessage:Bool=true):Void
    {  //setup the debug log text
        text = new FlxUIText();
        text.screenCenter();
		text.color = flixel.util.FlxColor.GREEN;
        text.y += 64;
        text.x -= 64;
        if(initMessage) log("Initialized");
    }
	@:generic
	static public function findInList<T>(item:T, list:Array<T>):Int
	{
		for(i in 0...list.length)
		{
			if(list[i] == item)
				return i; 
		}
		return -1;
	}
	static public function partExists(part:String):Bool
	{
		var partObj = Data.part.resolve(part);
		var partsList = Data.part.all.toArrayCopy();
		if(findInList(partObj, partsList) > -1)
		{
			return true;
		}
		return false;
	}
}

enum PartType
{
	Head;
	Core;
	Legs;
	Arms;
	Thruster;
	Equip;
	Software;
}