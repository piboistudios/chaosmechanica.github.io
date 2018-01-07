
import flixel.addons.ui.FlxUIText;
import flixel.system.debug.log.LogStyle;
import flixel.tile.FlxTilemap;
import util.mechanica.MechGroup;
import flixel.group.FlxSpriteGroup;
import flixel.FlxSprite;
import flixel.FlxG;
import lib.hxudp.UdpSocket;

class Global
{
	static public var text:FlxUIText;
	static public var player:Player;
	static public var logStyle:LogStyle;
	static public var server = false;
	static public var speedScale:Float = 1;
	static public var colliders:FlxSpriteGroup;
	static public var map:FlxTilemap;
	static public var socket:UdpSocket;
	static public var mechGroupA:MechGroup;
	static public var mechGroupB:MechGroup;
	static public function add(v:FlxSprite):Void
	{
		FlxG.state.add(v);
		colliders.add(v);
	}
	static public function setup():Void
	{
		colliders = new FlxSpriteGroup();
		mechGroupA = new MechGroup();
		mechGroupB = new MechGroup();
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