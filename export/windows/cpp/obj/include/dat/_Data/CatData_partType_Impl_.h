// Generated by Haxe 3.4.4
#ifndef INCLUDED_dat__Data_CatData_partType_Impl_
#define INCLUDED_dat__Data_CatData_partType_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(dat,_Data,CatData_partType_Impl_)

namespace dat{
namespace _Data{


class HXCPP_CLASS_ATTRIBUTES CatData_partType_Impl__obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef CatData_partType_Impl__obj OBJ_;
		CatData_partType_Impl__obj();

	public:
		enum { _hx_ClassId = 0x13a9deea };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="dat._Data.CatData_partType_Impl_")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"dat._Data.CatData_partType_Impl_"); }

		hx::ObjectPtr< CatData_partType_Impl__obj > __new() {
			hx::ObjectPtr< CatData_partType_Impl__obj > __this = new CatData_partType_Impl__obj();
			__this->__construct();
			return __this;
		}

		static hx::ObjectPtr< CatData_partType_Impl__obj > __alloc(hx::Ctx *_hx_ctx) {
			CatData_partType_Impl__obj *__this = (CatData_partType_Impl__obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(CatData_partType_Impl__obj), false, "dat._Data.CatData_partType_Impl_"));
			*(void **)__this = CatData_partType_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~CatData_partType_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("CatData_partType_Impl_","\x0c","\x3c","\x64","\x4d"); }

		static void __boot();
		static int head;
		static int core;
		static int legs;
		static int arms;
		static int thruster;
		static int equip;
		static int software;
		static int COUNT;
		static ::Array< ::String > NAMES;
		static int ofInt(int v);
		static ::Dynamic ofInt_dyn();

		static int toInt(int this1);
		static ::Dynamic toInt_dyn();

};

} // end namespace dat
} // end namespace _Data

#endif /* INCLUDED_dat__Data_CatData_partType_Impl_ */ 
