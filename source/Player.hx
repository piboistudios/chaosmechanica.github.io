package;
//TO DO: add type var to String
//implement String interface!
import flixel.addons.ui.StrNameLabel;
import dat.Data;
import util.mechanica.Mechanica;

import util.control.PlayerController;

class Player
{
	public var controller:PlayerController;
	public var partList:Array<StrNameLabel>;
	private var mechanica:Array<Mechanica>;
	private var current:Int = 0;
	
	public function new()
	{
			var pList = ["standardBrainCase","standardLocomote","standardKernel",
		"standardThruster","standardPistol","standardRifle","standardCarrier"
		];
			controller = new PlayerController();
			mechanica = new Array<Mechanica>();
			setMechanica(1);
			partList = new Array<StrNameLabel>();
			for(i in 0...pList.length)
			{
				//partList.add(new StrNameLabel(pList[i], pList[i]));/*
				addPart(pList[i]);//*/
			}

	}
	public function setMechanica(slot:Int):Bool
	{
		if(slot > 3) return false;
		slot-=1;
		current = slot;
		if(mechanica[current] == null)
		{
			mechanica[current] = new Mechanica();
			mechanica[current].loadGraphic(AssetPaths.blank__png);
		}
		return true;
	}
	public function getMechanica():Mechanica
	{
		return mechanica[current];
	}
	public function	addPart(_part:String):Bool
	{

		
		if(Global.partExists(_part))
		{
			
			partList.push(new StrNameLabel(_part, Data.part.resolve(_part).desc));//partObj.id.toString()));
			return true;
		}
		return false;
	}
	public function removePart(_part:String):Bool
	{

		for(i in 0...partList.length)
		{
			if(partList[i].name == _part || partList[i].label == _part || _part.substr(0, 15) == partList[i].label)
			{
				partList.remove(partList[i]);
				return true;
			}
		}
		return false;
	}
	public function getPartsOfType(type:dat.CatData_partType):Array<StrNameLabel>
	{
		var returnList:Array<StrNameLabel> = new Array<StrNameLabel>();
		for(i in 0...partList.length)
		{
			//returnList.push(new StrNameLabel(partList[i].name, partList[i].label));/*
			var part = Data.part.resolve(partList[i].name);
			var partType = part.categoricalData.partType;
			if(partType == type)
			{
				returnList.push(new StrNameLabel(partList[i].name, partList[i].label));
			}//*/
		}
		return returnList;
	}
	
}