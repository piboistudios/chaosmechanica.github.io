// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_cdb_Index
#include <cdb/Index.h>
#endif
#ifndef INCLUDED_cdb_IndexId
#include <cdb/IndexId.h>
#endif
#ifndef INCLUDED_dat_Data
#include <dat/Data.h>
#endif
#ifndef INCLUDED_dat__Data_CatData_Impl_
#include <dat/_Data/CatData_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_216_get_id,"dat._Data.CatData_Impl_","get_id",0x7dc55d0e,"dat._Data.CatData_Impl_.get_id","cdb/Module.hx",216,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_229_get_partType,"dat._Data.CatData_Impl_","get_partType",0xdc82e1c0,"dat._Data.CatData_Impl_.get_partType","cdb/Module.hx",229,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_242_get_headDataObj,"dat._Data.CatData_Impl_","get_headDataObj",0x16f9cb1a,"dat._Data.CatData_Impl_.get_headDataObj","cdb/Module.hx",242,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_261_get_headDataObjId,"dat._Data.CatData_Impl_","get_headDataObjId",0x21568595,"dat._Data.CatData_Impl_.get_headDataObjId","cdb/Module.hx",261,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_242_get_coreDataObj,"dat._Data.CatData_Impl_","get_coreDataObj",0x50c4ccbb,"dat._Data.CatData_Impl_.get_coreDataObj","cdb/Module.hx",242,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_261_get_coreDataObjId,"dat._Data.CatData_Impl_","get_coreDataObjId",0xa51df176,"dat._Data.CatData_Impl_.get_coreDataObjId","cdb/Module.hx",261,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_242_get_carrierDataObj,"dat._Data.CatData_Impl_","get_carrierDataObj",0x07c41a88,"dat._Data.CatData_Impl_.get_carrierDataObj","cdb/Module.hx",242,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_261_get_carrierDataObjId,"dat._Data.CatData_Impl_","get_carrierDataObjId",0x94e60c83,"dat._Data.CatData_Impl_.get_carrierDataObjId","cdb/Module.hx",261,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_242_get_thrusterDataObj,"dat._Data.CatData_Impl_","get_thrusterDataObj",0x4c1dc855,"dat._Data.CatData_Impl_.get_thrusterDataObj","cdb/Module.hx",242,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_261_get_thrusterDataObjId,"dat._Data.CatData_Impl_","get_thrusterDataObjId",0xe5608790,"dat._Data.CatData_Impl_.get_thrusterDataObjId","cdb/Module.hx",261,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_242_get_equipDataObj,"dat._Data.CatData_Impl_","get_equipDataObj",0xefb8ce10,"dat._Data.CatData_Impl_.get_equipDataObj","cdb/Module.hx",242,0x02d48d44)
HX_LOCAL_STACK_FRAME(_hx_pos_f74c17d5c4786b7c_261_get_equipDataObjId,"dat._Data.CatData_Impl_","get_equipDataObjId",0xea14b20b,"dat._Data.CatData_Impl_.get_equipDataObjId","cdb/Module.hx",261,0x02d48d44)
namespace dat{
namespace _Data{

void CatData_Impl__obj::__construct() { }

Dynamic CatData_Impl__obj::__CreateEmpty() { return new CatData_Impl__obj; }

void *CatData_Impl__obj::_hx_vtable = 0;

Dynamic CatData_Impl__obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< CatData_Impl__obj > _hx_result = new CatData_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CatData_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x20245d6e;
}

::String CatData_Impl__obj::get_id( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_216_get_id)
HXDLIN( 216)		return ( (::String)(this1->__Field(HX_("id",db,5b,00,00),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_id,return )

int CatData_Impl__obj::get_partType( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_229_get_partType)
HXDLIN( 229)		return ( (int)(this1->__Field(HX_("partType",4d,78,c0,5e),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_partType,return )

 ::Dynamic CatData_Impl__obj::get_headDataObj( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_242_get_headDataObj)
HXDLIN( 242)		return ::dat::Data_obj::head->resolve(( (::String)(this1->__Field(HX_("headDataObj",ad,0a,11,5c),hx::paccDynamic)) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_headDataObj,return )

::String CatData_Impl__obj::get_headDataObjId( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_261_get_headDataObjId)
HXDLIN( 261)		return ( (::String)(this1->__Field(HX_("headDataObj",ad,0a,11,5c),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_headDataObjId,return )

 ::Dynamic CatData_Impl__obj::get_coreDataObj( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_242_get_coreDataObj)
HXDLIN( 242)		return ::dat::Data_obj::core->resolve(( (::String)(this1->__Field(HX_("coreDataObj",4e,0c,dc,95),hx::paccDynamic)) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_coreDataObj,return )

::String CatData_Impl__obj::get_coreDataObjId( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_261_get_coreDataObjId)
HXDLIN( 261)		return ( (::String)(this1->__Field(HX_("coreDataObj",4e,0c,dc,95),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_coreDataObjId,return )

 ::Dynamic CatData_Impl__obj::get_carrierDataObj( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_242_get_carrierDataObj)
HXDLIN( 242)		return ::dat::Data_obj::carrierUnits->resolve(( (::String)(this1->__Field(HX_("carrierDataObj",d5,98,a8,d0),hx::paccDynamic)) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_carrierDataObj,return )

::String CatData_Impl__obj::get_carrierDataObjId( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_261_get_carrierDataObjId)
HXDLIN( 261)		return ( (::String)(this1->__Field(HX_("carrierDataObj",d5,98,a8,d0),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_carrierDataObjId,return )

 ::Dynamic CatData_Impl__obj::get_thrusterDataObj( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_242_get_thrusterDataObj)
HXDLIN( 242)		return ::dat::Data_obj::thruster->resolve(( (::String)(this1->__Field(HX_("thrusterDataObj",68,cd,27,4b),hx::paccDynamic)) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_thrusterDataObj,return )

::String CatData_Impl__obj::get_thrusterDataObjId( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_261_get_thrusterDataObjId)
HXDLIN( 261)		return ( (::String)(this1->__Field(HX_("thrusterDataObj",68,cd,27,4b),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_thrusterDataObjId,return )

 ::Dynamic CatData_Impl__obj::get_equipDataObj( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_242_get_equipDataObj)
HXDLIN( 242)		return ::dat::Data_obj::equip->resolve(( (::String)(this1->__Field(HX_("equipDataObj",1d,2f,f9,1e),hx::paccDynamic)) ),null());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_equipDataObj,return )

::String CatData_Impl__obj::get_equipDataObjId( ::Dynamic this1){
            	HX_STACKFRAME(&_hx_pos_f74c17d5c4786b7c_261_get_equipDataObjId)
HXDLIN( 261)		return ( (::String)(this1->__Field(HX_("equipDataObj",1d,2f,f9,1e),hx::paccDynamic)) );
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(CatData_Impl__obj,get_equipDataObjId,return )


CatData_Impl__obj::CatData_Impl__obj()
{
}

bool CatData_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { outValue = get_id_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"get_partType") ) { outValue = get_partType_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_headDataObj") ) { outValue = get_headDataObj_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_coreDataObj") ) { outValue = get_coreDataObj_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_equipDataObj") ) { outValue = get_equipDataObj_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"get_headDataObjId") ) { outValue = get_headDataObjId_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_coreDataObjId") ) { outValue = get_coreDataObjId_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"get_carrierDataObj") ) { outValue = get_carrierDataObj_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"get_equipDataObjId") ) { outValue = get_equipDataObjId_dyn(); return true; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"get_thrusterDataObj") ) { outValue = get_thrusterDataObj_dyn(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"get_carrierDataObjId") ) { outValue = get_carrierDataObjId_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"get_thrusterDataObjId") ) { outValue = get_thrusterDataObjId_dyn(); return true; }
	}
	return false;
}

#if HXCPP_SCRIPTABLE
static hx::StorageInfo *CatData_Impl__obj_sMemberStorageInfo = 0;
static hx::StaticInfo *CatData_Impl__obj_sStaticStorageInfo = 0;
#endif

static void CatData_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(CatData_Impl__obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void CatData_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(CatData_Impl__obj::__mClass,"__mClass");
};

#endif

hx::Class CatData_Impl__obj::__mClass;

static ::String CatData_Impl__obj_sStaticFields[] = {
	HX_HCSTRING("get_id","\x24","\xf3","\x2f","\xa3"),
	HX_HCSTRING("get_partType","\x56","\x2c","\xda","\x13"),
	HX_HCSTRING("get_headDataObj","\x44","\xc2","\xf2","\x1c"),
	HX_HCSTRING("get_headDataObjId","\x3f","\x1b","\xdb","\x50"),
	HX_HCSTRING("get_coreDataObj","\xe5","\xc3","\xbd","\x56"),
	HX_HCSTRING("get_coreDataObjId","\x20","\x87","\xa2","\xd4"),
	HX_HCSTRING("get_carrierDataObj","\x9e","\x79","\x42","\x6c"),
	HX_HCSTRING("get_carrierDataObjId","\x19","\xdd","\x0a","\xdd"),
	HX_HCSTRING("get_thrusterDataObj","\x7f","\x9c","\x32","\xd6"),
	HX_HCSTRING("get_thrusterDataObjId","\x3a","\x3a","\x72","\xbd"),
	HX_HCSTRING("get_equipDataObj","\xa6","\x1b","\x98","\x23"),
	HX_HCSTRING("get_equipDataObjId","\x21","\x11","\x93","\x4e"),
	::String(null())
};

void CatData_Impl__obj::__register()
{
	hx::Object *dummy = new CatData_Impl__obj;
	CatData_Impl__obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("dat._Data.CatData_Impl_","\x44","\xdd","\x51","\x78");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CatData_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = CatData_Impl__obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(CatData_Impl__obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = hx::TCanCast< CatData_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = CatData_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CatData_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CatData_Impl__obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace dat
} // end namespace _Data
