
#include "impl_org_webrtc_RTCSessionDescriptionInit.h"

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
wrapper::impl::org::webrtc::RTCSessionDescriptionInit::RTCSessionDescriptionInit() noexcept
{
}

//------------------------------------------------------------------------------
wrapper::org::webrtc::RTCSessionDescriptionInitPtr wrapper::org::webrtc::RTCSessionDescriptionInit::wrapper_create() noexcept
{
  auto pThis = make_shared<wrapper::impl::org::webrtc::RTCSessionDescriptionInit>();
  pThis->thisWeak_ = pThis;
  return pThis;
}

//------------------------------------------------------------------------------
wrapper::impl::org::webrtc::RTCSessionDescriptionInit::~RTCSessionDescriptionInit()
{
}

//------------------------------------------------------------------------------
void wrapper::impl::org::webrtc::RTCSessionDescriptionInit::wrapper_init_org_webrtc_RTCSessionDescriptionInit() noexcept
{
}
