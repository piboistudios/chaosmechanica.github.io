// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_system_debug_DebuggerUtil
#include <flixel/system/debug/DebuggerUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_TooltipOverlay
#include <flixel/system/debug/TooltipOverlay.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Bitmap
#include <openfl/_legacy/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_MovieClip
#include <openfl/_legacy/display/MovieClip.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_PixelSnapping
#include <openfl/_legacy/display/PixelSnapping.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Stage
#include <openfl/_legacy/display/Stage.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_MouseEvent
#include <openfl/_legacy/events/MouseEvent.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Point
#include <openfl/_legacy/geom/Point.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_TextField
#include <openfl/_legacy/text/TextField.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5991393b6edf960d_114_new,"flixel.system.debug.TooltipOverlay","new",0x36d00ee7,"flixel.system.debug.TooltipOverlay.new","flixel/system/debug/Tooltip.hx",114,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_144_destroy,"flixel.system.debug.TooltipOverlay","destroy",0xdc11bb01,"flixel.system.debug.TooltipOverlay.destroy","flixel/system/debug/Tooltip.hx",144,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_162_resize,"flixel.system.debug.TooltipOverlay","resize",0x5bf5a9cd,"flixel.system.debug.TooltipOverlay.resize","flixel/system/debug/Tooltip.hx",162,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_175_reposition,"flixel.system.debug.TooltipOverlay","reposition",0xd7a41fb5,"flixel.system.debug.TooltipOverlay.reposition","flixel/system/debug/Tooltip.hx",175,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_182_setVisible,"flixel.system.debug.TooltipOverlay","setVisible",0x28454d49,"flixel.system.debug.TooltipOverlay.setVisible","flixel/system/debug/Tooltip.hx",182,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_194_toggleVisible,"flixel.system.debug.TooltipOverlay","toggleVisible",0xd0a20885,"flixel.system.debug.TooltipOverlay.toggleVisible","flixel/system/debug/Tooltip.hx",194,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_199_putOnTop,"flixel.system.debug.TooltipOverlay","putOnTop",0x10f53180,"flixel.system.debug.TooltipOverlay.putOnTop","flixel/system/debug/Tooltip.hx",199,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_202_update,"flixel.system.debug.TooltipOverlay","update",0xda7fd5e2,"flixel.system.debug.TooltipOverlay.update","flixel/system/debug/Tooltip.hx",202,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_208_updateSize,"flixel.system.debug.TooltipOverlay","updateSize",0x374a3bc3,"flixel.system.debug.TooltipOverlay.updateSize","flixel/system/debug/Tooltip.hx",208,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_219_ensureOnScreen,"flixel.system.debug.TooltipOverlay","ensureOnScreen",0xbc6422a2,"flixel.system.debug.TooltipOverlay.ensureOnScreen","flixel/system/debug/Tooltip.hx",219,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_236_handleMouseEvents,"flixel.system.debug.TooltipOverlay","handleMouseEvents",0x22de651d,"flixel.system.debug.TooltipOverlay.handleMouseEvents","flixel/system/debug/Tooltip.hx",236,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_61_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",61,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_66_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",66,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_71_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",71,0x5d425da4)
HX_LOCAL_STACK_FRAME(_hx_pos_5991393b6edf960d_76_boot,"flixel.system.debug.TooltipOverlay","boot",0xb755fbcb,"flixel.system.debug.TooltipOverlay.boot","flixel/system/debug/Tooltip.hx",76,0x5d425da4)
namespace flixel{
namespace _hx_system{
namespace debug{

void TooltipOverlay_obj::__construct( ::openfl::_legacy::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height){
Float width = __o_width.Default(0);
Float height = __o_height.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_5991393b6edf960d_114_new)
HXLINE( 115)		super::__construct();
HXLINE( 117)		this->owner = target;
HXLINE( 119)		this->maxSize =  ::openfl::_legacy::geom::Point_obj::__alloc( HX_CTX ,width,height);
HXLINE( 121)		this->_shadow =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)2,true,(int)-16777216,null()),null(),null());
HXLINE( 122)		this->_background =  ::openfl::_legacy::display::Bitmap_obj::__alloc( HX_CTX , ::openfl::_legacy::display::BitmapData_obj::__alloc( HX_CTX ,(int)1,(int)1,true,(int)-12961222,null()),null(),null());
HXLINE( 124)		this->_text = ::flixel::_hx_system::debug::DebuggerUtil_obj::createTextField((int)2,(int)1,null(),null());
HXLINE( 125)		this->_text->set_alpha(((Float)0.8));
HXLINE( 126)		this->_text->set_text(text);
HXLINE( 127)		this->_text->set_wordWrap(true);
HXLINE( 129)		this->addChild(this->_shadow);
HXLINE( 130)		this->addChild(this->_background);
HXLINE( 131)		this->addChild(this->_text);
HXLINE( 133)		this->updateSize();
HXLINE( 134)		this->setVisible(false);
HXLINE( 136)		this->owner->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER,this->handleMouseEvents_dyn(),null(),null(),null());
HXLINE( 137)		this->owner->addEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT,this->handleMouseEvents_dyn(),null(),null(),null());
            	}

