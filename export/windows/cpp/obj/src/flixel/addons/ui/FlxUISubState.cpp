// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
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
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_FlxSubState
#include <flixel/FlxSubState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_transition_FlxTransitionableState
#include <flixel/addons/transition/FlxTransitionableState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUI
#include <flixel/addons/ui/FlxUI.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUICursor
#include <flixel/addons/ui/FlxUICursor.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIGroup
#include <flixel/addons/ui/FlxUIGroup.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIState
#include <flixel/addons/ui/FlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISubState
#include <flixel/addons/ui/FlxUISubState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltip
#include <flixel/addons/ui/FlxUITooltip.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUITooltipManager
#include <flixel/addons/ui/FlxUITooltipManager.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_U
#include <flixel/addons/ui/U.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IEventGetter
#include <flixel/addons/ui/interfaces/IEventGetter.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFireTongue
#include <flixel/addons/ui/interfaces/IFireTongue.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIState
#include <flixel/addons/ui/interfaces/IFlxUIState.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_input_FlxPointer
#include <flixel/input/FlxPointer.h>
#endif
#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
#ifndef INCLUDED_flixel_input_mouse_FlxMouse
#include <flixel/input/mouse/FlxMouse.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_system_scaleModes_BaseScaleMode
#include <flixel/system/scaleModes/BaseScaleMode.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_xml_Fast
#include <haxe/xml/Fast.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_26_new,"flixel.addons.ui.FlxUISubState","new",0x76fcf9d8,"flixel.addons.ui.FlxUISubState.new","flixel/addons/ui/FlxUISubState.hx",26,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_58_forceScrollFactor,"flixel.addons.ui.FlxUISubState","forceScrollFactor",0x43e16abf,"flixel.addons.ui.FlxUISubState.forceScrollFactor","flixel/addons/ui/FlxUISubState.hx",58,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_69_forceFocus,"flixel.addons.ui.FlxUISubState","forceFocus",0x1fc1bf75,"flixel.addons.ui.FlxUISubState.forceFocus","flixel/addons/ui/FlxUISubState.hx",69,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_79_create,"flixel.addons.ui.FlxUISubState","create",0x3e177884,"flixel.addons.ui.FlxUISubState.create","flixel/addons/ui/FlxUISubState.hx",79,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_145_onCursorEvent,"flixel.addons.ui.FlxUISubState","onCursorEvent",0x2ce8edfd,"flixel.addons.ui.FlxUISubState.onCursorEvent","flixel/addons/ui/FlxUISubState.hx",145,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_149_onShowTooltip,"flixel.addons.ui.FlxUISubState","onShowTooltip",0x756b161f,"flixel.addons.ui.FlxUISubState.onShowTooltip","flixel/addons/ui/FlxUISubState.hx",149,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_154_onResize,"flixel.addons.ui.FlxUISubState","onResize",0x497dd3fb,"flixel.addons.ui.FlxUISubState.onResize","flixel/addons/ui/FlxUISubState.hx",154,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_161_update,"flixel.addons.ui.FlxUISubState","update",0x490d9791,"flixel.addons.ui.FlxUISubState.update","flixel/addons/ui/FlxUISubState.hx",161,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_174_destroy,"flixel.addons.ui.FlxUISubState","destroy",0x298d7272,"flixel.addons.ui.FlxUISubState.destroy","flixel/addons/ui/FlxUISubState.hx",174,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_192_getEvent,"flixel.addons.ui.FlxUISubState","getEvent",0x36f15b2c,"flixel.addons.ui.FlxUISubState.getEvent","flixel/addons/ui/FlxUISubState.hx",192,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_198_getRequest,"flixel.addons.ui.FlxUISubState","getRequest",0x1849dae1,"flixel.addons.ui.FlxUISubState.getRequest","flixel/addons/ui/FlxUISubState.hx",198,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_201_getText,"flixel.addons.ui.FlxUISubState","getText",0x2483c1db,"flixel.addons.ui.FlxUISubState.getText","flixel/addons/ui/FlxUISubState.hx",201,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_215_cleanup,"flixel.addons.ui.FlxUISubState","cleanup",0xb049519c,"flixel.addons.ui.FlxUISubState.cleanup","flixel/addons/ui/FlxUISubState.hx",215,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_224_createCursor,"flixel.addons.ui.FlxUISubState","createCursor",0x5d8fb67a,"flixel.addons.ui.FlxUISubState.createCursor","flixel/addons/ui/FlxUISubState.hx",224,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_231_createUI,"flixel.addons.ui.FlxUISubState","createUI",0x8d49ebd8,"flixel.addons.ui.FlxUISubState.createUI","flixel/addons/ui/FlxUISubState.hx",231,0x21143c79)
HX_LOCAL_STACK_FRAME(_hx_pos_7cb0bdd552c3a9aa_234_reloadUI,"flixel.addons.ui.FlxUISubState","reloadUI",0x9a336975,"flixel.addons.ui.FlxUISubState.reloadUI","flixel/addons/ui/FlxUISubState.hx",234,0x21143c79)
namespace flixel{
namespace addons{
namespace ui{

void FlxUISubState_obj::__construct(hx::Null< int >  __o_BGColor){
int BGColor = __o_BGColor.Default(0);
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_26_new)
HXLINE(  50)		this->getTextFallback = null();
HXLINE(  48)		this->_reload_countdown = (int)0;
HXLINE(  47)		this->_reload = false;
HXLINE(  45)		this->reload_ui_on_resize = false;
HXLINE(  40)		this->_xml_id = HX_("",00,00,00,00);
HXLINE(  31)		this->cursor = null();
HXLINE(  54)		super::__construct(BGColor);
            	}

Dynamic FlxUISubState_obj::__CreateEmpty() { return new FlxUISubState_obj; }

void *FlxUISubState_obj::_hx_vtable = 0;

Dynamic FlxUISubState_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUISubState_obj > _hx_result = new FlxUISubState_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxUISubState_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x2335d9a7) {
			if (inClassId<=(int)0x0da84e24) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0da84e24;
			} else {
				return inClassId==(int)0x2335d9a7;
			}
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x3634c52c || inClassId==(int)0x7f681f43;
	}
}

