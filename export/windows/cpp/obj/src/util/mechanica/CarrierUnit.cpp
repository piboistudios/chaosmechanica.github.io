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
#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_79f9eb15c1338f60_74_new,"util.mechanica.CarrierUnit","new",0xe91a9cf1,"util.mechanica.CarrierUnit.new","util/mechanica/Part.hx",74,0x51e4a40c)
namespace util{
namespace mechanica{

void CarrierUnit_obj::__construct( ::Dynamic X, ::Dynamic Y){
            	HX_STACKFRAME(&_hx_pos_79f9eb15c1338f60_74_new)
HXDLIN(  74)		super::__construct(X,Y);
            	}

Dynamic CarrierUnit_obj::__CreateEmpty() { return new CarrierUnit_obj; }

void *CarrierUnit_obj::_hx_vtable = 0;

Dynamic CarrierUnit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CarrierUnit_obj > _hx_result = new CarrierUnit_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CarrierUnit_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x2e105115;
		}
	} else {
		if (inClassId<=(int)0x4ae160ee) {
			return inClassId==(int)0x4880bdc9 || inClassId==(int)0x4ae160ee;
		} else {
			return inClassId==(int)0x6706dc1b;
		}
	}
}


hx::ObjectPtr< CarrierUnit_obj > CarrierUnit_obj::__new( ::Dynamic X, ::Dynamic Y) {
	hx::ObjectPtr< CarrierUnit_obj > __this = new CarrierUnit_obj();
	__this->__construct(X,Y);
	return __this;
}

hx::ObjectPtr< CarrierUnit_obj > CarrierUnit_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y) {
	CarrierUnit_obj *__this = (CarrierUnit_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CarrierUnit_obj), true, "util.mechanica.CarrierUnit"));
	*(void **)__this = CarrierUnit_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

CarrierUnit_obj::CarrierUnit_obj()
{
}

hx::Val CarrierUnit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stability") ) { return hx::Val( stability ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weightCapacity") ) { return hx::Val( weightCapacity ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"performanceWeightCapacity") ) { return hx::Val( performanceWeightCapacity ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val CarrierUnit_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"stability") ) { stability=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"weightCapacity") ) { weightCapacity=inValue.Cast< Float >(); return inValue; }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"performanceWeightCapacity") ) { performanceWeightCapacity=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CarrierUnit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("stability","\x29","\x43","\xaf","\x5a"));
	outFields->push(HX_HCSTRING("weightCapacity","\xd2","\x66","\x95","\x25"));
	outFields->push(HX_HCSTRING("performanceWeightCapacity","\xe2","\x4c","\x24","\x59"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo CarrierUnit_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(CarrierUnit_obj,stability),HX_HCSTRING("stability","\x29","\x43","\xaf","\x5a")},
	{hx::fsFloat,(int)offsetof(CarrierUnit_obj,weightCapacity),HX_HCSTRING("weightCapacity","\xd2","\x66","\x95","\x25")},
	{hx::fsFloat,(int)offsetof(CarrierUnit_obj,performanceWeightCapacity),HX_HCSTRING("performanceWeightCapacity","\xe2","\x4c","\x24","\x59")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *CarrierUnit_obj_sStaticStorageInfo = 0;
#endif

static ::String CarrierUnit_obj_sMemberFields[] = {
	HX_HCSTRING("stability","\x29","\x43","\xaf","\x5a"),
	HX_HCSTRING("weightCapacity","\xd2","\x66","\x95","\x25"),
	HX_HCSTRING("performanceWeightCapacity","\xe2","\x4c","\x24","\x59"),
	::String(null()) };

static void CarrierUnit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CarrierUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CarrierUnit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CarrierUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class CarrierUnit_obj::__mClass;

void CarrierUnit_obj::__register()
{
	hx::Object *dummy = new CarrierUnit_obj;
	CarrierUnit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.CarrierUnit","\x7f","\x50","\x93","\x56");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CarrierUnit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(CarrierUnit_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< CarrierUnit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CarrierUnit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CarrierUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CarrierUnit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
