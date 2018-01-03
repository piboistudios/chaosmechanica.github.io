// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_Font
#include <openfl/_legacy/text/Font.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontStyle
#include <openfl/_legacy/text/FontStyle.h>
#endif
#ifndef INCLUDED_openfl__legacy_text_FontType
#include <openfl/_legacy/text/FontType.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_ByteArray
#include <openfl/_legacy/utils/ByteArray.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataInput
#include <openfl/_legacy/utils/IDataInput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IDataOutput
#include <openfl/_legacy/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_openfl__legacy_utils_IMemoryRange
#include <openfl/_legacy/utils/IMemoryRange.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_085d934050f918cd_36_new,"openfl._legacy.text.Font","new",0x95905bde,"openfl._legacy.text.Font.new","openfl/_legacy/text/Font.hx",36,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_143_toString,"openfl._legacy.text.Font","toString",0x25d1dc6e,"openfl._legacy.text.Font.toString","openfl/_legacy/text/Font.hx",143,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_148___fromBytes,"openfl._legacy.text.Font","__fromBytes",0xb85e74ff,"openfl._legacy.text.Font.__fromBytes","openfl/_legacy/text/Font.hx",148,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_176___fromFile,"openfl._legacy.text.Font","__fromFile",0x99cf1068,"openfl._legacy.text.Font.__fromFile","openfl/_legacy/text/Font.hx",176,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_65_enumerateFonts,"openfl._legacy.text.Font","enumerateFonts",0x85cd9342,"openfl._legacy.text.Font.enumerateFonts","openfl/_legacy/text/Font.hx",65,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_75_enumerateFonts,"openfl._legacy.text.Font","enumerateFonts",0x85cd9342,"openfl._legacy.text.Font.enumerateFonts","openfl/_legacy/text/Font.hx",75,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_88_fromBytes,"openfl._legacy.text.Font","fromBytes",0x3b68309f,"openfl._legacy.text.Font.fromBytes","openfl/_legacy/text/Font.hx",88,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_97_fromFile,"openfl._legacy.text.Font","fromFile",0x8eeaa8c8,"openfl._legacy.text.Font.fromFile","openfl/_legacy/text/Font.hx",97,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_106_load,"openfl._legacy.text.Font","load",0x47751ce8,"openfl._legacy.text.Font.load","openfl/_legacy/text/Font.hx",106,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_114_loadBytes,"openfl._legacy.text.Font","loadBytes",0xa2169263,"openfl._legacy.text.Font.loadBytes","openfl/_legacy/text/Font.hx",114,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_122_registerFont,"openfl._legacy.text.Font","registerFont",0xb6b0b294,"openfl._legacy.text.Font.registerFont","openfl/_legacy/text/Font.hx",122,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_30_boot,"openfl._legacy.text.Font","boot",0x40d906f4,"openfl._legacy.text.Font.boot","openfl/_legacy/text/Font.hx",30,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_234_boot,"openfl._legacy.text.Font","boot",0x40d906f4,"openfl._legacy.text.Font.boot","openfl/_legacy/text/Font.hx",234,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_235_boot,"openfl._legacy.text.Font","boot",0x40d906f4,"openfl._legacy.text.Font.boot","openfl/_legacy/text/Font.hx",235,0x48d29f73)
HX_LOCAL_STACK_FRAME(_hx_pos_085d934050f918cd_236_boot,"openfl._legacy.text.Font","boot",0x40d906f4,"openfl._legacy.text.Font.boot","openfl/_legacy/text/Font.hx",236,0x48d29f73)
namespace openfl{
namespace _legacy{
namespace text{

void Font_obj::__construct(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type){
::String filename = __o_filename.Default(HX_HCSTRING("","\x00","\x00","\x00","\x00"));
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_36_new)
HXDLIN(  36)		if ((filename == HX_("",00,00,00,00))) {
HXLINE(  38)			hx::Class fontClass = ::Type_obj::getClass(hx::ObjectPtr<OBJ_>(this));
HXLINE(  40)			if (::Reflect_obj::hasField(fontClass,HX_("resourceName",39,7a,62,90))) {
HXLINE(  42)				this->_hx___fromBytes(::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(( (::String)(::Reflect_obj::field(fontClass,HX_("resourceName",39,7a,62,90))) ))));
            			}
            		}
            		else {
HXLINE(  55)			this->_hx___fontPath = filename;
HXLINE(  56)			this->fontName = filename;
HXLINE(  57)			 ::openfl::_legacy::text::FontStyle _hx_tmp;
HXDLIN(  57)			if (hx::IsNull( style )) {
HXLINE(  57)				_hx_tmp = ::openfl::_legacy::text::FontStyle_obj::REGULAR_dyn();
            			}
            			else {
HXLINE(  57)				_hx_tmp = style;
            			}
HXDLIN(  57)			this->fontStyle = _hx_tmp;
HXLINE(  58)			 ::openfl::_legacy::text::FontType _hx_tmp1;
HXDLIN(  58)			if (hx::IsNull( type )) {
HXLINE(  58)				_hx_tmp1 = ::openfl::_legacy::text::FontType_obj::EMBEDDED_dyn();
            			}
            			else {
HXLINE(  58)				_hx_tmp1 = type;
            			}
HXDLIN(  58)			this->fontType = _hx_tmp1;
            		}
            	}

Dynamic Font_obj::__CreateEmpty() { return new Font_obj; }

void *Font_obj::_hx_vtable = 0;

Dynamic Font_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Font_obj > _hx_result = new Font_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Font_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x67f42b74;
}

