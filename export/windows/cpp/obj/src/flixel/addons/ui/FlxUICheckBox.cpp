// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
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
#ifndef INCLUDED_flixel_addons_ui_FlxUICheckBox
#include <flixel/addons/ui/FlxUICheckBox.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIText
#include <flixel/addons/ui/FlxUIText.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITypedButton
#include <flixel/addons/ui/FlxUITypedButton.h>
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInput
#include <flixel/input/IFlxInput.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_text_FlxText
#include <flixel/text/FlxText.h>
#endif
#ifndef INCLUDED_flixel_text_FlxTextBorderStyle
#include <flixel/text/FlxTextBorderStyle.h>
#endif
#ifndef INCLUDED_flixel_ui_FlxTypedButton
#include <flixel/ui/FlxTypedButton.h>
#endif
#ifndef INCLUDED_flixel_ui__FlxButton_FlxButtonEvent
#include <flixel/ui/_FlxButton/FlxButtonEvent.h>
#endif
#ifndef INCLUDED_flixel_util_FlxTimer
#include <flixel/util/FlxTimer.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_ce87859da0fe064b_17_new,"flixel.addons.ui.FlxUICheckBox","new",0x24a5788a,"flixel.addons.ui.FlxUICheckBox.new","flixel/addons/ui/FlxUICheckBox.hx",17,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_44_set_skipButtonUpdate,"flixel.addons.ui.FlxUICheckBox","set_skipButtonUpdate",0x88caa7cd,"flixel.addons.ui.FlxUICheckBox.set_skipButtonUpdate","flixel/addons/ui/FlxUICheckBox.hx",44,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_51_set_params,"flixel.addons.ui.FlxUICheckBox","set_params",0xd67a1a99,"flixel.addons.ui.FlxUICheckBox.set_params","flixel/addons/ui/FlxUICheckBox.hx",51,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_63_set_color,"flixel.addons.ui.FlxUICheckBox","set_color",0x10dbdd70,"flixel.addons.ui.FlxUICheckBox.set_color","flixel/addons/ui/FlxUICheckBox.hx",63,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_160_setLabel,"flixel.addons.ui.FlxUICheckBox","setLabel",0xd38df688,"flixel.addons.ui.FlxUICheckBox.setLabel","flixel/addons/ui/FlxUICheckBox.hx",160,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_161_getLabel,"flixel.addons.ui.FlxUICheckBox","getLabel",0x25309d14,"flixel.addons.ui.FlxUICheckBox.getLabel","flixel/addons/ui/FlxUICheckBox.hx",161,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_164_set_visible,"flixel.addons.ui.FlxUICheckBox","set_visible",0x9960c1bf,"flixel.addons.ui.FlxUICheckBox.set_visible","flixel/addons/ui/FlxUICheckBox.hx",164,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_171_anchorTime,"flixel.addons.ui.FlxUICheckBox","anchorTime",0xb5482238,"flixel.addons.ui.FlxUICheckBox.anchorTime","flixel/addons/ui/FlxUICheckBox.hx",171,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_174_set_textX,"flixel.addons.ui.FlxUICheckBox","set_textX",0xd418b718,"flixel.addons.ui.FlxUICheckBox.set_textX","flixel/addons/ui/FlxUICheckBox.hx",174,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_180_set_textY,"flixel.addons.ui.FlxUICheckBox","set_textY",0xd418b719,"flixel.addons.ui.FlxUICheckBox.set_textY","flixel/addons/ui/FlxUICheckBox.hx",180,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_187_anchorLabelX,"flixel.addons.ui.FlxUICheckBox","anchorLabelX",0xdbea9ecf,"flixel.addons.ui.FlxUICheckBox.anchorLabelX","flixel/addons/ui/FlxUICheckBox.hx",187,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_193_anchorLabelY,"flixel.addons.ui.FlxUICheckBox","anchorLabelY",0xdbea9ed0,"flixel.addons.ui.FlxUICheckBox.anchorLabelY","flixel/addons/ui/FlxUICheckBox.hx",193,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_199_destroy,"flixel.addons.ui.FlxUICheckBox","destroy",0xc5a03224,"flixel.addons.ui.FlxUICheckBox.destroy","flixel/addons/ui/FlxUICheckBox.hx",199,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_216_get_text,"flixel.addons.ui.FlxUICheckBox","get_text",0x225f07cc,"flixel.addons.ui.FlxUICheckBox.get_text","flixel/addons/ui/FlxUICheckBox.hx",216,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_218_set_text,"flixel.addons.ui.FlxUICheckBox","set_text",0xd0bc6140,"flixel.addons.ui.FlxUICheckBox.set_text","flixel/addons/ui/FlxUICheckBox.hx",218,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_224_update,"flixel.addons.ui.FlxUICheckBox","update",0x52efd41f,"flixel.addons.ui.FlxUICheckBox.update","flixel/addons/ui/FlxUICheckBox.hx",224,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_243_set_checked,"flixel.addons.ui.FlxUICheckBox","set_checked",0x0960fc74,"flixel.addons.ui.FlxUICheckBox.set_checked","flixel/addons/ui/FlxUICheckBox.hx",243,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_251__clickCheck,"flixel.addons.ui.FlxUICheckBox","_clickCheck",0xbe94b6a9,"flixel.addons.ui.FlxUICheckBox._clickCheck","flixel/addons/ui/FlxUICheckBox.hx",251,0xab9d9a07)
HX_LOCAL_STACK_FRAME(_hx_pos_ce87859da0fe064b_41_boot,"flixel.addons.ui.FlxUICheckBox","boot",0xe43d00c8,"flixel.addons.ui.FlxUICheckBox.boot","flixel/addons/ui/FlxUICheckBox.hx",41,0xab9d9a07)
namespace flixel{
namespace addons{
namespace ui{

void FlxUICheckBox_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
 ::Dynamic LabelW = __o_LabelW.Default(100);
            	HX_GC_STACKFRAME(&_hx_pos_ce87859da0fe064b_17_new)
HXLINE(  37)		this->skipButtonUpdate = false;
HXLINE(  35)		this->box_space = ((Float)2);
HXLINE(  33)		this->textY = ((Float)0);
HXLINE(  32)		this->textX = ((Float)0);
HXLINE(  30)		this->checkbox_dirty = false;
HXLINE(  28)		this->textIsClickable = true;
HXLINE(  24)		this->checked = false;
HXLINE(  22)		this->max_width = ((Float)-1);
HXLINE(  73)		super::__construct(null(),null());
HXLINE(  75)		this->callback = Callback;
HXLINE(  77)		this->set_params(Params);
HXLINE(  80)		if (hx::IsNull( Box )) {
HXLINE(  83)			Box = HX_("flixel/flixel-ui/img/check_box.png",66,4a,70,4f);
            		}
HXLINE(  86)		if (::Std_obj::is(Box,hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE(  88)			this->box = ( ( ::flixel::FlxSprite)(Box) );
            		}
            		else {
HXLINE(  92)			this->box =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  93)			this->box->loadGraphic(Box,true,null(),null(),null(),null());
            		}
HXLINE(  96)		this->button =  ::flixel::addons::ui::FlxUIButton_obj::__alloc( HX_CTX ,(int)0,(int)0,Label,this->_clickCheck_dyn(),null(),null(),null());
HXLINE(  99)		( ( ::flixel::text::FlxText)(this->button->label) )->setFormat(null(),(int)8,(int)16777215,HX_("left",07,08,b0,47),::flixel::text::FlxTextBorderStyle_obj::OUTLINE_dyn(),null(),null());
HXLINE( 100)		( ( ::flixel::text::FlxText)(this->button->label) )->set_fieldWidth(LabelW);
HXLINE( 101)		this->button->up_color = (int)16777215;
HXLINE( 102)		this->button->down_color = (int)16777215;
HXLINE( 103)		this->button->over_color = (int)16777215;
HXLINE( 104)		this->button->up_toggle_color = (int)16777215;
HXLINE( 105)		this->button->down_toggle_color = (int)16777215;
HXLINE( 106)		this->button->over_toggle_color = (int)16777215;
HXLINE( 108)		 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 108)		Float _hx_tmp1 = this->box->get_width();
HXDLIN( 108)		int _hx_tmp2 = ::Std_obj::_hx_int(((_hx_tmp1 + this->box_space) + LabelW));
HXDLIN( 108)		_hx_tmp->loadGraphicSlice9(::cpp::VirtualArray_obj::__new(3)->init(0,HX_("",00,00,00,00))->init(1,HX_("",00,00,00,00))->init(2,HX_("",00,00,00,00)),_hx_tmp2,::Std_obj::_hx_int(this->box->get_height()),null(),null(),null(),null(),null(),null(),null());
HXLINE( 110)		Float _hx_tmp3 = this->box->get_width();
HXDLIN( 110)		this->max_width = ::Std_obj::_hx_int(((_hx_tmp3 + this->box_space) + LabelW));
HXLINE( 112)		this->button->onUp->callback = this->_clickCheck_dyn();
HXLINE( 114)		if (hx::IsNull( Check )) {
HXLINE( 117)			Check = HX_("flixel/flixel-ui/img/check_mark.png",28,e6,7d,ef);
            		}
HXLINE( 120)		if (::Std_obj::is(Check,hx::ClassOf< ::flixel::FlxSprite >())) {
HXLINE( 122)			this->mark = ( ( ::flixel::FlxSprite)(Check) );
            		}
            		else {
HXLINE( 126)			this->mark =  ::flixel::FlxSprite_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 127)			this->mark->loadGraphic(Check,null(),null(),null(),null(),null());
            		}
HXLINE( 130)		this->add(this->box);
HXLINE( 131)		this->add(this->mark);
HXLINE( 132)		this->add(this->button);
HXLINE( 134)		this->anchorLabelX();
HXLINE( 135)		this->anchorLabelY();
HXLINE( 137)		this->set_checked(false);
HXLINE( 140)		this->button->setAllLabelOffsets((int)0,(int)0);
HXLINE( 142)		this->set_x(X);
HXLINE( 143)		this->set_y(Y);
HXLINE( 145)		this->set_textX((int)0);
HXLINE( 146)		this->set_textY((int)0);
            	}

