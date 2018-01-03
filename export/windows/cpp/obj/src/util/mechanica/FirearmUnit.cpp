// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Global
#include <Global.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_IFlxBasic
#include <flixel/IFlxBasic.h>
#endif
#ifndef INCLUDED_flixel_IFlxSprite
#include <flixel/IFlxSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_display_FlxNestedSprite
#include <flixel/addons/display/FlxNestedSprite.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxBullet
#include <flixel/addons/weapon/FlxBullet.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxTypedWeapon
#include <flixel/addons/weapon/FlxTypedWeapon.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireFrom
#include <flixel/addons/weapon/FlxWeaponFireFrom.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponFireMode
#include <flixel/addons/weapon/FlxWeaponFireMode.h>
#endif
#ifndef INCLUDED_flixel_addons_weapon_FlxWeaponSpeedMode
#include <flixel/addons/weapon/FlxWeaponSpeedMode.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxPoint
#include <flixel/math/FlxPoint.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_helpers_FlxBounds
#include <flixel/util/helpers/FlxBounds.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObject
#include <openfl/_legacy/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_DisplayObjectContainer
#include <openfl/_legacy/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_IBitmapDrawable
#include <openfl/_legacy/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_InteractiveObject
#include <openfl/_legacy/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl__legacy_display_Sprite
#include <openfl/_legacy/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_util_interfaces_ICollider
#include <util/interfaces/ICollider.h>
#endif
#ifndef INCLUDED_util_mechanica_EquipmentUnit
#include <util/mechanica/EquipmentUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_FirearmUnit
#include <util/mechanica/FirearmUnit.h>
#endif
#ifndef INCLUDED_util_mechanica_IPart
#include <util/mechanica/IPart.h>
#endif
#ifndef INCLUDED_util_mechanica_MechBullet
#include <util/mechanica/MechBullet.h>
#endif
#ifndef INCLUDED_util_mechanica_Mechanica
#include <util/mechanica/Mechanica.h>
#endif
#ifndef INCLUDED_util_mechanica_Part
#include <util/mechanica/Part.h>
#endif
#ifndef INCLUDED_util_mechanica_ShellBullet
#include <util/mechanica/ShellBullet.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb08bf259c762dd5_144_new,"util.mechanica.FirearmUnit","new",0x04dd355f,"util.mechanica.FirearmUnit.new","util/mechanica/Part.hx",144,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb08bf259c762dd5_161_setOffset,"util.mechanica.FirearmUnit","setOffset",0x1f74bb14,"util.mechanica.FirearmUnit.setOffset","util/mechanica/Part.hx",161,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb08bf259c762dd5_167_setup,"util.mechanica.FirearmUnit","setup",0xbf9b913c,"util.mechanica.FirearmUnit.setup","util/mechanica/Part.hx",167,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb08bf259c762dd5_175_makeBullet,"util.mechanica.FirearmUnit","makeBullet",0x62cb2fb1,"util.mechanica.FirearmUnit.makeBullet","util/mechanica/Part.hx",175,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb08bf259c762dd5_181_update,"util.mechanica.FirearmUnit","update",0x00000a6a,"util.mechanica.FirearmUnit.update","util/mechanica/Part.hx",181,0x51e4a40c)
HX_LOCAL_STACK_FRAME(_hx_pos_eb08bf259c762dd5_187_fire,"util.mechanica.FirearmUnit","fire",0x376acdd7,"util.mechanica.FirearmUnit.fire","util/mechanica/Part.hx",187,0x51e4a40c)
namespace util{
namespace mechanica{

void FirearmUnit_obj::__construct( ::Dynamic X, ::Dynamic Y){
            	HX_GC_STACKFRAME(&_hx_pos_eb08bf259c762dd5_144_new)
HXLINE( 152)		this->firingWait = ((Float)0.0);
HXLINE( 148)		this->bulletLifespan = ((Float)5.0);
HXLINE( 147)		this->firingRate = ((Float)0.5);
HXLINE( 146)		this->recoil = ((Float)0.0);
HXLINE( 156)		super::__construct(X,Y);
HXLINE( 157)		this->bOffset =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,(int)0,(int)0);
            	}

Dynamic FirearmUnit_obj::__CreateEmpty() { return new FirearmUnit_obj; }

void *FirearmUnit_obj::_hx_vtable = 0;

Dynamic FirearmUnit_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< FirearmUnit_obj > _hx_result = new FirearmUnit_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool FirearmUnit_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2e105115) {
		if (inClassId<=(int)0x109e64fb) {
			if (inClassId<=(int)0x0b6ffd77) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0b6ffd77;
			} else {
				return inClassId==(int)0x109e64fb;
			}
		} else {
			return inClassId==(int)0x25a685e0 || inClassId==(int)0x2e105115;
		}
	} else {
		if (inClassId<=(int)0x4c20ea6f) {
			return inClassId==(int)0x4ae160ee || inClassId==(int)0x4c20ea6f;
		} else {
			return inClassId==(int)0x6706dc1b;
		}
	}
}