::String Font_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_143_toString)
HXDLIN( 143)		::String _hx_tmp = ((HX_("{ name=",2d,2a,c0,5c) + this->fontName) + HX_(", style=",60,5b,2d,1d));
HXDLIN( 143)		::String _hx_tmp1 = ((_hx_tmp + ::Std_obj::string(this->fontStyle)) + HX_(", type=",4f,65,e7,0b));
HXDLIN( 143)		return ((_hx_tmp1 + ::Std_obj::string(this->fontType)) + HX_(" }",5d,1c,00,00));
            	}


HX_DEFINE_DYNAMIC_FUNC0(Font_obj,toString,return )

void Font_obj::_hx___fromBytes( ::openfl::_legacy::utils::ByteArray bytes){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_148___fromBytes)
HXLINE( 150)		 ::Dynamic details = ::openfl::_legacy::text::Font_obj::loadBytes(bytes);
HXLINE( 151)		this->fontName = ( (::String)(details->__Field(HX_("family_name",06,fc,9d,63),hx::paccDynamic)) );
HXLINE( 153)		bool _hx_tmp;
HXDLIN( 153)		if (( (bool)(details->__Field(HX_("is_bold",3a,d1,84,fd),hx::paccDynamic)) )) {
HXLINE( 153)			_hx_tmp = ( (bool)(details->__Field(HX_("is_italic",e5,95,88,ab),hx::paccDynamic)) );
            		}
            		else {
HXLINE( 153)			_hx_tmp = false;
            		}
HXDLIN( 153)		if (_hx_tmp) {
HXLINE( 155)			this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC_dyn();
            		}
            		else {
HXLINE( 157)			if (( (bool)(details->__Field(HX_("is_bold",3a,d1,84,fd),hx::paccDynamic)) )) {
HXLINE( 159)				this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_dyn();
            			}
            			else {
HXLINE( 161)				if (( (bool)(details->__Field(HX_("is_italic",e5,95,88,ab),hx::paccDynamic)) )) {
HXLINE( 163)					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::ITALIC_dyn();
            				}
            				else {
HXLINE( 167)					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::REGULAR_dyn();
            				}
            			}
            		}
