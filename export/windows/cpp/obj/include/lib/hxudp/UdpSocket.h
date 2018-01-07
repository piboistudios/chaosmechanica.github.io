// Generated by Haxe 3.4.4
#ifndef INCLUDED_lib_hxudp_UdpSocket
#define INCLUDED_lib_hxudp_UdpSocket

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(lib,hxudp,UdpSocket)

namespace lib{
namespace hxudp{


class HXCPP_CLASS_ATTRIBUTES UdpSocket_obj : public hx::Object
{
	public:
		typedef hx::Object super;
		typedef UdpSocket_obj OBJ_;
		UdpSocket_obj();

	public:
		enum { _hx_ClassId = 0x2784bfa8 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="lib.hxudp.UdpSocket")
			{ return hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return hx::Object::operator new(inSize+extra,true,"lib.hxudp.UdpSocket"); }
		static hx::ObjectPtr< UdpSocket_obj > __new();
		static hx::ObjectPtr< UdpSocket_obj > __alloc(hx::Ctx *_hx_ctx);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		//~UdpSocket_obj();

		HX_DO_RTTI_ALL;
		hx::Val __Field(const ::String &inString, hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, hx::PropertyAccess inCallProp);
		hx::Val __SetField(const ::String &inString,const hx::Val &inValue, hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_HCSTRING("UdpSocket","\xb4","\x65","\x1b","\xee"); }

		static void __boot();
		static  ::Dynamic _UdpSocket_new;
		static Dynamic _UdpSocket_new_dyn() { return _UdpSocket_new;}
		static  ::Dynamic _UdpSocket_Close;
		static Dynamic _UdpSocket_Close_dyn() { return _UdpSocket_Close;}
		static  ::Dynamic _UdpSocket_Create;
		static Dynamic _UdpSocket_Create_dyn() { return _UdpSocket_Create;}
		static  ::Dynamic _UdpSocket_Connect;
		static Dynamic _UdpSocket_Connect_dyn() { return _UdpSocket_Connect;}
		static  ::Dynamic _UdpSocket_ConnectMcast;
		static Dynamic _UdpSocket_ConnectMcast_dyn() { return _UdpSocket_ConnectMcast;}
		static  ::Dynamic _UdpSocket_Bind;
		static Dynamic _UdpSocket_Bind_dyn() { return _UdpSocket_Bind;}
		static  ::Dynamic _UdpSocket_BindMcast;
		static Dynamic _UdpSocket_BindMcast_dyn() { return _UdpSocket_BindMcast;}
		static  ::Dynamic _UdpSocket_Send;
		static Dynamic _UdpSocket_Send_dyn() { return _UdpSocket_Send;}
		static  ::Dynamic _UdpSocket_SendAll;
		static Dynamic _UdpSocket_SendAll_dyn() { return _UdpSocket_SendAll;}
		static  ::Dynamic _UdpSocket_Receive;
		static Dynamic _UdpSocket_Receive_dyn() { return _UdpSocket_Receive;}
		static  ::Dynamic _UdpSocket_SetTimeoutSend;
		static Dynamic _UdpSocket_SetTimeoutSend_dyn() { return _UdpSocket_SetTimeoutSend;}
		static  ::Dynamic _UdpSocket_SetTimeoutReceive;
		static Dynamic _UdpSocket_SetTimeoutReceive_dyn() { return _UdpSocket_SetTimeoutReceive;}
		static  ::Dynamic _UdpSocket_GetTimeoutSend;
		static Dynamic _UdpSocket_GetTimeoutSend_dyn() { return _UdpSocket_GetTimeoutSend;}
		static  ::Dynamic _UdpSocket_GetTimeoutReceive;
		static Dynamic _UdpSocket_GetTimeoutReceive_dyn() { return _UdpSocket_GetTimeoutReceive;}
		static  ::Dynamic _UdpSocket__GetInetAddr;
		static Dynamic _UdpSocket__GetInetAddr_dyn() { return _UdpSocket__GetInetAddr;}
		static  ::Dynamic _UdpSocket_GetRemoteAddr;
		static Dynamic _UdpSocket_GetRemoteAddr_dyn() { return _UdpSocket_GetRemoteAddr;}
		static  ::Dynamic _UdpSocket_SetReceiveBufferSize;
		static Dynamic _UdpSocket_SetReceiveBufferSize_dyn() { return _UdpSocket_SetReceiveBufferSize;}
		static  ::Dynamic _UdpSocket_SetSendBufferSize;
		static Dynamic _UdpSocket_SetSendBufferSize_dyn() { return _UdpSocket_SetSendBufferSize;}
		static  ::Dynamic _UdpSocket_GetReceiveBufferSize;
		static Dynamic _UdpSocket_GetReceiveBufferSize_dyn() { return _UdpSocket_GetReceiveBufferSize;}
		static  ::Dynamic _UdpSocket_GetSendBufferSize;
		static Dynamic _UdpSocket_GetSendBufferSize_dyn() { return _UdpSocket_GetSendBufferSize;}
		static  ::Dynamic _UdpSocket_SetReuseAddress;
		static Dynamic _UdpSocket_SetReuseAddress_dyn() { return _UdpSocket_SetReuseAddress;}
		static  ::Dynamic _UdpSocket_SetEnableBroadcast;
		static Dynamic _UdpSocket_SetEnableBroadcast_dyn() { return _UdpSocket_SetEnableBroadcast;}
		static  ::Dynamic _UdpSocket_SetNonBlocking;
		static Dynamic _UdpSocket_SetNonBlocking_dyn() { return _UdpSocket_SetNonBlocking;}
		static  ::Dynamic _UdpSocket_GetMaxMsgSize;
		static Dynamic _UdpSocket_GetMaxMsgSize_dyn() { return _UdpSocket_GetMaxMsgSize;}
		static  ::Dynamic _UdpSocket_GetTTL;
		static Dynamic _UdpSocket_GetTTL_dyn() { return _UdpSocket_GetTTL;}
		static  ::Dynamic _UdpSocket_SetTTL;
		static Dynamic _UdpSocket_SetTTL_dyn() { return _UdpSocket_SetTTL;}
		 ::Dynamic handle;
		bool close();
		::Dynamic close_dyn();

