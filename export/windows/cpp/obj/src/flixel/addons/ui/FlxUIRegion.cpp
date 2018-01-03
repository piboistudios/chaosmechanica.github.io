// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUIRegion
#include <flixel/addons/ui/FlxUIRegion.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BitmapData
#include <openfl/_legacy/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_BlendMode
#include <openfl/_legacy/display/BlendMode.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Graphics
#include <openfl/_legacy/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_ColorTransform
#include <openfl/_legacy/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Matrix
#include <openfl/_legacy/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl__legacy_geom_Rectangle
#include <openfl/_legacy/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dee0df4363dfe44b_12_new,"flixel.addons.ui.FlxUIRegion","new",0xbea3949b,"flixel.addons.ui.FlxUIRegion.new","flixel/addons/ui/FlxUIRegion.hx",12,0xd4d800d6)
HX_LOCAL_STACK_FRAME(_hx_pos_dee0df4363dfe44b_26_resize,"flixel.addons.ui.FlxUIRegion","resize",0x9a5dac99,"flixel.addons.ui.FlxUIRegion.resize","flixel/addons/ui/FlxUIRegion.hx",26,0xd4d800d6)
HX_LOCAL_STACK_FRAME(_hx_pos_dee0df4363dfe44b_36_drawDebugOnCamera,"flixel.addons.ui.FlxUIRegion","drawDebugOnCamera",0x5257dd6e,"flixel.addons.ui.FlxUIRegion.drawDebugOnCamera","flixel/addons/ui/FlxUIRegion.hx",36,0xd4d800d6)
namespace flixel{
namespace addons{
namespace ui{

void FlxUIRegion_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H){
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
Float W = __o_W.Default(16);
Float H = __o_H.Default(16);
            	HX_STACKFRAME(&_hx_pos_dee0df4363dfe44b_12_new)
HXLINE(  14)		this->broadcastToFlxUI = true;
HXLINE(  19)		super::__construct(X,Y,null());
HXLINE(  20)		this->makeGraphic((int)1,(int)1,(int)0,null(),null());
HXLINE(  21)		if ((H < (int)1)) {
HXLINE(  21)			H = (int)1;
            		}
HXLINE(  22)		if ((W < (int)1)) {
HXLINE(  22)			W = (int)1;
            		}
HXLINE(  23)		this->resize(W,H);
            	}

Dynamic FlxUIRegion_obj::__CreateEmpty() { return new FlxUIRegion_obj; }

void *FlxUIRegion_obj::_hx_vtable = 0;

Dynamic FlxUIRegion_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUIRegion_obj > _hx_result = new FlxUIRegion_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return _hx_result;
}

bool FlxUIRegion_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0b6ffd77) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x37c23f77;
	}
}

static ::flixel::IFlxSprite_obj _hx_flixel_addons_ui_FlxUIRegion__hx_flixel_IFlxSprite= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::addons::ui::FlxUIRegion_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIRegion_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::addons::ui::FlxUIRegion_obj::setPosition,
};

static ::flixel::IFlxBasic_obj _hx_flixel_addons_ui_FlxUIRegion__hx_flixel_IFlxBasic= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::toString,
};

