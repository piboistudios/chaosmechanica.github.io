// Generated by Haxe 3.4.4
#ifndef INCLUDED_util_mechanica_MechBullet
#define INCLUDED_util_mechanica_MechBullet

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_util_interfaces_ICollider
#include <util/interfaces/ICollider.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS1(flixel,IFlxBasic)
HX_DECLARE_CLASS1(flixel,IFlxSprite)
HX_DECLARE_CLASS3(flixel,addons,display,FlxNestedSprite)
HX_DECLARE_CLASS3(flixel,addons,weapon,FlxBullet)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(util,interfaces,ICollider)
HX_DECLARE_CLASS2(util,mechanica,MechBullet)
HX_DECLARE_CLASS2(util,mechanica,Mechanica)

namespace util{
namespace mechanica{


class HXCPP_CLASS_ATTRIBUTES MechBullet_obj : public  ::flixel::addons::weapon::FlxBullet_obj
{
	public:
		typedef  ::flixel::addons::weapon::FlxBullet_obj super;
		typedef MechBullet_obj OBJ_;
		MechBullet_obj();

	public:
		enum { _hx_ClassId = 0x15e89376 };

		void __construct(Float lifespan, ::util::mechanica::Mechanica parent);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="util.mechanica.MechBullet")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"util.mechanica.MechBullet"); }
		static hx::ObjectPtr< MechBullet_obj > __new(Float lifespan, ::util::mechanica::Mechanica parent);
		static hx::ObjectPtr< MechBullet_obj > __alloc(hx::Ctx *_hx_ctx,Float lifespan, ::util::mechanica::Mechanica parent);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~MechBullet_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("MechBullet","\x3f","\xe2","\x03","\x1c"); }

		 ::util::mechanica::Mechanica parent;
		void update(Float elapsed);

		bool collided( ::Dynamic c1, ::Dynamic c2);
		::Dynamic collided_dyn();

		void collideWith( ::Dynamic col);
		::Dynamic collideWith_dyn();

		void postCollision();
		::Dynamic postCollision_dyn();

};

} // end namespace util
} // end namespace mechanica

#endif /* INCLUDED_util_mechanica_MechBullet */ 
