package util.interfaces;
import flixel.FlxSprite;

interface ICollider extends IFlxSprite
{
    public function collideWith(c:Dynamic):Void;
    public function postCollision():Void;
}