HXLINE( 171)		this->fontType = ::openfl::_legacy::text::FontType_obj::EMBEDDED_dyn();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___fromBytes,(void))

void Font_obj::_hx___fromFile(::String path){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_176___fromFile)
HXLINE( 178)		this->_hx___fontPath = path;
HXLINE( 180)		if (hx::IsNotNull( this->_hx___fontPath )) {
HXLINE( 182)			 ::Dynamic details = ::openfl::_legacy::text::Font_obj::load(this->_hx___fontPath);
HXLINE( 183)			this->fontName = ( (::String)(details->__Field(HX_("family_name",06,fc,9d,63),hx::paccDynamic)) );
HXLINE( 185)			bool _hx_tmp;
HXDLIN( 185)			if (( (bool)(details->__Field(HX_("is_bold",3a,d1,84,fd),hx::paccDynamic)) )) {
HXLINE( 185)				_hx_tmp = ( (bool)(details->__Field(HX_("is_italic",e5,95,88,ab),hx::paccDynamic)) );
            			}
            			else {
HXLINE( 185)				_hx_tmp = false;
            			}
HXDLIN( 185)			if (_hx_tmp) {
HXLINE( 187)				this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC_dyn();
            			}
            			else {
HXLINE( 189)				if (( (bool)(details->__Field(HX_("is_bold",3a,d1,84,fd),hx::paccDynamic)) )) {
HXLINE( 191)					this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::BOLD_dyn();
            				}
            				else {
HXLINE( 193)					if (( (bool)(details->__Field(HX_("is_italic",e5,95,88,ab),hx::paccDynamic)) )) {
HXLINE( 195)						this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::ITALIC_dyn();
            					}
            					else {
HXLINE( 199)						this->fontStyle = ::openfl::_legacy::text::FontStyle_obj::REGULAR_dyn();
            					}
            				}
            			}
HXLINE( 203)			this->fontType = ::openfl::_legacy::text::FontType_obj::EMBEDDED_dyn();
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC1(Font_obj,_hx___fromFile,(void))

::Array< ::Dynamic> Font_obj::_hx___registeredFonts;

::Array< ::Dynamic> Font_obj::_hx___deviceFonts;

::Array< ::Dynamic> Font_obj::enumerateFonts(hx::Null< bool >  __o_enumerateDeviceFonts){
bool enumerateDeviceFonts = __o_enumerateDeviceFonts.Default(false);
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_65_enumerateFonts)
HXLINE(  67)		::Array< ::Dynamic> result = ::openfl::_legacy::text::Font_obj::_hx___registeredFonts->copy();
HXLINE(  69)		if (enumerateDeviceFonts) {
HXLINE(  71)			if (hx::IsNull( ::openfl::_legacy::text::Font_obj::_hx___deviceFonts )) {
            				HX_BEGIN_LOCAL_FUNC_S1(hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,styles) HXARGC(2)
            				void _hx_run(::String name,int style){
            					HX_GC_STACKFRAME(&_hx_pos_085d934050f918cd_75_enumerateFonts)
HXLINE(  75)					::Array< ::Dynamic> _hx_tmp = ::openfl::_legacy::text::Font_obj::_hx___deviceFonts;
HXDLIN(  75)					_hx_tmp->push( ::openfl::_legacy::text::Font_obj::__alloc( HX_CTX ,name,styles->__get(style).StaticCast<  ::openfl::_legacy::text::FontStyle >(),::openfl::_legacy::text::FontType_obj::DEVICE_dyn()));
            				}
            				HX_END_LOCAL_FUNC2((void))

HXLINE(  73)				::openfl::_legacy::text::Font_obj::_hx___deviceFonts = ::Array_obj< ::Dynamic>::__new();
HXLINE(  74)				::Array< ::Dynamic> styles = ::Array_obj< ::Dynamic>::__new(4)->init(0,::openfl::_legacy::text::FontStyle_obj::BOLD_dyn())->init(1,::openfl::_legacy::text::FontStyle_obj::BOLD_ITALIC_dyn())->init(2,::openfl::_legacy::text::FontStyle_obj::ITALIC_dyn())->init(3,::openfl::_legacy::text::FontStyle_obj::REGULAR_dyn());
HXLINE(  75)				::openfl::_legacy::text::Font_obj::lime_font_iterate_device_fonts( ::Dynamic(new _hx_Closure_0(styles)));
            			}
HXLINE(  79)			result = result->concat(::openfl::_legacy::text::Font_obj::_hx___deviceFonts);
            		}
HXLINE(  83)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,enumerateFonts,return )

 ::openfl::_legacy::text::Font Font_obj::fromBytes( ::openfl::_legacy::utils::ByteArray bytes){
            	HX_GC_STACKFRAME(&_hx_pos_085d934050f918cd_88_fromBytes)
HXLINE(  90)		 ::openfl::_legacy::text::Font font =  ::openfl::_legacy::text::Font_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE(  91)		font->_hx___fromBytes(bytes);
HXLINE(  92)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromBytes,return )

 ::openfl::_legacy::text::Font Font_obj::fromFile(::String path){
            	HX_GC_STACKFRAME(&_hx_pos_085d934050f918cd_97_fromFile)
HXLINE(  99)		 ::openfl::_legacy::text::Font font =  ::openfl::_legacy::text::Font_obj::__alloc( HX_CTX ,null(),null(),null());
HXLINE( 100)		font->_hx___fromFile(path);
HXLINE( 101)		return font;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,fromFile,return )

 ::Dynamic Font_obj::load(::String filename){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_106_load)
