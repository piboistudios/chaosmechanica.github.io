package util.mechanica;
import flixel.addons.weapon.FlxBullet;
import flixel.FlxG;
import util.interfaces.ICollider;
import util.mechanica.Mechanica;
class MechBullet extends FlxBullet implements ICollider
{
    public var parent:Mechanica;
    override function new(lifespan:Float, parent:Mechanica)
    {
        this.parent = parent;
        super();
        
        Global.add(this);

        this.lifespan = lifespan;
    }
    override public function update(elapsed:Float):Void
    
    {
        super.update(elapsed);
        FlxG.collide(this, Global.map, collided);
        FlxG.overlap(this, Global.colliders, null, collided);
    }
    private function collided(c1:Dynamic, c2:Dynamic):Bool
    {
        if(Std.is(c2, Mechanica))
        {
            if(cast(c2, Mechanica).team == parent.team)
            {
                
                return false;
            }
            else
            {
                
                cast(c2, Mechanica).struckBy(this);
                
            }
        }
        if(Std.is(c2, MechBullet))
        {
            return false;
        }
        kill();
        return true;
        
    }
    public function collideWith(col:Dynamic):Void
    {
        
    }
    public function postCollision():Void
    {
        kill();
    }
}

class ShellBullet extends MechBullet
{
    override function new(lifespan:Float, parent:Mechanica)
    {
        super(lifespan, parent);
        FlxG.log.advanced("Create a new bullet", Global.logStyle);
        loadGraphic("assets/images/bullets/shell.png", false, 4, 4);
    }
}