// Generated by Haxe 3.4.4
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_openfl__legacy_Lib
#include <openfl/_legacy/Lib.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_Event
#include <openfl/_legacy/events/Event.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_EventDispatcher
#include <openfl/_legacy/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_events_IEventDispatcher
#include <openfl/_legacy/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_InternalAudioType
#include <openfl/_legacy/media/InternalAudioType.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_Sound
#include <openfl/_legacy/media/Sound.h>
#endif
#ifndef INCLUDED_openfl__legacy_media_SoundChannel
#include <openfl/_legacy/media/SoundChannel.h>
#endif
#ifndef INCLUDED_openfl__legacy_net_URLRequest
#include <openfl/_legacy/net/URLRequest.h>
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
#ifndef INCLUDED_openfl_errors_Error
#include <openfl/errors/Error.h>
#endif
#ifndef INCLUDED_openfl_events_ErrorEvent
#include <openfl/events/ErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_IOErrorEvent
#include <openfl/events/IOErrorEvent.h>
#endif
#ifndef INCLUDED_openfl_events_SampleDataEvent
#include <openfl/events/SampleDataEvent.h>
#endif
#ifndef INCLUDED_openfl_events_TextEvent
#include <openfl/events/TextEvent.h>
#endif
#ifndef INCLUDED_openfl_media_ID3Info
#include <openfl/media/ID3Info.h>
#endif
#ifndef INCLUDED_openfl_media_SoundLoaderContext
#include <openfl/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_openfl_media_SoundTransform
#include <openfl/media/SoundTransform.h>
#endif
#ifndef INCLUDED_openfl_utils__Endian_Endian_Impl_
#include <openfl/utils/_Endian/Endian_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_2862c8c6e0e16506_45_new,"openfl._legacy.media.Sound","new",0xac494db3,"openfl._legacy.media.Sound.new","openfl/_legacy/media/Sound.hx",45,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_65_addEventListener,"openfl._legacy.media.Sound","addEventListener",0xf036769a,"openfl._legacy.media.Sound.addEventListener","openfl/_legacy/media/Sound.hx",65,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_85_close,"openfl._legacy.media.Sound","close",0xfab0cfcb,"openfl._legacy.media.Sound.close","openfl/_legacy/media/Sound.hx",85,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_110_load,"openfl._legacy.media.Sound","load",0x128fc573,"openfl._legacy.media.Sound.load","openfl/_legacy/media/Sound.hx",110,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_136_loadCompressedDataFromByteArray,"openfl._legacy.media.Sound","loadCompressedDataFromByteArray",0x906313a9,"openfl._legacy.media.Sound.loadCompressedDataFromByteArray","openfl/_legacy/media/Sound.hx",136,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_152_loadPCMFromByteArray,"openfl._legacy.media.Sound","loadPCMFromByteArray",0x1758a6c0,"openfl._legacy.media.Sound.loadPCMFromByteArray","openfl/_legacy/media/Sound.hx",152,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_200_play,"openfl._legacy.media.Sound","play",0x15325941,"openfl._legacy.media.Sound.play","openfl/_legacy/media/Sound.hx",200,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_251___checkLoading,"openfl._legacy.media.Sound","__checkLoading",0xfefc3741,"openfl._legacy.media.Sound.__checkLoading","openfl/_legacy/media/Sound.hx",251,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_276___onError,"openfl._legacy.media.Sound","__onError",0x92dc789c,"openfl._legacy.media.Sound.__onError","openfl/_legacy/media/Sound.hx",276,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_292_get_id3,"openfl._legacy.media.Sound","get_id3",0x51feef62,"openfl._legacy.media.Sound.get_id3","openfl/_legacy/media/Sound.hx",292,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_309_get_isBuffering,"openfl._legacy.media.Sound","get_isBuffering",0x33178c02,"openfl._legacy.media.Sound.get_isBuffering","openfl/_legacy/media/Sound.hx",309,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_317_get_length,"openfl._legacy.media.Sound","get_length",0xa94e27bc,"openfl._legacy.media.Sound.get_length","openfl/_legacy/media/Sound.hx",317,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_337_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",337,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_338_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",338,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_339_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",339,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_340_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",340,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_341_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",341,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_342_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",342,0xdb1efaa0)
HX_LOCAL_STACK_FRAME(_hx_pos_2862c8c6e0e16506_343_boot,"openfl._legacy.media.Sound","boot",0x0bf3af7f,"openfl._legacy.media.Sound.boot","openfl/_legacy/media/Sound.hx",343,0xdb1efaa0)
namespace openfl{
namespace _legacy{
namespace media{

void Sound_obj::__construct( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_45_new)
HXLINE(  47)		super::__construct(null());
HXLINE(  49)		 ::openfl::_legacy::media::InternalAudioType _hx_tmp;
HXDLIN(  49)		if (forcePlayAsMusic) {
HXLINE(  49)			_hx_tmp = ::openfl::_legacy::media::InternalAudioType_obj::MUSIC_dyn();
            		}
            		else {
HXLINE(  49)			_hx_tmp = ::openfl::_legacy::media::InternalAudioType_obj::SOUND_dyn();
            		}
HXDLIN(  49)		this->_hx___audioType = _hx_tmp;
HXLINE(  51)		this->bytesLoaded = (int)0;
HXLINE(  52)		this->bytesTotal = (int)0;
HXLINE(  53)		this->_hx___loading = false;
HXLINE(  54)		this->_hx___dynamicSound = false;
HXLINE(  56)		if (hx::IsNotNull( stream )) {
HXLINE(  58)			this->load(stream,context,forcePlayAsMusic);
            		}
            	}

Dynamic Sound_obj::__CreateEmpty() { return new Sound_obj; }

void *Sound_obj::_hx_vtable = 0;

Dynamic Sound_obj::__Create(hx::DynamicArray inArgs)
{
	hx::ObjectPtr< Sound_obj > _hx_result = new Sound_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2]);
	return _hx_result;
}