HXLINE( 108)		 ::Dynamic result = ::openfl::_legacy::text::Font_obj::freetype_import_font(filename,null(),(int)20480,null());
HXLINE( 109)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,load,return )

 ::Dynamic Font_obj::loadBytes( ::openfl::_legacy::utils::ByteArray bytes){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_114_loadBytes)
HXLINE( 116)		 ::Dynamic result = ::openfl::_legacy::text::Font_obj::freetype_import_font(HX_("",00,00,00,00),null(),(int)20480,bytes);
HXLINE( 117)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,loadBytes,return )

void Font_obj::registerFont(hx::Class font){
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_122_registerFont)
HXLINE( 124)		 ::openfl::_legacy::text::Font instance = ( ( ::openfl::_legacy::text::Font)(::Type_obj::createInstance(font,::cpp::VirtualArray_obj::__new(0))) );
HXLINE( 126)		if (hx::IsNotNull( instance )) {
HXLINE( 128)			if (::Reflect_obj::hasField(font,HX_("resourceName",39,7a,62,90))) {
HXLINE( 130)				 ::Dynamic _hx_tmp = hx::ClassOf< ::openfl::_legacy::text::Font >();
HXDLIN( 130)				::String instance1 = instance->fontName;
HXDLIN( 130)				 ::openfl::_legacy::utils::ByteArray _hx_tmp1 = ::openfl::_legacy::utils::ByteArray_obj::fromBytes(::haxe::Resource_obj::getBytes(( (::String)(::Reflect_obj::field(font,HX_("resourceName",39,7a,62,90))) )));
HXDLIN( 130)				::openfl::_legacy::text::Font_obj::lime_font_register_font(instance1,_hx_tmp1);
            			}
HXLINE( 134)			::openfl::_legacy::text::Font_obj::_hx___registeredFonts->push(instance);
            		}
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Font_obj,registerFont,(void))

 ::Dynamic Font_obj::freetype_import_font;

 ::Dynamic Font_obj::lime_font_register_font;

 ::Dynamic Font_obj::lime_font_iterate_device_fonts;


