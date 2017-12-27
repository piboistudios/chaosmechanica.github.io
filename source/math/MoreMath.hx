package math;
import flixel.math.FlxPoint;
import flixel.math.FlxMath;
class MoreMath
{
    static public function degToRad(v:Float):Float
    {
        return v * (3.141592653589793/180);
    }
    static public function lerpAngle(v1:Float, v2:Float, r:Float):Float
    {
        
        v1 = wrapAngle(v1);
        v2 = wrapAngle(v2);
        var deltaAngle = v1 - v2;

        if(Math.abs(deltaAngle) > 180)
        {
            if(v2 < 180) v2 += 360;
            else v2 -= 360;
        }
        
        v1 = FlxMath.lerp(v1, v2, r);
        return v1;
    }
    static public function wrapAngle(v:Float):Float
    {
        if(v > 360) return wrapAngle(v - 360);
        else if(v < 0) return wrapAngle(v + 360);
        else return v;
    }
    static public function clampMagnitude(v:FlxPoint, limit:Float):FlxPoint
    {
        var lengthSquared = magnitudeSquared(v);
        var returnPoint = FlxPoint.weak(0,0);
        if(lengthSquared > limit * limit && lengthSquared > 0)
        {
            var ratio = limit / Math.sqrt(lengthSquared);
            returnPoint.x = v.x * ratio;
            returnPoint.y = v.y * ratio;
        }
        else
        {
            returnPoint.x = v.x;
            returnPoint.y = v.y;
        }
        return returnPoint;
    }
    static public function magnitudeSquared(v:FlxPoint):Float
    {
        return v.x * v.x + v.y * v.y;
    }
    static public function magnitude(v:FlxPoint):Float
    {
        return Math.sqrt(magnitudeSquared(v));
    }
    /*template<typename T>
void Vec2<T>::limit( T maxLength ) 
{
    T lengthSquared = x*x + y*y;
    
   if( ( lengthSquared > maxLength * maxLength ) && ( lengthSquared > 0 ) ) {
        T ratio = maxLength / math<T>::sqrt( lengthSquared );
        x *= ratio;
        y *= ratio;
    }
}
*/
}