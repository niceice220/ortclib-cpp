// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCRtpSender.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCRtpSender : public wrapper::org::ortc::RTCRtpSender
        {
          RTCRtpSenderWeakPtr thisWeak_;

          RTCRtpSender();
          virtual ~RTCRtpSender();

          // methods RTCStatsProvider
          virtual shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes) override;

          // methods RTCRtpSender
          virtual void wrapper_init_org_ortc_RTCRtpSender(
            wrapper::org::ortc::MediaStreamTrackPtr track,
            wrapper::org::ortc::RTCRtpTransportPtr transport
            ) override;
          virtual void wrapper_init_org_ortc_RTCRtpSender(
            wrapper::org::ortc::MediaStreamTrackPtr track,
            wrapper::org::ortc::RTCRtpTransportPtr transport,
            wrapper::org::ortc::RTCRtcpTransportPtr rtcpTransport
            ) override;
          virtual void setTransport(wrapper::org::ortc::RTCRtpTransportPtr transport) override;
          virtual void setTransport(
            wrapper::org::ortc::RTCRtpTransportPtr transport,
            wrapper::org::ortc::RTCRtcpTransportPtr rtcpTransport
            ) override;
          virtual PromisePtr setTrack(wrapper::org::ortc::MediaStreamTrackPtr track) override;
          virtual PromisePtr send(wrapper::org::ortc::RTCRtpParametersPtr parameters) override;
          virtual void stop() override;

          // properties RTCRtpSender
          virtual uint64_t get_objectId() override;
          virtual wrapper::org::ortc::MediaStreamTrackPtr get_track() override;
          virtual wrapper::org::ortc::RTCRtpTransportPtr get_transport() override;
          virtual wrapper::org::ortc::RTCRtcpTransportPtr get_rtcpTransport() override;

          virtual void wrapper_onObserverCountChanged(size_t count) override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