hx::ObjectPtr< Font_obj > Font_obj::__new(::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type) {
	hx::ObjectPtr< Font_obj > __this = new Font_obj();
	__this->__construct(__o_filename,style,type);
	return __this;
}

hx::ObjectPtr< Font_obj > Font_obj::__alloc(hx::Ctx *_hx_ctx,::String __o_filename, ::openfl::_legacy::text::FontStyle style, ::openfl::_legacy::text::FontType type) {
	Font_obj *__this = (Font_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Font_obj), true, "openfl._legacy.text.Font"));
	*(void **)__this = Font_obj::_hx_vtable;
	__this->__construct(__o_filename,style,type);
	return __this;
}

Font_obj::Font_obj()
{
}

void Font_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Font);
	HX_MARK_MEMBER_NAME(fontName,"fontName");
	HX_MARK_MEMBER_NAME(fontStyle,"fontStyle");
	HX_MARK_MEMBER_NAME(fontType,"fontType");
	HX_MARK_MEMBER_NAME(_hx___fontPath,"__fontPath");
	HX_MARK_END_CLASS();
}

void Font_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(fontName,"fontName");
	HX_VISIT_MEMBER_NAME(fontStyle,"fontStyle");
	HX_VISIT_MEMBER_NAME(fontType,"fontType");
	HX_VISIT_MEMBER_NAME(_hx___fontPath,"__fontPath");
}

