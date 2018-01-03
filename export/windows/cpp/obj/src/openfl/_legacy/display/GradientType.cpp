// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl__legacy_display_GradientType
#include <openfl/_legacy/display/GradientType.h>
#endif
namespace openfl{
namespace _legacy{
namespace display{

::openfl::_legacy::display::GradientType GradientType_obj::LINEAR;

::openfl::_legacy::display::GradientType GradientType_obj::RADIAL;

bool GradientType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINEAR",e5,fd,22,9f)) { outValue = GradientType_obj::LINEAR; return true; }
	if (inName==HX_("RADIAL",df,6a,79,63)) { outValue = GradientType_obj::RADIAL; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(GradientType_obj)

int GradientType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return 1;
	if (inName==HX_("RADIAL",df,6a,79,63)) return 0;
	return super::__FindIndex(inName);
}

int GradientType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return 0;
	if (inName==HX_("RADIAL",df,6a,79,63)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val GradientType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("LINEAR",e5,fd,22,9f)) return LINEAR;
	if (inName==HX_("RADIAL",df,6a,79,63)) return RADIAL;
	return super::__Field(inName,inCallProp);
}

static ::String GradientType_obj_sStaticFields[] = {
	HX_("RADIAL",df,6a,79,63),
	HX_("LINEAR",e5,fd,22,9f),
	::String(null())
};

static void GradientType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(GradientType_obj::LINEAR,"LINEAR");
	HX_MARK_MEMBER_NAME(GradientType_obj::RADIAL,"RADIAL");
};

#ifdef HXCPP_VISIT_ALLOCS
static void GradientType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(GradientType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(GradientType_obj::LINEAR,"LINEAR");
	HX_VISIT_MEMBER_NAME(GradientType_obj::RADIAL,"RADIAL");
};
#endif

hx::Class GradientType_obj::__mClass;

Dynamic __Create_GradientType_obj() { return new GradientType_obj; }

void GradientType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("openfl._legacy.display.GradientType","\x7a","\x30","\x4a","\x84"), hx::TCanCast< GradientType_obj >,GradientType_obj_sStaticFields,0,
	&__Create_GradientType_obj, &__Create,
	&super::__SGetClass(), &CreateGradientType_obj, GradientType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , GradientType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &GradientType_obj::__GetStatic;
}

void GradientType_obj::__boot()
{
LINEAR = hx::CreateEnum< GradientType_obj >(HX_HCSTRING("LINEAR","\xe5","\xfd","\x22","\x9f"),1,0);
RADIAL = hx::CreateEnum< GradientType_obj >(HX_HCSTRING("RADIAL","\xdf","\x6a","\x79","\x63"),0,0);
}


} // end namespace openfl
} // end namespace _legacy
} // end namespace display
