// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxNestedSprite
#include <flixel/addons/display/FlxNestedSprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_util_mechanica_CarrierUnit
#include <util/mechanica/CarrierUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_IPart
#include <util/mechanica/IPart.h>
#endif
#ifndef INCLUDED_util_mechanica_LegUnits
#include <util/mechanica/LegUnits.h>
#endif
#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_834ccf60031f85f6_87_new,"util.mechanica.LegUnits","new",0x41bfe6f0,"util.mechanica.LegUnits.new","util/mechanica/Part.hx",87,0x51e4a40c)
namespace util{
namespace mechanica{

void LegUnits_obj::__construct( ::Dynamic X, ::Dynamic Y){
            	HX_STACKFRAME(&_hx_pos_834ccf60031f85f6_87_new)
HXLINE(  94)		this->animated = true;
HXLINE(  93)		this->frameRate = (int)8;
HXLINE(  98)		super::__construct(X,Y);
HXLINE(  99)		this->type = HX_("legs",e5,08,b0,47);
            	}

Dynamic LegUnits_obj::__CreateEmpty() { return new LegUnits_obj; }

void *LegUnits_obj::_hx_vtable = 0;

Dynamic LegUnits_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< LegUnits_obj > _hx_result = new LegUnits_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool LegUnits_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x1ba8193c) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x1ba8193c;
			}
		} else {
			return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
		}
	} else {
		if (inClassId<=(int)0x4ae160ee) {
			return inClassId==(int)0x4880bdc9 || inClassId==(int)0x4ae160ee;
		} else {
			return inClassId==(int)0x6706dc1b;
		}
	}
}


hx::ObjectPtr< LegUnits_obj > LegUnits_obj::__new( ::Dynamic X, ::Dynamic Y) {
	hx::ObjectPtr< LegUnits_obj > __this = new LegUnits_obj();
	__this->__construct(X,Y);
	return __this;
}

hx::ObjectPtr< LegUnits_obj > LegUnits_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y) {
	LegUnits_obj *__this = (LegUnits_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(LegUnits_obj), true, "util.mechanica.LegUnits"));
	*(void **)__this = LegUnits_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

LegUnits_obj::LegUnits_obj()
{
}

hx::Val LegUnits_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"topSpeed") ) { return hx::Val( topSpeed ); }
		if (HX_FIELD_EQ(inName,"animated") ) { return hx::Val( animated ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { return hx::Val( frameRate ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"turningSpeed") ) { return hx::Val( turningSpeed ); }
		if (HX_FIELD_EQ(inName,"brakingForce") ) { return hx::Val( brakingForce ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { return hx::Val( _acceleration ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val LegUnits_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"topSpeed") ) { topSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"animated") ) { animated=inValue.Cast< bool >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"frameRate") ) { frameRate=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"turningSpeed") ) { turningSpeed=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"brakingForce") ) { brakingForce=inValue.Cast< Float >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_acceleration") ) { _acceleration=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void LegUnits_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf"));
	outFields->push(HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c"));
	outFields->push(HX_HCSTRING("turningSpeed","\xc2","\x37","\x8c","\x8c"));
	outFields->push(HX_HCSTRING("brakingForce","\x63","\x2a","\xe0","\xaf"));
	outFields->push(HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"));
	outFields->push(HX_HCSTRING("animated","\xa3","\x72","\xf2","\x88"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo LegUnits_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(LegUnits_obj,topSpeed),HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf")},
	{hx::fsFloat,(int)offsetof(LegUnits_obj,_acceleration),HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c")},
	{hx::fsFloat,(int)offsetof(LegUnits_obj,turningSpeed),HX_HCSTRING("turningSpeed","\xc2","\x37","\x8c","\x8c")},
	{hx::fsFloat,(int)offsetof(LegUnits_obj,brakingForce),HX_HCSTRING("brakingForce","\x63","\x2a","\xe0","\xaf")},
	{hx::fsInt,(int)offsetof(LegUnits_obj,frameRate),HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39")},
	{hx::fsBool,(int)offsetof(LegUnits_obj,animated),HX_HCSTRING("animated","\xa3","\x72","\xf2","\x88")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *LegUnits_obj_sStaticStorageInfo = 0;
#endif

static ::String LegUnits_obj_sMemberFields[] = {
	HX_HCSTRING("topSpeed","\xb2","\xa4","\x39","\xcf"),
	HX_HCSTRING("_acceleration","\x1f","\x93","\xcf","\x7c"),
	HX_HCSTRING("turningSpeed","\xc2","\x37","\x8c","\x8c"),
	HX_HCSTRING("brakingForce","\x63","\x2a","\xe0","\xaf"),
	HX_HCSTRING("frameRate","\xad","\x11","\x25","\x39"),
	HX_HCSTRING("animated","\xa3","\x72","\xf2","\x88"),
	::String(null()) };

static void LegUnits_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LegUnits_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void LegUnits_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LegUnits_obj::__mClass,"__mClass");
};

#endif

hx::Class LegUnits_obj::__mClass;

void LegUnits_obj::__register()
{
	hx::Object *dummy = new LegUnits_obj;
	LegUnits_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.LegUnits","\xfe","\xee","\xad","\x2a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = LegUnits_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(LegUnits_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< LegUnits_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = LegUnits_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = LegUnits_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = LegUnits_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