hx::Val Font_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { return hx::Val( fontName ); }
		if (HX_FIELD_EQ(inName,"fontType") ) { return hx::Val( fontType ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { return hx::Val( fontStyle ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { return hx::Val( _hx___fontPath ); }
		if (HX_FIELD_EQ(inName,"__fromFile") ) { return hx::Val( _hx___fromFile_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"__fromBytes") ) { return hx::Val( _hx___fromBytes_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Font_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { outValue = load_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromFile") ) { outValue = fromFile_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"loadBytes") ) { outValue = loadBytes_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"registerFont") ) { outValue = registerFont_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { outValue = ( _hx___deviceFonts ); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"enumerateFonts") ) { outValue = enumerateFonts_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { outValue = ( _hx___registeredFonts ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { outValue = ( freetype_import_font ); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { outValue = ( lime_font_register_font ); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { outValue = ( lime_font_iterate_device_fonts ); return true; }
	}
	return false;
}

hx::Val Font_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"fontName") ) { fontName=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"fontType") ) { fontType=inValue.Cast<  ::openfl::_legacy::text::FontType >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fontStyle") ) { fontStyle=inValue.Cast<  ::openfl::_legacy::text::FontStyle >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"__fontPath") ) { _hx___fontPath=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Font_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 13:
		if (HX_FIELD_EQ(inName,"__deviceFonts") ) { _hx___deviceFonts=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"__registeredFonts") ) { _hx___registeredFonts=ioValue.Cast< ::Array< ::Dynamic> >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"freetype_import_font") ) { freetype_import_font=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 23:
		if (HX_FIELD_EQ(inName,"lime_font_register_font") ) { lime_font_register_font=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 30:
		if (HX_FIELD_EQ(inName,"lime_font_iterate_device_fonts") ) { lime_font_iterate_device_fonts=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Font_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"));
	outFields->push(HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"));
	outFields->push(HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"));
	outFields->push(HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Font_obj_sMemberStorageInfo[] = {
	{hx::fsString,(int)offsetof(Font_obj,fontName),HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb")},
	{hx::fsObject /*::openfl::_legacy::text::FontStyle*/ ,(int)offsetof(Font_obj,fontStyle),HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f")},
	{hx::fsObject /*::openfl::_legacy::text::FontType*/ ,(int)offsetof(Font_obj,fontType),HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf")},
	{hx::fsString,(int)offsetof(Font_obj,_hx___fontPath),HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Font_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::_hx___registeredFonts,HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64")},
	{hx::fsObject /*Array< ::Dynamic >*/ ,(void *) &Font_obj::_hx___deviceFonts,HX_HCSTRING("__deviceFonts","\x2e","\x2c","\x4a","\x3c")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::freetype_import_font,HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_register_font,HX_HCSTRING("lime_font_register_font","\xe5","\x54","\xb1","\x50")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Font_obj::lime_font_iterate_device_fonts,HX_HCSTRING("lime_font_iterate_device_fonts","\x86","\x2f","\xa2","\xcf")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Font_obj_sMemberFields[] = {
	HX_HCSTRING("fontName","\xba","\x8f","\x7d","\xcb"),
	HX_HCSTRING("fontStyle","\xe2","\x48","\xf9","\x2f"),
	HX_HCSTRING("fontType","\x29","\x10","\x87","\xcf"),
	HX_HCSTRING("__fontPath","\x34","\x76","\x08","\x70"),
	HX_HCSTRING("toString","\xac","\xd0","\x6e","\x38"),
	HX_HCSTRING("__fromBytes","\x81","\x3b","\x4d","\xa0"),
	HX_HCSTRING("__fromFile","\x26","\x10","\xc0","\x44"),
	::String(null()) };

static void Font_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Font_obj::_hx___registeredFonts,"__registeredFonts");
	HX_MARK_MEMBER_NAME(Font_obj::_hx___deviceFonts,"__deviceFonts");
	HX_MARK_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_MARK_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Font_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Font_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Font_obj::_hx___registeredFonts,"__registeredFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::_hx___deviceFonts,"__deviceFonts");
	HX_VISIT_MEMBER_NAME(Font_obj::freetype_import_font,"freetype_import_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_register_font,"lime_font_register_font");
	HX_VISIT_MEMBER_NAME(Font_obj::lime_font_iterate_device_fonts,"lime_font_iterate_device_fonts");
};

#endif

hx::Class Font_obj::__mClass;

static ::String Font_obj_sStaticFields[] = {
	HX_HCSTRING("__registeredFonts","\xc2","\x83","\x84","\x64"),
	HX_HCSTRING("__deviceFonts","\x2e","\x2c","\x4a","\x3c"),
	HX_HCSTRING("enumerateFonts","\x00","\x4a","\xcc","\xfc"),
	HX_HCSTRING("fromBytes","\xa1","\xf2","\x20","\x72"),
	HX_HCSTRING("fromFile","\x06","\x9d","\x87","\xa1"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadBytes","\x65","\x54","\xcf","\xd8"),
	HX_HCSTRING("registerFont","\xd2","\x9d","\xaf","\xbf"),
	HX_HCSTRING("freetype_import_font","\x90","\x2e","\x4f","\x69"),
	HX_HCSTRING("lime_font_register_font","\xe5","\x54","\xb1","\x50"),
	HX_HCSTRING("lime_font_iterate_device_fonts","\x86","\x2f","\xa2","\xcf"),
	::String(null())
};

void Font_obj::__register()
{
	hx::Object *dummy = new Font_obj;
	Font_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.text.Font","\xec","\xd4","\xc9","\x08");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Font_obj::__GetStatic;
	__mClass->mSetStaticField = &Font_obj::__SetStatic;
	__mClass->mMarkFunc = Font_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Font_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Font_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Font_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Font_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Font_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Font_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Font_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_30_boot)
HXDLIN(  30)		_hx___registeredFonts = ::Array_obj< ::Dynamic>::__new();
            	}
{
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_234_boot)
HXDLIN( 234)		freetype_import_font = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("freetype_import_font",90,2e,4f,69),(int)4);
            	}
{
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_235_boot)
HXDLIN( 235)		lime_font_register_font = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_font_register_font",47,6d,d6,d3),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_085d934050f918cd_236_boot)
HXDLIN( 236)		lime_font_iterate_device_fonts = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_font_iterate_device_fonts",64,c7,1f,cb),(int)1);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace text
