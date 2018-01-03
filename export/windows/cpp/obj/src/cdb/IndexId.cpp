// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_cdb_ColumnType
#include <cdb/ColumnType.h>
#endif
#ifndef INCLUDED_cdb_Index
#include <cdb/Index.h>
#endif
#ifndef INCLUDED_cdb_IndexId
#include <cdb/IndexId.h>
#endif
#ifndef INCLUDED_haxe_IMap
#include <haxe/IMap.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_01776279c09942d8_199_new,"cdb.IndexId","new",0xe4a3dd92,"cdb.IndexId.new","cdb/Types.hx",199,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_01776279c09942d8_220_get,"cdb.IndexId","get",0xe49e8dc8,"cdb.IndexId.get","cdb/Types.hx",220,0xc287d473)
HX_LOCAL_STACK_FRAME(_hx_pos_01776279c09942d8_223_resolve,"cdb.IndexId","resolve",0xb343a11e,"cdb.IndexId.resolve","cdb/Types.hx",223,0xc287d473)
namespace cdb{

void IndexId_obj::__construct( ::Dynamic data,::String name){
            	HX_GC_STACKFRAME(&_hx_pos_01776279c09942d8_199_new)
HXLINE( 200)		super::__construct(data,name);
HXLINE( 201)		this->byId =  ::haxe::ds::StringMap_obj::__alloc( HX_CTX );
HXLINE( 202)		this->byIndex = ::cpp::VirtualArray_obj::__new(0);
HXLINE( 203)		{
HXLINE( 203)			int _g = (int)0;
HXDLIN( 203)			::Array< ::Dynamic> _g1 = ( (::Array< ::Dynamic>)(this->sheet->__Field(HX_("columns",dd,ac,59,f3),hx::paccDynamic)) );
HXDLIN( 203)			while((_g < _g1->length)){
HXLINE( 203)				 ::Dynamic c = _g1->__get(_g);
HXDLIN( 203)				_g = (_g + (int)1);
HXLINE( 204)				{
HXLINE( 204)					 ::cdb::ColumnType _g2 = c->__Field(HX_("type",ba,f2,08,4d),hx::paccDynamic);
HXDLIN( 204)					if ((_hx_getEnumValueIndex(_g2) == (int)0)) {
HXLINE( 206)						::String cname = ( (::String)(c->__Field(HX_("name",4b,72,ff,48),hx::paccDynamic)) );
HXLINE( 207)						{
HXLINE( 207)							int _g21 = (int)0;
HXDLIN( 207)							::cpp::VirtualArray _g3 = ( (::cpp::VirtualArray)(this->sheet->__Field(HX_("lines",ff,dd,01,75),hx::paccDynamic)) );
HXDLIN( 207)							while((_g21 < _g3->get_length())){
HXLINE( 207)								 ::Dynamic a = _g3->__get(_g21);
HXDLIN( 207)								_g21 = (_g21 + (int)1);
HXLINE( 208)								::String id = ( (::String)(::Reflect_obj::field(a,cname)) );
HXLINE( 209)								bool _hx_tmp;
HXDLIN( 209)								if (hx::IsNotNull( id )) {
HXLINE( 209)									_hx_tmp = (id != HX_("",00,00,00,00));
            								}
            								else {
HXLINE( 209)									_hx_tmp = false;
            								}
HXDLIN( 209)								if (_hx_tmp) {
HXLINE( 210)									::haxe::IMap_obj::set(this->byId,id,a);
HXLINE( 211)									this->byIndex->push(a);
            								}
            							}
            						}
HXLINE( 214)						goto _hx_goto_0;
            					}
            				}
            			}
            			_hx_goto_0:;
            		}
            	}

Dynamic IndexId_obj::__CreateEmpty() { return new IndexId_obj; }

void *IndexId_obj::_hx_vtable = 0;

Dynamic IndexId_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< IndexId_obj > _hx_result = new IndexId_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool IndexId_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x0dcc4450) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x0dcc4450;
	} else {
		return inClassId==(int)0x43feba79;
	}
}

 ::Dynamic IndexId_obj::get( ::Dynamic k){
            	HX_STACKFRAME(&_hx_pos_01776279c09942d8_220_get)
HXDLIN( 220)		return this->byId->get(( (::String)(k) ));
            	}


