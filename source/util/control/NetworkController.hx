package util.control;

import lib.hxudp.UdpSocket;
import haxe.io.Bytes;
import haxe.io.BytesInput;

class NetworkController extends PlayerController
{
    private var connected = false;
    private var serverIp:String = "127.0.0.1";
    private var serverPort:Int = 1026;
}