static ::flixel::addons::ui::interfaces::IEventGetter_obj _hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IEventGetter= {
	( void (hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getEvent,
	(  ::Dynamic (hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getRequest,
};

static ::flixel::addons::ui::interfaces::IFlxUIState_obj _hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IFlxUIState= {
	( void (hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getEvent,
	(  ::Dynamic (hx::Object::*)(::String,::Dynamic, ::Dynamic,::cpp::VirtualArray))&::flixel::addons::ui::FlxUISubState_obj::getRequest,
	( void (hx::Object::*)(bool,::Dynamic))&::flixel::addons::ui::FlxUISubState_obj::forceFocus,
};

void *FlxUISubState_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xdcf9e4f9: return &_hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IEventGetter;
		case (int)0x0bdac137: return &_hx_flixel_addons_ui_FlxUISubState__hx_flixel_addons_ui_interfaces_IFlxUIState;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUISubState_obj::forceScrollFactor(Float X,Float Y){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_58_forceScrollFactor)
HXDLIN(  58)		if (hx::IsNotNull( this->_ui )) {
HXLINE(  59)			{
HXLINE(  59)				int _g = (int)0;
HXDLIN(  59)				::Array< ::Dynamic> _g1 = this->_ui->group->members;
HXDLIN(  59)				while((_g < _g1->length)){
HXLINE(  59)					 ::flixel::FlxSprite w = _g1->__get(_g).StaticCast<  ::flixel::FlxSprite >();
HXDLIN(  59)					_g = (_g + (int)1);
HXLINE(  60)					w->scrollFactor->set(X,Y);
            				}
            			}
HXLINE(  62)			if (hx::IsNotNull( this->_ui->scrollFactor )) {
HXLINE(  63)				this->_ui->scrollFactor->set(X,Y);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,forceScrollFactor,(void))

void FlxUISubState_obj::forceFocus(bool b,::Dynamic thing){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_69_forceFocus)
HXDLIN(  69)		if (hx::IsNotNull( this->_ui )) {
HXLINE(  70)			if (b) {
HXLINE(  71)				this->_ui->set_focus(thing);
            			}
            			else {
HXLINE(  73)				this->_ui->set_focus(null());
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,forceFocus,(void))

void FlxUISubState_obj::create(){
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_79_create)
HXLINE(  80)		if (hx::IsNotNull( ::flixel::addons::ui::FlxUIState_obj::static_tongue )) {
HXLINE(  81)			this->_tongue = ::flixel::addons::ui::FlxUIState_obj::static_tongue;
            		}
HXLINE(  85)		if ((this->_makeCursor == true)) {
HXLINE(  87)			this->cursor = this->createCursor();
            		}
HXLINE(  91)		this->tooltips =  ::flixel::addons::ui::FlxUITooltipManager_obj::__alloc( HX_CTX ,null(),hx::ObjectPtr<OBJ_>(this));
HXLINE(  93)		this->_ui = this->createUI(null(),hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE(  94)		this->add(this->_ui);
HXLINE(  96)		this->_ui->getTextFallback = this->getTextFallback;
HXLINE(  98)		bool _hx_tmp;
HXDLIN(  98)		if ((this->_xml_id != HX_("",00,00,00,00))) {
HXLINE(  98)			_hx_tmp = hx::IsNotNull( this->_xml_id );
            		}
            		else {
HXLINE(  98)			_hx_tmp = false;
            		}
HXDLIN(  98)		if (_hx_tmp) {
HXLINE( 100)			 ::haxe::xml::Fast data = ( ( ::haxe::xml::Fast)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
HXLINE( 101)			if (hx::IsNull( data )) {
HXLINE( 103)				data = ( ( ::haxe::xml::Fast)(::flixel::addons::ui::U_obj::xml(this->_xml_id,HX_("xml",d7,6d,5b,00),true,HX_("",00,00,00,00))) );
            			}
HXLINE( 106)			if (hx::IsNull( data )) {
HXLINE( 109)				::flixel::FlxG_obj::log->advanced(((HX_("FlxUISubstate: Could not load _xml_id \"",b3,e5,1e,eb) + this->_xml_id) + HX_("\"",22,00,00,00)),::flixel::_hx_system::debug::log::LogStyle_obj::ERROR,true);
            			}
            			else {
HXLINE( 114)				this->_ui->load(data);
            			}
            		}
            		else {
HXLINE( 119)			this->_ui->load(null());
            		}
HXLINE( 123)		bool _hx_tmp1;
HXDLIN( 123)		if (hx::IsNotNull( this->cursor )) {
HXLINE( 123)			_hx_tmp1 = hx::IsNotNull( this->_ui );
            		}
            		else {
HXLINE( 123)			_hx_tmp1 = false;
            		}
HXDLIN( 123)		if (_hx_tmp1) {
HXLINE( 124)			this->add(this->cursor);
HXLINE( 125)			this->cursor->addWidgetsFromUI(this->_ui);
HXLINE( 126)			this->cursor->findVisibleLocation((int)0,null(),null());
            		}
HXLINE( 129)		::flixel::FlxG_obj::mouse->set_visible(true);
HXLINE( 132)		this->tooltips->init();
HXLINE( 134)		this->super::create();
HXLINE( 136)		this->cleanup();
HXLINE( 138)		if (::Std_obj::is(this->_parentState,hx::ClassOf< ::flixel::addons::ui::FlxUIState >())) {
HXLINE( 139)			this->reload_ui_on_resize = hx::TCast<  ::flixel::addons::ui::FlxUIState >::cast(this->_parentState)->reload_ui_on_resize;
            		}
            	}


void FlxUISubState_obj::onCursorEvent(::String code,::Dynamic target){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_145_onCursorEvent)
HXDLIN( 145)		this->getEvent(code,target,null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUISubState_obj,onCursorEvent,(void))

void FlxUISubState_obj::onShowTooltip( ::flixel::addons::ui::FlxUITooltip t){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_149_onShowTooltip)
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUISubState_obj,onShowTooltip,(void))

void FlxUISubState_obj::onResize(int Width,int Height){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_154_onResize)
HXDLIN( 154)		if (this->reload_ui_on_resize) {
HXLINE( 155)			::flixel::FlxG_obj::scaleMode->onMeasure(Width,Height);
HXLINE( 156)			this->_reload_countdown = (int)5;
HXLINE( 157)			this->_reload = true;
            		}
            	}


void FlxUISubState_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_161_update)
HXLINE( 162)		this->super::update(elapsed);
HXLINE( 163)		this->tooltips->update(elapsed);
HXLINE( 164)		if (this->_reload) {
HXLINE( 165)			if ((this->_reload_countdown > (int)0)) {
HXLINE( 166)				this->_reload_countdown--;
HXLINE( 167)				if ((this->_reload_countdown == (int)0)) {
HXLINE( 168)					this->reloadUI();
            				}
            			}
            		}
            	}


void FlxUISubState_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_174_destroy)
HXLINE( 175)		this->destroyed = true;
HXLINE( 177)		if (hx::IsNotNull( this->tooltips )) {
HXLINE( 179)			this->tooltips->destroy();
HXLINE( 180)			this->tooltips = null();
            		}
HXLINE( 183)		if (hx::IsNotNull( this->_ui )) {
HXLINE( 184)			this->_ui->destroy();
HXLINE( 185)			this->remove(this->_ui,true);
HXLINE( 186)			this->_ui = null();
            		}
HXLINE( 189)		this->super::destroy();
            	}


void FlxUISubState_obj::getEvent(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_192_getEvent)
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUISubState_obj,getEvent,(void))

 ::Dynamic FlxUISubState_obj::getRequest(::String id,::Dynamic sender, ::Dynamic data,::cpp::VirtualArray params){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_198_getRequest)
HXDLIN( 198)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxUISubState_obj,getRequest,return )

::String FlxUISubState_obj::getText(::String Flag,::String __o_Context,hx::Null< bool >  __o_Safe){
::String Context = __o_Context.Default(HX_HCSTRING("ui","\x54","\x66","\x00","\x00"));
bool Safe = __o_Safe.Default(true);
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_201_getText)
HXLINE( 202)		if (hx::IsNotNull( this->_tongue )) {
HXLINE( 203)			return ::flixel::addons::ui::interfaces::IFireTongue_obj::get(this->_tongue,Flag,Context,Safe);
            		}
HXLINE( 205)		if (hx::IsNotNull( this->getTextFallback )) {
HXLINE( 206)			return ( (::String)(this->getTextFallback(Flag,Context,Safe)) );
            		}
HXLINE( 208)		return Flag;
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxUISubState_obj,getText,return )

