package util.control;
import util.control.Controller;
import flixel.FlxG;
import flixel.ui.FlxVirtualPad;

class PlayerController extends Controller
{   
    private var downInput = false;
    private var upInput = false;
    private var leftInput = false;
    private var rightInput = false;
    private var boostInput = false;
    private var strafeInput = false;
    private var fire1Input = false;
    private var fire2Input = false;
    private var virtualPad:FlxVirtualPad;

    private var PRESSED = 2;
    override public function new()
    {
        super();
      //  virtualPad = new FlxVirtualPad(FlxDPadMode.FULL, FlxActionMode.A_B_X_Y);
    }
    override public function populateBuffer():Void
    {
        super.populateBuffer();

        //Driving and steering:
           upInput = FlxG.keys.anyPressed([UP, W]);
         downInput = FlxG.keys.anyPressed([DOWN, S]);
         leftInput = FlxG.keys.anyPressed([LEFT, A]);
        rightInput = FlxG.keys.anyPressed([RIGHT, D]);
        boostInput = FlxG.keys.anyPressed([SPACE, F]);
        strafeInput = FlxG.keys.anyPressed([Z,J]);
        fire1Input = FlxG.keys.anyPressed([K,X]);
        fire2Input = FlxG.keys.anyPressed([L, C]);
        /* upInput = virtualPad.buttonUp.status == PRESSED;
        downInput = virtualPad.buttonDown.status == PRESSED;
        leftInput = virtualPad.buttonLeft.status == PRESSED;
        rightInput = virtualPad.buttonRight.status==PRESSED; */
        if(strafeInput) bufferAction("strafe");
        if(fire1Input)
        {
            bufferAction("fire1");
        }
        if(fire2Input)
        {
            bufferAction("fire2");
        }
         if (upInput && downInput)
            upInput = downInput = false;   //if you're pressing both dont do anything

        if (leftInput && rightInput)
            leftInput = rightInput = false;

       

         if (upInput || downInput || leftInput || rightInput)
         {
            if(upInput) bufferAction("locomote","direction","-1").set("axis","y");                  //move up
            else if(downInput) bufferAction("locomote","direction","1").set("axis","y");            //move down
            if(strafeInput)                                                                         //if we're strafing
            {
                if(leftInput) bufferAction("locomote","direction","-1").set("axis","x");            //move left
                if(rightInput) bufferAction("locomote","direction","1").set("axis","x");            //move right
                    
            }
            else                                                                                    //not strafing?
            {
                if(leftInput) bufferAction("steer","direction","-1");                               //turn left
                else if(rightInput) bufferAction("steer","direction","1");                          //turn right
            }


         }
         else                                                                                      //if we're not moving
         {
            bufferAction("locomote","direction","0");                                              //hit the brakes!
            bufferAction("steer","direction","0");                                                 //straighten the wheel 
            bufferAction("boost","mode","shutoff");                                                //disengage boosters
         }
         if(boostInput) bufferAction("boost","mode","fire");                                        //engage thrusters if the thruster button is pressed
         else bufferAction("boost","mode","shutoff");                                               //if not cut them off, gas ain't cheap
    }
}