void FirearmUnit_obj::setOffset(Float x,Float y){
            	HX_STACKFRAME(&_hx_pos_eb08bf259c762dd5_161_setOffset)
HXLINE( 162)		this->bOffset->set_x(x);
HXLINE( 163)		this->bOffset->set_y(y);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FirearmUnit_obj,setOffset,(void))

void FirearmUnit_obj::setup( ::util::mechanica::Mechanica mechanica){
            	HX_GC_STACKFRAME(&_hx_pos_eb08bf259c762dd5_167_setup)
HXLINE( 168)		::String _hx_tmp = this->desc;
HXLINE( 170)		 ::flixel::math::FlxPoint _hx_tmp1 =  ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,this->bOffset->x,this->bOffset->y);
HXDLIN( 170)		 ::flixel::addons::weapon::FlxWeaponFireFrom _hx_tmp2 = ::flixel::addons::weapon::FlxWeaponFireFrom_obj::PARENT(hx::ObjectPtr<OBJ_>(this), ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,_hx_tmp1, ::flixel::math::FlxPoint_obj::__alloc( HX_CTX ,this->bOffset->x,this->bOffset->y)),true,(int)0);
HXLINE( 171)		Float _hx_tmp3 = (this->bulletSpeed - (int)5);
HXLINE( 167)		this->weapon =  ::flixel::addons::weapon::FlxTypedWeapon_obj::__alloc( HX_CTX ,_hx_tmp,this->makeBullet_dyn(),_hx_tmp2,::flixel::addons::weapon::FlxWeaponSpeedMode_obj::SPEED( ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,_hx_tmp3,(this->bulletSpeed + (int)5))));
            	}


 ::flixel::addons::weapon::FlxBullet FirearmUnit_obj::makeBullet( ::flixel::addons::weapon::FlxTypedWeapon weapon){
            	HX_GC_STACKFRAME(&_hx_pos_eb08bf259c762dd5_175_makeBullet)
HXLINE( 176)		 ::flixel::addons::weapon::FlxBullet bullet =  ::util::mechanica::ShellBullet_obj::__alloc( HX_CTX ,(int)2,this->parent);
HXLINE( 177)		::flixel::FlxG_obj::game->_state->add(bullet).StaticCast<  ::flixel::FlxBasic >();
HXLINE( 178)		return bullet;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FirearmUnit_obj,makeBullet,return )

void FirearmUnit_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_eb08bf259c762dd5_181_update)
HXLINE( 182)		this->super::update(elapsed);
HXLINE( 183)		if ((this->firingWait > (int)0)) {
HXLINE( 183)			 ::util::mechanica::FirearmUnit _hx_tmp = hx::ObjectPtr<OBJ_>(this);
HXDLIN( 183)			_hx_tmp->firingWait = (_hx_tmp->firingWait - elapsed);
            		}
            		else {
HXLINE( 184)			this->firingWait = (int)0;
            		}
            	}