void FlxUISubState_obj::cleanup(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_215_cleanup)
HXDLIN( 215)		this->_ui->cleanup();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,cleanup,(void))

 ::flixel::addons::ui::FlxUICursor FlxUISubState_obj::createCursor(){
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_224_createCursor)
HXDLIN( 224)		return  ::flixel::addons::ui::FlxUICursor_obj::__alloc( HX_CTX ,this->onCursorEvent_dyn(),null(),null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,createCursor,return )

 ::flixel::addons::ui::FlxUI FlxUISubState_obj::createUI( ::haxe::xml::Fast data,::Dynamic ptr, ::flixel::addons::ui::FlxUI superIndex_,::Dynamic tongue_,::String __o_liveFilePath_){
::String liveFilePath_ = __o_liveFilePath_.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_GC_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_231_createUI)
HXDLIN( 231)		return  ::flixel::addons::ui::FlxUI_obj::__alloc( HX_CTX ,data,ptr,superIndex_,tongue_,liveFilePath_,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxUISubState_obj,createUI,return )

void FlxUISubState_obj::reloadUI(){
            	HX_STACKFRAME(&_hx_pos_7cb0bdd552c3a9aa_234_reloadUI)
HXLINE( 235)		if (hx::IsNotNull( this->_ui )) {
HXLINE( 236)			this->remove(this->_ui,true);
HXLINE( 237)			this->_ui->destroy();
HXLINE( 238)			this->_ui = null();
            		}
HXLINE( 241)		this->_ui = this->createUI(null(),hx::ObjectPtr<OBJ_>(this),null(),this->_tongue,null());
HXLINE( 242)		this->add(this->_ui);
HXLINE( 244)		 ::haxe::xml::Fast data = ( ( ::haxe::xml::Fast)(::flixel::addons::ui::U_obj::xml(this->_xml_id,null(),null(),null())) );
HXLINE( 245)		this->_ui->load(data);
HXLINE( 247)		this->_reload = false;
HXLINE( 248)		this->_reload_countdown = (int)0;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUISubState_obj,reloadUI,(void))