static ::flixel::addons::ui::interfaces::IFlxUIWidget_obj _hx_flixel_addons_ui_FlxUIRegion__hx_flixel_addons_ui_interfaces_IFlxUIWidget= {
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_active,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_visible,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_alive,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_exists,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::draw,
	( void (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::update,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::destroy,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::kill,
	( void (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::revive,
	( ::String (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::toString,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_x,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_y,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_alpha,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_angle,
	( int (hx::Object::*)(int))&::flixel::addons::ui::FlxUIRegion_obj::set_facing,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_moves,
	( bool (hx::Object::*)(bool))&::flixel::addons::ui::FlxUIRegion_obj::set_immovable,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIRegion_obj::reset,
	( void (hx::Object::*)(hx::Null< Float > ,hx::Null< Float > ))&::flixel::addons::ui::FlxUIRegion_obj::setPosition,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::get_width,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_width,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::get_height,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_height,
};

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUIRegion__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::get_width,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_width,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUIRegion_obj::get_height,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUIRegion_obj::set_height,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUIRegion_obj::resize,
};

void *FlxUIRegion_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x897c83aa: return &_hx_flixel_addons_ui_FlxUIRegion__hx_flixel_IFlxSprite;
		case (int)0x284cfea9: return &_hx_flixel_addons_ui_FlxUIRegion__hx_flixel_IFlxBasic;
		case (int)0x998525de: return &_hx_flixel_addons_ui_FlxUIRegion__hx_flixel_addons_ui_interfaces_IFlxUIWidget;
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUIRegion__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

void FlxUIRegion_obj::resize(Float w,Float h){
            	HX_STACKFRAME(&_hx_pos_dee0df4363dfe44b_26_resize)
HXLINE(  27)		this->set_width(w);
HXLINE(  28)		this->set_height(h);
HXLINE(  31)		this->debugBoundingBoxColor = ((int)::flixel::FlxG_obj::random->color(null(),null(),null(),null()) & (int)(int)16777215);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxUIRegion_obj,resize,(void))

void FlxUIRegion_obj::drawDebugOnCamera( ::flixel::FlxCamera camera){
            	HX_STACKFRAME(&_hx_pos_dee0df4363dfe44b_36_drawDebugOnCamera)
HXLINE(  37)		 ::flixel::math::FlxRect rect = this->getBoundingBox(camera);
HXLINE(  38)		 ::openfl::_legacy::display::Graphics gfx;
HXDLIN(  38)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  38)			::flixel::util::FlxSpriteUtil_obj::flashGfx->clear();
HXDLIN(  38)			gfx = ::flixel::util::FlxSpriteUtil_obj::flashGfx;
            		}
            		else {
HXLINE(  38)			gfx = camera->debugLayer->get_graphics();
            		}
HXLINE(  40)		gfx->beginFill(this->debugBoundingBoxColor,((Float)0.5));
HXLINE(  41)		gfx->drawRect(rect->x,rect->y,rect->width,rect->height);
HXLINE(  43)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE(  43)			camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}



hx::ObjectPtr< FlxUIRegion_obj > FlxUIRegion_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H) {
	hx::ObjectPtr< FlxUIRegion_obj > __this = new FlxUIRegion_obj();
	__this->__construct(__o_X,__o_Y,__o_W,__o_H);
	return __this;
}

hx::ObjectPtr< FlxUIRegion_obj > FlxUIRegion_obj::__alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,hx::Null< Float >  __o_W,hx::Null< Float >  __o_H) {
	FlxUIRegion_obj *__this = (FlxUIRegion_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUIRegion_obj), true, "flixel.addons.ui.FlxUIRegion"));
	*(void **)__this = FlxUIRegion_obj::_hx_vtable;
	__this->__construct(__o_X,__o_Y,__o_W,__o_H);
	return __this;
}

FlxUIRegion_obj::FlxUIRegion_obj()
{
}

void FlxUIRegion_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUIRegion);
	HX_MARK_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_MARK_MEMBER_NAME(name,"name");
	 ::flixel::FlxSprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUIRegion_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(broadcastToFlxUI,"broadcastToFlxUI");
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::flixel::FlxSprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxUIRegion_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { return hx::Val( broadcastToFlxUI ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"drawDebugOnCamera") ) { return hx::Val( drawDebugOnCamera_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUIRegion_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"broadcastToFlxUI") ) { broadcastToFlxUI=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUIRegion_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"));
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUIRegion_obj_sMemberStorageInfo[] = {
	{hx::fsBool,(int)offsetof(FlxUIRegion_obj,broadcastToFlxUI),HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a")},
	{hx::fsString,(int)offsetof(FlxUIRegion_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxUIRegion_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUIRegion_obj_sMemberFields[] = {
	HX_HCSTRING("broadcastToFlxUI","\xca","\x32","\x56","\x1a"),
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	HX_HCSTRING("drawDebugOnCamera","\xf3","\x47","\x7b","\xcb"),
	::String(null()) };

static void FlxUIRegion_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUIRegion_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUIRegion_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUIRegion_obj::__mClass;

void FlxUIRegion_obj::__register()
{
	hx::Object *dummy = new FlxUIRegion_obj;
	FlxUIRegion_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUIRegion","\x29","\xab","\x48","\x3b");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUIRegion_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUIRegion_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUIRegion_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUIRegion_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUIRegion_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUIRegion_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
