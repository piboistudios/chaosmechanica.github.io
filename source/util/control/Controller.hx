package util.control;

class Controller
{
    private var buffer:Array<Xml>; //["<mechanica_input action=\"walking\" direction =\"-1\" / >\"", "<mechanica_input action=\"steer\" direction = \"-1\" />\""]
    public function new()
    {
        initializeBuffer();
    }
    private function initializeBuffer():Void
    {
        buffer = new Array<Xml>();//
    }
    public function getBuffer():Array<Xml>
    {
        populateBuffer();
        return buffer;
    }
    private function bufferAction(?value1:Null<String>, ?value2:Null<String>, ?value3:Null<String>):Xml
    {
        var xml = Xml.createElement("mechanica_input"); //<mechanica_input action = "locomote" direction = "-1" />
        xml.set("action",value1);
        if(value3 != null && value2 != null) xml.set(value2, value3);
        //Debug.log(xml.toString());
        buffer.push(xml);
         return xml;
    }

    private function populateBuffer():Void
    {
        initializeBuffer();
    }
}