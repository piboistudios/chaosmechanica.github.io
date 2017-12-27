package;

import flixel.FlxGame;
import states.MainMenuState;
import openfl.display.Sprite;


class Main extends Sprite
{
	public function new()
	{
		super();
		
		addChild(new FlxGame(640, 480, MainMenuState));
	}
}
