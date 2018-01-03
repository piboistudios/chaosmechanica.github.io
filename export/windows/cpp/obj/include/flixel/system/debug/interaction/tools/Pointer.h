// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#define INCLUDED_flixel_system_debug_interaction_tools_Pointer

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,math,FlxRect)
HX_DECLARE_CLASS3(flixel,_hx_system,debug,Window)
HX_DECLARE_CLASS4(flixel,_hx_system,debug,interaction,Interaction)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Pointer)
HX_DECLARE_CLASS5(flixel,_hx_system,debug,interaction,tools,Tool)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
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


class HXCPP_CLASS_ATTRIBUTES Pointer_obj : public  ::flixel::_hx_system::debug::interaction::tools::Tool_obj
{
	public:
		typedef  ::flixel::_hx_system::debug::interaction::tools::Tool_obj super;
		typedef Pointer_obj OBJ_;
		Pointer_obj();

	public:
		enum { _hx_ClassId = 0x350cec4c };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.system.debug.interaction.tools.Pointer")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.system.debug.interaction.tools.Pointer"); }
		static hx::ObjectPtr< Pointer_obj > __new();
		static hx::ObjectPtr< Pointer_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~Pointer_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("Pointer","\x9d","\xe8","\x72","\x1e"); }

		 ::flixel::math::FlxPoint _selectionStartPoint;
		 ::flixel::math::FlxPoint _selectionEndPoint;
		bool _selectionHappening;
		bool _selectionCancelled;
		 ::flixel::math::FlxRect _selectionArea;
		::Array< ::Dynamic> _itemsInSelectionArea;
		 ::flixel::_hx_system::debug::interaction::tools::Tool init( ::flixel::_hx_system::debug::interaction::Interaction brain);

		void update();

		void calculateSelectionArea();
		::Dynamic calculateSelectionArea_dyn();

		void startSelection();
		::Dynamic startSelection_dyn();

		void cancelSelection();
		::Dynamic cancelSelection_dyn();

		void stopSelection(hx::Null< bool >  findItems);
		::Dynamic stopSelection_dyn();

		void updateConsoleSelection();
		::Dynamic updateConsoleSelection_dyn();

		void handleItemAddition(::Array< ::Dynamic> itemsInSelectionArea);
		::Dynamic handleItemAddition_dyn();

		void draw();

};

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools

#endif /* INCLUDED_flixel_system_debug_interaction_tools_Pointer */ 
