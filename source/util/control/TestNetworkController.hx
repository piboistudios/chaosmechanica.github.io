package util.control;

import util.control.Controller;
class TestNetworkController extends Controller
{
    override public function populateBuffer():Void
    {
        super.populateBuffer();
        if(Global.server)
    {
        var bytes = haxe.io.Bytes.alloc(80);
        var dataLen = Global.socket.receive(bytes);
    //Global.socket.receive
        var inputStream = new haxe.io.BytesInput(bytes).readString(dataLen);
       // flixel.FlxG.log.advanced(inputStream, Global.logStyle);
        buffer.push(Xml.parse(inputStream).firstElement());
    }
    }
}