bool Sound_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25b00754) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25b00754;
	} else {
		return inClassId==(int)0x575939e3;
	}
}

void Sound_obj::addEventListener(::String type, ::Dynamic listener,hx::Null< bool >  __o_useCapture,hx::Null< int >  __o_priority,hx::Null< bool >  __o_useWeakReference){
bool useCapture = __o_useCapture.Default(false);
int priority = __o_priority.Default(0);
bool useWeakReference = __o_useWeakReference.Default(false);
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_65_addEventListener)
HXLINE(  67)		this->super::addEventListener(type,listener,useCapture,priority,useWeakReference);
HXLINE(  69)		if ((type == HX_("sampleData",74,3f,0b,5e))) {
HXLINE(  71)			if (hx::IsNotNull( this->_hx___handle )) {
HXLINE(  73)				HX_STACK_DO_THROW(HX_("Can't use dynamic sound once file loaded",98,42,ab,4b));
            			}
HXLINE(  77)			this->_hx___dynamicSound = true;
HXLINE(  78)			this->_hx___loading = false;
            		}
            	}


void Sound_obj::close(){
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_85_close)
HXLINE(  87)		if (hx::IsNotNull( this->_hx___handle )) {
HXLINE(  89)			::openfl::_legacy::media::Sound_obj::lime_sound_close(this->_hx___handle);
            		}
HXLINE(  93)		this->_hx___handle = (int)0;
HXLINE(  94)		this->_hx___loading = false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,close,(void))

void Sound_obj::load( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_2862c8c6e0e16506_110_load)
HXLINE( 112)		this->bytesLoaded = (int)0;
HXLINE( 113)		this->bytesTotal = (int)0;
HXLINE( 115)		this->_hx___handle = ::openfl::_legacy::media::Sound_obj::lime_sound_from_file(stream->url,forcePlayAsMusic);
HXLINE( 117)		if (hx::IsNull( this->_hx___handle )) {
HXLINE( 119)			 ::Dynamic _hx_tmp = ::haxe::Log_obj::trace;
HXDLIN( 119)			_hx_tmp(((HX_("Error: Could not load \"",42,96,d0,bd) + stream->url) + HX_("\"",22,00,00,00)),hx::SourceInfo(HX_("Sound.hx",6f,1d,3b,f3),119,HX_("openfl._legacy.media.Sound",41,f8,25,4a),HX_("load",26,9a,b7,47)));
HXLINE( 120)			this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),null(),null(),null(),null()));
            		}
            		else {
HXLINE( 124)			this->url = stream->url;
HXLINE( 125)			this->_hx___loading = true;
HXLINE( 126)			this->_hx___checkLoading();
HXLINE( 127)			this->_hx___loading = false;
HXLINE( 128)			this->dispatchEvent( ::openfl::_legacy::events::Event_obj::__alloc( HX_CTX ,::openfl::_legacy::events::Event_obj::COMPLETE,null(),null()));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,load,(void))

