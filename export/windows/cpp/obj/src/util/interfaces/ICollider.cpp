// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_util_interfaces_ICollider
#include <util/interfaces/ICollider.h>
#endif

namespace util{
namespace interfaces{


static ::String ICollider_obj_sMemberFields[] = {
	HX_HCSTRING("collideWith","\xa4","\xe8","\xb5","\xc0"),
	HX_HCSTRING("postCollision","\xf2","\x77","\xed","\x88"),
	::String(null()) };

static void ICollider_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ICollider_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void ICollider_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ICollider_obj::__mClass,"__mClass");
};

#endif

hx::Class ICollider_obj::__mClass;

void ICollider_obj::__register()
{
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.interfaces.ICollider","\xb5","\x93","\xed","\xa1");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mMarkFunc = ICollider_obj_sMarkStatics;
	__mClass->mMembers = hx::Class_obj::dupFunctions(ICollider_obj_sMemberFields);
	__mClass->mCanCast = hx::TIsInterface< (int)0x626f6101 >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = ICollider_obj_sVisitStatics;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace interfaces
