// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIButton
#include <flixel/addons/ui/FlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIColorSwatch
#include <flixel/addons/ui/FlxUIColorSwatch.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_SwatchData
#include <flixel/addons/ui/SwatchData.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ICursorPointable
#include <flixel/addons/ui/interfaces/ICursorPointable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIButton
#include <flixel/addons/ui/interfaces/IFlxUIButton.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIClickable
#include <flixel/addons/ui/interfaces/IFlxUIClickable.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IHasParams
#include <flixel/addons/ui/interfaces/IHasParams.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_ILabeled
#include <flixel/addons/ui/interfaces/ILabeled.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_BitmapFrontEnd
#include <flixel/system/frontEnds/BitmapFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_276e33ea7c80c36d_11_new,"flixel.addons.ui.FlxUIColorSwatch","new",0xcf893a5c,"flixel.addons.ui.FlxUIColorSwatch.new","flixel/addons/ui/FlxUIColorSwatch.hx",11,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_27_set_color,"flixel.addons.ui.FlxUIColorSwatch","set_color",0x5321c8c2,"flixel.addons.ui.FlxUIColorSwatch.set_color","flixel/addons/ui/FlxUIColorSwatch.hx",27,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_32_destroy,"flixel.addons.ui.FlxUIColorSwatch","destroy",0x5e1e44f6,"flixel.addons.ui.FlxUIColorSwatch.destroy","flixel/addons/ui/FlxUIColorSwatch.hx",32,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_44_setColorAtIndex,"flixel.addons.ui.FlxUIColorSwatch","setColorAtIndex",0xa40124ba,"flixel.addons.ui.FlxUIColorSwatch.setColorAtIndex","flixel/addons/ui/FlxUIColorSwatch.hx",44,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_58_set_colors,"flixel.addons.ui.FlxUIColorSwatch","set_colors",0x6a6de171,"flixel.addons.ui.FlxUIColorSwatch.set_colors","flixel/addons/ui/FlxUIColorSwatch.hx",58,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_82_set_multiColored,"flixel.addons.ui.FlxUIColorSwatch","set_multiColored",0xf3bad98a,"flixel.addons.ui.FlxUIColorSwatch.set_multiColored","flixel/addons/ui/FlxUIColorSwatch.hx",82,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_88_set_hilight,"flixel.addons.ui.FlxUIColorSwatch","set_hilight",0x1b7edf54,"flixel.addons.ui.FlxUIColorSwatch.set_hilight","flixel/addons/ui/FlxUIColorSwatch.hx",88,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_95_set_midtone,"flixel.addons.ui.FlxUIColorSwatch","set_midtone",0x5780fd19,"flixel.addons.ui.FlxUIColorSwatch.set_midtone","flixel/addons/ui/FlxUIColorSwatch.hx",95,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_102_set_shadowMid,"flixel.addons.ui.FlxUIColorSwatch","set_shadowMid",0xd36e2067,"flixel.addons.ui.FlxUIColorSwatch.set_shadowMid","flixel/addons/ui/FlxUIColorSwatch.hx",102,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_109_set_shadowDark,"flixel.addons.ui.FlxUIColorSwatch","set_shadowDark",0x26f548b7,"flixel.addons.ui.FlxUIColorSwatch.set_shadowDark","flixel/addons/ui/FlxUIColorSwatch.hx",109,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_157_equalsSwatch,"flixel.addons.ui.FlxUIColorSwatch","equalsSwatch",0x5d09271f,"flixel.addons.ui.FlxUIColorSwatch.equalsSwatch","flixel/addons/ui/FlxUIColorSwatch.hx",157,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_161_getRawDifferenceSwatch,"flixel.addons.ui.FlxUIColorSwatch","getRawDifferenceSwatch",0x574df36f,"flixel.addons.ui.FlxUIColorSwatch.getRawDifferenceSwatch","flixel/addons/ui/FlxUIColorSwatch.hx",161,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_164_refreshColor,"flixel.addons.ui.FlxUIColorSwatch","refreshColor",0x5481e40c,"flixel.addons.ui.FlxUIColorSwatch.refreshColor","flixel/addons/ui/FlxUIColorSwatch.hx",164,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_230_onClick,"flixel.addons.ui.FlxUIColorSwatch","onClick",0x183432a5,"flixel.addons.ui.FlxUIColorSwatch.onClick","flixel/addons/ui/FlxUIColorSwatch.hx",230,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_244_colorKey,"flixel.addons.ui.FlxUIColorSwatch","colorKey",0xb5667480,"flixel.addons.ui.FlxUIColorSwatch.colorKey","flixel/addons/ui/FlxUIColorSwatch.hx",244,0xa5acf353)
HX_LOCAL_STACK_FRAME(_hx_pos_276e33ea7c80c36d_22_boot,"flixel.addons.ui.FlxUIColorSwatch","boot",0xc0a2d6b6,"flixel.addons.ui.FlxUIColorSwatch.boot","flixel/addons/ui/FlxUIColorSwatch.hx",22,0xa5acf353)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIColorSwatch_obj::__construct(Float X,Float Y, ::Dynamic __o_Color, ::flixel::addons::ui::SwatchData Colors, ::Dynamic Asset, ::Dynamic Callback,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height){
 ::Dynamic Color = __o_Color.Default(16777215);
int Width = __o_Width.Default(-1);
int Height = __o_Height.Default(-1);
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_11_new)
HXLINE( 228)		this->_skipRefresh = false;
HXLINE( 227)		this->_origKey = HX_("",00,00,00,00);
HXLINE( 126)		super::__construct(X,Y,null(),this->onClick_dyn(),null(),null(),null());
HXLINE( 128)		this->callback = Callback;
HXLINE( 130)		this->_skipRefresh = true;
HXLINE( 132)		bool _hx_tmp;
HXDLIN( 132)		if ((Width != (int)-1)) {
HXLINE( 132)			_hx_tmp = (Height != (int)-1);
            		}
            		else {
HXLINE( 132)			_hx_tmp = false;
            		}
