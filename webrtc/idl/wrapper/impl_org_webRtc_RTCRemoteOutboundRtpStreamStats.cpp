// Generated by zsLibEventingTool

#include "impl_org_webRtc_RTCRemoteOutboundRtpStreamStats.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::PromiseWithHolderPtr;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

// borrow definitions from class
ZS_DECLARE_TYPEDEF_PTR(wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::WrapperImplType, WrapperImplType);
ZS_DECLARE_TYPEDEF_PTR(WrapperImplType::WrapperType, WrapperType);

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::RTCRemoteOutboundRtpStreamStats() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webRtc::RTCRemoteOutboundRtpStreamStatsPtr wrapper::org::webRtc::RTCRemoteOutboundRtpStreamStats::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::~RTCRemoteOutboundRtpStreamStats() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_timestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::webRtc::RTCStatsType > wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_statsType() noexcept
{
  Optional< wrapper::org::webRtc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_statsTypeOther() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_id() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< uint32_t > wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_ssrc() noexcept
{
  Optional< uint32_t > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_kind() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_transportId() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_codecId() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_firCount() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_pliCount() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_nackCount() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_sliCount() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_qpSum() noexcept
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_packetsSent() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_packetsDiscardedOnSend() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_fecPacketsSent() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_bytesSent() noexcept
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long long wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_bytesDiscardedOnSend() noexcept
{
  unsigned long long result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_localId() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webRtc::RTCRemoteOutboundRtpStreamStats::get_remoteTimestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

