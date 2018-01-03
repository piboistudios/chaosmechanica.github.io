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
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUILine
#include <flixel/addons/ui/FlxUILine.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_FlxUISprite
#include <flixel/addons/ui/FlxUISprite.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_LineAxis
#include <flixel/addons/ui/LineAxis.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IFlxUIWidget
#include <flixel/addons/ui/interfaces/IFlxUIWidget.h>
#endif
#ifndef INCLUDED_flixel_addons_ui_interfaces_IResizable
#include <flixel/addons/ui/interfaces/IResizable.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eda242b6f279b347_10_new,"flixel.addons.ui.FlxUILine","new",0xc23e645b,"flixel.addons.ui.FlxUILine.new","flixel/addons/ui/FlxUILine.hx",10,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_27_set_axis,"flixel.addons.ui.FlxUILine","set_axis",0x4e054fc3,"flixel.addons.ui.FlxUILine.set_axis","flixel/addons/ui/FlxUILine.hx",27,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_34_set_length,"flixel.addons.ui.FlxUILine","set_length",0x4e605488,"flixel.addons.ui.FlxUILine.set_length","flixel/addons/ui/FlxUILine.hx",34,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_41_set_thickness,"flixel.addons.ui.FlxUILine","set_thickness",0x7ce42312,"flixel.addons.ui.FlxUILine.set_thickness","flixel/addons/ui/FlxUILine.hx",41,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_47_refresh,"flixel.addons.ui.FlxUILine","refresh",0x58e48756,"flixel.addons.ui.FlxUILine.refresh","flixel/addons/ui/FlxUILine.hx",47,0xd6550ed6)
HX_LOCAL_STACK_FRAME(_hx_pos_eda242b6f279b347_60_resize,"flixel.addons.ui.FlxUILine","resize",0xa51734d9,"flixel.addons.ui.FlxUILine.resize","flixel/addons/ui/FlxUILine.hx",60,0xd6550ed6)
namespace flixel{
namespace addons{
namespace ui{

void FlxUILine_obj::__construct(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_10_new)
HXLINE(  14)		this->thickness = ((Float)1);
HXLINE(  13)		this->length = ((Float)10);
HXLINE(  12)		this->axis = ::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn();
HXLINE(  18)		super::__construct(X,Y,null());
HXLINE(  19)		this->makeGraphic((int)2,(int)2,(int)-1,null(),null());
HXLINE(  20)		this->set_color(Color);
HXLINE(  21)		this->set_axis(Axis);
HXLINE(  22)		this->set_length(Length);
HXLINE(  23)		this->set_thickness(Thickness);
            	}

Dynamic FlxUILine_obj::__CreateEmpty() { return new FlxUILine_obj; }

void *FlxUILine_obj::_hx_vtable = 0;

Dynamic FlxUILine_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxUILine_obj > _hx_result = new FlxUILine_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxUILine_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25a685e0) {
		if (inClassId<=(int)0x0d14dfb7) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x0d14dfb7;
			}
		} else {
			return inClassId==(int)0x25a685e0;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x7eb12c44;
	}
}

static ::flixel::addons::ui::interfaces::IResizable_obj _hx_flixel_addons_ui_FlxUILine__hx_flixel_addons_ui_interfaces_IResizable= {
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUILine_obj::get_width,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUILine_obj::set_width,
	( Float (hx::Object::*)())&::flixel::addons::ui::FlxUILine_obj::get_height,
	( Float (hx::Object::*)(Float))&::flixel::addons::ui::FlxUILine_obj::set_height,
	( void (hx::Object::*)(Float,Float))&::flixel::addons::ui::FlxUILine_obj::resize,
};

void *FlxUILine_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0x194a3c9f: return &_hx_flixel_addons_ui_FlxUILine__hx_flixel_addons_ui_interfaces_IResizable;
	}
	return super::_hx_getInterface(inHash);
}

 ::flixel::addons::ui::LineAxis FlxUILine_obj::set_axis( ::flixel::addons::ui::LineAxis a){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_27_set_axis)
HXLINE(  28)		this->axis = a;
HXLINE(  29)		this->refresh();
HXLINE(  30)		return a;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_axis,return )

Float FlxUILine_obj::set_length(Float l){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_34_set_length)
HXLINE(  35)		this->length = l;
HXLINE(  36)		this->refresh();
HXLINE(  37)		return l;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_length,return )

Float FlxUILine_obj::set_thickness(Float t){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_41_set_thickness)
HXLINE(  42)		this->thickness = t;
HXLINE(  43)		this->refresh();
HXLINE(  44)		return t;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxUILine_obj,set_thickness,return )