Dynamic TooltipOverlay_obj::__CreateEmpty() { return new TooltipOverlay_obj; }

void *TooltipOverlay_obj::_hx_vtable = 0;

Dynamic TooltipOverlay_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< TooltipOverlay_obj > _hx_result = new TooltipOverlay_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool TooltipOverlay_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x306ae42a) {
		if (inClassId<=(int)0x25b00754) {
			if (inClassId<=(int)0x1e88cdcf) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1e88cdcf;
			} else {
				return inClassId==(int)0x25b00754;
			}
		} else {
			return inClassId==(int)0x306ae42a;
		}
	} else {
		if (inClassId<=(int)0x4e3cd7b1) {
			return inClassId==(int)0x3d2d7617 || inClassId==(int)0x4e3cd7b1;
		} else {
			return inClassId==(int)0x5fcdb6d3;
		}
	}
}

void TooltipOverlay_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_144_destroy)
HXLINE( 145)		this->_shadow = ( ( ::openfl::_legacy::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_shadow)) );
HXLINE( 146)		this->_background = ( ( ::openfl::_legacy::display::Bitmap)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_background)) );
HXLINE( 147)		this->_text = ( ( ::openfl::_legacy::text::TextField)(::flixel::util::FlxDestroyUtil_obj::removeChild(hx::ObjectPtr<OBJ_>(this),this->_text)) );
HXLINE( 148)		this->maxSize = null();
HXLINE( 150)		this->owner->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER,this->handleMouseEvents_dyn(),null());
HXLINE( 151)		this->owner->removeEventListener(::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT,this->handleMouseEvents_dyn(),null());
HXLINE( 152)		this->owner = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,destroy,(void))

void TooltipOverlay_obj::resize(Float Width,Float Height){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_162_resize)
HXLINE( 163)		this->maxSize->x = ::Std_obj::_hx_int(::Math_obj::abs(Width));
HXLINE( 164)		this->maxSize->y = ::Std_obj::_hx_int(::Math_obj::abs(Height));
HXLINE( 165)		this->updateSize();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,resize,(void))

void TooltipOverlay_obj::reposition(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_175_reposition)
HXLINE( 176)		this->set_x(X);
HXLINE( 177)		this->set_y(Y);
HXLINE( 178)		this->ensureOnScreen();
            	}


HX_DEFINE_DYNAMIC_FUNC2(TooltipOverlay_obj,reposition,(void))

void TooltipOverlay_obj::setVisible(bool Value){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_182_setVisible)
HXLINE( 183)		this->set_visible(Value);
HXLINE( 185)		if (this->get_visible()) {
HXLINE( 187)			this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
HXLINE( 188)			this->ensureOnScreen();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,setVisible,(void))

void TooltipOverlay_obj::toggleVisible(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_194_toggleVisible)
HXDLIN( 194)		this->setVisible(!(this->get_visible()));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,toggleVisible,(void))

void TooltipOverlay_obj::putOnTop(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_199_putOnTop)
HXDLIN( 199)		this->get_parent()->addChild(hx::ObjectPtr<OBJ_>(this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,putOnTop,(void))

void TooltipOverlay_obj::update(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_202_update)
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,update,(void))

void TooltipOverlay_obj::updateSize(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_208_updateSize)
HXLINE( 209)		Float _hx_tmp;
HXDLIN( 209)		if ((this->maxSize->x <= (int)0)) {
HXLINE( 209)			_hx_tmp = this->_text->get_textWidth();
            		}
            		else {
HXLINE( 209)			_hx_tmp = ::Math_obj::abs(this->maxSize->x);
            		}
