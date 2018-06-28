// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_webrtc_RTCBitrateParameters.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace webrtc {

        struct RTCBitrateParameters : public wrapper::org::webrtc::RTCBitrateParameters
        {
          RTCBitrateParametersWeakPtr thisWeak_;

          RTCBitrateParameters() noexcept;
          virtual ~RTCBitrateParameters() noexcept;
          void wrapper_init_org_webrtc_RTCBitrateParameters() noexcept override;
        };

      } // webrtc
    } // org
  } // namespace impl
} // namespace wrapper