HX_DEFINE_DYNAMIC_FUNC1(IndexId_obj,get,return )

 ::Dynamic IndexId_obj::resolve(::String id, ::Dynamic opt){
            	HX_STACKFRAME(&_hx_pos_01776279c09942d8_223_resolve)
HXLINE( 224)		if (hx::IsNull( id )) {
HXLINE( 224)			return null();
            		}
HXLINE( 225)		 ::Dynamic v = this->byId->get(id);
HXLINE( 226)		bool _hx_tmp;
HXDLIN( 226)		if (hx::IsNull( v )) {
HXLINE( 226)			_hx_tmp = !(opt);
            		}
            		else {
HXLINE( 226)			_hx_tmp = false;
            		}
HXDLIN( 226)		if (_hx_tmp) {
HXLINE( 226)			HX_STACK_DO_THROW((((HX_("Missing ",1a,76,54,ba) + this->name) + HX_(".",2e,00,00,00)) + id));
            		}
            		else {
HXLINE( 226)			return v;
            		}
HXDLIN( 226)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(IndexId_obj,resolve,return )


hx::ObjectPtr< IndexId_obj > IndexId_obj::__new( ::Dynamic data,::String name) {
	hx::ObjectPtr< IndexId_obj > __this = new IndexId_obj();
	__this->__construct(data,name);
	return __this;
}

hx::ObjectPtr< IndexId_obj > IndexId_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic data,::String name) {
	IndexId_obj *__this = (IndexId_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(IndexId_obj), true, "cdb.IndexId"));
	*(void **)__this = IndexId_obj::_hx_vtable;
	__this->__construct(data,name);
	return __this;
}

IndexId_obj::IndexId_obj()
{
}

void IndexId_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(IndexId);
	HX_MARK_MEMBER_NAME(byIndex,"byIndex");
	HX_MARK_MEMBER_NAME(byId,"byId");
	 ::cdb::Index_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void IndexId_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(byIndex,"byIndex");
	HX_VISIT_MEMBER_NAME(byId,"byId");
	 ::cdb::Index_obj::__Visit(HX_VISIT_ARG);
}

hx::Val IndexId_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"get") ) { return hx::Val( get_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"byId") ) { return hx::Val( byId ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"byIndex") ) { return hx::Val( byIndex ); }
		if (HX_FIELD_EQ(inName,"resolve") ) { return hx::Val( resolve_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val IndexId_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"byId") ) { byId=inValue.Cast<  ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"byIndex") ) { byIndex=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void IndexId_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("byIndex","\xbb","\x29","\xa8","\x9d"));
	outFields->push(HX_HCSTRING("byId","\x92","\xf9","\x22","\x41"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo IndexId_obj_sMemberStorageInfo[] = {
	{hx::fsObject /*cpp::ArrayBase*/ ,(int)offsetof(IndexId_obj,byIndex),HX_HCSTRING("byIndex","\xbb","\x29","\xa8","\x9d")},
	{hx::fsObject /*::haxe::ds::StringMap*/ ,(int)offsetof(IndexId_obj,byId),HX_HCSTRING("byId","\x92","\xf9","\x22","\x41")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *IndexId_obj_sStaticStorageInfo = 0;
#endif

static ::String IndexId_obj_sMemberFields[] = {
	HX_HCSTRING("byIndex","\xbb","\x29","\xa8","\x9d"),
	HX_HCSTRING("byId","\x92","\xf9","\x22","\x41"),
	HX_HCSTRING("get","\x96","\x80","\x4e","\x00"),
	HX_HCSTRING("resolve","\xec","\x12","\x60","\x67"),
	::String(null()) };

static void IndexId_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(IndexId_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void IndexId_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(IndexId_obj::__mClass,"__mClass");
};

#endif

hx::Class IndexId_obj::__mClass;

void IndexId_obj::__register()
{
	hx::Object *dummy = new IndexId_obj;
	IndexId_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("cdb.IndexId","\xa0","\x6c","\xa5","\xa8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = IndexId_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(IndexId_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< IndexId_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = IndexId_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = IndexId_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = IndexId_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace cdb