HXDLIN( 132)		if (_hx_tmp) {
HXLINE( 133)			this->makeGraphic(Width,Height,(int)-1,true,(((HX_("Swatch",1c,09,c4,f4) + Width) + HX_("x",78,00,00,00)) + Height));
            		}
            		else {
HXLINE( 134)			if (hx::IsNotNull( Asset )) {
HXLINE( 135)				this->loadGraphic(Asset,null(),null(),null(),null(),null());
            			}
            			else {
HXLINE( 137)				this->loadGraphic(HX_("flixel/flixel-ui/img/swatch.png",80,80,13,74),null(),null(),null(),null(),null());
            			}
            		}
HXLINE( 140)		this->_origKey = this->graphic->key;
HXLINE( 142)		if (hx::IsNotEq( Color,(int)16777215 )) {
HXLINE( 143)			this->set_multiColored(false);
HXLINE( 144)			this->set_color(Color);
            		}
HXLINE( 147)		if (hx::IsNotNull( Colors )) {
HXLINE( 148)			this->set_multiColored(true);
HXLINE( 149)			this->set_colors(Colors);
            		}
HXLINE( 152)		this->_skipRefresh = false;
HXLINE( 153)		this->refreshColor();
            	}

Dynamic FlxUIColorSwatch_obj::__CreateEmpty() { return new FlxUIColorSwatch_obj; }

void *FlxUIColorSwatch_obj::_hx_vtable = 0;

Dynamic FlxUIColorSwatch_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUIColorSwatch_obj > _hx_result = new FlxUIColorSwatch_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxUIColorSwatch_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x1115e075) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x1115e075;
			}
		} else {
			return inClassId==(int)0x1aa5d1c2 || inClassId==(int)0x25a685e0;
		}
	} else {
		if (inClassId<=(int)0x50397899) {
			return inClassId==(int)0x2e105115 || inClassId==(int)0x50397899;
		} else {
			return inClassId==(int)0x5b3a2d5c;
		}
	}
}

int FlxUIColorSwatch_obj::set_color(int _tmp_Color){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_27_set_color)
HXLINE(  28)		int Color = _tmp_Color;
HXDLIN(  28)		this->set_midtone(Color);
HXLINE(  29)		return this->super::set_color(this->color);
            	}


void FlxUIColorSwatch_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_32_destroy)
HXLINE(  33)		this->callback = null();
HXLINE(  34)		this->super::destroy();
            	}