Dynamic FlxUICheckBox_obj::__CreateEmpty() { return new FlxUICheckBox_obj; }

void *FlxUICheckBox_obj::_hx_vtable = 0;

Dynamic FlxUICheckBox_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUICheckBox_obj > _hx_result = new FlxUICheckBox_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7]);
	return _hx_result;
}

bool FlxUICheckBox_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x263b73ac) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x263b73ac;
		}
	} else {
		if (inClassId<=(int)0x2e105115) {
			return inClassId==(int)0x282173df || inClassId==(int)0x2e105115;
		} else {
			return inClassId==(int)0x3b51ef66;
		}
	}
}

static ::flixel::addons::ui::interfaces::ICursorPointable_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ICursorPointable= {
};

static ::flixel::addons::ui::interfaces::ILabeled_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ILabeled= {
	(  ::flixel::addons::ui::FlxUIText (hx::Object::*)())&::flixel::addons::ui::FlxUICheckBox_obj::getLabel,
	(  ::flixel::addons::ui::FlxUIText (hx::Object::*)( ::flixel::addons::ui::FlxUIText))&::flixel::addons::ui::FlxUICheckBox_obj::setLabel,
};

static ::flixel::addons::ui::interfaces::IHasParams_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IHasParams= {
	( ::cpp::VirtualArray (hx::Object::*)(::cpp::VirtualArray))&::flixel::addons::ui::FlxUICheckBox_obj::set_params,
};

