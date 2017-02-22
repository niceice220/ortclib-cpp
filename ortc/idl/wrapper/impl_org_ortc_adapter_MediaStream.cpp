// Generated by zsLibEventingTool

#include "impl_org_ortc_adapter_MediaStream.h"

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
wrapper::impl::org::ortc::adapter::MediaStream::MediaStream()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::MediaStreamPtr wrapper::org::ortc::adapter::MediaStream::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::adapter::MediaStream>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::adapter::MediaStream::~MediaStream()
{
}

//------------------------------------------------------------------------------
shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > wrapper::impl::org::ortc::adapter::MediaStream::getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes)
{
  shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::wrapper_init_org_ortc_adapter_MediaStream()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::wrapper_init_org_ortc_adapter_MediaStream(wrapper::org::ortc::adapter::MediaStreamPtr source)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::wrapper_init_org_ortc_adapter_MediaStream(shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > tracks)
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::MediaStreamTrackPtr wrapper::impl::org::ortc::adapter::MediaStream::getTrackById(String id)
{
  wrapper::org::ortc::MediaStreamTrackPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::addTrack(wrapper::org::ortc::MediaStreamTrackPtr track)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::removeTrack(wrapper::org::ortc::MediaStreamTrackPtr track)
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::adapter::MediaStreamPtr wrapper::impl::org::ortc::adapter::MediaStream::clone()
{
  wrapper::org::ortc::adapter::MediaStreamPtr result {};
  return result;
}

//------------------------------------------------------------------------------
uint64_t wrapper::impl::org::ortc::adapter::MediaStream::get_objectId()
{
  uint64_t result {};
  return result;
}

//------------------------------------------------------------------------------
String wrapper::impl::org::ortc::adapter::MediaStream::get_id()
{
  String result {};
  return result;
}

//------------------------------------------------------------------------------
bool wrapper::impl::org::ortc::adapter::MediaStream::get_active()
{
  bool result {};
  return result;
}

//------------------------------------------------------------------------------
shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > wrapper::impl::org::ortc::adapter::MediaStream::get_tracks()
{
  shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > wrapper::impl::org::ortc::adapter::MediaStream::get_audioTracks()
{
  shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > wrapper::impl::org::ortc::adapter::MediaStream::get_videoTracks()
{
  shared_ptr< list< wrapper::org::ortc::MediaStreamTrackPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
uint64_t wrapper::impl::org::ortc::adapter::MediaStream::get_count()
{
  uint64_t result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::adapter::MediaStream::wrapper_onObserverCountChanged(size_t count)
{
}