void FlxUIColorSwatch_obj::setColorAtIndex(int Color,int index){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_44_setColorAtIndex)
HXLINE(  45)		this->_skipRefresh = true;
HXLINE(  46)		switch((int)(index)){
            			case (int)0: {
HXLINE(  47)				this->set_hilight(Color);
            			}
            			break;
            			case (int)1: {
HXLINE(  48)				this->set_midtone(Color);
            			}
            			break;
            			case (int)2: {
HXLINE(  49)				this->set_shadowMid(Color);
            			}
            			break;
            			case (int)3: {
HXLINE(  50)				this->set_shadowDark(Color);
            			}
            			break;
            			default:{
HXLINE(  51)				this->colors->colors[index] = Color;
            			}
            		}
HXLINE(  53)		this->_skipRefresh = false;
HXLINE(  54)		this->refreshColor();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIColorSwatch_obj,setColorAtIndex,(void))

 ::flixel::addons::ui::SwatchData FlxUIColorSwatch_obj::set_colors( ::flixel::addons::ui::SwatchData Colors){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_58_set_colors)
HXLINE(  59)		if (hx::IsNotNull( this->colors )) {
HXLINE(  61)			this->colors->destroy();
HXLINE(  62)			this->colors = null();
            		}
HXLINE(  65)		this->_skipRefresh = true;
HXLINE(  67)		this->colors = Colors->copy();
HXLINE(  69)		this->set_hilight(this->colors->get_hilight());
HXLINE(  70)		this->set_midtone(this->colors->get_midtone());
HXLINE(  71)		this->set_shadowMid(this->colors->get_shadowMid());
HXLINE(  72)		this->set_shadowDark(this->colors->get_shadowDark());
HXLINE(  74)		this->_skipRefresh = false;
HXLINE(  75)		this->refreshColor();
HXLINE(  76)		return Colors;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_colors,return )

bool FlxUIColorSwatch_obj::set_multiColored(bool b){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_82_set_multiColored)
HXLINE(  83)		this->multiColored = b;
HXLINE(  84)		this->refreshColor();
HXLINE(  85)		return this->multiColored;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_multiColored,return )

int FlxUIColorSwatch_obj::set_hilight(int i){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_88_set_hilight)
HXLINE(  89)		this->hilight = i;
HXLINE(  90)		this->colors->set_hilight(this->hilight);
HXLINE(  91)		this->refreshColor();
HXLINE(  92)		return this->hilight;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_hilight,return )

int FlxUIColorSwatch_obj::set_midtone(int i){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_95_set_midtone)
HXLINE(  96)		this->midtone = i;
HXLINE(  97)		this->colors->set_midtone(this->midtone);
HXLINE(  98)		this->refreshColor();
HXLINE(  99)		return this->midtone;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_midtone,return )

int FlxUIColorSwatch_obj::set_shadowMid(int i){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_102_set_shadowMid)
HXLINE( 103)		this->shadowMid = i;
HXLINE( 104)		this->colors->set_shadowMid(this->shadowMid);
HXLINE( 105)		this->refreshColor();
HXLINE( 106)		return this->shadowMid;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_shadowMid,return )

int FlxUIColorSwatch_obj::set_shadowDark(int i){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_109_set_shadowDark)
HXLINE( 110)		this->shadowDark = i;
HXLINE( 111)		this->colors->set_shadowDark(this->shadowDark);
HXLINE( 112)		this->refreshColor();
HXLINE( 113)		return this->shadowDark;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,set_shadowDark,return )

bool FlxUIColorSwatch_obj::equalsSwatch( ::flixel::addons::ui::SwatchData swatch){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_157_equalsSwatch)
HXDLIN( 157)		return swatch->doColorsEqual(this->colors,null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,equalsSwatch,return )

int FlxUIColorSwatch_obj::getRawDifferenceSwatch( ::flixel::addons::ui::SwatchData swatch){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_161_getRawDifferenceSwatch)
HXDLIN( 161)		return swatch->getRawDifference(this->colors,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUIColorSwatch_obj,getRawDifferenceSwatch,return )

void FlxUIColorSwatch_obj::refreshColor(){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_164_refreshColor)
HXLINE( 165)		if (this->_skipRefresh) {
HXLINE( 167)			return;
            		}
