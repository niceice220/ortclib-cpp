// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCMessageEventData.h"

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
wrapper::impl::org::ortc::RTCMessageEventData::RTCMessageEventData()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCMessageEventDataPtr wrapper::org::ortc::RTCMessageEventData::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCMessageEventData>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCMessageEventData::~RTCMessageEventData()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCMessageEventData::wrapper_init_org_ortc_RTCMessageEventData()
{
}

//------------------------------------------------------------------------------
SecureByteBlockPtr wrapper::impl::org::ortc::RTCMessageEventData::get_binary()
{
  SecureByteBlockPtr result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::RTCMessageEventData::get_text()
{
  String result {};
  return result;
}


