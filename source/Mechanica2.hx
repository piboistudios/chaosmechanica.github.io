/*TODO 12/19/2017:

-Define Mechanica class

pseudocode below:*/

import flixel.group.FlxSpriteGroup;
import Part;

class Mechanica2 extends FlxSpriteGroup
{
	var head:HeadUnit;
	var core:CoreUnit;
	var arms:ArmUnits;
	var legs:LegUnits;
	var thruster:ThrusterUnit;
	var equip1:EquipmentUnit;
	var equip2:EquipmentUnit;
		

	override public function new(?X:Float, ?Y:Float, Head:Null<HeadUnit>, Core:Null<CoreUnit>, Arms:Null<ArmUnits>, Legs:Null<LegUnits>, Thruster:Null<ThrusterUnit>, Equip1:Null<EquipmentUnit>, Equip2:Null<EquipmentUnit>)
	{
		super(X, Y);
		equip(EquipType.Head, ((Head!=null) ? Head : new HeadUnit("standard")));
		equip(EquipType.Core, ((Core!=null) ? Core : new CoreUnit("standard")));
		equip(EquipType.Arms, ((Arms!=null) ? Arms : new ArmUnits("standard")));
		equip(EquipType.Legs, ((Legs!=null) ? Legs : new LegUnits("standard")));
		equip(EquipType.Thruster, ((Thruster!=null) ? Thruster : new ThrusterUnit("standard")));
		equip(EquipType.Equipment1, ((Equip1!=null) ? Equip1 : new EquipmentUnit("standard1")));
		equip(EquipType.Equipment2, ((Equip2!=null) ? Equip2 : new EquipmentUnit("standard2")));
	}
	private function equip(etype:EquipType, part:Dynamic):Bool
	{
		switch(etype)
		{
			case EquipType.Head:
			{
				remove(head);
				head = part;
			}
			case EquipType.Core:
			{
				remove(core);
				core = part;
			}
			case EquipType.Arms:
			{
				remove(arms);
				arms = part;
			}
			case EquipType.Legs:
			{
				remove(legs);
				legs = part;
			}
			case EquipType.Thruster:
			{
				remove(thruster);
				thruster = part;	
			}
			case EquipType.Equipment1:
			{
				remove(equip1);
				equip1 = part;
			}
			case EquipType.Equipment2:
			{
				remove(equip2);
				equip2 = part;
			}
			default:
				return false;
		}
		add(part);
		return true;
	}
}

enum EquipType{
	Head;
	Core;
	Arms;
	Legs;
	Thruster;
	Equipment1;
	Equipment2;
	s
}