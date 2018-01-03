// Generated by Haxe 3.4.4
#ifndef INCLUDED_openfl_media_SoundTransform
#define INCLUDED_openfl_media_SoundTransform

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_STACK_FRAME(_hx_pos_b69a1b3bd673fa32_15_new)
HX_DECLARE_CLASS2(openfl,media,SoundTransform)

namespace openfl{
namespace media{


class HXCPP_CLASS_ATTRIBUTES SoundTransform_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef SoundTransform_obj OBJ_;
		SoundTransform_obj();

	public:
		enum { _hx_ClassId = 0x00b0ff2d };

		void __construct(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning);
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.media.SoundTransform")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,false,"openfl.media.SoundTransform"); }

		hx::ObjectPtr< SoundTransform_obj > __new(hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning) {
			hx::ObjectPtr< SoundTransform_obj > __this = new SoundTransform_obj();
			__this->__construct(__o_vol,__o_panning);
			return __this;
		}

		static hx::ObjectPtr< SoundTransform_obj > __alloc(hx::Ctx *_hx_ctx,hx::Null< Float >  __o_vol,hx::Null< Float >  __o_panning) {
			SoundTransform_obj *__this = (SoundTransform_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(SoundTransform_obj), false, "openfl.media.SoundTransform"));
			*(void **)__this = SoundTransform_obj::_hx_vtable;
{
Float vol = __o_vol.Default(1);
Float panning = __o_panning.Default(0);
            	HX_STACKFRAME(&_hx_pos_b69a1b3bd673fa32_15_new)
HXLINE(  17)		( ( ::openfl::media::SoundTransform)(__this) )->volume = vol;
HXLINE(  18)		( ( ::openfl::media::SoundTransform)(__this) )->pan = panning;
HXLINE(  19)		( ( ::openfl::media::SoundTransform)(__this) )->leftToLeft = (int)0;
HXLINE(  20)		( ( ::openfl::media::SoundTransform)(__this) )->leftToRight = (int)0;
HXLINE(  21)		( ( ::openfl::media::SoundTransform)(__this) )->rightToLeft = (int)0;
HXLINE(  22)		( ( ::openfl::media::SoundTransform)(__this) )->rightToRight = (int)0;
            	}
		
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~SoundTransform_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("SoundTransform","\xbd","\x82","\x34","\xcd"); }

		Float leftToLeft;
		Float leftToRight;
		Float pan;
		Float rightToLeft;
		Float rightToRight;
		Float volume;
		 ::openfl::media::SoundTransform clone();
		::Dynamic clone_dyn();

};

} // end namespace openfl
} // end namespace media

#endif /* INCLUDED_openfl_media_SoundTransform */ 