static ::flixel::addons::ui::interfaces::IFlxUIClickable_obj _hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IFlxUIClickable= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUICheckBox_obj::set_skipButtonUpdate,
};

void *FlxUICheckBox_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x82c13468: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ICursorPointable;
		case (int)0xa7145b87: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_ILabeled;
		case (int)0x9e5db374: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IHasParams;
		case (int)0x3e998408: return &_hx_flixel_addons_ui_FlxUICheckBox__hx_flixel_addons_ui_interfaces_IFlxUIClickable;
	}
	return super::_hx_getInterface(inHash);
}

bool FlxUICheckBox_obj::set_skipButtonUpdate(bool b){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_44_set_skipButtonUpdate)
HXLINE(  45)		this->skipButtonUpdate = b;
HXLINE(  46)		this->button->set_skipButtonUpdate(this->skipButtonUpdate);
HXLINE(  47)		return this->skipButtonUpdate;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_skipButtonUpdate,return )

::cpp::VirtualArray FlxUICheckBox_obj::set_params(::cpp::VirtualArray p){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_51_set_params)
HXLINE(  52)		this->params = p;
HXLINE(  53)		if (hx::IsNull( this->params )) {
HXLINE(  55)			this->params = ::cpp::VirtualArray_obj::__new(0);
            		}