HXLINE( 170)		::String key = this->colorKey();
HXLINE( 172)		if (this->multiColored) {
HXLINE( 174)			if ((this->graphic->key != key)) {
HXLINE( 175)				if ((hx::IsNotNull( ( ( ::flixel::graphics::FlxGraphic)(::haxe::IMap_obj::get(::flixel::FlxG_obj::bitmap->_cache,key)) ) ) == false)) {
HXLINE( 177)					int _hx_tmp = ::Std_obj::_hx_int(this->get_width());
HXDLIN( 177)					this->makeGraphic(_hx_tmp,::Std_obj::_hx_int(this->get_height()),(int)-1,true,key);
HXLINE( 178)					this->_flashRect->x = (int)0;
HXDLIN( 178)					this->_flashRect->y = (int)0;
HXLINE( 179)					this->_flashRect->width = this->get_pixels()->get_width();
HXLINE( 180)					this->_flashRect->height = this->get_pixels()->get_height();
HXLINE( 181)					this->get_pixels()->fillRect(this->_flashRect,(int)-16777216);
HXLINE( 183)					::Array< int > tempCols = ::Array_obj< int >::__new(0);
HXLINE( 185)					{
HXLINE( 185)						int _g1 = (int)0;
HXDLIN( 185)						int _g = this->colors->colors->length;
HXDLIN( 185)						while((_g1 < _g)){
HXLINE( 185)							_g1 = (_g1 + (int)1);
HXDLIN( 185)							int i = (_g1 - (int)1);
HXLINE( 186)							int col = this->colors->colors->__get(i);
HXLINE( 187)							if ((col != (int)0)) {
HXLINE( 188)								tempCols->push(col);
            							}
            						}
            					}
HXLINE( 192)					int thickW = ::Std_obj::_hx_int(((Float)(this->get_width() - (int)2) / (Float)(int)2));
HXDLIN( 192)					int thickW1 = ::Std_obj::_hx_int(((Float)thickW / (Float)tempCols->length));
HXLINE( 193)					int thickH = ::Std_obj::_hx_int(((Float)(this->get_height() - (int)2) / (Float)(int)2));
HXDLIN( 193)					int thickH1 = ::Std_obj::_hx_int(((Float)thickH / (Float)tempCols->length));
HXLINE( 195)					 ::openfl::_legacy::geom::Rectangle _hx_tmp1 = this->_flashRect;
HXDLIN( 195)					_hx_tmp1->x = (_hx_tmp1->x + (int)1);
HXLINE( 196)					 ::openfl::_legacy::geom::Rectangle _hx_tmp2 = this->_flashRect;
HXDLIN( 196)					_hx_tmp2->y = (_hx_tmp2->y + (int)1);
HXLINE( 197)					 ::openfl::_legacy::geom::Rectangle _hx_tmp3 = this->_flashRect;
HXDLIN( 197)					_hx_tmp3->width = (_hx_tmp3->width - (int)2);
HXLINE( 198)					 ::openfl::_legacy::geom::Rectangle _hx_tmp4 = this->_flashRect;
HXDLIN( 198)					_hx_tmp4->height = (_hx_tmp4->height - (int)2);
HXLINE( 199)					{
HXLINE( 199)						int _g11 = (int)0;
HXDLIN( 199)						int _g2 = tempCols->length;
HXDLIN( 199)						while((_g11 < _g2)){
HXLINE( 199)							_g11 = (_g11 + (int)1);
HXDLIN( 199)							int i1 = (_g11 - (int)1);
HXLINE( 200)							int col1 = tempCols->__get(((tempCols->length - (int)1) - i1));
HXLINE( 201)							this->get_pixels()->fillRect(this->_flashRect,col1);
HXLINE( 202)							 ::openfl::_legacy::geom::Rectangle _hx_tmp5 = this->_flashRect;
HXDLIN( 202)							_hx_tmp5->width = (_hx_tmp5->width - (thickW1 * (int)2));
HXLINE( 203)							 ::openfl::_legacy::geom::Rectangle _hx_tmp6 = this->_flashRect;
HXDLIN( 203)							_hx_tmp6->height = (_hx_tmp6->height - (thickH1 * (int)2));
HXLINE( 204)							 ::openfl::_legacy::geom::Rectangle _hx_tmp7 = this->_flashRect;
HXDLIN( 204)							_hx_tmp7->x = (_hx_tmp7->x + thickW1);
HXLINE( 205)							 ::openfl::_legacy::geom::Rectangle _hx_tmp8 = this->_flashRect;
HXDLIN( 205)							_hx_tmp8->y = (_hx_tmp8->y + thickH1);
            						}
            					}
HXLINE( 208)					::flixel::addons::ui::U_obj::clearArray(tempCols);
HXLINE( 209)					tempCols = null();
HXLINE( 211)					this->calcFrame(null());
            				}
            				else {
HXLINE( 213)					this->loadGraphic(key,null(),null(),null(),null(),null());
            				}
            			}
            		}
            		else {
HXLINE( 219)			if ((this->graphic->key != key)) {
HXLINE( 221)				this->loadGraphic(key,null(),null(),null(),null(),null());
            			}
HXLINE( 223)			this->set_color(this->midtone);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIColorSwatch_obj,refreshColor,(void))

