// Generated by Haxe 3.4.4
#ifndef INCLUDED_util_control_PlayerController
#define INCLUDED_util_control_PlayerController

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_util_control_Controller
#include <util/control/Controller.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxObject)
HX_DECLARE_CLASS1(flixel,FlxSprite)
HX_DECLARE_CLASS2(flixel,group,FlxTypedSpriteGroup)
HX_DECLARE_CLASS2(flixel,ui,FlxVirtualPad)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(util,control,Controller)
HX_DECLARE_CLASS2(util,control,PlayerController)

namespace util{
namespace control{


class HXCPP_CLASS_ATTRIBUTES PlayerController_obj : public  ::util::control::Controller_obj
{
	public:
		typedef  ::util::control::Controller_obj super;
		typedef PlayerController_obj OBJ_;
		PlayerController_obj();

	public:
		enum { _hx_ClassId = 0x7fe98e1c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="util.control.PlayerController")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"util.control.PlayerController"); }
		static hx::ObjectPtr< PlayerController_obj > __new();
		static hx::ObjectPtr< PlayerController_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~PlayerController_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("PlayerController","\x7d","\xc7","\xdd","\x23"); }

		bool downInput;
		bool upInput;
		bool leftInput;
		bool rightInput;
		bool boostInput;
		bool strafeInput;
		bool fire1Input;
		bool fire2Input;
		 ::flixel::ui::FlxVirtualPad virtualPad;
		int PRESSED;
		void retrieveInputs();
		::Dynamic retrieveInputs_dyn();

		void populateBuffer();

		void processInputs();
		::Dynamic processInputs_dyn();

};

} // end namespace util
} // end namespace control

#endif /* INCLUDED_util_control_PlayerController */ 