HXLINE(  57)		 ::Dynamic nb =  ::Dynamic(hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("value",71,7f,b8,31),false)
            			->setFixed(1,HX_("name",4b,72,ff,48),HX_("checked",27,b3,24,13)));
HXLINE(  58)		this->params->push(nb);
HXLINE(  59)		return this->params;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_params,return )

int FlxUICheckBox_obj::set_color(int _tmp_Value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_63_set_color)
HXLINE(  64)		int Value = _tmp_Value;
HXDLIN(  64)		if (hx::IsNotNull( this->button )) {
HXLINE(  66)			( ( ::flixel::text::FlxText)(this->button->label) )->set_color(Value);
            		}
HXLINE(  68)		return this->super::set_color(Value);
            	}


 ::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::setLabel( ::flixel::addons::ui::FlxUIText t){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_160_setLabel)
HXDLIN( 160)		if (hx::IsNull( this->button )) {
HXDLIN( 160)			return null();
            		}
HXDLIN( 160)		this->button->set_label(t).StaticCast<  ::flixel::addons::ui::FlxUIText >();
HXDLIN( 160)		return ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,setLabel,return )

 ::flixel::addons::ui::FlxUIText FlxUICheckBox_obj::getLabel(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_161_getLabel)
HXDLIN( 161)		if (hx::IsNull( this->button )) {
HXDLIN( 161)			return null();
            		}
HXDLIN( 161)		return ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,getLabel,return )

bool FlxUICheckBox_obj::set_visible(bool Value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_164_set_visible)
HXLINE( 166)		this->visible = Value;
HXLINE( 167)		return this->visible;
            	}


void FlxUICheckBox_obj::anchorTime( ::flixel::util::FlxTimer f){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_171_anchorTime)
HXDLIN( 171)		this->anchorLabelY();
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,anchorTime,(void))

Float FlxUICheckBox_obj::set_textX(Float n){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_174_set_textX)
HXLINE( 175)		this->textX = n;
HXLINE( 176)		this->anchorLabelX();
HXLINE( 177)		return this->textX;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textX,return )

Float FlxUICheckBox_obj::set_textY(Float n){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_180_set_textY)
HXLINE( 181)		this->textY = n;
HXLINE( 182)		this->anchorLabelY();
HXLINE( 183)		return this->textY;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_textY,return )

void FlxUICheckBox_obj::anchorLabelX(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_187_anchorLabelX)
HXDLIN( 187)		if (hx::IsNotNull( this->button )) {
HXLINE( 188)			 ::flixel::math::FlxPoint _hx_tmp = ( ( ::flixel::FlxSprite)(this->button->label) )->offset;
HXDLIN( 188)			Float _hx_tmp1 = this->box->get_width();
HXDLIN( 188)			_hx_tmp->set_x(-(((_hx_tmp1 + this->box_space) + this->textX)));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelX,(void))

void FlxUICheckBox_obj::anchorLabelY(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_193_anchorLabelY)
HXDLIN( 193)		if (hx::IsNotNull( this->button )) {
HXLINE( 194)			 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 194)			Float _hx_tmp1 = this->box->y;
HXDLIN( 194)			Float _hx_tmp2 = this->box->get_height();
HXDLIN( 194)			Float _hx_tmp3 = (_hx_tmp1 + ((Float)(_hx_tmp2 - this->button->get_height()) / (Float)(int)2));
HXDLIN( 194)			_hx_tmp->set_y((_hx_tmp3 + this->textY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,anchorLabelY,(void))

void FlxUICheckBox_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_199_destroy)
HXLINE( 200)		this->super::destroy();
HXLINE( 201)		if (hx::IsNotNull( this->mark )) {
HXLINE( 202)			this->mark->destroy();
HXLINE( 203)			this->mark = null();
            		}
HXLINE( 205)		if (hx::IsNotNull( this->box )) {
HXLINE( 206)			this->box->destroy();
HXLINE( 207)			this->box = null();
            		}
HXLINE( 209)		if (hx::IsNotNull( this->button )) {
HXLINE( 210)			this->button->destroy();
HXLINE( 211)			this->button = null();
            		}
            	}


::String FlxUICheckBox_obj::get_text(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_216_get_text)
HXDLIN( 216)		return ( ( ::flixel::text::FlxText)(this->button->label) )->text;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,get_text,return )

