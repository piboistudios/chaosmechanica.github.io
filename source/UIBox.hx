package;

import flixel.FlxSprite;
import flixel.addons.ui.interfaces.IFlxUIWidget;
import flixel.util.FlxColor;
import flixel.math.FlxMath;
using flixel.util.FlxSpriteUtil;


class UIBox extends FlxSprite
{
	var members:Array<IFlxUIWidget>;
	override public function new(X:Float = 0, Y:Float = 0, w:Float, h:Float, borderLevels:Int, borderThickness:Int, paddingX:Int, paddingY:Int,  color1:FlxColor, ?color2:Null<FlxColor>)
	{
		super(X, Y);
		w += paddingX;
		h += paddingY;
		makeGraphic(cast(w, Int), cast(h, Int), color1);
		var halfBorder:Float = cast(borderThickness, Float)/2;
		var originalBorder:Int = borderThickness;
		borderLevels = FlxMath.maxInt(borderLevels, 1);
		if(color2 == null)
		{
			color2 = color1.getComplementHarmony();
		}
		if(borderLevels%2 == 0) borderLevels++;

		for(i in 0...borderLevels)
		{
			var color:FlxColor = ((i%2 != 0) ? color2 : color1);
			drawRect(halfBorder, halfBorder, w-borderThickness, h-borderThickness, color);
			borderThickness+=originalBorder;
			halfBorder = borderThickness/2;
		}
		
		members = new Array<IFlxUIWidget>();
	}
	public function add(ui:IFlxUIWidget):Void
	{
		if(members.indexOf(ui) == -1)
			members.push(ui);
		
	}
	public function concatMembers(array:Array<IFlxUIWidget>):Void
	{
		members.concat(array);
	}
	public function copyMembers():Array<IFlxUIWidget>
	{
		return members.copy();
	}
	public function remove(ui:IFlxUIWidget):Bool
	{
		var index:Int = members.indexOf(ui);
		if(index >= 0)
		{
			var tail:Array<IFlxUIWidget> = new Array<IFlxUIWidget>();
			for(i in 1...members.length)
			{
				
				
				if(members.length-i == index){
					members.pop();
					break;
				}
				tail.push(members[members.length-i]);
				members.pop();
			}
			
			members = members.concat(tail);
			return true;

		}
		else{
			return false;
		}
	}
	public function repositionBox(_x:Float, _y:Float):Void
	{
		var dX:Float = _x-x;
		var dY:Float = _y-y;
		x = _x;
		y = _y;
		for(i in members)
		{
			i.x += dX;
			i.y += dY;
		}
	}
}
/*DEMO
class PlayState extends FlxState
{
	private var dropdown:FlxUIDropDownMenu;
	private var background:UIBox;
	private var background2:UIBox;
	private var text:FlxUIText;
	private var shiftBoxButton:FlxButton;

	override public function create():Void
	{
		super.create();
		
		dropdown = new FlxUIDropDownMenu(0, 0, FlxUIDropDownMenu.makeStrIdLabelArray(["3BLTZKT", "ZE493-2869", "ETHR8", "ETC9084076", "99-136-3328", "ZE522-8000", "WNLRES90", "00-Z5KIT"], true));
		

		text = new FlxUIText(0, 0, 64, "", 8);
		
		dropdown.screenCenter();
		text.screenCenter();
		text.y = dropdown.y + 128;
		var color:FlxColor = FlxColor.WHITE;

		color.red = 12;
		color.blue = 32;
		color.green = 16;

		background = new UIBox(0, 0, dropdown.width, text.y + text.height - dropdown.y, 4 , 2, 24, 32 , color);
		background.screenCenter();
		background.y = dropdown.y - 16;

		background2 = new UIBox(0, 0, dropdown.width/2, text.y + text.height - dropdown.y, 4, 2, 12, 16, color);
		background2.y = background.y;
		background2.x = background.x - background2.width;
		background.add(text);
		background.add(dropdown);
		background.repositionBox(background.x+8, background.y-9);
		shiftBoxButton = new FlxButton(0, 0, "Shift box", shiftBox);
		shiftBoxButton.screenCenter();
		shiftBoxButton.y -= background.height/2;
		background.remove(dropdown);
		add(background2);
		
		add(background);
		add(text);
		add(dropdown);
		add(shiftBoxButton);

		
	}
	private function shiftBox():Void
	{
		background.repositionBox(background.x+3, background.y-4);
		
	}
	
}
*/