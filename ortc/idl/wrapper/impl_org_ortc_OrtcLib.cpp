// Generated by zsLibEventingTool

#include "impl_org_ortc_OrtcLib.h"

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
wrapper::impl::org::ortc::OrtcLib::~OrtcLib()
{
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::setup()
{
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::setup(wrapper::org::ortc::MessageQueuePtr queue)
{
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::startMediaTracing()
{
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::stopMediaTracing()
{
}

//------------------------------------------------------------------------------
bool wrapper::org::ortc::OrtcLib::isMediaTracing()
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::org::ortc::OrtcLib::saveMediaTrace(String filename)
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::org::ortc::OrtcLib::saveMediaTrace(
  String host,
  int port
  )
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
PromisePtr wrapper::org::ortc::OrtcLib::notifyGoingToBackground()
{
  PromisePtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::notifyGoingToBackgroundNow()
{
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::notifyReturningFromBackground()
{
}

//------------------------------------------------------------------------------
::zsLib::Milliseconds wrapper::org::ortc::OrtcLib::get_ntpServerTime()
{
  ::zsLib::Milliseconds result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::org::ortc::OrtcLib::set_ntpServerTime(::zsLib::Milliseconds value)
{
}


