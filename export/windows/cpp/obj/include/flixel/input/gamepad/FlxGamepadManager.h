// Generated by Haxe 3.4.4
#ifndef INCLUDED_flixel_input_gamepad_FlxGamepadManager
#define INCLUDED_flixel_input_gamepad_FlxGamepadManager

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_input_IFlxInputManager
#include <flixel/input/IFlxInputManager.h>
#endif
HX_DECLARE_CLASS2(flixel,input,IFlxInputManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepad)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadAnalogStick)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadManager)
HX_DECLARE_CLASS3(flixel,input,gamepad,FlxGamepadModel)
HX_DECLARE_CLASS2(flixel,math,FlxPoint)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)
HX_DECLARE_CLASS2(flixel,util,IFlxPooled)
HX_DECLARE_CLASS3(openfl,_legacy,events,Event)
HX_DECLARE_CLASS3(openfl,_legacy,events,JoystickEvent)

namespace flixel{
namespace input{
namespace gamepad{


class HXCPP_CLASS_ATTRIBUTES FlxGamepadManager_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef FlxGamepadManager_obj OBJ_;
		FlxGamepadManager_obj();

	public:
		enum { _hx_ClassId = 0x4b9a9f2b };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel.input.gamepad.FlxGamepadManager")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"flixel.input.gamepad.FlxGamepadManager"); }
		static hx::ObjectPtr< FlxGamepadManager_obj > __new();
		static hx::ObjectPtr< FlxGamepadManager_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~FlxGamepadManager_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_HCSTRING("FlxGamepadManager","\xbe","\xdb","\x07","\x36"); }

		 ::flixel::input::gamepad::FlxGamepad firstActive;
		 ::flixel::input::gamepad::FlxGamepad lastActive;
		int numActiveGamepads;
		 ::Dynamic globalDeadZone;
		::Array< ::Dynamic> _gamepads;
		::Array< ::Dynamic> _activeGamepads;
		 ::flixel::input::gamepad::FlxGamepad getByID(int GamepadID);
		::Dynamic getByID_dyn();

		void removeByID(int GamepadID);
		::Dynamic removeByID_dyn();

		 ::flixel::input::gamepad::FlxGamepad createByID(int GamepadID, ::flixel::input::gamepad::FlxGamepadModel Model);
		::Dynamic createByID_dyn();

		::Array< int > getActiveGamepadIDs(::Array< int > IDsArray);
		::Dynamic getActiveGamepadIDs_dyn();

		::Array< ::Dynamic> getActiveGamepads(::Array< ::Dynamic> GamepadArray);
		::Dynamic getActiveGamepads_dyn();

		int getFirstActiveGamepadID();
		::Dynamic getFirstActiveGamepadID_dyn();

		 ::flixel::input::gamepad::FlxGamepad getFirstActiveGamepad();
		::Dynamic getFirstActiveGamepad_dyn();

		bool anyButton(hx::Null< int >  state);
		::Dynamic anyButton_dyn();

		bool anyInput();
		::Dynamic anyInput_dyn();

		bool anyPressed(int buttonID);
		::Dynamic anyPressed_dyn();

		bool anyJustPressed(int buttonID);
		::Dynamic anyJustPressed_dyn();

		bool anyJustReleased(int buttonID);
		::Dynamic anyJustReleased_dyn();

		bool anyHasState(int buttonID,int state);
		::Dynamic anyHasState_dyn();

		Float anyMovedXAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		::Dynamic anyMovedXAxis_dyn();

		Float anyMovedYAxis( ::flixel::input::gamepad::FlxGamepadAnalogStick RawAxisID);
		::Dynamic anyMovedYAxis_dyn();

		void destroy();
		::Dynamic destroy_dyn();

		void reset();
		::Dynamic reset_dyn();

		 ::flixel::input::gamepad::FlxGamepadModel getModelFromJoystick(Float id);
		::Dynamic getModelFromJoystick_dyn();

		void handleButtonDownEvent( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleButtonDownEvent_dyn();

		void handleButtonDown(int device,int id);
		::Dynamic handleButtonDown_dyn();

		void handleButtonUpEvent( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleButtonUpEvent_dyn();

		void handleButtonUp(int device,int id);
		::Dynamic handleButtonUp_dyn();

		void handleAxisMove( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleAxisMove_dyn();

		void copyToPointWithDeadzone( ::flixel::input::gamepad::FlxGamepad gamepad, ::flixel::math::FlxPoint point, ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic copyToPointWithDeadzone_dyn();

		void handleBallMove( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleBallMove_dyn();

		void handleHatMove( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleHatMove_dyn();

		void checkDpadAxisChange(int device,Float oldValue,Float newValue,int negativeID,int positiveID);
		::Dynamic checkDpadAxisChange_dyn();

		void handleDeviceAdded( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleDeviceAdded_dyn();

		void handleDeviceRemoved( ::openfl::_legacy::events::JoystickEvent event);
		::Dynamic handleDeviceRemoved_dyn();

		void update();
		::Dynamic update_dyn();

		void onFocus();
		::Dynamic onFocus_dyn();

		void onFocusLost();
		::Dynamic onFocusLost_dyn();

		int get_numActiveGamepads();
		::Dynamic get_numActiveGamepads_dyn();

};

} // end namespace flixel
} // end namespace input
} // end namespace gamepad

#endif /* INCLUDED_flixel_input_gamepad_FlxGamepadManager */ 