HXDLIN( 209)		this->_width = (::Std_obj::_hx_int(_hx_tmp) + (int)8);
HXLINE( 210)		Float _hx_tmp1;
HXDLIN( 210)		if ((this->maxSize->y <= (int)0)) {
HXLINE( 210)			_hx_tmp1 = this->_text->get_textHeight();
            		}
            		else {
HXLINE( 210)			_hx_tmp1 = ::Math_obj::abs(this->maxSize->y);
            		}
HXDLIN( 210)		this->_height = (::Std_obj::_hx_int(_hx_tmp1) + (int)8);
HXLINE( 211)		this->_background->set_scaleX(this->_width);
HXLINE( 212)		this->_background->set_scaleY(this->_height);
HXLINE( 213)		this->_shadow->set_scaleX(this->_width);
HXLINE( 214)		this->_shadow->set_y(this->_height);
HXLINE( 215)		this->_text->set_width(this->_width);
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,updateSize,(void))

void TooltipOverlay_obj::ensureOnScreen(){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_219_ensureOnScreen)
HXLINE( 222)		Float _hx_tmp;
HXDLIN( 222)		if ((this->get_x() < (int)0)) {
HXLINE( 222)			_hx_tmp = (int)0;
            		}
            		else {
HXLINE( 222)			_hx_tmp = this->get_x();
            		}
HXDLIN( 222)		this->set_x(_hx_tmp);
HXLINE( 223)		Float _hx_tmp1;
HXDLIN( 223)		if ((this->get_y() < (int)0)) {
HXLINE( 223)			_hx_tmp1 = (int)0;
            		}
            		else {
HXLINE( 223)			_hx_tmp1 = this->get_y();
            		}
HXDLIN( 223)		this->set_y(_hx_tmp1);
HXLINE( 227)		Float offsetX;
HXDLIN( 227)		Float offsetX1 = this->get_x();
HXDLIN( 227)		Float offsetX2 = (offsetX1 + this->get_width());
HXDLIN( 227)		if ((offsetX2 >= ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth())) {
HXLINE( 227)			int offsetX3 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageWidth();
HXDLIN( 227)			Float offsetX4 = this->get_x();
HXDLIN( 227)			offsetX = (offsetX3 - (offsetX4 + this->get_width()));
            		}
            		else {
HXLINE( 227)			offsetX = (int)0;
            		}
HXLINE( 228)		Float offsetY;
HXDLIN( 228)		Float offsetY1 = this->get_y();
HXDLIN( 228)		Float offsetY2 = (offsetY1 + this->get_height());
HXDLIN( 228)		if ((offsetY2 >= ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight())) {
HXLINE( 228)			int offsetY3 = ::openfl::_legacy::Lib_obj::get_current()->get_stage()->get_stageHeight();
HXDLIN( 228)			Float offsetY4 = this->get_y();
HXDLIN( 228)			offsetY = (offsetY3 - (offsetY4 + this->get_height()));
            		}
            		else {
HXLINE( 228)			offsetY = (int)0;
            		}
HXLINE( 230)		{
HXLINE( 230)			 ::flixel::_hx_system::debug::TooltipOverlay _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 230)			_g->set_x((_g->get_x() + offsetX));
            		}
HXLINE( 231)		{
HXLINE( 231)			 ::flixel::_hx_system::debug::TooltipOverlay _g1 = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 231)			_g1->set_y((_g1->get_y() + offsetY));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(TooltipOverlay_obj,ensureOnScreen,(void))

void TooltipOverlay_obj::handleMouseEvents( ::openfl::_legacy::events::MouseEvent event){
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_236_handleMouseEvents)
HXDLIN( 236)		bool _hx_tmp;
HXDLIN( 236)		::String _hx_tmp1 = event->get_type();
HXDLIN( 236)		if ((_hx_tmp1 == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OVER)) {
HXDLIN( 236)			_hx_tmp = !(this->get_visible());
            		}
            		else {
HXDLIN( 236)			_hx_tmp = false;
            		}
