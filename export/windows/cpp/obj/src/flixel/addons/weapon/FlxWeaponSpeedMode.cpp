// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode
#include <flixel/addons/weapon/FlxWeaponSpeedMode.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
namespace flixel{
namespace addons{
namespace weapon{

::flixel::addons::weapon::FlxWeaponSpeedMode FlxWeaponSpeedMode_obj::ACCELERATION( ::flixel::util::helpers::FlxBounds acceleration, ::flixel::util::helpers::FlxBounds maxSpeed)
{
	return hx::CreateEnum< FlxWeaponSpeedMode_obj >(HX_("ACCELERATION",40,58,af,38),1,2)->_hx_init(0,acceleration)->_hx_init(1,maxSpeed);
}

::flixel::addons::weapon::FlxWeaponSpeedMode FlxWeaponSpeedMode_obj::SPEED( ::flixel::util::helpers::FlxBounds speed)
{
	return hx::CreateEnum< FlxWeaponSpeedMode_obj >(HX_("SPEED",67,cf,57,ff),0,1)->_hx_init(0,speed);
}

bool FlxWeaponSpeedMode_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCELERATION",40,58,af,38)) { outValue = FlxWeaponSpeedMode_obj::ACCELERATION_dyn(); return true; }
	if (inName==HX_("SPEED",67,cf,57,ff)) { outValue = FlxWeaponSpeedMode_obj::SPEED_dyn(); return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxWeaponSpeedMode_obj)

int FlxWeaponSpeedMode_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ACCELERATION",40,58,af,38)) return 1;
	if (inName==HX_("SPEED",67,cf,57,ff)) return 0;
	return super::__FindIndex(inName);
}

STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxWeaponSpeedMode_obj,ACCELERATION,return)

STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxWeaponSpeedMode_obj,SPEED,return)

int FlxWeaponSpeedMode_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ACCELERATION",40,58,af,38)) return 2;
	if (inName==HX_("SPEED",67,cf,57,ff)) return 1;
	return super::__FindArgCount(inName);
}

hx::Val FlxWeaponSpeedMode_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ACCELERATION",40,58,af,38)) return ACCELERATION_dyn();
	if (inName==HX_("SPEED",67,cf,57,ff)) return SPEED_dyn();
	return super::__Field(inName,inCallProp);
}

static ::String FlxWeaponSpeedMode_obj_sStaticFields[] = {
	HX_("SPEED",67,cf,57,ff),
	HX_("ACCELERATION",40,58,af,38),
	::String(null())
};

static void FlxWeaponSpeedMode_obj_sMarkStatics(HX_MARK_PARAMS) {
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxWeaponSpeedMode_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxWeaponSpeedMode_obj::__mClass,"__mClass");
};
#endif

hx::Class FlxWeaponSpeedMode_obj::__mClass;

Dynamic __Create_FlxWeaponSpeedMode_obj() { return new FlxWeaponSpeedMode_obj; }

void FlxWeaponSpeedMode_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.addons.weapon.FlxWeaponSpeedMode","\x45","\x2d","\x8a","\x82"), hx::TCanCast< FlxWeaponSpeedMode_obj >,FlxWeaponSpeedMode_obj_sStaticFields,0,
	&__Create_FlxWeaponSpeedMode_obj, &__Create,
	&super::__SGetClass(), &CreateFlxWeaponSpeedMode_obj, FlxWeaponSpeedMode_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxWeaponSpeedMode_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxWeaponSpeedMode_obj::__GetStatic;
}

void FlxWeaponSpeedMode_obj::__boot()
{
}


} // end namespace flixel
} // end namespace addons
} // end namespace weapon