void Sound_obj::loadCompressedDataFromByteArray( ::openfl::_legacy::utils::ByteArray bytes,int length,hx::Null< bool >  __o_forcePlayAsMusic){
bool forcePlayAsMusic = __o_forcePlayAsMusic.Default(false);
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_136_loadCompressedDataFromByteArray)
HXLINE( 138)		this->bytesLoaded = length;
HXLINE( 139)		this->bytesTotal = length;
HXLINE( 141)		 ::Dynamic _hx_tmp = hx::ClassOf< ::openfl::_legacy::media::Sound >();
HXDLIN( 141)		this->_hx___handle = ::openfl::_legacy::media::Sound_obj::lime_sound_from_data(bytes,length,forcePlayAsMusic);
HXLINE( 143)		if (hx::IsNull( this->_hx___handle )) {
HXLINE( 145)			HX_STACK_DO_THROW((HX_("Could not load buffer with length: ",b4,a8,96,d0) + length));
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,loadCompressedDataFromByteArray,(void))

void Sound_obj::loadPCMFromByteArray( ::openfl::_legacy::utils::ByteArray bytes,int samples,::String __o_format,hx::Null< bool >  __o_stereo,hx::Null< Float >  __o_sampleRate){
::String format = __o_format.Default(HX_HCSTRING("float","\x9c","\xc5","\x96","\x02"));
bool stereo = __o_stereo.Default(true);
Float sampleRate = __o_sampleRate.Default(((Float)44100.0));
            	HX_GC_STACKFRAME(&_hx_pos_2862c8c6e0e16506_152_loadPCMFromByteArray)
HXLINE( 154)		 ::openfl::_legacy::utils::ByteArray wav =  ::openfl::_legacy::utils::ByteArray_obj::__alloc( HX_CTX ,null());
HXLINE( 155)		wav->set_endian(::openfl::utils::_Endian::Endian_Impl__obj::toString((int)1));
HXLINE( 157)		int audioFormat;
HXDLIN( 157)		::String _hx_switch_0 = format;
            		if (  (_hx_switch_0==HX_("float",9c,c5,96,02)) ){
HXLINE( 157)			audioFormat = (int)3;
HXDLIN( 157)			goto _hx_goto_5;
            		}
            		if (  (_hx_switch_0==HX_("short",7c,84,27,7c)) ){
HXLINE( 157)			audioFormat = (int)1;
HXDLIN( 157)			goto _hx_goto_5;
            		}
            		/* default */{
HXLINE( 161)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,(HX_("Unsupported format ",7e,06,66,fe) + format),null()));
            		}
            		_hx_goto_5:;
HXLINE( 165)		int numChannels;
HXDLIN( 165)		if (stereo) {
HXLINE( 165)			numChannels = (int)2;
            		}
            		else {
HXLINE( 165)			numChannels = (int)1;
            		}
HXLINE( 166)		int sampleRate1 = ::Std_obj::_hx_int(sampleRate);
HXLINE( 167)		int bitsPerSample;
HXDLIN( 167)		::String _hx_switch_1 = format;
            		if (  (_hx_switch_1==HX_("float",9c,c5,96,02)) ){
HXLINE( 167)			bitsPerSample = (int)32;
HXDLIN( 167)			goto _hx_goto_6;
            		}
            		if (  (_hx_switch_1==HX_("short",7c,84,27,7c)) ){
HXLINE( 167)			bitsPerSample = (int)16;
HXDLIN( 167)			goto _hx_goto_6;
            		}
            		/* default */{
HXLINE( 171)			HX_STACK_DO_THROW( ::openfl::errors::Error_obj::__alloc( HX_CTX ,(HX_("Unsupported format ",7e,06,66,fe) + format),null()));
            		}
            		_hx_goto_6:;
HXLINE( 175)		int byteRate = ::Std_obj::_hx_int(((Float)((sampleRate1 * numChannels) * bitsPerSample) / (Float)(int)8));
HXLINE( 176)		int blockAlign = ::Std_obj::_hx_int(((Float)(numChannels * bitsPerSample) / (Float)(int)8));
HXLINE( 177)		int numSamples = ::Std_obj::_hx_int(((Float)bytes->length / (Float)blockAlign));
HXLINE( 179)		wav->writeUTFBytes(HX_("RIFF",b7,20,6b,36));
HXLINE( 180)		wav->writeInt(((int)36 + bytes->length));
HXLINE( 181)		wav->writeUTFBytes(HX_("WAVE",b9,2d,b3,39));
HXLINE( 182)		wav->writeUTFBytes(HX_("fmt ",33,de,be,43));
HXLINE( 183)		wav->writeInt((int)16);
HXLINE( 184)		wav->writeShort(audioFormat);
HXLINE( 185)		wav->writeShort(numChannels);
HXLINE( 186)		wav->writeInt(sampleRate1);
HXLINE( 187)		wav->writeInt(byteRate);
HXLINE( 188)		wav->writeShort(blockAlign);
HXLINE( 189)		wav->writeShort(bitsPerSample);
HXLINE( 190)		wav->writeUTFBytes(HX_("data",2a,56,63,42));
HXLINE( 191)		wav->writeInt(bytes->length);
HXLINE( 192)		wav->writeBytes(bytes,(int)0,bytes->length);
HXLINE( 194)		wav->position = (int)0;
HXLINE( 195)		this->loadCompressedDataFromByteArray(wav,wav->length,null());
            	}