::String FlxUICheckBox_obj::set_text(::String value){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_218_set_text)
HXLINE( 219)		( ( ::flixel::text::FlxText)(this->button->label) )->set_text(value);
HXLINE( 220)		this->checkbox_dirty = true;
HXLINE( 221)		return value;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_text,return )

void FlxUICheckBox_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_224_update)
HXLINE( 225)		this->super::update(elapsed);
HXLINE( 227)		if (this->checkbox_dirty) {
HXLINE( 228)			if (hx::IsNotNull( ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) ) )) {
HXLINE( 229)				if (::Std_obj::is(this->button->label,hx::ClassOf< ::flixel::addons::ui::FlxUIText >())) {
HXLINE( 230)					 ::flixel::addons::ui::FlxUIText ftu = ( ( ::flixel::addons::ui::FlxUIText)(this->button->label) );
HXLINE( 231)					ftu->drawFrame(null());
            				}
HXLINE( 233)				this->anchorLabelX();
HXLINE( 234)				this->anchorLabelY();
HXLINE( 235)				 ::flixel::addons::ui::FlxUIButton _hx_tmp = this->button;
HXDLIN( 235)				Float _hx_tmp1 = (this->box->frameWidth + this->box_space);
HXDLIN( 235)				_hx_tmp->set_width((_hx_tmp1 + ( ( ::flixel::text::FlxText)(this->button->label) )->textField->get_textWidth()));
HXLINE( 236)				this->checkbox_dirty = false;
            			}
            		}
            	}


bool FlxUICheckBox_obj::set_checked(bool b){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_243_set_checked)
HXLINE( 244)		this->mark->set_visible(b);
HXLINE( 245)		return (this->checked = b);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUICheckBox_obj,set_checked,return )

void FlxUICheckBox_obj::_clickCheck(){
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_251__clickCheck)
HXLINE( 252)		if (!(this->visible)) {
HXLINE( 253)			return;
            		}
HXLINE( 255)		this->set_checked(!(this->checked));
HXLINE( 256)		if (hx::IsNotNull( this->callback )) {
HXLINE( 258)			this->callback();
            		}
HXLINE( 260)		if (this->broadcastToFlxUI) {
HXLINE( 262)			::flixel::addons::ui::FlxUI_obj::event(HX_("click_check_box",dd,c1,1e,a8),hx::ObjectPtr<OBJ_>(this),this->checked,this->params);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUICheckBox_obj,_clickCheck,(void))

::String FlxUICheckBox_obj::CLICK_EVENT;


hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback) {
	hx::ObjectPtr< FlxUICheckBox_obj > __this = new FlxUICheckBox_obj();
	__this->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return __this;
}

hx::ObjectPtr< FlxUICheckBox_obj > FlxUICheckBox_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y, ::Dynamic Box, ::Dynamic Check,::String Label, ::Dynamic __o_LabelW,::cpp::VirtualArray Params, ::Dynamic Callback) {
	FlxUICheckBox_obj *__this = (FlxUICheckBox_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUICheckBox_obj), true, "flixel.addons.ui.FlxUICheckBox"));
	*(void **)__this = FlxUICheckBox_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,Box,Check,Label,__o_LabelW,Params,Callback);
	return __this;
}

FlxUICheckBox_obj::FlxUICheckBox_obj()
{
}

