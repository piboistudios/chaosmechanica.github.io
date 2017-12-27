package util.control;

class Controller
{
    private var buffer:Array<Xml>;
    public function new()
    {
        initializeBuffer();
    }
    private function initializeBuffer():Void
    {
        buffer = new Array<Xml>();
    }
    public function getBuffer():Array<Xml>
    {
        populateBuffer();
        return buffer;
    }
    private function bufferAction(value1:String, value2:String, value3):Void
    {
        var xml = Xml.createElement("mechanica_input");
        xml.set("action",value1);
        xml.set(value2, value3);
        //Debug.log(xml.toString());
        buffer.push(xml);
    }
    private function populateBuffer():Void
    {
        initializeBuffer();
    }
}