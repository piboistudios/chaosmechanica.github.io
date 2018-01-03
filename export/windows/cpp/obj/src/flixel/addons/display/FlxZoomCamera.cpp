// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxZoomCamera
#include <flixel/addons/display/FlxZoomCamera.h>
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

HX_DEFINE_STACK_FRAME(_hx_pos_56c99884aa5caa3a_13_new,"flixel.addons.display.FlxZoomCamera","new",0x177ec0e7,"flixel.addons.display.FlxZoomCamera.new","flixel/addons/display/FlxZoomCamera.hx",13,0x378ebc8a)
HX_LOCAL_STACK_FRAME(_hx_pos_56c99884aa5caa3a_38_update,"flixel.addons.display.FlxZoomCamera","update",0xc28c63e2,"flixel.addons.display.FlxZoomCamera.update","flixel/addons/display/FlxZoomCamera.hx",38,0x378ebc8a)
HX_LOCAL_STACK_FRAME(_hx_pos_56c99884aa5caa3a_63_alignCamera,"flixel.addons.display.FlxZoomCamera","alignCamera",0x274442d1,"flixel.addons.display.FlxZoomCamera.alignCamera","flixel/addons/display/FlxZoomCamera.hx",63,0x378ebc8a)
namespace flixel{
namespace addons{
namespace display{

void FlxZoomCamera_obj::__construct(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom){
Float Zoom = __o_Zoom.Default(0);
            	HX_STACKFRAME(&_hx_pos_56c99884aa5caa3a_13_new)
HXLINE(  29)		this->zoomMargin = ((Float)0.25);
HXLINE(  23)		this->zoomSpeed = ((Float)25);
HXLINE(  33)		super::__construct(X,Y,Width,Height,::flixel::FlxCamera_obj::defaultZoom);
HXLINE(  34)		this->targetZoom = Zoom;
            	}

Dynamic FlxZoomCamera_obj::__CreateEmpty() { return new FlxZoomCamera_obj; }

void *FlxZoomCamera_obj::_hx_vtable = 0;

Dynamic FlxZoomCamera_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FlxZoomCamera_obj > _hx_result = new FlxZoomCamera_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxZoomCamera_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e6fb733) {
		if (inClassId<=(int)0x25a685e0) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x25a685e0;
		} else {
			return inClassId==(int)0x2e6fb733;
		}
	} else {
		return inClassId==(int)0x472260df;
	}
}

void FlxZoomCamera_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_56c99884aa5caa3a_38_update)
HXLINE(  39)		this->super::update(elapsed);
HXLINE(  42)		{
HXLINE(  42)			 ::flixel::addons::display::FlxZoomCamera _g = hx::ObjectPtr<OBJ_>(this);
HXDLIN(  42)			Float _g1 = _g->zoom;
HXDLIN(  42)			_g->set_zoom((_g1 + ((((Float)(this->targetZoom - this->zoom) / (Float)(int)2) * elapsed) * this->zoomSpeed)));
            		}
HXLINE(  45)		bool _hx_tmp;
HXDLIN(  45)		if (hx::IsNotNull( this->target )) {
HXLINE(  45)			_hx_tmp = (this->zoom != (int)1);
            		}
            		else {
HXLINE(  45)			_hx_tmp = false;
            		}
HXDLIN(  45)		if (_hx_tmp) {
HXLINE(  47)			this->alignCamera();
            		}
            		else {
HXLINE(  51)			this->set_x((int)0);
HXLINE(  52)			this->set_y((int)0);
            		}
            	}