void FirearmUnit_obj::fire(Float angle){
            	HX_GC_STACKFRAME(&_hx_pos_eb08bf259c762dd5_187_fire)
HXLINE( 188)		if ((this->firingWait > (int)0)) {
HXLINE( 188)			return;
            		}
HXLINE( 189)		this->firingWait = this->firingRate;
HXLINE( 190)		 ::flixel::addons::weapon::FlxTypedWeapon _this = this->weapon;
HXDLIN( 190)		if (_this->runFire(::flixel::addons::weapon::FlxWeaponFireMode_obj::FIRE_FROM_ANGLE( ::flixel::util::helpers::FlxBounds_obj::__alloc( HX_CTX ,angle,angle)))) {
HXLINE( 192)			::flixel::FlxG_obj::log->advanced(HX_("Create a new bullet",e5,6a,1a,2b),::Global_obj::logStyle,null());
            		}
            		else {
HXLINE( 196)			::flixel::FlxG_obj::log->advanced(HX_("Failed to create a new bullet",c3,25,b7,70),::Global_obj::logStyle,null());
            		}
            	}



hx::ObjectPtr< FirearmUnit_obj > FirearmUnit_obj::__new( ::Dynamic X, ::Dynamic Y) {
	hx::ObjectPtr< FirearmUnit_obj > __this = new FirearmUnit_obj();
	__this->__construct(X,Y);
	return __this;
}

hx::ObjectPtr< FirearmUnit_obj > FirearmUnit_obj::__alloc(hx::Ctx *_hx_ctx, ::Dynamic X, ::Dynamic Y) {
	FirearmUnit_obj *__this = (FirearmUnit_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(FirearmUnit_obj), true, "util.mechanica.FirearmUnit"));
	*(void **)__this = FirearmUnit_obj::_hx_vtable;
	__this->__construct(X,Y);
	return __this;
}

FirearmUnit_obj::FirearmUnit_obj()
{
}

void FirearmUnit_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FirearmUnit);
	HX_MARK_MEMBER_NAME(recoil,"recoil");
	HX_MARK_MEMBER_NAME(firingRate,"firingRate");
	HX_MARK_MEMBER_NAME(bulletLifespan,"bulletLifespan");
	HX_MARK_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_MARK_MEMBER_NAME(weapon,"weapon");
	HX_MARK_MEMBER_NAME(bulletType,"bulletType");
	HX_MARK_MEMBER_NAME(firingWait,"firingWait");
	HX_MARK_MEMBER_NAME(bOffset,"bOffset");
	 ::util::mechanica::Part_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FirearmUnit_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(recoil,"recoil");
	HX_VISIT_MEMBER_NAME(firingRate,"firingRate");
	HX_VISIT_MEMBER_NAME(bulletLifespan,"bulletLifespan");
	HX_VISIT_MEMBER_NAME(bulletSpeed,"bulletSpeed");
	HX_VISIT_MEMBER_NAME(weapon,"weapon");
	HX_VISIT_MEMBER_NAME(bulletType,"bulletType");
	HX_VISIT_MEMBER_NAME(firingWait,"firingWait");
	HX_VISIT_MEMBER_NAME(bOffset,"bOffset");
	 ::util::mechanica::Part_obj::__Visit(HX_VISIT_ARG);
}