HXDLIN( 236)		if (_hx_tmp) {
HXLINE( 238)			this->set_x((event->stageX + (int)10));
HXLINE( 239)			this->set_y((event->stageY + ((Float)10)));
HXLINE( 241)			this->setVisible(true);
            		}
            		else {
HXLINE( 243)			::String _hx_tmp2 = event->get_type();
HXDLIN( 243)			if ((_hx_tmp2 == ::openfl::_legacy::events::MouseEvent_obj::MOUSE_OUT)) {
HXLINE( 244)				this->setVisible(false);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(TooltipOverlay_obj,handleMouseEvents,(void))

int TooltipOverlay_obj::BG_COLOR;

Float TooltipOverlay_obj::TEXT_ALPHA;

int TooltipOverlay_obj::MARGIN_X;

Float TooltipOverlay_obj::MARGIN_Y;


hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__new( ::openfl::_legacy::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
	hx::ObjectPtr< TooltipOverlay_obj > __this = new TooltipOverlay_obj();
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

hx::ObjectPtr< TooltipOverlay_obj > TooltipOverlay_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::display::Sprite target,::String text,hx::Null< Float >  __o_width,hx::Null< Float >  __o_height) {
	TooltipOverlay_obj *__this = (TooltipOverlay_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(TooltipOverlay_obj), true, "flixel.system.debug.TooltipOverlay"));
	*(void **)__this = TooltipOverlay_obj::_hx_vtable;
	__this->__construct(target,text,__o_width,__o_height);
	return __this;
}

TooltipOverlay_obj::TooltipOverlay_obj()
{
}

void TooltipOverlay_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(TooltipOverlay);
	HX_MARK_MEMBER_NAME(_width,"_width");
	HX_MARK_MEMBER_NAME(_height,"_height");
	HX_MARK_MEMBER_NAME(_background,"_background");
	HX_MARK_MEMBER_NAME(_shadow,"_shadow");
	HX_MARK_MEMBER_NAME(_text,"_text");
	HX_MARK_MEMBER_NAME(owner,"owner");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void TooltipOverlay_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_width,"_width");
	HX_VISIT_MEMBER_NAME(_height,"_height");
	HX_VISIT_MEMBER_NAME(_background,"_background");
	HX_VISIT_MEMBER_NAME(_shadow,"_shadow");
	HX_VISIT_MEMBER_NAME(_text,"_text");
	HX_VISIT_MEMBER_NAME(owner,"owner");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	 ::openfl::_legacy::display::DisplayObjectContainer_obj::__Visit(HX_VISIT_ARG);
}

