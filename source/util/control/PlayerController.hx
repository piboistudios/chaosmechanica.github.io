package util.control;
import util.control.Controller;
import flixel.FlxG;


class PlayerController extends Controller
{   
    private var downInput = false;
    private var upInput = false;
    private var leftInput = false;
    private var rightInput = false;

    override public function populateBuffer():Void
    {
        super.populateBuffer();

        //Driving and steering:
           upInput = FlxG.keys.anyPressed([UP, W]);
         downInput = FlxG.keys.anyPressed([DOWN, S]);
         leftInput = FlxG.keys.anyPressed([LEFT, A]);
        rightInput = FlxG.keys.anyPressed([RIGHT, D]);
        
         if (upInput && downInput)
            upInput = downInput = false;
        if (leftInput && rightInput)
            leftInput = rightInput = false;
         if (upInput || downInput || leftInput || rightInput)
         {
            if(upInput) bufferAction("locomote","direction","-1");
            else if(downInput) bufferAction("locomote","direction","1");
            
            if(leftInput) bufferAction("steer","direction","-1");
            else if(rightInput) bufferAction("steer","direction","1");
           

         }
         else
         {
            bufferAction("locomote","direction","0");
            bufferAction("steer","direction","0");
         }
    }
}