// Generated by Haxe 3.4.4
#ifndef INCLUDED_cdb_IndexId
#define INCLUDED_cdb_IndexId

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_cdb_Index
#include <cdb/Index.h>
#endif
HX_DECLARE_CLASS1(cdb,Index)
HX_DECLARE_CLASS1(cdb,IndexId)
HX_DECLARE_CLASS1(haxe,IMap)
HX_DECLARE_CLASS2(haxe,ds,StringMap)

namespace cdb{


class HXCPP_CLASS_ATTRIBUTES IndexId_obj : public  ::cdb::Index_obj
{
	public:
		typedef  ::cdb::Index_obj super;
		typedef IndexId_obj OBJ_;
		IndexId_obj();

	public:
		enum { _hx_ClassId = 0x0dcc4450 };

		void __construct( ::Dynamic data,::String name);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="cdb.IndexId")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"cdb.IndexId"); }
		static hx::ObjectPtr< IndexId_obj > __new( ::Dynamic data,::String name);
		static hx::ObjectPtr< IndexId_obj > __alloc(hx::Ctx *_hx_ctx, ::Dynamic data,::String name);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~IndexId_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("IndexId","\x6d","\x6b","\x10","\xae"); }

		::cpp::VirtualArray byIndex;
		 ::haxe::ds::StringMap byId;
		 ::Dynamic get( ::Dynamic k);
		::Dynamic get_dyn();

		 ::Dynamic resolve(::String id, ::Dynamic opt);
		::Dynamic resolve_dyn();

};

} // end namespace cdb

#endif /* INCLUDED_cdb_IndexId */ 
