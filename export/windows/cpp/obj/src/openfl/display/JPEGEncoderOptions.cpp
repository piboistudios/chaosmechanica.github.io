// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_openfl_display_JPEGEncoderOptions
#include <openfl/display/JPEGEncoderOptions.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_05e3536633e8ac7b_12_new,"openfl.display.JPEGEncoderOptions","new",0xdec807a6,"openfl.display.JPEGEncoderOptions.new","openfl/display/JPEGEncoderOptions.hx",12,0xc451ba48)
namespace openfl{
namespace display{

void JPEGEncoderOptions_obj::__construct(hx::Null< int >  __o_quality){
int quality = __o_quality.Default(80);
            	HX_STACKFRAME(&_hx_pos_05e3536633e8ac7b_12_new)
HXDLIN(  12)		this->quality = quality;
            	}

Dynamic JPEGEncoderOptions_obj::__CreateEmpty() { return new JPEGEncoderOptions_obj; }

void *JPEGEncoderOptions_obj::_hx_vtable = 0;

Dynamic JPEGEncoderOptions_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< JPEGEncoderOptions_obj > _hx_result = new JPEGEncoderOptions_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool JPEGEncoderOptions_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x08ab8b9c;
}


JPEGEncoderOptions_obj::JPEGEncoderOptions_obj()
{
}

hx::Val JPEGEncoderOptions_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { return hx::Val( quality ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val JPEGEncoderOptions_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"quality") ) { quality=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JPEGEncoderOptions_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo JPEGEncoderOptions_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(JPEGEncoderOptions_obj,quality),HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *JPEGEncoderOptions_obj_sStaticStorageInfo = 0;
#endif

static ::String JPEGEncoderOptions_obj_sMemberFields[] = {
	HX_HCSTRING("quality","\xbf","\x04","\x4c","\x44"),
	::String(null()) };

static void JPEGEncoderOptions_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void JPEGEncoderOptions_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(JPEGEncoderOptions_obj::__mClass,"__mClass");
};

#endif

hx::Class JPEGEncoderOptions_obj::__mClass;

void JPEGEncoderOptions_obj::__register()
{
	hx::Object *dummy = new JPEGEncoderOptions_obj;
	JPEGEncoderOptions_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl.display.JPEGEncoderOptions","\xb4","\xfc","\x3d","\x3f");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = JPEGEncoderOptions_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(JPEGEncoderOptions_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< JPEGEncoderOptions_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = JPEGEncoderOptions_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JPEGEncoderOptions_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JPEGEncoderOptions_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace display
