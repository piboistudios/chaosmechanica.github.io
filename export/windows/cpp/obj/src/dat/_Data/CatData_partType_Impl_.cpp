// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_dat__Data_CatData_partType_Impl_
#include <dat/_Data/CatData_partType_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_80b7b4beb5b7b6f8_29_ofInt,"dat._Data.CatData_partType_Impl_","ofInt",0x9cebf352,"dat._Data.CatData_partType_Impl_.ofInt","cdb/Module.hx",29,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_80b7b4beb5b7b6f8_39_toInt,"dat._Data.CatData_partType_Impl_","toInt",0x83dfc56e,"dat._Data.CatData_partType_Impl_.toInt","cdb/Module.hx",39,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_80b7b4beb5b7b6f8_9_boot,"dat._Data.CatData_partType_Impl_","boot",0xcc83c238,"dat._Data.CatData_partType_Impl_.boot","cdb/Module.hx",9,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_80b7b4beb5b7b6f8_14_boot,"dat._Data.CatData_partType_Impl_","boot",0xcc83c238,"dat._Data.CatData_partType_Impl_.boot","cdb/Module.hx",14,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_80b7b4beb5b7b6f8_20_boot,"dat._Data.CatData_partType_Impl_","boot",0xcc83c238,"dat._Data.CatData_partType_Impl_.boot","cdb/Module.hx",20,0x02d48d44)
static const ::String _hx_array_data_ec20e028_11[] = {
	HX_("head",20,29,0b,45),HX_("core",5f,bd,c4,41),HX_("legs",e5,08,b0,47),HX_("arms",97,92,74,40),HX_("thruster",05,dd,80,0e),HX_("equip",b0,d6,82,72),HX_("software",27,3c,4c,9b),
};
namespace dat{
namespace _Data{

void CatData_partType_Impl__obj::__construct() { }

Dynamic CatData_partType_Impl__obj::__CreateEmpty() { return new CatData_partType_Impl__obj; }

void *CatData_partType_Impl__obj::_hx_vtable = 0;

Dynamic CatData_partType_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CatData_partType_Impl__obj > _hx_result = new CatData_partType_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CatData_partType_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x13a9deea;
}

int CatData_partType_Impl__obj::head;

int CatData_partType_Impl__obj::core;

int CatData_partType_Impl__obj::legs;

int CatData_partType_Impl__obj::arms;

int CatData_partType_Impl__obj::thruster;

int CatData_partType_Impl__obj::equip;

int CatData_partType_Impl__obj::software;

int CatData_partType_Impl__obj::COUNT;

::Array< ::String > CatData_partType_Impl__obj::NAMES;

int CatData_partType_Impl__obj::ofInt(int v){
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_29_ofInt)
HXDLIN(  29)		return v;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_partType_Impl__obj,ofInt,return )

int CatData_partType_Impl__obj::toInt(int this1){
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_39_toInt)
HXDLIN(  39)		return this1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_partType_Impl__obj,toInt,return )


CatData_partType_Impl__obj::CatData_partType_Impl__obj()
{
}

bool CatData_partType_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"ofInt") ) { outValue = ofInt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"toInt") ) { outValue = toInt_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CatData_partType_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo CatData_partType_Impl__obj_sStaticStorageInfo[] = {
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::head,HX_HCSTRING("head","\x20","\x29","\x0b","\x45")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::core,HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::legs,HX_HCSTRING("legs","\xe5","\x08","\xb0","\x47")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::arms,HX_HCSTRING("arms","\x97","\x92","\x74","\x40")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::thruster,HX_HCSTRING("thruster","\x05","\xdd","\x80","\x0e")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::equip,HX_HCSTRING("equip","\xb0","\xd6","\x82","\x72")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::software,HX_HCSTRING("software","\x27","\x3c","\x4c","\x9b")},
	{hx::fsInt,(void *) &CatData_partType_Impl__obj::COUNT,HX_HCSTRING("COUNT","\xaf","\x7c","\x51","\xc8")},
	{hx::fsObject /*Array< ::String >*/ ,(void *) &CatData_partType_Impl__obj::NAMES,HX_HCSTRING("NAMES","\xa8","\xc7","\x72","\x14")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static void CatData_partType_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::head,"head");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::core,"core");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::legs,"legs");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::arms,"arms");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::thruster,"thruster");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::equip,"equip");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::software,"software");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::COUNT,"COUNT");
	HX_MARK_MEMBER_NAME(CatData_partType_Impl__obj::NAMES,"NAMES");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CatData_partType_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::head,"head");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::core,"core");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::legs,"legs");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::arms,"arms");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::thruster,"thruster");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::equip,"equip");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::software,"software");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::COUNT,"COUNT");
	HX_VISIT_MEMBER_NAME(CatData_partType_Impl__obj::NAMES,"NAMES");
};

#endif

hx::Class CatData_partType_Impl__obj::__mClass;

static ::String CatData_partType_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("head","\x20","\x29","\x0b","\x45"),
	HX_HCSTRING("core","\x5f","\xbd","\xc4","\x41"),
	HX_HCSTRING("legs","\xe5","\x08","\xb0","\x47"),
	HX_HCSTRING("arms","\x97","\x92","\x74","\x40"),
	HX_HCSTRING("thruster","\x05","\xdd","\x80","\x0e"),
	HX_HCSTRING("equip","\xb0","\xd6","\x82","\x72"),
	HX_HCSTRING("software","\x27","\x3c","\x4c","\x9b"),
	HX_HCSTRING("COUNT","\xaf","\x7c","\x51","\xc8"),
	HX_HCSTRING("NAMES","\xa8","\xc7","\x72","\x14"),
	HX_HCSTRING("ofInt","\x18","\xec","\x1d","\x2d"),
	HX_HCSTRING("toInt","\x34","\xbe","\x11","\x14"),
	::String(null())
};

void CatData_partType_Impl__obj::__register()
{
	hx::Object *dummy = new CatData_partType_Impl__obj;
	CatData_partType_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("dat._Data.CatData_partType_Impl_","\x28","\xe0","\x20","\xec");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CatData_partType_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CatData_partType_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CatData_partType_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CatData_partType_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CatData_partType_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CatData_partType_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CatData_partType_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CatData_partType_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		head = (int)0;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		core = (int)1;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		legs = (int)2;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		arms = (int)3;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		thruster = (int)4;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		equip = (int)5;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_9_boot)
HXDLIN(   9)		software = (int)6;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_14_boot)
HXDLIN(  14)		COUNT = (int)7;
            	}
{
            	HX_STACKFRAME(&_hx_pos_80b7b4beb5b7b6f8_20_boot)
HXDLIN(  20)		NAMES = ::Array_obj< ::String >::fromData( _hx_array_data_ec20e028_11,7);
            	}
}

} // end namespace dat
} // end namespace _Data