HX_DEFINE_DYNAMIC_FUNC5(Sound_obj,loadPCMFromByteArray,(void))

 ::openfl::_legacy::media::SoundChannel Sound_obj::play(hx::Null< Float >  __o_startTime,hx::Null< int >  __o_loops, ::openfl::media::SoundTransform soundTransform){
Float startTime = __o_startTime.Default(0);
int loops = __o_loops.Default(0);
            	HX_GC_STACKFRAME(&_hx_pos_2862c8c6e0e16506_200_play)
HXLINE( 202)		this->_hx___checkLoading();
HXLINE( 204)		if (this->_hx___dynamicSound) {
HXLINE( 206)			 ::openfl::events::SampleDataEvent request =  ::openfl::events::SampleDataEvent_obj::__alloc( HX_CTX ,HX_("sampleData",74,3f,0b,5e),null(),null());
HXLINE( 207)			this->dispatchEvent(request);
HXLINE( 209)			if ((request->data->length > (int)0)) {
HXLINE( 211)				this->_hx___handle = ::openfl::_legacy::media::Sound_obj::lime_sound_channel_create_dynamic(request->data,soundTransform);
            			}
HXLINE( 215)			if (hx::IsNull( this->_hx___handle )) {
HXLINE( 217)				 ::openfl::_legacy::media::SoundChannel channel =  ::openfl::_legacy::media::SoundChannel_obj::__alloc( HX_CTX ,null(),startTime,loops,soundTransform);
HXLINE( 218)				channel->_hx___soundInstance = hx::ObjectPtr<OBJ_>(this);
HXLINE( 220)				return channel;
            			}
HXLINE( 224)			 ::openfl::_legacy::media::SoundChannel result = ::openfl::_legacy::media::SoundChannel_obj::createDynamic(this->_hx___handle,soundTransform,hx::ObjectPtr<OBJ_>(this));
HXLINE( 225)			this->_hx___handle = null();
HXLINE( 226)			return result;
            		}
            		else {
HXLINE( 230)			bool _hx_tmp;
HXDLIN( 230)			if (hx::IsNotNull( this->_hx___handle )) {
HXLINE( 230)				_hx_tmp = this->_hx___loading;
            			}
            			else {
HXLINE( 230)				_hx_tmp = true;
            			}
HXDLIN( 230)			if (_hx_tmp) {
HXLINE( 232)				 ::openfl::_legacy::media::SoundChannel channel1 =  ::openfl::_legacy::media::SoundChannel_obj::__alloc( HX_CTX ,null(),startTime,loops,soundTransform);
HXLINE( 233)				channel1->_hx___soundInstance = hx::ObjectPtr<OBJ_>(this);
HXLINE( 235)				return channel1;
            			}
HXLINE( 239)			 ::openfl::_legacy::media::SoundChannel channel2 =  ::openfl::_legacy::media::SoundChannel_obj::__alloc( HX_CTX ,this->_hx___handle,startTime,loops,soundTransform);
HXLINE( 240)			channel2->_hx___soundInstance = hx::ObjectPtr<OBJ_>(this);
HXLINE( 242)			return channel2;
            		}
HXLINE( 204)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC3(Sound_obj,play,return )

void Sound_obj::_hx___checkLoading(){
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_251___checkLoading)
HXDLIN( 251)		bool _hx_tmp;
HXDLIN( 251)		bool _hx_tmp1;
HXDLIN( 251)		if (!(this->_hx___dynamicSound)) {
HXDLIN( 251)			_hx_tmp1 = this->_hx___loading;
            		}
            		else {
HXDLIN( 251)			_hx_tmp1 = false;
            		}
HXDLIN( 251)		if (_hx_tmp1) {
HXDLIN( 251)			_hx_tmp = hx::IsNotNull( this->_hx___handle );
            		}
            		else {
HXDLIN( 251)			_hx_tmp = false;
            		}
HXDLIN( 251)		if (_hx_tmp) {
HXLINE( 253)			 ::Dynamic status = ::openfl::_legacy::media::Sound_obj::lime_sound_get_status(this->_hx___handle);
HXLINE( 255)			if (hx::IsNull( status )) {
HXLINE( 257)				HX_STACK_DO_THROW(HX_("Could not get sound status",79,41,e1,c3));
            			}
HXLINE( 261)			this->bytesLoaded = ( (int)(status->__Field(HX_("bytesLoaded",d0,66,ca,99),hx::paccDynamic)) );
HXLINE( 262)			this->bytesTotal = ( (int)(status->__Field(HX_("bytesTotal",59,57,da,45),hx::paccDynamic)) );
HXLINE( 263)			this->_hx___loading = (this->bytesLoaded < this->bytesTotal);
HXLINE( 265)			if (hx::IsNotNull(  ::Dynamic(status->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)) )) {
HXLINE( 267)				HX_STACK_DO_THROW( ::Dynamic(status->__Field(HX_("error",c8,cb,29,73),hx::paccDynamic)));
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,_hx___checkLoading,(void))

void Sound_obj::_hx___onError(::String msg){
            	HX_GC_STACKFRAME(&_hx_pos_2862c8c6e0e16506_276___onError)
HXLINE( 278)		this->dispatchEvent( ::openfl::events::IOErrorEvent_obj::__alloc( HX_CTX ,HX_("ioError",02,fe,41,76),true,false,msg,null()));
HXLINE( 279)		this->_hx___handle = null();
HXLINE( 280)		this->_hx___loading = true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(Sound_obj,_hx___onError,(void))

 ::openfl::media::ID3Info Sound_obj::get_id3(){
            	HX_GC_STACKFRAME(&_hx_pos_2862c8c6e0e16506_292_get_id3)
HXLINE( 294)		this->_hx___checkLoading();
HXLINE( 296)		bool _hx_tmp;
HXDLIN( 296)		if (hx::IsNotNull( this->_hx___handle )) {
HXLINE( 296)			_hx_tmp = this->_hx___loading;
            		}
            		else {
HXLINE( 296)			_hx_tmp = true;
            		}
HXDLIN( 296)		if (_hx_tmp) {
HXLINE( 298)			return  ::openfl::media::ID3Info_obj::__alloc( HX_CTX );
            		}
HXLINE( 302)		 ::openfl::media::ID3Info id3 =  ::openfl::media::ID3Info_obj::__alloc( HX_CTX );
HXLINE( 303)		::openfl::_legacy::media::Sound_obj::lime_sound_get_id3(this->_hx___handle,id3);
HXLINE( 304)		return id3;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_id3,return )

bool Sound_obj::get_isBuffering(){
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_309_get_isBuffering)
HXLINE( 311)		this->_hx___checkLoading();
HXLINE( 312)		if (this->_hx___loading) {
HXLINE( 312)			return hx::IsNull( this->_hx___handle );
            		}
            		else {
HXLINE( 312)			return false;
            		}
HXDLIN( 312)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_isBuffering,return )

Float Sound_obj::get_length(){
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_317_get_length)
HXLINE( 319)		bool _hx_tmp;
HXDLIN( 319)		if (hx::IsNotNull( this->_hx___handle )) {
HXLINE( 319)			_hx_tmp = this->_hx___loading;
            		}
            		else {
HXLINE( 319)			_hx_tmp = true;
            		}
HXDLIN( 319)		if (_hx_tmp) {
HXLINE( 321)			return (int)0;
            		}
HXLINE( 325)		return ( (Float)(::openfl::_legacy::media::Sound_obj::lime_sound_get_length(this->_hx___handle)) );
            	}


