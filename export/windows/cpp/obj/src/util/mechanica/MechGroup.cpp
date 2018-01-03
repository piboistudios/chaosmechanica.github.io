// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
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
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_util_mechanica_MechGroup
#include <util/mechanica/MechGroup.h>
#endif
#ifndef INCLUDED_util_mechanica_Mechanica
#include <util/mechanica/Mechanica.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_d0dc1286e267bf9f_4_new,"util.mechanica.MechGroup","new",0x80edb297,"util.mechanica.MechGroup.new","util/mechanica/MechGroup.hx",4,0x023932fb)
HX_LOCAL_STACK_FRAME(_hx_pos_d0dc1286e267bf9f_8_add,"util.mechanica.MechGroup","add",0x80e3d458,"util.mechanica.MechGroup.add","util/mechanica/MechGroup.hx",8,0x023932fb)
namespace util{
namespace mechanica{

void MechGroup_obj::__construct( ::Dynamic X, ::Dynamic Y, ::Dynamic MaxSize){
            	HX_STACKFRAME(&_hx_pos_d0dc1286e267bf9f_4_new)
HXDLIN(   4)		super::__construct(X,Y,MaxSize);
            	}

Dynamic MechGroup_obj::__CreateEmpty() { return new MechGroup_obj; }

void *MechGroup_obj::_hx_vtable = 0;

Dynamic MechGroup_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< MechGroup_obj > _hx_result = new MechGroup_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool MechGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x282173df) {
		if (inClassId<=(int)0x25a685e0) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x25a685e0;
			}
		} else {
			return inClassId==(int)0x282173df;
		}
	} else {
		return inClassId==(int)0x2e105115 || inClassId==(int)0x6e1fe727;
	}
}

 ::Dynamic MechGroup_obj::add( ::Dynamic _tmp_v){
            	HX_STACKFRAME(&_hx_pos_d0dc1286e267bf9f_8_add)
HXLINE(   9)		 ::flixel::FlxSprite v = ( ( ::flixel::FlxSprite)(_tmp_v) );
HXDLIN(   9)		if (::Std_obj::is(v,hx::ClassOf< ::util::mechanica::Mechanica >())) {
HXLINE(  11)			this->super::add(v);
HXLINE(  12)			hx::TCast<  ::util::mechanica::Mechanica >::cast(v)->team = hx::ObjectPtr<OBJ_>(this);
HXLINE(  13)			return v;
            		}
HXLINE(  15)		return null();
            	}



hx::ObjectPtr< MechGroup_obj > MechGroup_obj::__new( ::Dynamic X, ::Dynamic Y, ::Dynamic MaxSize) {
	hx::ObjectPtr< MechGroup_obj > __this = new MechGroup_obj();
	__this->__construct(X,Y,MaxSize);
	return __this;
}

hx::ObjectPtr< MechGroup_obj > MechGroup_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y, ::Dynamic MaxSize) {
	MechGroup_obj *__this = (MechGroup_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(MechGroup_obj), true, "util.mechanica.MechGroup"));
	*(void **)__this = MechGroup_obj::_hx_vtable;
	__this->__construct(X,Y,MaxSize);
	return __this;
}

MechGroup_obj::MechGroup_obj()
{
}

void MechGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(MechGroup);
	HX_MARK_MEMBER_NAME(name,"name");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void MechGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	 ::flixel::group::FlxTypedSpriteGroup_obj::__Visit(HX_VISIT_ARG);
}

hx::Val MechGroup_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return hx::Val( add_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return hx::Val( name ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val MechGroup_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void MechGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("name","\x4b","\x72","\xff","\x48"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo MechGroup_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(MechGroup_obj,name),HX_HCSTRING("name","\x4b","\x72","\xff","\x48")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *MechGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String MechGroup_obj_sMemberFields[] = {
	HX_HCSTRING("name","\x4b","\x72","\xff","\x48"),
	HX_HCSTRING("add","\x21","\xf2","\x49","\x00"),
	::String(null()) };

static void MechGroup_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(MechGroup_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void MechGroup_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(MechGroup_obj::__mClass,"__mClass");
};

#endif

hx::Class MechGroup_obj::__mClass;

void MechGroup_obj::__register()
{
	hx::Object *dummy = new MechGroup_obj;
	MechGroup_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.MechGroup","\x25","\x1b","\x35","\x84");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = MechGroup_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(MechGroup_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< MechGroup_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = MechGroup_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = MechGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = MechGroup_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