		bool create();
		::Dynamic create_dyn();

		bool connect(::String pHost,int usPort);
		::Dynamic connect_dyn();

		bool connectMcast(::String pMcast,int usPort);
		::Dynamic connectMcast_dyn();

		bool bind(int usPort);
		::Dynamic bind_dyn();

		bool bindMcast(::String pMcast,int usPort);
		::Dynamic bindMcast_dyn();

		int send( ::haxe::io::Bytes pBuff);
		::Dynamic send_dyn();

		int sendAll( ::haxe::io::Bytes pBuff);
		::Dynamic sendAll_dyn();

		int receive( ::haxe::io::Bytes pBuff);
		::Dynamic receive_dyn();

		void setTimeoutSend(int timeoutInSeconds);
		::Dynamic setTimeoutSend_dyn();

		void setTimeoutReceive(int timeoutInSeconds);
		::Dynamic setTimeoutReceive_dyn();

		int getTimeoutSend();
		::Dynamic getTimeoutSend_dyn();

		int getTimeoutReceive();
		::Dynamic getTimeoutReceive_dyn();

		::String getInetAddr();
		::Dynamic getInetAddr_dyn();

		::String getRemoteAddr();
		::Dynamic getRemoteAddr_dyn();

		bool setReceiveBufferSize(int sizeInByte);
		::Dynamic setReceiveBufferSize_dyn();

		bool setSendBufferSize(int sizeInByte);
		::Dynamic setSendBufferSize_dyn();

		int getReceiveBufferSize();
		::Dynamic getReceiveBufferSize_dyn();

		int getSendBufferSize();
		::Dynamic getSendBufferSize_dyn();

		bool setReuseAddress(bool allowReuse);
		::Dynamic setReuseAddress_dyn();

		bool setEnableBroadcast(bool enableBroadcast);
		::Dynamic setEnableBroadcast_dyn();

		bool setNonBlocking(bool useNonBlocking);
		::Dynamic setNonBlocking_dyn();

		int getMaxMsgSize();
		::Dynamic getMaxMsgSize_dyn();

		int getTTL();
		::Dynamic getTTL_dyn();

		bool setTTL(int nTTL);
		::Dynamic setTTL_dyn();

};

} // end namespace lib
} // end namespace hxudp

#endif /* INCLUDED_lib_hxudp_UdpSocket */ 