hx::ObjectPtr< FlxUISubState_obj > FlxUISubState_obj::__new(hx::Null< int >  __o_BGColor) {
	hx::ObjectPtr< FlxUISubState_obj > __this = new FlxUISubState_obj();
	__this->__construct(__o_BGColor);
	return __this;
}

hx::ObjectPtr< FlxUISubState_obj > FlxUISubState_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< int >  __o_BGColor) {
	FlxUISubState_obj *__this = (FlxUISubState_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUISubState_obj), true, "flixel.addons.ui.FlxUISubState"));
	*(void **)__this = FlxUISubState_obj::_hx_vtable;
	__this->__construct(__o_BGColor);
	return __this;
}

FlxUISubState_obj::FlxUISubState_obj()
{
}

void FlxUISubState_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUISubState);
	HX_MARK_MEMBER_NAME(destroyed,"destroyed");
	HX_MARK_MEMBER_NAME(cursor,"cursor");
	HX_MARK_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_MARK_MEMBER_NAME(tooltips,"tooltips");
	HX_MARK_MEMBER_NAME(_xml_id,"_xml_id");
	HX_MARK_MEMBER_NAME(_ui,"_ui");
	HX_MARK_MEMBER_NAME(_tongue,"_tongue");
	HX_MARK_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_MARK_MEMBER_NAME(_reload,"_reload");
	HX_MARK_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_MARK_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::FlxSubState_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUISubState_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(destroyed,"destroyed");
	HX_VISIT_MEMBER_NAME(cursor,"cursor");
	HX_VISIT_MEMBER_NAME(_makeCursor,"_makeCursor");
	HX_VISIT_MEMBER_NAME(tooltips,"tooltips");
	HX_VISIT_MEMBER_NAME(_xml_id,"_xml_id");
	HX_VISIT_MEMBER_NAME(_ui,"_ui");
	HX_VISIT_MEMBER_NAME(_tongue,"_tongue");
	HX_VISIT_MEMBER_NAME(reload_ui_on_resize,"reload_ui_on_resize");
	HX_VISIT_MEMBER_NAME(_reload,"_reload");
	HX_VISIT_MEMBER_NAME(_reload_countdown,"_reload_countdown");
	HX_VISIT_MEMBER_NAME(getTextFallback,"getTextFallback");
	 ::flixel::FlxSubState_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxUISubState_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { return hx::Val( _ui ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { return hx::Val( cursor ); }
		if (HX_FIELD_EQ(inName,"create") ) { return hx::Val( create_dyn() ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { return hx::Val( _xml_id ); }
		if (HX_FIELD_EQ(inName,"_tongue") ) { return hx::Val( _tongue ); }
		if (HX_FIELD_EQ(inName,"_reload") ) { return hx::Val( _reload ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"getText") ) { return hx::Val( getText_dyn() ); }
		if (HX_FIELD_EQ(inName,"cleanup") ) { return hx::Val( cleanup_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { return hx::Val( tooltips ); }
		if (HX_FIELD_EQ(inName,"onResize") ) { return hx::Val( onResize_dyn() ); }
		if (HX_FIELD_EQ(inName,"getEvent") ) { return hx::Val( getEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"createUI") ) { return hx::Val( createUI_dyn() ); }
		if (HX_FIELD_EQ(inName,"reloadUI") ) { return hx::Val( reloadUI_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { return hx::Val( destroyed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"forceFocus") ) { return hx::Val( forceFocus_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRequest") ) { return hx::Val( getRequest_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { return hx::Val( _makeCursor ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"createCursor") ) { return hx::Val( createCursor_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"onCursorEvent") ) { return hx::Val( onCursorEvent_dyn() ); }
		if (HX_FIELD_EQ(inName,"onShowTooltip") ) { return hx::Val( onShowTooltip_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { return hx::Val( getTextFallback ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { return hx::Val( _reload_countdown ); }
		if (HX_FIELD_EQ(inName,"forceScrollFactor") ) { return hx::Val( forceScrollFactor_dyn() ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { return hx::Val( reload_ui_on_resize ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUISubState_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"_ui") ) { _ui=inValue.Cast<  ::flixel::addons::ui::FlxUI >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"cursor") ) { cursor=inValue.Cast<  ::flixel::addons::ui::FlxUICursor >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_xml_id") ) { _xml_id=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_tongue") ) { _tongue=inValue.Cast< ::Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_reload") ) { _reload=inValue.Cast< bool >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"tooltips") ) { tooltips=inValue.Cast<  ::flixel::addons::ui::FlxUITooltipManager >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"destroyed") ) { destroyed=inValue.Cast< bool >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_makeCursor") ) { _makeCursor=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"getTextFallback") ) { getTextFallback=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"_reload_countdown") ) { _reload_countdown=inValue.Cast< int >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"reload_ui_on_resize") ) { reload_ui_on_resize=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUISubState_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"));
	outFields->push(HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"));
	outFields->push(HX_HCSTRING("_makeCursor","\x83","\x30","\x42","\x63"));
	outFields->push(HX_HCSTRING("tooltips","\x10","\xb6","\x8a","\xd0"));
	outFields->push(HX_HCSTRING("_xml_id","\x22","\x16","\xa3","\x73"));
	outFields->push(HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"));
	outFields->push(HX_HCSTRING("_tongue","\x63","\x57","\x5b","\x02"));
	outFields->push(HX_HCSTRING("reload_ui_on_resize","\x4f","\xeb","\x1e","\x44"));
	outFields->push(HX_HCSTRING("_reload","\xf8","\x64","\x56","\x72"));
	outFields->push(HX_HCSTRING("_reload_countdown","\x6a","\x17","\x8b","\x78"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUISubState_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUISubState_obj,destroyed),HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4")},
	{hx::fsObject /*::flixel::addons::ui::FlxUICursor*/ ,(int)offsetof(FlxUISubState_obj,cursor),HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e")},
	{hx::fsBool,(int)offsetof(FlxUISubState_obj,_makeCursor),HX_HCSTRING("_makeCursor","\x83","\x30","\x42","\x63")},
	{hx::fsObject /*::flixel::addons::ui::FlxUITooltipManager*/ ,(int)offsetof(FlxUISubState_obj,tooltips),HX_HCSTRING("tooltips","\x10","\xb6","\x8a","\xd0")},
	{hx::fsString,(int)offsetof(FlxUISubState_obj,_xml_id),HX_HCSTRING("_xml_id","\x22","\x16","\xa3","\x73")},
	{hx::fsObject /*::flixel::addons::ui::FlxUI*/ ,(int)offsetof(FlxUISubState_obj,_ui),HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00")},
	{hx::fsObject /*::flixel::addons::ui::interfaces::IFireTongue*/ ,(int)offsetof(FlxUISubState_obj,_tongue),HX_HCSTRING("_tongue","\x63","\x57","\x5b","\x02")},
	{hx::fsBool,(int)offsetof(FlxUISubState_obj,reload_ui_on_resize),HX_HCSTRING("reload_ui_on_resize","\x4f","\xeb","\x1e","\x44")},
	{hx::fsBool,(int)offsetof(FlxUISubState_obj,_reload),HX_HCSTRING("_reload","\xf8","\x64","\x56","\x72")},
	{hx::fsInt,(int)offsetof(FlxUISubState_obj,_reload_countdown),HX_HCSTRING("_reload_countdown","\x6a","\x17","\x8b","\x78")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(FlxUISubState_obj,getTextFallback),HX_HCSTRING("getTextFallback","\xa5","\xc3","\x03","\x82")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxUISubState_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUISubState_obj_sMemberFields[] = {
	HX_HCSTRING("destroyed","\xd9","\x37","\x27","\xf4"),
	HX_HCSTRING("cursor","\xd6","\x8e","\xe8","\x3e"),
	HX_HCSTRING("_makeCursor","\x83","\x30","\x42","\x63"),
	HX_HCSTRING("tooltips","\x10","\xb6","\x8a","\xd0"),
	HX_HCSTRING("_xml_id","\x22","\x16","\xa3","\x73"),
	HX_HCSTRING("_ui","\x73","\x7c","\x48","\x00"),
	HX_HCSTRING("_tongue","\x63","\x57","\x5b","\x02"),
	HX_HCSTRING("reload_ui_on_resize","\x4f","\xeb","\x1e","\x44"),
	HX_HCSTRING("_reload","\xf8","\x64","\x56","\x72"),
	HX_HCSTRING("_reload_countdown","\x6a","\x17","\x8b","\x78"),
	HX_HCSTRING("getTextFallback","\xa5","\xc3","\x03","\x82"),
	HX_HCSTRING("forceScrollFactor","\x47","\x9f","\xef","\xb4"),
	HX_HCSTRING("forceFocus","\xed","\x49","\x5e","\x9b"),
	HX_HCSTRING("create","\xfc","\x66","\x0f","\x7c"),
	HX_HCSTRING("onCursorEvent","\x85","\x3e","\x90","\x61"),
	HX_HCSTRING("onShowTooltip","\xa7","\x66","\x12","\xaa"),
	HX_HCSTRING("onResize","\x73","\x50","\x28","\xe8"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("destroy","\xfa","\x2c","\x86","\x24"),
	HX_HCSTRING("getEvent","\xa4","\xd7","\x9b","\xd5"),
	HX_HCSTRING("getRequest","\x59","\x65","\xe6","\x93"),
	HX_HCSTRING("getText","\x63","\x7c","\x7c","\x1f"),
	HX_HCSTRING("cleanup","\x24","\x0c","\x42","\xab"),
	HX_HCSTRING("createCursor","\xf2","\xce","\x3d","\x61"),
	HX_HCSTRING("createUI","\x50","\x68","\xf4","\x2b"),
	HX_HCSTRING("reloadUI","\xed","\xe5","\xdd","\x38"),
	::String(null()) };

static void FlxUISubState_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUISubState_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUISubState_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUISubState_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUISubState_obj::__mClass;

void FlxUISubState_obj::__register()
{
	hx::Object *dummy = new FlxUISubState_obj;
	FlxUISubState_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUISubState","\xe6","\x6d","\x5d","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUISubState_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUISubState_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUISubState_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUISubState_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUISubState_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUISubState_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
