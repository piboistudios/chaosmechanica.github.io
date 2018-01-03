// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#define INCLUDED_flixel_system_debug_interaction_tools_Tool

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS3(flixel,_hx_system,ui,FlxSystemButton)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS3(openfl,_legacy,display,BitmapData)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,DisplayObjectContainer)
HX_DECLARE_CLASS3(openfl,_legacy,display,IBitmapDrawable)
HX_DECLARE_CLASS3(openfl,_legacy,display,InteractiveObject)
HX_DECLARE_CLASS3(openfl,_legacy,display,Sprite)
HX_DECLARE_CLASS3(openfl,_legacy,events,EventDispatcher)
HX_DECLARE_CLASS3(openfl,_legacy,events,IEventDispatcher)

namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{


class HXCPP_CLASS_ATTRIBUTES Tool_obj : public  ::openfl::_legacy::display::Sprite_obj
{
	public:
		typedef  ::openfl::_legacy::display::Sprite_obj super;
		typedef Tool_obj OBJ_;
		Tool_obj();

	public:
		enum { _hx_ClassId = 0x5a9df069 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Tool")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.Tool"); }
		static hx::ObjectPtr< Tool_obj > __new();
		static hx::ObjectPtr< Tool_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Tool_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("Tool","\x78","\x87","\xda","\x37"); }

		 ::flixel::_hx_system::ui::FlxSystemButton button;
		 ::openfl::_legacy::display::BitmapData cursor;
		::String _name;
		::String _shortcut;
		 ::flixel::_hx_system::debug::interaction::Interaction _brain;
		virtual  ::flixel::_hx_system::debug::interaction::tools::Tool init( ::flixel::_hx_system::debug::interaction::Interaction brain);
		::Dynamic init_dyn();

		virtual void update();
		::Dynamic update_dyn();

		virtual void draw();
		::Dynamic draw_dyn();

		virtual void activate();
		::Dynamic activate_dyn();

		void deactivate();
		::Dynamic deactivate_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		bool isActive();
		::Dynamic isActive_dyn();

		void setButton(hx::Class Icon);
		::Dynamic setButton_dyn();

		void setCursor( ::openfl::_legacy::display::BitmapData Icon);
		::Dynamic setCursor_dyn();

		void onButtonClicked();
		::Dynamic onButtonClicked_dyn();

		::String getName();
		::Dynamic getName_dyn();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Tool */ 