HX_DEFINE_DYNAMIC_FUNC0(Sound_obj,get_length,return )

 ::Dynamic Sound_obj::lime_sound_from_file;

 ::Dynamic Sound_obj::lime_sound_from_data;

 ::Dynamic Sound_obj::lime_sound_get_id3;

 ::Dynamic Sound_obj::lime_sound_get_length;

 ::Dynamic Sound_obj::lime_sound_close;

 ::Dynamic Sound_obj::lime_sound_get_status;

 ::Dynamic Sound_obj::lime_sound_channel_create_dynamic;


hx::ObjectPtr< Sound_obj > Sound_obj::__new( ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic) {
	hx::ObjectPtr< Sound_obj > __this = new Sound_obj();
	__this->__construct(stream,context,__o_forcePlayAsMusic);
	return __this;
}

hx::ObjectPtr< Sound_obj > Sound_obj::__alloc(hx::Ctx *_hx_ctx, ::openfl::_legacy::net::URLRequest stream, ::openfl::media::SoundLoaderContext context,hx::Null< bool >  __o_forcePlayAsMusic) {
	Sound_obj *__this = (Sound_obj*)(hx::Ctx::alloc(_hx_ctx, sizeof(Sound_obj), true, "openfl._legacy.media.Sound"));
	*(void **)__this = Sound_obj::_hx_vtable;
	__this->__construct(stream,context,__o_forcePlayAsMusic);
	return __this;
}

