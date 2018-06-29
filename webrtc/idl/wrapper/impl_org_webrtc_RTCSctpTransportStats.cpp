// Generated by zsLibEventingTool

#include "impl_org_webrtc_RTCSctpTransportStats.h"

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

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCSctpTransportStats::RTCSctpTransportStats() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCSctpTransportStatsPtr wrapper::org::webrtc::RTCSctpTransportStats::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webrtc::RTCSctpTransportStats>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCSctpTransportStats::~RTCSctpTransportStats() noexcept
{
  thisWeak_.reset();
}

//------------------------------------------------------------------------------
::zsLib::Time wrapper::impl::org::webrtc::RTCSctpTransportStats::get_timestamp() noexcept
{
  ::zsLib::Time result {};
  return result;
}

//------------------------------------------------------------------------------
Optional< wrapper::org::webrtc::RTCStatsType > wrapper::impl::org::webrtc::RTCSctpTransportStats::get_statsType() noexcept
{
  Optional< wrapper::org::webrtc::RTCStatsType > result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCSctpTransportStats::get_statsTypeOther() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::webrtc::RTCSctpTransportStats::get_id() noexcept
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCSctpTransportStats::wrapper_init_org_webrtc_RTCSctpTransportStats() noexcept
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCSctpTransportStats::wrapper_init_org_webrtc_RTCSctpTransportStats(wrapper::org::webrtc::RTCSctpTransportStatsPtr source) noexcept
{
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webrtc::RTCSctpTransportStats::get_dataChannelsOpened() noexcept
{
  unsigned long result {};
  return result;
}

//------------------------------------------------------------------------------
unsigned long wrapper::impl::org::webrtc::RTCSctpTransportStats::get_dataChannelsClosed() noexcept
{
  unsigned long result {};
  return result;
}


