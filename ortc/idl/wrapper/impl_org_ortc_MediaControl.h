
#pragma once

#include "types.h"
#include "generated/org_ortc_MediaControl.h"


namespace wrapper {
  namespace impl {
    namespace org {
      namespace ortc {

        struct MediaControl : public wrapper::org::ortc::MediaControl
        {
          MediaControlWeakPtr thisWeak_;

          virtual ~MediaControl() noexcept;
        };

      } // ortc
    } // org
  } // namespace impl
} // namespace wrapper