Sound_obj::Sound_obj()
{
}

void Sound_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Sound);
	HX_MARK_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_MARK_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_MARK_MEMBER_NAME(id3,"id3");
	HX_MARK_MEMBER_NAME(isBuffering,"isBuffering");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(url,"url");
	HX_MARK_MEMBER_NAME(_hx___audioType,"__audioType");
	HX_MARK_MEMBER_NAME(_hx___handle,"__handle");
	HX_MARK_MEMBER_NAME(_hx___loading,"__loading");
	HX_MARK_MEMBER_NAME(_hx___dynamicSound,"__dynamicSound");
	 ::openfl::_legacy::events::EventDispatcher_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Sound_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(bytesLoaded,"bytesLoaded");
	HX_VISIT_MEMBER_NAME(bytesTotal,"bytesTotal");
	HX_VISIT_MEMBER_NAME(id3,"id3");
	HX_VISIT_MEMBER_NAME(isBuffering,"isBuffering");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(url,"url");
	HX_VISIT_MEMBER_NAME(_hx___audioType,"__audioType");
	HX_VISIT_MEMBER_NAME(_hx___handle,"__handle");
	HX_VISIT_MEMBER_NAME(_hx___loading,"__loading");
	HX_VISIT_MEMBER_NAME(_hx___dynamicSound,"__dynamicSound");
	 ::openfl::_legacy::events::EventDispatcher_obj::__Visit(HX_VISIT_ARG);
}