void FlxZoomCamera_obj::alignCamera(){
            	HX_STACKFRAME(&_hx_pos_56c99884aa5caa3a_63_alignCamera)
HXLINE(  65)		Float targetScreenX = (this->target->x - this->scroll->x);
HXLINE(  66)		Float targetScreenY = (this->target->y - this->scroll->y);
HXLINE(  70)		Float ratioMinX = ((((Float)targetScreenX / (Float)((Float)this->width / (Float)(int)2)) - (int)1) - this->zoomMargin);
HXLINE(  71)		Float ratioMinY = ((((Float)targetScreenY / (Float)((Float)this->height / (Float)(int)2)) - (int)1) - this->zoomMargin);
HXLINE(  72)		Float ratioMaxX = (-(this->width) + targetScreenX);
HXDLIN(  72)		Float ratioMaxX1 = ((((Float)ratioMaxX / (Float)((Float)this->width / (Float)(int)2)) + (int)1) + this->zoomMargin);
HXLINE(  73)		Float ratioMaxY = (-(this->height) + targetScreenY);
HXDLIN(  73)		Float ratioMaxY1 = ((((Float)ratioMaxY / (Float)((Float)this->height / (Float)(int)2)) + (int)1) + this->zoomMargin);
HXLINE(  76)		Float lowerBound;
HXDLIN(  76)		if ((ratioMinX < (int)-1)) {
HXLINE(  76)			lowerBound = (int)-1;
            		}
            		else {
HXLINE(  76)			lowerBound = ratioMinX;
            		}
HXDLIN(  76)		 ::Dynamic offsetX;
HXDLIN(  76)		if ((lowerBound > (int)0)) {
HXLINE(  76)			offsetX = (int)0;
            		}
            		else {
HXLINE(  76)			offsetX = lowerBound;
            		}
HXDLIN(  76)		Float lowerBound1;
HXDLIN(  76)		if ((ratioMaxX1 < (int)0)) {
HXLINE(  76)			lowerBound1 = (int)0;
            		}
            		else {
HXLINE(  76)			lowerBound1 = ratioMaxX1;
            		}
HXDLIN(  76)		 ::Dynamic offsetX1;
HXDLIN(  76)		if ((lowerBound1 > (int)1)) {
HXLINE(  76)			offsetX1 = (int)1;
            		}
            		else {
HXLINE(  76)			offsetX1 = lowerBound1;
            		}
HXDLIN(  76)		Float offsetX2 = (offsetX + offsetX1);
HXLINE(  77)		Float lowerBound2;
HXDLIN(  77)		if ((ratioMinY < (int)-1)) {
HXLINE(  77)			lowerBound2 = (int)-1;
            		}
            		else {
HXLINE(  77)			lowerBound2 = ratioMinY;
            		}
HXDLIN(  77)		 ::Dynamic offsetY;
HXDLIN(  77)		if ((lowerBound2 > (int)0)) {
HXLINE(  77)			offsetY = (int)0;
            		}
            		else {
HXLINE(  77)			offsetY = lowerBound2;
            		}
HXDLIN(  77)		Float lowerBound3;
HXDLIN(  77)		if ((ratioMaxY1 < (int)0)) {
HXLINE(  77)			lowerBound3 = (int)0;
            		}
            		else {
HXLINE(  77)			lowerBound3 = ratioMaxY1;
            		}
HXDLIN(  77)		 ::Dynamic offsetY1;
HXDLIN(  77)		if ((lowerBound3 > (int)1)) {
HXLINE(  77)			offsetY1 = (int)1;
            		}
            		else {
HXLINE(  77)			offsetY1 = lowerBound3;
            		}
HXDLIN(  77)		Float offsetY2 = (offsetY + offsetY1);
HXLINE(  81)		Float _hx_tmp = (-(((Float)this->width / (Float)(int)2)) * offsetX2);
HXDLIN(  81)		this->set_x((_hx_tmp * (this->zoom - ::flixel::FlxCamera_obj::defaultZoom)));
HXLINE(  82)		Float _hx_tmp1 = (-(((Float)this->height / (Float)(int)2)) * offsetY2);
HXDLIN(  82)		this->set_y((_hx_tmp1 * (this->zoom - ::flixel::FlxCamera_obj::defaultZoom)));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxZoomCamera_obj,alignCamera,(void))


hx::ObjectPtr< FlxZoomCamera_obj > FlxZoomCamera_obj::__new(int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom) {
	hx::ObjectPtr< FlxZoomCamera_obj > __this = new FlxZoomCamera_obj();
	__this->__construct(X,Y,Width,Height,__o_Zoom);
	return __this;
}

hx::ObjectPtr< FlxZoomCamera_obj > FlxZoomCamera_obj::__alloc(hx::Ctx *_hx_ctx,int X,int Y,int Width,int Height,hx::Null< Float >  __o_Zoom) {
	FlxZoomCamera_obj *__this = (FlxZoomCamera_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FlxZoomCamera_obj), true, "flixel.addons.display.FlxZoomCamera"));
	*(void **)__this = FlxZoomCamera_obj::_hx_vtable;
	__this->__construct(X,Y,Width,Height,__o_Zoom);
	return __this;
}

FlxZoomCamera_obj::FlxZoomCamera_obj()
{
}

hx::Val FlxZoomCamera_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"zoomSpeed") ) { return hx::Val( zoomSpeed ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetZoom") ) { return hx::Val( targetZoom ); }
		if (HX_FIELD_EQ(inName,"zoomMargin") ) { return hx::Val( zoomMargin ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"alignCamera") ) { return hx::Val( alignCamera_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FlxZoomCamera_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"zoomSpeed") ) { zoomSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"targetZoom") ) { targetZoom=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"zoomMargin") ) { zoomMargin=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxZoomCamera_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("targetZoom","\x04","\x3f","\x29","\xab"));
	outFields->push(HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05"));
	outFields->push(HX_HCSTRING("zoomMargin","\xa1","\x97","\xae","\x8a"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FlxZoomCamera_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FlxZoomCamera_obj,targetZoom),HX_HCSTRING("targetZoom","\x04","\x3f","\x29","\xab")},
	{hx::fsFloat,(int)offsetof(FlxZoomCamera_obj,zoomSpeed),HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05")},
	{hx::fsFloat,(int)offsetof(FlxZoomCamera_obj,zoomMargin),HX_HCSTRING("zoomMargin","\xa1","\x97","\xae","\x8a")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FlxZoomCamera_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxZoomCamera_obj_sMemberFields[] = {
	HX_HCSTRING("targetZoom","\x04","\x3f","\x29","\xab"),
	HX_HCSTRING("zoomSpeed","\x74","\x5f","\x37","\x05"),
	HX_HCSTRING("zoomMargin","\xa1","\x97","\xae","\x8a"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("alignCamera","\x4a","\xf3","\x5a","\x46"),
	::String(null()) };

static void FlxZoomCamera_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxZoomCamera_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxZoomCamera_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxZoomCamera_obj::__mClass,"__mClass");
};

#endif

hx::Class FlxZoomCamera_obj::__mClass;

void FlxZoomCamera_obj::__register()
{
	hx::Object *dummy = new FlxZoomCamera_obj;
	FlxZoomCamera_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("flixel.addons.display.FlxZoomCamera","\x75","\xc1","\xec","\x5e");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FlxZoomCamera_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FlxZoomCamera_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FlxZoomCamera_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxZoomCamera_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxZoomCamera_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxZoomCamera_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace addons
} // end namespace display