hx::Val FirearmUnit_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"fire") ) { return hx::Val( fire_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"setup") ) { return hx::Val( setup_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"recoil") ) { return hx::Val( recoil ); }
		if (HX_FIELD_EQ(inName,"weapon") ) { return hx::Val( weapon ); }
		if (HX_FIELD_EQ(inName,"update") ) { return hx::Val( update_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bOffset") ) { return hx::Val( bOffset ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"setOffset") ) { return hx::Val( setOffset_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firingRate") ) { return hx::Val( firingRate ); }
		if (HX_FIELD_EQ(inName,"bulletType") ) { return hx::Val( bulletType ); }
		if (HX_FIELD_EQ(inName,"firingWait") ) { return hx::Val( firingWait ); }
		if (HX_FIELD_EQ(inName,"makeBullet") ) { return hx::Val( makeBullet_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { return hx::Val( bulletSpeed ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifespan") ) { return hx::Val( bulletLifespan ); }
	}
	return super::__Field(inName,inCallProp);
}

hx::Val FirearmUnit_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"recoil") ) { recoil=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"weapon") ) { weapon=inValue.Cast<  ::flixel::addons::weapon::FlxTypedWeapon >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"bOffset") ) { bOffset=inValue.Cast<  ::flixel::math::FlxPoint >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"firingRate") ) { firingRate=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"bulletType") ) { bulletType=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"firingWait") ) { firingWait=inValue.Cast< Float >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bulletSpeed") ) { bulletSpeed=inValue.Cast< Float >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"bulletLifespan") ) { bulletLifespan=inValue.Cast< Float >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FirearmUnit_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("recoil","\xc2","\x6e","\xec","\xfd"));
	outFields->push(HX_HCSTRING("firingRate","\xf3","\x4a","\x79","\x29"));
	outFields->push(HX_HCSTRING("bulletLifespan","\x28","\x7a","\x2f","\x3a"));
	outFields->push(HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"));
	outFields->push(HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"));
	outFields->push(HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"));
	outFields->push(HX_HCSTRING("firingWait","\x88","\x52","\xc7","\x2c"));
	outFields->push(HX_HCSTRING("bOffset","\x95","\x81","\x0b","\x80"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo FirearmUnit_obj_sMemberStorageInfo[] = {
	{hx::fsFloat,(int)offsetof(FirearmUnit_obj,recoil),HX_HCSTRING("recoil","\xc2","\x6e","\xec","\xfd")},
	{hx::fsFloat,(int)offsetof(FirearmUnit_obj,firingRate),HX_HCSTRING("firingRate","\xf3","\x4a","\x79","\x29")},
	{hx::fsFloat,(int)offsetof(FirearmUnit_obj,bulletLifespan),HX_HCSTRING("bulletLifespan","\x28","\x7a","\x2f","\x3a")},
	{hx::fsFloat,(int)offsetof(FirearmUnit_obj,bulletSpeed),HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34")},
	{hx::fsObject /*::flixel::addons::weapon::FlxTypedWeapon*/ ,(int)offsetof(FirearmUnit_obj,weapon),HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc")},
	{hx::fsString,(int)offsetof(FirearmUnit_obj,bulletType),HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15")},
	{hx::fsFloat,(int)offsetof(FirearmUnit_obj,firingWait),HX_HCSTRING("firingWait","\x88","\x52","\xc7","\x2c")},
	{hx::fsObject /*::flixel::math::FlxPoint*/ ,(int)offsetof(FirearmUnit_obj,bOffset),HX_HCSTRING("bOffset","\x95","\x81","\x0b","\x80")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo *FirearmUnit_obj_sStaticStorageInfo = 0;
#endif

static ::String FirearmUnit_obj_sMemberFields[] = {
	HX_HCSTRING("recoil","\xc2","\x6e","\xec","\xfd"),
	HX_HCSTRING("firingRate","\xf3","\x4a","\x79","\x29"),
	HX_HCSTRING("bulletLifespan","\x28","\x7a","\x2f","\x3a"),
	HX_HCSTRING("bulletSpeed","\xe5","\x05","\x43","\x34"),
	HX_HCSTRING("weapon","\xdc","\x96","\x63","\xfc"),
	HX_HCSTRING("bulletType","\x1c","\xfa","\x95","\x15"),
	HX_HCSTRING("firingWait","\x88","\x52","\xc7","\x2c"),
	HX_HCSTRING("bOffset","\x95","\x81","\x0b","\x80"),
	HX_HCSTRING("setOffset","\xd5","\x0c","\xe7","\xbf"),
	HX_HCSTRING("setup","\x7d","\xae","\x2f","\x7a"),
	HX_HCSTRING("makeBullet","\xd0","\x66","\x60","\x26"),
	HX_HCSTRING("update","\x09","\x86","\x05","\x87"),
	HX_HCSTRING("fire","\xb6","\xd3","\xbb","\x43"),
	::String(null()) };

static void FirearmUnit_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FirearmUnit_obj::__mClass,"__mClass");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FirearmUnit_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FirearmUnit_obj::__mClass,"__mClass");
};

#endif

hx::Class FirearmUnit_obj::__mClass;

void FirearmUnit_obj::__register()
{
	hx::Object *dummy = new FirearmUnit_obj;
	FirearmUnit_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("util.mechanica.FirearmUnit","\xed","\x99","\xe9","\xf8");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = FirearmUnit_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = hx::Class_obj::dupFunctions(FirearmUnit_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< FirearmUnit_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FirearmUnit_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FirearmUnit_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FirearmUnit_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace util
} // end namespace mechanica