void FlxUILine_obj::refresh(){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_47_refresh)
HXLINE(  48)		if (hx::IsEq( this->axis,::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn() )) {
HXLINE(  50)			 ::flixel::math::FlxPoint _hx_tmp = this->scale;
HXDLIN(  50)			Float _hx_tmp1 = (((Float)0.5) * this->length);
HXDLIN(  50)			_hx_tmp->set(_hx_tmp1,(((Float)0.5) * this->thickness));
            		}
            		else {
HXLINE(  54)			 ::flixel::math::FlxPoint _hx_tmp2 = this->scale;
HXDLIN(  54)			Float _hx_tmp3 = (((Float)0.5) * this->thickness);
HXDLIN(  54)			_hx_tmp2->set(_hx_tmp3,(((Float)0.5) * this->length));
            		}
HXLINE(  56)		this->updateHitbox();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxUILine_obj,refresh,(void))

void FlxUILine_obj::resize(Float width,Float height){
            	HX_STACKFRAME(&_hx_pos_eda242b6f279b347_60_resize)
HXDLIN(  60)		if (hx::IsEq( this->axis,::flixel::addons::ui::LineAxis_obj::HORIZONTAL_dyn() )) {
HXLINE(  62)			this->set_length(width);
HXLINE(  63)			this->set_thickness(height);
            		}
            		else {
HXLINE(  67)			this->set_length(height);
HXLINE(  68)			this->set_thickness(width);
            		}
            	}



hx::ObjectPtr< FlxUILine_obj > FlxUILine_obj::__new(int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color) {
	hx::ObjectPtr< FlxUILine_obj > __this = new FlxUILine_obj();
	__this->__construct(X,Y,Axis,Length,Thickness,Color);
	return __this;
}

hx::ObjectPtr< FlxUILine_obj > FlxUILine_obj::__alloc(hx::Ctx *_hx_ctx,int X,int Y, ::flixel::addons::ui::LineAxis Axis,Float Length,Float Thickness,int Color) {
	FlxUILine_obj *__this = (FlxUILine_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxUILine_obj), true, "flixel.addons.ui.FlxUILine"));
	*(void **)__this = FlxUILine_obj::_hx_vtable;
	__this->__construct(X,Y,Axis,Length,Thickness,Color);
	return __this;
}

FlxUILine_obj::FlxUILine_obj()
{
}

void FlxUILine_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxUILine);
	HX_MARK_MEMBER_NAME(axis,"axis");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(thickness,"thickness");
	 ::flixel::addons::ui::FlxUISprite_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxUILine_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(axis,"axis");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(thickness,"thickness");
	 ::flixel::addons::ui::FlxUISprite_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FlxUILine_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { return hx::Val( axis ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"resize") ) { return hx::Val( resize_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"refresh") ) { return hx::Val( refresh_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"set_axis") ) { return hx::Val( set_axis_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { return hx::Val( thickness ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"set_length") ) { return hx::Val( set_length_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"set_thickness") ) { return hx::Val( set_thickness_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxUILine_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"axis") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_axis(inValue.Cast<  ::flixel::addons::ui::LineAxis >()) );axis=inValue.Cast<  ::flixel::addons::ui::LineAxis >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_length(inValue.Cast< Float >()) );length=inValue.Cast< Float >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"thickness") ) { if (inCallProp == hx::paccAlways) return hx::Val( set_thickness(inValue.Cast< Float >()) );thickness=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxUILine_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxUILine_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*::flixel::addons::ui::LineAxis*/ ,(int)offsetof(FlxUILine_obj,axis),HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40")},
	{hx::fsFloat,(int)offsetof(FlxUILine_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsFloat,(int)offsetof(FlxUILine_obj,thickness),HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxUILine_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxUILine_obj_sMemberFields[] = {
	HX_HCSTRING("axis","\xa1","\x1c","\x79","\x40"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("thickness","\x74","\xf1","\x66","\x5a"),
	HX_HCSTRING("set_axis","\x9e","\x31","\x91","\x6e"),
	HX_HCSTRING("set_length","\x23","\xa3","\x0c","\x93"),
	HX_HCSTRING("set_thickness","\x57","\xa7","\xd0","\x60"),
	HX_HCSTRING("refresh","\xdb","\xd9","\x20","\xed"),
	HX_HCSTRING("resize","\xf4","\x59","\x7b","\x08"),
	::String(null()) };

static void FlxUILine_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxUILine_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxUILine_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxUILine_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxUILine_obj::__mClass;

void FlxUILine_obj::__register()
{
	hx::Object *dummy = new FlxUILine_obj;
	FlxUILine_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.ui.FlxUILine","\xe9","\x9a","\xd0","\x9d");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxUILine_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxUILine_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxUILine_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxUILine_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxUILine_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxUILine_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace ui