hx::Val TooltipOverlay_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { return hx::Val( _text ); }
		if (HX_FIELD_EQ(inName,"owner") ) { return hx::Val( owner ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { return hx::Val( _width ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { return hx::Val( _height ); }
		if (HX_FIELD_EQ(inName,"_shadow") ) { return hx::Val( _shadow ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"putOnTop") ) { return hx::Val( putOnTop_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"reposition") ) { return hx::Val( reposition_dyn() ); }
		if (HX_FIELD_EQ(inName,"setVisible") ) { return hx::Val( setVisible_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateSize") ) { return hx::Val( updateSize_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { return hx::Val( _background ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"toggleVisible") ) { return hx::Val( toggleVisible_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"ensureOnScreen") ) { return hx::Val( ensureOnScreen_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"handleMouseEvents") ) { return hx::Val( handleMouseEvents_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val TooltipOverlay_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_text") ) { _text=inValue.Cast<  ::openfl::_legacy::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"owner") ) { owner=inValue.Cast<  ::openfl::_legacy::display::Sprite >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_width") ) { _width=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_height") ) { _height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_shadow") ) { _shadow=inValue.Cast<  ::openfl::_legacy::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { maxSize=inValue.Cast<  ::openfl::_legacy::geom::Point >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_background") ) { _background=inValue.Cast<  ::openfl::_legacy::display::Bitmap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void TooltipOverlay_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"));
	outFields->push(HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"));
	outFields->push(HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"));
	outFields->push(HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"));
	outFields->push(HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"));
	outFields->push(HX_HCSTRING("owner","\x33","\x98","\x76","\x38"));
	outFields->push(HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo TooltipOverlay_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(TooltipOverlay_obj,_width),HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6")},
	{hx::fsInt,(int)offsetof(TooltipOverlay_obj,_height),HX_HCSTRING("_height","\x86","\x19","\xc3","\x70")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(TooltipOverlay_obj,_background),HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8")},
	{hx::fsObject /*::openfl::_legacy::display::Bitmap*/ ,(int)offsetof(TooltipOverlay_obj,_shadow),HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b")},
	{hx::fsObject /*::openfl::_legacy::text::TextField*/ ,(int)offsetof(TooltipOverlay_obj,_text),HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00")},
	{hx::fsObject /*::openfl::_legacy::display::Sprite*/ ,(int)offsetof(TooltipOverlay_obj,owner),HX_HCSTRING("owner","\x33","\x98","\x76","\x38")},
	{hx::fsObject /*::openfl::_legacy::geom::Point*/ ,(int)offsetof(TooltipOverlay_obj,maxSize),HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo TooltipOverlay_obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &TooltipOverlay_obj::BG_COLOR,HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b")},
	{hx::fsFloat,(void *) &TooltipOverlay_obj::TEXT_ALPHA,HX_HCSTRING("TEXT_ALPHA","\xec","\xfa","\x4e","\xdd")},
	{hx::fsInt,(void *) &TooltipOverlay_obj::MARGIN_X,HX_HCSTRING("MARGIN_X","\xc7","\x56","\x52","\x9e")},
	{hx::fsFloat,(void *) &TooltipOverlay_obj::MARGIN_Y,HX_HCSTRING("MARGIN_Y","\xc8","\x56","\x52","\x9e")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String TooltipOverlay_obj_sMemberFields[] = {
	HX_HCSTRING("_width","\x47","\xfd","\x49","\xc6"),
	HX_HCSTRING("_height","\x86","\x19","\xc3","\x70"),
	HX_HCSTRING("_background","\x0d","\x61","\xa7","\xf8"),
	HX_HCSTRING("_shadow","\x7f","\xd9","\x97","\x8b"),
	HX_HCSTRING("_text","\x8c","\xe8","\x0a","\x00"),
	HX_HCSTRING("owner","\x33","\x98","\x76","\x38"),
	HX_HCSTRING("maxSize","\x85","\xf9","\x83","\xcc"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("reposition","\x5c","\x6f","\x62","\xa5"),
	HX_HCSTRING("setVisible","\xf0","\x9c","\x03","\xf6"),
	HX_HCSTRING("toggleVisible","\x3e","\xbb","\xe1","\x53"),
	HX_HCSTRING("putOnTop","\x67","\x79","\x64","\x2e"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("updateSize","\x6a","\x8b","\x08","\x05"),
	HX_HCSTRING("ensureOnScreen","\xc9","\xd1","\xe0","\x10"),
	HX_HCSTRING("handleMouseEvents","\x56","\x68","\x00","\x8a"),
	::String(null()) };

static void TooltipOverlay_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_MARK_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#ifdef HXCPP_VISIT_ALLOCS
static void TooltipOverlay_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::BG_COLOR,"BG_COLOR");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::TEXT_ALPHA,"TEXT_ALPHA");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_X,"MARGIN_X");
	HX_VISIT_MEMBER_NAME(TooltipOverlay_obj::MARGIN_Y,"MARGIN_Y");
};

#endif

hx::Class TooltipOverlay_obj::__mClass;

static ::String TooltipOverlay_obj_sStaticFields[] = {
	HX_HCSTRING("BG_COLOR","\x09","\x4c","\xa7","\x0b"),
	HX_HCSTRING("TEXT_ALPHA","\xec","\xfa","\x4e","\xdd"),
	HX_HCSTRING("MARGIN_X","\xc7","\x56","\x52","\x9e"),
	HX_HCSTRING("MARGIN_Y","\xc8","\x56","\x52","\x9e"),
	::String(null())
};

void TooltipOverlay_obj::__register()
{
	hx::Object *dummy = new TooltipOverlay_obj;
	TooltipOverlay_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.system.debug.TooltipOverlay","\x75","\x0f","\xff","\x4b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = TooltipOverlay_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(TooltipOverlay_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(TooltipOverlay_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< TooltipOverlay_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = TooltipOverlay_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = TooltipOverlay_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = TooltipOverlay_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void TooltipOverlay_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_61_boot)
HXDLIN(  61)		BG_COLOR = (int)-12961222;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_66_boot)
HXDLIN(  66)		TEXT_ALPHA = ((Float)0.8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_71_boot)
HXDLIN(  71)		MARGIN_X = (int)10;
            	}
{
            	HX_STACKFRAME(&_hx_pos_5991393b6edf960d_76_boot)
HXDLIN(  76)		MARGIN_Y = ((Float)10);
            	}
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