hx::Val Sound_obj::__Field(const ::String &inName,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { return hx::Val( inCallProp == hx::paccAlways ? get_id3() : id3 ); }
		if (HX_FIELD_EQ(inName,"url") ) { return hx::Val( url ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"load") ) { return hx::Val( load_dyn() ); }
		if (HX_FIELD_EQ(inName,"play") ) { return hx::Val( play_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"close") ) { return hx::Val( close_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return hx::Val( inCallProp == hx::paccAlways ? get_length() : length ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"get_id3") ) { return hx::Val( get_id3_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { return hx::Val( _hx___handle ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__loading") ) { return hx::Val( _hx___loading ); }
		if (HX_FIELD_EQ(inName,"__onError") ) { return hx::Val( _hx___onError_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { return hx::Val( bytesTotal ); }
		if (HX_FIELD_EQ(inName,"get_length") ) { return hx::Val( get_length_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { return hx::Val( bytesLoaded ); }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { return hx::Val( inCallProp == hx::paccAlways ? get_isBuffering() : isBuffering ); }
		if (HX_FIELD_EQ(inName,"__audioType") ) { return hx::Val( _hx___audioType ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { return hx::Val( _hx___dynamicSound ); }
		if (HX_FIELD_EQ(inName,"__checkLoading") ) { return hx::Val( _hx___checkLoading_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_isBuffering") ) { return hx::Val( get_isBuffering_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"addEventListener") ) { return hx::Val( addEventListener_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"loadPCMFromByteArray") ) { return hx::Val( loadPCMFromByteArray_dyn() ); }
		break;
	case 31:
		if (HX_FIELD_EQ(inName,"loadCompressedDataFromByteArray") ) { return hx::Val( loadCompressedDataFromByteArray_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Sound_obj::__GetStatic(const ::String &inName, Dynamic &outValue, hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_sound_close") ) { outValue = ( lime_sound_close ); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_sound_get_id3") ) { outValue = ( lime_sound_get_id3 ); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_sound_from_file") ) { outValue = ( lime_sound_from_file ); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_from_data") ) { outValue = ( lime_sound_from_data ); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_sound_get_length") ) { outValue = ( lime_sound_get_length ); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_get_status") ) { outValue = ( lime_sound_get_status ); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create_dynamic") ) { outValue = ( lime_sound_channel_create_dynamic ); return true; }
	}
	return false;
}

hx::Val Sound_obj::__SetField(const ::String &inName,const hx::Val &inValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"id3") ) { id3=inValue.Cast<  ::openfl::media::ID3Info >(); return inValue; }
		if (HX_FIELD_EQ(inName,"url") ) { url=inValue.Cast< ::String >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< Float >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"__handle") ) { _hx___handle=inValue.Cast<  ::Dynamic >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"__loading") ) { _hx___loading=inValue.Cast< bool >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"bytesTotal") ) { bytesTotal=inValue.Cast< int >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"bytesLoaded") ) { bytesLoaded=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"isBuffering") ) { isBuffering=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"__audioType") ) { _hx___audioType=inValue.Cast<  ::openfl::_legacy::media::InternalAudioType >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"__dynamicSound") ) { _hx___dynamicSound=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool Sound_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 16:
		if (HX_FIELD_EQ(inName,"lime_sound_close") ) { lime_sound_close=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"lime_sound_get_id3") ) { lime_sound_get_id3=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"lime_sound_from_file") ) { lime_sound_from_file=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_from_data") ) { lime_sound_from_data=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"lime_sound_get_length") ) { lime_sound_get_length=ioValue.Cast<  ::Dynamic >(); return true; }
		if (HX_FIELD_EQ(inName,"lime_sound_get_status") ) { lime_sound_get_status=ioValue.Cast<  ::Dynamic >(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"lime_sound_channel_create_dynamic") ) { lime_sound_channel_create_dynamic=ioValue.Cast<  ::Dynamic >(); return true; }
	}
	return false;
}

void Sound_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"));
	outFields->push(HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"));
	outFields->push(HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"));
	outFields->push(HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"));
	outFields->push(HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"));
	outFields->push(HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"));
	outFields->push(HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a"));
	outFields->push(HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"));
	outFields->push(HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a"));
	outFields->push(HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58"));
	super::__GetFields(outFields);
};

#if HXCPP_SCRIPTABLE
static hx::StorageInfo Sound_obj_sMemberStorageInfo[] = {
	{hx::fsInt,(int)offsetof(Sound_obj,bytesLoaded),HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99")},
	{hx::fsInt,(int)offsetof(Sound_obj,bytesTotal),HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45")},
	{hx::fsObject /*::openfl::media::ID3Info*/ ,(int)offsetof(Sound_obj,id3),HX_HCSTRING("id3","\xf8","\x03","\x50","\x00")},
	{hx::fsBool,(int)offsetof(Sound_obj,isBuffering),HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90")},
	{hx::fsFloat,(int)offsetof(Sound_obj,length),HX_HCSTRING("length","\xe6","\x94","\x07","\x9f")},
	{hx::fsString,(int)offsetof(Sound_obj,url),HX_HCSTRING("url","\x6f","\x2b","\x59","\x00")},
	{hx::fsObject /*::openfl::_legacy::media::InternalAudioType*/ ,(int)offsetof(Sound_obj,_hx___audioType),HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a")},
	{hx::fsObject /*Dynamic*/ ,(int)offsetof(Sound_obj,_hx___handle),HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60")},
	{hx::fsBool,(int)offsetof(Sound_obj,_hx___loading),HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a")},
	{hx::fsBool,(int)offsetof(Sound_obj,_hx___dynamicSound),HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58")},
	{ hx::fsUnknown, 0, null()}
};
static hx::StaticInfo Sound_obj_sStaticStorageInfo[] = {
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_from_file,HX_HCSTRING("lime_sound_from_file","\x97","\xb9","\x87","\xf0")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_from_data,HX_HCSTRING("lime_sound_from_data","\x45","\x41","\x2f","\xef")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_id3,HX_HCSTRING("lime_sound_get_id3","\xf5","\xfb","\x2c","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_length,HX_HCSTRING("lime_sound_get_length","\x09","\xf9","\x99","\x0a")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_close,HX_HCSTRING("lime_sound_close","\x9e","\x81","\x30","\xb5")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_get_status,HX_HCSTRING("lime_sound_get_status","\x55","\x4b","\x8e","\x71")},
	{hx::fsObject /*Dynamic*/ ,(void *) &Sound_obj::lime_sound_channel_create_dynamic,HX_HCSTRING("lime_sound_channel_create_dynamic","\x92","\x6a","\x29","\x3a")},
	{ hx::fsUnknown, 0, null()}
};
#endif

static ::String Sound_obj_sMemberFields[] = {
	HX_HCSTRING("bytesLoaded","\xd0","\x66","\xca","\x99"),
	HX_HCSTRING("bytesTotal","\x59","\x57","\xda","\x45"),
	HX_HCSTRING("id3","\xf8","\x03","\x50","\x00"),
	HX_HCSTRING("isBuffering","\x98","\x26","\x10","\x90"),
	HX_HCSTRING("length","\xe6","\x94","\x07","\x9f"),
	HX_HCSTRING("url","\x6f","\x2b","\x59","\x00"),
	HX_HCSTRING("__audioType","\x90","\x03","\xeb","\x9a"),
	HX_HCSTRING("__handle","\xc8","\xee","\x2c","\x60"),
	HX_HCSTRING("__loading","\x5c","\x1f","\x41","\x8a"),
	HX_HCSTRING("__dynamicSound","\xf0","\x53","\x37","\x58"),
	HX_HCSTRING("addEventListener","\xcd","\x0b","\x64","\xf1"),
	HX_HCSTRING("close","\xb8","\x17","\x63","\x48"),
	HX_HCSTRING("load","\x26","\x9a","\xb7","\x47"),
	HX_HCSTRING("loadCompressedDataFromByteArray","\xd6","\x4f","\x5d","\xa0"),
	HX_HCSTRING("loadPCMFromByteArray","\x73","\x51","\xe4","\xc4"),
	HX_HCSTRING("play","\xf4","\x2d","\x5a","\x4a"),
	HX_HCSTRING("__checkLoading","\xb4","\x09","\x3a","\x17"),
	HX_HCSTRING("__onError","\x09","\xbb","\xb5","\x8a"),
	HX_HCSTRING("get_id3","\x8f","\xcc","\xc4","\x26"),
	HX_HCSTRING("get_isBuffering","\x2f","\xde","\xf1","\x50"),
	HX_HCSTRING("get_length","\xaf","\x04","\x8f","\x8f"),
	::String(null()) };

static void Sound_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_from_file,"lime_sound_from_file");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_from_data,"lime_sound_from_data");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_id3,"lime_sound_get_id3");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_length,"lime_sound_get_length");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_close,"lime_sound_close");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_get_status,"lime_sound_get_status");
	HX_MARK_MEMBER_NAME(Sound_obj::lime_sound_channel_create_dynamic,"lime_sound_channel_create_dynamic");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Sound_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Sound_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_from_file,"lime_sound_from_file");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_from_data,"lime_sound_from_data");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_id3,"lime_sound_get_id3");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_length,"lime_sound_get_length");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_close,"lime_sound_close");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_get_status,"lime_sound_get_status");
	HX_VISIT_MEMBER_NAME(Sound_obj::lime_sound_channel_create_dynamic,"lime_sound_channel_create_dynamic");
};

#endif

hx::Class Sound_obj::__mClass;

static ::String Sound_obj_sStaticFields[] = {
	HX_HCSTRING("lime_sound_from_file","\x97","\xb9","\x87","\xf0"),
	HX_HCSTRING("lime_sound_from_data","\x45","\x41","\x2f","\xef"),
	HX_HCSTRING("lime_sound_get_id3","\xf5","\xfb","\x2c","\x71"),
	HX_HCSTRING("lime_sound_get_length","\x09","\xf9","\x99","\x0a"),
	HX_HCSTRING("lime_sound_close","\x9e","\x81","\x30","\xb5"),
	HX_HCSTRING("lime_sound_get_status","\x55","\x4b","\x8e","\x71"),
	HX_HCSTRING("lime_sound_channel_create_dynamic","\x92","\x6a","\x29","\x3a"),
	::String(null())
};

void Sound_obj::__register()
{
	hx::Object *dummy = new Sound_obj;
	Sound_obj::_hx_vtable = *(void **)dummy;
	hx::Static(__mClass) = new hx::Class_obj();
	__mClass->mName = HX_HCSTRING("openfl._legacy.media.Sound","\x41","\xf8","\x25","\x4a");
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Sound_obj::__GetStatic;
	__mClass->mSetStaticField = &Sound_obj::__SetStatic;
	__mClass->mMarkFunc = Sound_obj_sMarkStatics;
	__mClass->mStatics = hx::Class_obj::dupFunctions(Sound_obj_sStaticFields);
	__mClass->mMembers = hx::Class_obj::dupFunctions(Sound_obj_sMemberFields);
	__mClass->mCanCast = hx::TCanCast< Sound_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Sound_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Sound_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Sound_obj_sStaticStorageInfo;
#endif
	hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Sound_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_337_boot)
HXDLIN( 337)		lime_sound_from_file = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_from_file",f5,6f,9a,2f),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_338_boot)
HXDLIN( 338)		lime_sound_from_data = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_from_data",a3,f7,41,2e),(int)3);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_339_boot)
HXDLIN( 339)		lime_sound_get_id3 = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_get_id3",d3,be,22,75),(int)2);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_340_boot)
HXDLIN( 340)		lime_sound_get_length = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_get_length",eb,d4,e6,fb),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_341_boot)
HXDLIN( 341)		lime_sound_close = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_close",fc,30,15,f3),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_342_boot)
HXDLIN( 342)		lime_sound_get_status = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_get_status",37,27,db,62),(int)1);
            	}
{
            	HX_STACKFRAME(&_hx_pos_2862c8c6e0e16506_343_boot)
HXDLIN( 343)		lime_sound_channel_create_dynamic = ::openfl::_legacy::Lib_obj::load(HX_("lime-legacy",c1,7f,b9,87),HX_("lime_legacy_sound_channel_create_dynamic",74,91,c1,2c),(int)2);
            	}
}

} // end namespace openfl
} // end namespace _legacy
} // end namespace media