void FlxUIColorSwatch_obj::onClick(){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_230_onClick)
HXLINE( 231)		if (hx::IsNotNull( this->callback )) {
HXLINE( 232)			this->callback();
            		}
HXLINE( 234)		if (this->broadcastToFlxUI) {
HXLINE( 236)			if (this->multiColored) {
HXLINE( 237)				::flixel::addons::ui::FlxUI_obj::event(HX_("click_color_swatch",2f,81,1e,77),hx::ObjectPtr<OBJ_>(this),this->colors,null());
            			}
            			else {
HXLINE( 239)				::flixel::addons::ui::FlxUI_obj::event(HX_("click_color_swatch",2f,81,1e,77),hx::ObjectPtr<OBJ_>(this),this->color,null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIColorSwatch_obj,onClick,(void))

::String FlxUIColorSwatch_obj::colorKey(){
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_244_colorKey)
HXLINE( 245)		if (this->multiColored) {
HXLINE( 246)			::String str = this->_origKey;
HXLINE( 247)			{
HXLINE( 247)				int _g = (int)0;
HXDLIN( 247)				::Array< int > _g1 = this->colors->colors;
HXDLIN( 247)				while((_g < _g1->length)){
HXLINE( 247)					int c = _g1->__get(_g);
HXDLIN( 247)					_g = (_g + (int)1);
HXLINE( 248)					::String str1 = (HX_("",00,00,00,00) + ::StringTools_obj::hex(((int)((int)c >> (int)(int)16) & (int)(int)255),(int)2));
HXDLIN( 248)					::String str2 = (str1 + ::StringTools_obj::hex(((int)((int)c >> (int)(int)8) & (int)(int)255),(int)2));
HXDLIN( 248)					str = (str + (HX_("+",2b,00,00,00) + (HX_("#",23,00,00,00) + (str2 + ::StringTools_obj::hex(((int)c & (int)(int)255),(int)2)))));
            				}
            			}
HXLINE( 250)			return str;
            		}
HXLINE( 252)		return this->_origKey;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUIColorSwatch_obj,colorKey,return )

::String FlxUIColorSwatch_obj::CLICK_EVENT;


hx::ObjectPtr< FlxUIColorSwatch_obj > FlxUIColorSwatch_obj::__new(Float X,Float Y, ::Dynamic __o_Color, ::flixel::addons::ui::SwatchData Colors, ::Dynamic Asset, ::Dynamic Callback,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height) {
	hx::ObjectPtr< FlxUIColorSwatch_obj > __this = new FlxUIColorSwatch_obj();
	__this->__construct(X,Y,__o_Color,Colors,Asset,Callback,__o_Width,__o_Height);
	return __this;
}

hx::ObjectPtr< FlxUIColorSwatch_obj > FlxUIColorSwatch_obj::__alloc(hx::Ctx *_hx_ctx,Float X,Float Y, ::Dynamic __o_Color, ::flixel::addons::ui::SwatchData Colors, ::Dynamic Asset, ::Dynamic Callback,hx::Null< int >  __o_Width,hx::Null< int >  __o_Height) {
	FlxUIColorSwatch_obj *__this = (FlxUIColorSwatch_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIColorSwatch_obj), true, "flixel.addons.ui.FlxUIColorSwatch"));
	*(void **)__this = FlxUIColorSwatch_obj::_hx_vtable;
	__this->__construct(X,Y,__o_Color,Colors,Asset,Callback,__o_Width,__o_Height);
	return __this;
}

FlxUIColorSwatch_obj::FlxUIColorSwatch_obj()
{
}

