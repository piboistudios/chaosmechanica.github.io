// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
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
#ifndef INCLUDED_openfl_events_FocusEvent
#include <openfl/events/FocusEvent.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_20_new,"openfl.events.FocusEvent","new",0xf00a0d8b,"openfl.events.FocusEvent.new","openfl/events/FocusEvent.hx",20,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_31_clone,"openfl.events.FocusEvent","clone",0x40033148,"openfl.events.FocusEvent.clone","openfl/events/FocusEvent.hx",31,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_46_toString,"openfl.events.FocusEvent","toString",0x8b53f7a1,"openfl.events.FocusEvent.toString","openfl/events/FocusEvent.hx",46,0xe559e625)
static const ::String _hx_array_data_ade3ec19_3[] = {
	HX_("type",ba,f2,08,4d),HX_("bubbles",67,bb,56,61),HX_("cancelable",14,a0,79,c4),HX_("relatedObject",0a,bf,cb,e8),HX_("shiftKey",3d,92,9f,99),HX_("keyCode",6c,22,9e,9b),
};
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_10_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",10,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_11_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",11,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_12_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",12,0xe559e625)
HX_LOCAL_STACK_FRAME(_hx_pos_919c1dfcca12e2f6_13_boot,"openfl.events.FocusEvent","boot",0x10dacca7,"openfl.events.FocusEvent.boot","openfl/events/FocusEvent.hx",13,0xe559e625)
namespace openfl{
namespace events{

void FocusEvent_obj::__construct(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode){
bool bubbles = __o_bubbles.Default(false);
bool cancelable = __o_cancelable.Default(false);
bool shiftKey = __o_shiftKey.Default(false);
int keyCode = __o_keyCode.Default(0);
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_20_new)
HXLINE(  22)		super::__construct(type,bubbles,cancelable);
HXLINE(  24)		this->keyCode = keyCode;
HXLINE(  25)		this->shiftKey = shiftKey;
HXLINE(  26)		this->relatedObject = relatedObject;
            	}

Dynamic FocusEvent_obj::__CreateEmpty() { return new FocusEvent_obj; }

void *FocusEvent_obj::_hx_vtable = 0;

Dynamic FocusEvent_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FocusEvent_obj > _hx_result = new FocusEvent_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FocusEvent_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dd3a6b1) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dd3a6b1;
	} else {
		return inClassId==(int)0x7ef10eeb;
	}
}

 ::openfl::_legacy::events::Event FocusEvent_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_31_clone)
HXLINE(  33)		::String event = this->get_type();
HXDLIN(  33)		bool event1 = this->get_bubbles();
HXDLIN(  33)		bool event2 = this->get_cancelable();
HXDLIN(  33)		 ::openfl::events::FocusEvent event3 =  ::openfl::events::FocusEvent_obj::__alloc( HX_CTX ,event,event1,event2,this->relatedObject,this->shiftKey,this->keyCode);
HXLINE(  34)		event3->set_target(this->get_target());
HXLINE(  35)		event3->set_currentTarget(this->get_currentTarget());
HXLINE(  39)		return event3;
            	}


::String FocusEvent_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_46_toString)
HXDLIN(  46)		return this->_hx___formatToString(HX_("FocusEvent",42,6d,d7,2e),::Array_obj< ::String >::fromData( _hx_array_data_ade3ec19_3,6));
            	}


::String FocusEvent_obj::FOCUS_IN;

::String FocusEvent_obj::FOCUS_OUT;

::String FocusEvent_obj::KEY_FOCUS_CHANGE;

::String FocusEvent_obj::MOUSE_FOCUS_CHANGE;


hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__new(::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode) {
	hx::ObjectPtr< FocusEvent_obj > __this = new FocusEvent_obj();
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

hx::ObjectPtr< FocusEvent_obj > FocusEvent_obj::__alloc(hx::Ctx *_hx_ctx,::String type,hx::Null< bool >  __o_bubbles,hx::Null< bool >  __o_cancelable, ::openfl::_legacy::display::InteractiveObject relatedObject,hx::Null< bool >  __o_shiftKey,hx::Null< int >  __o_keyCode) {
	FocusEvent_obj *__this = (FocusEvent_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FocusEvent_obj), true, "openfl.events.FocusEvent"));
	*(void **)__this = FocusEvent_obj::_hx_vtable;
	__this->__construct(type,__o_bubbles,__o_cancelable,relatedObject,__o_shiftKey,__o_keyCode);
	return __this;
}

