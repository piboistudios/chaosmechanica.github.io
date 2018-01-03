package util.mechanica;
import flixel.group.FlxSpriteGroup;
import flixel.FlxSprite;
class MechGroup extends FlxSpriteGroup
{
    public var name:String;
    public override function add(v:FlxSprite):FlxSprite
    {
        if(Std.is(v, Mechanica))
        {
            super.add(v);
            cast(v, Mechanica).team = this;
            return v;
        }
        return null;
    }
}