void FlxUIColorSwatch_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIColorSwatch);
	HX_MARK_MEMBER_NAME(multiColored,"multiColored");
	HX_MARK_MEMBER_NAME(hilight,"hilight");
	HX_MARK_MEMBER_NAME(midtone,"midtone");
	HX_MARK_MEMBER_NAME(shadowMid,"shadowMid");
	HX_MARK_MEMBER_NAME(shadowDark,"shadowDark");
	HX_MARK_MEMBER_NAME(colors,"colors");
	HX_MARK_MEMBER_NAME(callback,"callback");
	HX_MARK_MEMBER_NAME(_origKey,"_origKey");
	HX_MARK_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	 ::flixel::addons::ui::FlxUIButton_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIColorSwatch_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(multiColored,"multiColored");
	HX_VISIT_MEMBER_NAME(hilight,"hilight");
	HX_VISIT_MEMBER_NAME(midtone,"midtone");
	HX_VISIT_MEMBER_NAME(shadowMid,"shadowMid");
	HX_VISIT_MEMBER_NAME(shadowDark,"shadowDark");
	HX_VISIT_MEMBER_NAME(colors,"colors");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	HX_VISIT_MEMBER_NAME(_origKey,"_origKey");
	HX_VISIT_MEMBER_NAME(_skipRefresh,"_skipRefresh");
	 ::flixel::addons::ui::FlxUIButton_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxUIColorSwatch_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { return hx::Val( colors ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hilight") ) { return hx::Val( hilight ); }
		if (HX_FIELD_EQ(inName,"midtone") ) { return hx::Val( midtone ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"onClick") ) { return hx::Val( onClick_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"_origKey") ) { return hx::Val( _origKey ); }
		if (HX_FIELD_EQ(inName,"colorKey") ) { return hx::Val( colorKey_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shadowMid") ) { return hx::Val( shadowMid ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shadowDark") ) { return hx::Val( shadowDark ); }
		if (HX_FIELD_EQ(inName,"set_colors") ) { return hx::Val( set_colors_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_hilight") ) { return hx::Val( set_hilight_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_midtone") ) { return hx::Val( set_midtone_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"multiColored") ) { return hx::Val( multiColored ); }
		if (HX_FIELD_EQ(inName,"equalsSwatch") ) { return hx::Val( equalsSwatch_dyn() ); }
		if (HX_FIELD_EQ(inName,"refreshColor") ) { return hx::Val( refreshColor_dyn() ); }
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { return hx::Val( _skipRefresh ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_shadowMid") ) { return hx::Val( set_shadowMid_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"set_shadowDark") ) { return hx::Val( set_shadowDark_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"setColorAtIndex") ) { return hx::Val( setColorAtIndex_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"set_multiColored") ) { return hx::Val( set_multiColored_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getRawDifferenceSwatch") ) { return hx::Val( getRawDifferenceSwatch_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUIColorSwatch_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"colors") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_colors(inValue.Cast<  ::flixel::addons::ui::SwatchData >()) );colors=inValue.Cast<  ::flixel::addons::ui::SwatchData >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"hilight") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_hilight(inValue.Cast< int >()) );hilight=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"midtone") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_midtone(inValue.Cast< int >()) );midtone=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_origKey") ) { _origKey=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"shadowMid") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shadowMid(inValue.Cast< int >()) );shadowMid=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"shadowDark") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_shadowDark(inValue.Cast< int >()) );shadowDark=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"multiColored") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_multiColored(inValue.Cast< bool >()) );multiColored=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_skipRefresh") ) { _skipRefresh=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIColorSwatch_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("multiColored","\x09","\xf7","\x5e","\xcb"));
	outFields->push(HX_HCSTRING("hilight","\x35","\xb2","\x2d","\x55"));
	outFields->push(HX_HCSTRING("midtone","\xfa","\xcf","\x2f","\x91"));
	outFields->push(HX_HCSTRING("shadowMid","\x88","\x2d","\xa0","\xf4"));
	outFields->push(HX_HCSTRING("shadowDark","\x76","\xb8","\x8e","\x11"));
	outFields->push(HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"));
	outFields->push(HX_HCSTRING("_origKey","\xdf","\x1d","\x97","\x8f"));
	outFields->push(HX_HCSTRING("_skipRefresh","\x1d","\xf7","\x9b","\xee"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUIColorSwatch_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIColorSwatch_obj,multiColored),HX_HCSTRING("multiColored","\x09","\xf7","\x5e","\xcb")},
	{hx::fsInt,(int)offsetof(FlxUIColorSwatch_obj,hilight),HX_HCSTRING("hilight","\x35","\xb2","\x2d","\x55")},
	{hx::fsInt,(int)offsetof(FlxUIColorSwatch_obj,midtone),HX_HCSTRING("midtone","\xfa","\xcf","\x2f","\x91")},
	{hx::fsInt,(int)offsetof(FlxUIColorSwatch_obj,shadowMid),HX_HCSTRING("shadowMid","\x88","\x2d","\xa0","\xf4")},
	{hx::fsInt,(int)offsetof(FlxUIColorSwatch_obj,shadowDark),HX_HCSTRING("shadowDark","\x76","\xb8","\x8e","\x11")},
	{hx::fsObject /*::flixel::addons::ui::SwatchData*/ ,(int)offsetof(FlxUIColorSwatch_obj,colors),HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUIColorSwatch_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{hx::fsString,(int)offsetof(FlxUIColorSwatch_obj,_origKey),HX_HCSTRING("_origKey","\xdf","\x1d","\x97","\x8f")},
	{hx::fsBool,(int)offsetof(FlxUIColorSwatch_obj,_skipRefresh),HX_HCSTRING("_skipRefresh","\x1d","\xf7","\x9b","\xee")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxUIColorSwatch_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUIColorSwatch_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUIColorSwatch_obj_sMemberFields[] = {
	HX_HCSTRING("multiColored","\x09","\xf7","\x5e","\xcb"),
	HX_HCSTRING("hilight","\x35","\xb2","\x2d","\x55"),
	HX_HCSTRING("midtone","\xfa","\xcf","\x2f","\x91"),
	HX_HCSTRING("shadowMid","\x88","\x2d","\xa0","\xf4"),
	HX_HCSTRING("shadowDark","\x76","\xb8","\x8e","\x11"),
	HX_HCSTRING("colors","\xb0","\xc5","\x86","\xc6"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("setColorAtIndex","\xbe","\xb0","\x56","\xbc"),
	HX_HCSTRING("set_colors","\xed","\xd3","\x8b","\xba"),
	HX_HCSTRING("set_multiColored","\x06","\xd1","\x3f","\x26"),
	HX_HCSTRING("set_hilight","\x58","\x19","\x95","\xe5"),
	HX_HCSTRING("set_midtone","\x1d","\x37","\x97","\x21"),
	HX_HCSTRING("set_shadowMid","\x6b","\xe3","\x09","\xfb"),
	HX_HCSTRING("set_shadowDark","\x33","\x29","\xa4","\xa7"),
	HX_HCSTRING("equalsSwatch","\x9b","\xb0","\x65","\x66"),
	HX_HCSTRING("getRawDifferenceSwatch","\xeb","\xaf","\xcb","\x9e"),
	HX_HCSTRING("refreshColor","\x88","\x6d","\xde","\x5d"),
	HX_HCSTRING("_origKey","\xdf","\x1d","\x97","\x8f"),
	HX_HCSTRING("_skipRefresh","\x1d","\xf7","\x9b","\xee"),
	HX_HCSTRING("onClick","\xa9","\x1a","\x9c","\xde"),
	HX_HCSTRING("colorKey","\xfc","\x8f","\xe9","\x89"),
	::String(null()) };

static void FlxUIColorSwatch_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIColorSwatch_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUIColorSwatch_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIColorSwatch_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIColorSwatch_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUIColorSwatch_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

hx::Class FlxUIColorSwatch_obj::__mClass;

static ::String FlxUIColorSwatch_obj_sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	::String(null())
};

void FlxUIColorSwatch_obj::__register()
{
	hx::Object *dummy = new FlxUIColorSwatch_obj;
	FlxUIColorSwatch_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIColorSwatch","\x6a","\x1c","\x16","\x2d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIColorSwatch_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxUIColorSwatch_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUIColorSwatch_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIColorSwatch_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIColorSwatch_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIColorSwatch_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIColorSwatch_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUIColorSwatch_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_276e33ea7c80c36d_22_boot)
HXDLIN(  22)		CLICK_EVENT = HX_("click_color_swatch",2f,81,1e,77);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