FocusEvent_obj::FocusEvent_obj()
{
}

void FocusEvent_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FocusEvent);
	HX_MARK_MEMBER_NAME(keyCode,"keyCode");
	HX_MARK_MEMBER_NAME(relatedObject,"relatedObject");
	HX_MARK_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::_legacy::events::Event_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FocusEvent_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(keyCode,"keyCode");
	HX_VISIT_MEMBER_NAME(relatedObject,"relatedObject");
	HX_VISIT_MEMBER_NAME(shiftKey,"shiftKey");
	 ::openfl::_legacy::events::Event_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FocusEvent_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"clone") ) { return hx::Val( clone_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { return hx::Val( keyCode ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { return hx::Val( shiftKey ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { return hx::Val( relatedObject ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FocusEvent_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"keyCode") ) { keyCode=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"shiftKey") ) { shiftKey=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"relatedObject") ) { relatedObject=inValue.Cast<  ::openfl::_legacy::display::InteractiveObject >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FocusEvent_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"));
	outFields->push(HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"));
	outFields->push(HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FocusEvent_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(FocusEvent_obj,keyCode),HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b")},
	{hx::fsObject /*::openfl::_legacy::display::InteractiveObject*/ ,(int)offsetof(FocusEvent_obj,relatedObject),HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8")},
	{hx::fsBool,(int)offsetof(FocusEvent_obj,shiftKey),HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo FocusEvent_obj_sStaticStorageInfo[] = {
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_IN,HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b")},
	{hx::fsString,(void *) &FocusEvent_obj::FOCUS_OUT,HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c")},
	{hx::fsString,(void *) &FocusEvent_obj::KEY_FOCUS_CHANGE,HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94")},
	{hx::fsString,(void *) &FocusEvent_obj::MOUSE_FOCUS_CHANGE,HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String FocusEvent_obj_sMemberFields[] = {
	HX_HCSTRING("keyCode","\x6c","\x22","\x9e","\x9b"),
	HX_HCSTRING("relatedObject","\x0a","\xbf","\xcb","\xe8"),
	HX_HCSTRING("shiftKey","\x3d","\x92","\x9f","\x99"),
	HX_HCSTRING("clone","\x5d","\x13","\x63","\x48"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	::String(null()) };

static void FocusEvent_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_MARK_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FocusEvent_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_IN,"FOCUS_IN");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::FOCUS_OUT,"FOCUS_OUT");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::KEY_FOCUS_CHANGE,"KEY_FOCUS_CHANGE");
	HX_VISIT_MEMBER_NAME(FocusEvent_obj::MOUSE_FOCUS_CHANGE,"MOUSE_FOCUS_CHANGE");
};

#endif

hx::Class FocusEvent_obj::__mClass;

static ::String FocusEvent_obj_sStaticFields[] = {
	HX_HCSTRING("FOCUS_IN","\x4c","\x61","\x08","\x6b"),
	HX_HCSTRING("FOCUS_OUT","\x27","\x55","\x51","\x3c"),
	HX_HCSTRING("KEY_FOCUS_CHANGE","\x57","\x48","\x06","\x94"),
	HX_HCSTRING("MOUSE_FOCUS_CHANGE","\x11","\xc4","\x6c","\x3d"),
	::String(null())
};

void FocusEvent_obj::__register()
{
	hx::Object *dummy = new FocusEvent_obj;
	FocusEvent_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.events.FocusEvent","\x19","\xec","\xe3","\xad");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FocusEvent_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(FocusEvent_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FocusEvent_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FocusEvent_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FocusEvent_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FocusEvent_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FocusEvent_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FocusEvent_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_10_boot)
HXDLIN(  10)		FOCUS_IN = HX_("focusIn",dd,45,83,41);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_11_boot)
HXDLIN(  11)		FOCUS_OUT = HX_("focusOut",96,6f,5e,11);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_12_boot)
HXDLIN(  12)		KEY_FOCUS_CHANGE = HX_("keyFocusChange",09,9c,8e,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_919c1dfcca12e2f6_13_boot)
HXDLIN(  13)		MOUSE_FOCUS_CHANGE = HX_("mouseFocusChange",43,f1,81,96);
            	}
}

} // end namespace openfl
} // end namespace events
