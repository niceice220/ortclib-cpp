// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCRtpDtmfSender.h"

using ::zsLib::String;
using ::zsLib::Optional;
using ::zsLib::Any;
using ::zsLib::AnyPtr;
using ::zsLib::AnyHolder;
using ::zsLib::Promise;
using ::zsLib::PromisePtr;
using ::zsLib::PromiseWithHolder;
using ::zsLib::eventing::SecureByteBlock;
using ::zsLib::eventing::SecureByteBlockPtr;
using ::std::shared_ptr;
using ::std::weak_ptr;
using ::std::make_shared;
using ::std::list;
using ::std::set;
using ::std::map;

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCRtpDtmfSender::RTCRtpDtmfSender()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpDtmfSenderPtr wrapper::org::ortc::RTCRtpDtmfSender::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCRtpDtmfSender>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCRtpDtmfSender::~RTCRtpDtmfSender()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpDtmfSender::wrapper_init_org_ortc_RTCRtpDtmfSender(wrapper::org::ortc::RTCRtpSenderPtr sender)
{
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::ortc::RTCRtpDtmfSender::canInsertDtmf()
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpDtmfSender::insertDtmf(String tones)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpDtmfSender::insertDtmf(
  String tones,
  ::zsLib::Milliseconds duration
  )
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpDtmfSender::insertDtmf(
  String tones,
  ::zsLib::Milliseconds duration,
  ::zsLib::Milliseconds interToneGap
  )
{
}

//------------------------------------------------------------------------------
uint64_t wrapper::impl::org::ortc::RTCRtpDtmfSender::get_objectId()
{
  uint64_t result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCRtpSenderPtr wrapper::impl::org::ortc::RTCRtpDtmfSender::get_sender()
{
  wrapper::org::ortc::RTCRtpSenderPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCRtpDtmfSender::get_toneBuffer()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Milliseconds wrapper::impl::org::ortc::RTCRtpDtmfSender::get_duration()
{
  ::zsLib::Milliseconds result {};
  return result;
}

//------------------------------------------------------------------------------
::zsLib::Milliseconds wrapper::impl::org::ortc::RTCRtpDtmfSender::get_interToneGap()
{
  ::zsLib::Milliseconds result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCRtpDtmfSender::wrapper_onObserverCountChanged(size_t count)
{
}


