// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_addons_ui_SortMethod
#include <flixel/addons/ui/SortMethod.h>
#endif
namespace flixel{
namespace addons{
namespace ui{

::flixel::addons::ui::SortMethod SortMethod_obj::ID;

::flixel::addons::ui::SortMethod SortMethod_obj::XY;

bool SortMethod_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ID",db,3f,00,00)) { outValue = SortMethod_obj::ID; return true; }
	if (inName==HX_("XY",01,4d,00,00)) { outValue = SortMethod_obj::XY; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(SortMethod_obj)

int SortMethod_obj::__FindIndex(::String inName)
{
	if (inName==HX_("ID",db,3f,00,00)) return 1;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	return super::__FindIndex(inName);
}

int SortMethod_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("ID",db,3f,00,00)) return 0;
	if (inName==HX_("XY",01,4d,00,00)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val SortMethod_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("ID",db,3f,00,00)) return ID;
	if (inName==HX_("XY",01,4d,00,00)) return XY;
	return super::__Field(inName,inCallProp);
}

static ::String SortMethod_obj_sStaticFields[] = {
	HX_("XY",01,4d,00,00),
	HX_("ID",db,3f,00,00),
	::String(null())
};

static void SortMethod_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(SortMethod_obj::ID,"ID");
	HX_MARK_MEMBER_NAME(SortMethod_obj::XY,"XY");
};

#ifdef HXCPP_VISIT_ALLOCS
static void SortMethod_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(SortMethod_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(SortMethod_obj::ID,"ID");
	HX_VISIT_MEMBER_NAME(SortMethod_obj::XY,"XY");
};
#endif

hx::Class SortMethod_obj::__mClass;

Dynamic __Create_SortMethod_obj() { return new SortMethod_obj; }

void SortMethod_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.addons.ui.SortMethod","\x70","\xbd","\xf0","\x6c"), hx::TCanCast< SortMethod_obj >,SortMethod_obj_sStaticFields,0,
	&__Create_SortMethod_obj, &__Create,
	&super::__SGetClass(), &CreateSortMethod_obj, SortMethod_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , SortMethod_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &SortMethod_obj::__GetStatic;
}

void SortMethod_obj::__boot()
{
ID = hx::CreateEnum< SortMethod_obj >(HX_HCSTRING("ID","\xdb","\x3f","\x00","\x00"),1,0);
XY = hx::CreateEnum< SortMethod_obj >(HX_HCSTRING("XY","\x01","\x4d","\x00","\x00"),0,0);
}


} // end namespace flixel
} // end namespace addons
} // end namespace ui
