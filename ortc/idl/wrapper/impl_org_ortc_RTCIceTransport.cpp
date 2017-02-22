// Generated by zsLibEventingTool

#include "impl_org_ortc_RTCIceTransport.h"

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
wrapper::impl::org::ortc::RTCIceTransport::RTCIceTransport()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceTransportPtr wrapper::org::ortc::RTCIceTransport::wrapper_create()
{
  auto pThis = make_shared<wrapper::impl::org::ortc::RTCIceTransport>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::ortc::RTCIceTransport::~RTCIceTransport()
{
}

//------------------------------------------------------------------------------
shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > wrapper::impl::org::ortc::RTCIceTransport::getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes)
{
  shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::wrapper_init_org_ortc_RTCIceTransport()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::wrapper_init_org_ortc_RTCIceTransport(wrapper::org::ortc::RTCIceGathererPtr gatherer)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::start(
  wrapper::org::ortc::RTCIceGathererPtr gatherer,
  wrapper::org::ortc::RTCIceParametersPtr remoteParameters
  )
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::start(
  wrapper::org::ortc::RTCIceGathererPtr gatherer,
  wrapper::org::ortc::RTCIceParametersPtr remoteParameters,
  wrapper::org::ortc::RTCIceRole options
  )
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::start(
  wrapper::org::ortc::RTCIceGathererPtr gatherer,
  wrapper::org::ortc::RTCIceParametersPtr remoteParameters,
  wrapper::org::ortc::RTCIceTransportOptionsPtr options
  )
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::stop()
{
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceTransportPtr wrapper::impl::org::ortc::RTCIceTransport::createAssociatedTransport()
{
  wrapper::org::ortc::RTCIceTransportPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::addRemoteCandidate(wrapper::org::ortc::RTCIceGathererCandidatePtr remoteCandidate)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::setRemoteCandidates(shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > remoteCandidates)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::removeRemoteCandidate(wrapper::org::ortc::RTCIceGathererCandidatePtr remoteCandidate)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::keepWarm(wrapper::org::ortc::RTCIceCandidatePairPtr candidatePair)
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::keepWarm(
  wrapper::org::ortc::RTCIceCandidatePairPtr candidatePair,
  bool keepWarm
  )
{
}

//------------------------------------------------------------------------------
uint64_t wrapper::impl::org::ortc::RTCIceTransport::get_objectId()
{
  uint64_t result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceGathererPtr wrapper::impl::org::ortc::RTCIceTransport::get_gatherer()
{
  wrapper::org::ortc::RTCIceGathererPtr result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceRole wrapper::impl::org::ortc::RTCIceTransport::get_role()
{
  wrapper::org::ortc::RTCIceRole result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceComponent wrapper::impl::org::ortc::RTCIceTransport::get_component()
{
  wrapper::org::ortc::RTCIceComponent result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceTransportState wrapper::impl::org::ortc::RTCIceTransport::get_state()
{
  wrapper::org::ortc::RTCIceTransportState result {};
  return result;
}

//------------------------------------------------------------------------------
shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > wrapper::impl::org::ortc::RTCIceTransport::get_remoteCandidates()
{
  shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > wrapper::impl::org::ortc::RTCIceTransport::get_selectedCandidatePair()
{
  shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > result {};
  return result;
}

//------------------------------------------------------------------------------
wrapper::org::ortc::RTCIceParametersPtr wrapper::impl::org::ortc::RTCIceTransport::get_remoteParameters()
{
  wrapper::org::ortc::RTCIceParametersPtr result {};
  return result;
}

//------------------------------------------------------------------------------
void wrapper::impl::org::ortc::RTCIceTransport::wrapper_onObserverCountChanged(size_t count)
{
}


