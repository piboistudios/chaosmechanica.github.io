// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_tile_FlxDrawItemType
#include <flixel/graphics/tile/FlxDrawItemType.h>
#endif
namespace flixel{
namespace graphics{
namespace tile{

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TILES;

::flixel::graphics::tile::FlxDrawItemType FlxDrawItemType_obj::TRIANGLES;

bool FlxDrawItemType_obj::__GetStatic(const ::String &inName, ::Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TILES",65,35,23,8e)) { outValue = FlxDrawItemType_obj::TILES; return true; }
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) { outValue = FlxDrawItemType_obj::TRIANGLES; return true; }
	return super::__GetStatic(inName, outValue, inCallProp);
}

HX_DEFINE_CREATE_ENUM(FlxDrawItemType_obj)

int FlxDrawItemType_obj::__FindIndex(::String inName)
{
	if (inName==HX_("TILES",65,35,23,8e)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 1;
	return super::__FindIndex(inName);
}

int FlxDrawItemType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_("TILES",65,35,23,8e)) return 0;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return 0;
	return super::__FindArgCount(inName);
}

hx::Val FlxDrawItemType_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	if (inName==HX_("TILES",65,35,23,8e)) return TILES;
	if (inName==HX_("TRIANGLES",8b,a0,99,7a)) return TRIANGLES;
	return super::__Field(inName,inCallProp);
}

static ::String FlxDrawItemType_obj_sStaticFields[] = {
	HX_("TILES",65,35,23,8e),
	HX_("TRIANGLES",8b,a0,99,7a),
	::String(null())
};

static void FlxDrawItemType_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_MARK_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxDrawItemType_obj_sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TILES,"TILES");
	HX_VISIT_MEMBER_NAME(FlxDrawItemType_obj::TRIANGLES,"TRIANGLES");
};
#endif

hx::Class FlxDrawItemType_obj::__mClass;

Dynamic __Create_FlxDrawItemType_obj() { return new FlxDrawItemType_obj; }

void FlxDrawItemType_obj::__register()
{

hx::Static(__mClass) = hx::_hx_RegisterClass(HX_HCSTRING("flixel.graphics.tile.FlxDrawItemType","\xb4","\xaa","\x75","\xd0"), hx::TCanCast< FlxDrawItemType_obj >,FlxDrawItemType_obj_sStaticFields,0,
	&__Create_FlxDrawItemType_obj, &__Create,
	&super::__SGetClass(), &CreateFlxDrawItemType_obj, FlxDrawItemType_obj_sMarkStatics
#ifdef HXCPP_VISIT_ALLOCS
    , FlxDrawItemType_obj_sVisitStatic
#endif
#ifdef HXCPP_SCRIPTABLE
    , 0
#endif
);
	__mClass->mGetStaticField = &FlxDrawItemType_obj::__GetStatic;
}

void FlxDrawItemType_obj::__boot()
{
TILES = hx::CreateEnum< FlxDrawItemType_obj >(HX_HCSTRING("TILES","\x65","\x35","\x23","\x8e"),0,0);
TRIANGLES = hx::CreateEnum< FlxDrawItemType_obj >(HX_HCSTRING("TRIANGLES","\x8b","\xa0","\x99","\x7a"),1,0);
}


} // end namespace flixel
} // end namespace graphics
} // end namespace tile