void FlxUICheckBox_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUICheckBox);
	HX_MARK_MEMBER_NAME(box,"box");
	HX_MARK_MEMBER_NAME(mark,"mark");
	HX_MARK_MEMBER_NAME(button,"button");
	HX_MARK_MEMBER_NAME(max_width,"max_width");
	HX_MARK_MEMBER_NAME(checked,"checked");
	HX_MARK_MEMBER_NAME(params,"params");
	HX_MARK_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_MARK_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_MARK_MEMBER_NAME(textX,"textX");
	HX_MARK_MEMBER_NAME(textY,"textY");
	HX_MARK_MEMBER_NAME(box_space,"box_space");
	HX_MARK_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_MARK_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUICheckBox_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(box,"box");
	HX_VISIT_MEMBER_NAME(mark,"mark");
	HX_VISIT_MEMBER_NAME(button,"button");
	HX_VISIT_MEMBER_NAME(max_width,"max_width");
	HX_VISIT_MEMBER_NAME(checked,"checked");
	HX_VISIT_MEMBER_NAME(params,"params");
	HX_VISIT_MEMBER_NAME(textIsClickable,"textIsClickable");
	HX_VISIT_MEMBER_NAME(checkbox_dirty,"checkbox_dirty");
	HX_VISIT_MEMBER_NAME(textX,"textX");
	HX_VISIT_MEMBER_NAME(textY,"textY");
	HX_VISIT_MEMBER_NAME(box_space,"box_space");
	HX_VISIT_MEMBER_NAME(skipButtonUpdate,"skipButtonUpdate");
	HX_VISIT_MEMBER_NAME(callback,"callback");
	 ::flixel::addons::ui::FlxUIGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxUICheckBox_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { return hx::Val( box ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { return hx::Val( mark ); }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( get_text() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { return hx::Val( textX ); }
		if (HX_FIELD_EQ(inName,"textY") ) { return hx::Val( textY ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { return hx::Val( button ); }
		if (HX_FIELD_EQ(inName,"params") ) { return hx::Val( params ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { return hx::Val( checked ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { return hx::Val( callback ); }
		if (HX_FIELD_EQ(inName,"setLabel") ) { return hx::Val( setLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLabel") ) { return hx::Val( getLabel_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_text") ) { return hx::Val( get_text_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_text") ) { return hx::Val( set_text_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { return hx::Val( max_width ); }
		if (HX_FIELD_EQ(inName,"box_space") ) { return hx::Val( box_space ); }
		if (HX_FIELD_EQ(inName,"set_color") ) { return hx::Val( set_color_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textX") ) { return hx::Val( set_textX_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_textY") ) { return hx::Val( set_textY_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_params") ) { return hx::Val( set_params_dyn() ); }
		if (HX_FIELD_EQ(inName,"anchorTime") ) { return hx::Val( anchorTime_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"set_visible") ) { return hx::Val( set_visible_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_checked") ) { return hx::Val( set_checked_dyn() ); }
		if (HX_FIELD_EQ(inName,"_clickCheck") ) { return hx::Val( _clickCheck_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"anchorLabelX") ) { return hx::Val( anchorLabelX_dyn() ); }
		if (HX_FIELD_EQ(inName,"anchorLabelY") ) { return hx::Val( anchorLabelY_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { return hx::Val( checkbox_dirty ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { return hx::Val( textIsClickable ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { return hx::Val( skipButtonUpdate ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"set_skipButtonUpdate") ) { return hx::Val( set_skipButtonUpdate_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUICheckBox_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"box") ) { box=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"mark") ) { mark=inValue.Cast<  ::flixel::FlxSprite >(); return inValue; }
		if (HX_FIELD_EQ(inName,"text") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_text(inValue.Cast< ::String >()) ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"textX") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textX(inValue.Cast< Float >()) );textX=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"textY") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_textY(inValue.Cast< Float >()) );textY=inValue.Cast< Float >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"button") ) { button=inValue.Cast<  ::flixel::addons::ui::FlxUIButton >(); return inValue; }
		if (HX_FIELD_EQ(inName,"params") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_params(inValue.Cast< ::cpp::VirtualArray >()) );params=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"checked") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_checked(inValue.Cast< bool >()) );checked=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"callback") ) { callback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"max_width") ) { max_width=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"box_space") ) { box_space=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"checkbox_dirty") ) { checkbox_dirty=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"textIsClickable") ) { textIsClickable=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"skipButtonUpdate") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_skipButtonUpdate(inValue.Cast< bool >()) );skipButtonUpdate=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUICheckBox_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"));
	outFields->push(HX_HCSTRING("mark","\x0d","\x40","\x56","\x48"));
	outFields->push(HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"));
	outFields->push(HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"));
	outFields->push(HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"));
	outFields->push(HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"));
	outFields->push(HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4"));
	outFields->push(HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5"));
	outFields->push(HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d"));
	outFields->push(HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d"));
	outFields->push(HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88"));
	outFields->push(HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"));
	outFields->push(HX_HCSTRING("text","\xad","\xcc","\xf9","\x4c"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUICheckBox_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,box),HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00")},
	{hx::fsObject /*::flixel::FlxSprite*/ ,(int)offsetof(FlxUICheckBox_obj,mark),HX_HCSTRING("mark","\x0d","\x40","\x56","\x48")},
	{hx::fsObject /*::flixel::addons::ui::FlxUIButton*/ ,(int)offsetof(FlxUICheckBox_obj,button),HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,max_width),HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checked),HX_HCSTRING("checked","\x27","\xb3","\x24","\x13")},
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(FlxUICheckBox_obj,params),HX_HCSTRING("params","\x46","\xfb","\x7a","\xed")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,textIsClickable),HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,checkbox_dirty),HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textX),HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,textY),HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d")},
	{hx::fsFloat,(int)offsetof(FlxUICheckBox_obj,box_space),HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88")},
	{hx::fsBool,(int)offsetof(FlxUICheckBox_obj,skipButtonUpdate),HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUICheckBox_obj,callback),HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FlxUICheckBox_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FlxUICheckBox_obj::CLICK_EVENT,HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxUICheckBox_obj_sMemberFields[] = {
	HX_HCSTRING("box","\x0b","\xbe","\x4a","\x00"),
	HX_HCSTRING("mark","\x0d","\x40","\x56","\x48"),
	HX_HCSTRING("button","\xf2","\x61","\xe0","\xd9"),
	HX_HCSTRING("max_width","\xeb","\x9a","\x40","\xc1"),
	HX_HCSTRING("checked","\x27","\xb3","\x24","\x13"),
	HX_HCSTRING("params","\x46","\xfb","\x7a","\xed"),
	HX_HCSTRING("textIsClickable","\xeb","\xc4","\xa0","\xc4"),
	HX_HCSTRING("checkbox_dirty","\xd6","\xfd","\xf4","\xa5"),
	HX_HCSTRING("textX","\x0b","\x4b","\x99","\x0d"),
	HX_HCSTRING("textY","\x0c","\x4b","\x99","\x0d"),
	HX_HCSTRING("box_space","\x52","\x2c","\xa7","\x88"),
	HX_HCSTRING("skipButtonUpdate","\xba","\x02","\xf2","\x13"),
	HX_HCSTRING("callback","\xc5","\x99","\x06","\x7f"),
	HX_HCSTRING("set_skipButtonUpdate","\x37","\x1f","\x14","\xff"),
	HX_HCSTRING("set_params","\x83","\x09","\x80","\xe1"),
	HX_HCSTRING("set_color","\xc6","\xb9","\x56","\x71"),
	HX_HCSTRING("setLabel","\xf2","\x76","\xe3","\x7d"),
	HX_HCSTRING("getLabel","\x7e","\x1d","\x86","\xcf"),
	HX_HCSTRING("set_visible","\x95","\xdf","\x8b","\x33"),
	HX_HCSTRING("anchorTime","\x22","\x11","\x4e","\xc0"),
	HX_HCSTRING("set_textX","\x6e","\x93","\x93","\x34"),
	HX_HCSTRING("set_textY","\x6f","\x93","\x93","\x34"),
	HX_HCSTRING("anchorLabelX","\x39","\x9c","\x79","\x27"),
	HX_HCSTRING("anchorLabelY","\x3a","\x9c","\x79","\x27"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("get_text","\x36","\x88","\xb4","\xcc"),
	HX_HCSTRING("set_text","\xaa","\xe1","\x11","\x7b"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("set_checked","\x4a","\x1a","\x8c","\xa3"),
	HX_HCSTRING("_clickCheck","\x7f","\xd4","\xbf","\x58"),
	::String(null()) };

static void FlxUICheckBox_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUICheckBox_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxUICheckBox_obj::CLICK_EVENT,"CLICK_EVENT");
};

#endif

hx::Class FlxUICheckBox_obj::__mClass;

static ::String FlxUICheckBox_obj_sStaticFields[] = {
	HX_HCSTRING("CLICK_EVENT","\x63","\x89","\xc0","\x0d"),
	::String(null())
};

void FlxUICheckBox_obj::__register()
{
	hx::Object *dummy = new FlxUICheckBox_obj;
	FlxUICheckBox_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUICheckBox","\x98","\x2b","\x10","\xfe");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUICheckBox_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FlxUICheckBox_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUICheckBox_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUICheckBox_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUICheckBox_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUICheckBox_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUICheckBox_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxUICheckBox_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ce87859da0fe064b_41_boot)
HXDLIN(  41)		CLICK_EVENT = HX_("click_check_box",dd,c1,1e,a8);
            	}
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
