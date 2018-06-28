// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webrtc_RTCRtpSender.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct RTCRtpSender : public wrapper::org::webrtc::RTCRtpSender
        {
          RTCRtpSenderWeakPtr thisWeak_;

          RTCRtpSender() noexcept;
          virtual ~RTCRtpSender() noexcept;

          // methods RTCRtpSender
          wrapper::org::webrtc::RTCRtpSendParametersPtr getParameters() noexcept override;
          PromisePtr setParameters(wrapper::org::webrtc::RTCRtpSendParametersPtr parameters) noexcept(false) override; // throws wrapper::org::webrtc::RTCErrorPtr
          PromisePtr replaceTrack(wrapper::org::webrtc::MediaStreamTrackPtr withTrack) noexcept override;
          void wrapper_init_org_webrtc_RTCRtpSender() noexcept override;

          // properties RTCRtpSender
          wrapper::org::webrtc::MediaStreamTrackPtr get_track() noexcept override;
          wrapper::org::webrtc::RTCDtmfSenderPtr get_dtmf() noexcept override;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper
