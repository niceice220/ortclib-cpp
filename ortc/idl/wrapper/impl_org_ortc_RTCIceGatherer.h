// Generated by zsLibEventingTool

#pragma once

#include "types.h"
#include "generated/org_ortc_RTCIceGatherer.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct RTCIceGatherer : public wrapper::org::ortc::RTCIceGatherer
        {
          RTCIceGathererWeakPtr thisWeak_;

          RTCIceGatherer();
          virtual ~RTCIceGatherer();

          // methods RTCStatsProvider
          virtual shared_ptr< PromiseWithHolder< wrapper::org::ortc::RTCStatsReportPtr > > getStats(wrapper::org::ortc::RTCStatsTypeSetPtr statTypes) override;

          // methods RTCIceGatherer
          virtual void wrapper_init_org_ortc_RTCIceGatherer(wrapper::org::ortc::RTCIceGatherOptionsPtr options) override;
          virtual wrapper::org::ortc::RTCIceGathererPtr createAssociatedGatherer() override;
          virtual void gather() override;
          virtual void gather(wrapper::org::ortc::RTCIceGatherOptionsPtr options) override;
          virtual void close() override;

          // properties RTCIceGatherer
          virtual uint64_t get_objectId() override;
          virtual wrapper::org::ortc::RTCIceComponent get_component() override;
          virtual wrapper::org::ortc::RTCIceGathererState get_state() override;
          virtual wrapper::org::ortc::RTCIceParametersPtr get_localParameters() override;
          virtual shared_ptr< list< wrapper::org::ortc::RTCIceCandidatePtr > > get_localCandidates() override;

          virtual void wrapper_onObserverCountChanged(size_t count) override;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

