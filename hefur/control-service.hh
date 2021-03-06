#pragma once

#include "hefur.pb.h"

namespace hefur {
class ControlService : public pb::Control::Server {
public:
   MIMOSA_DEF_PTR(ControlService);

   virtual bool releaseLogs(pb::Void &request, pb::StatusMsg &response) override;

   virtual bool quit(pb::Void &request, pb::StatusMsg &response) override;
};
} // namespace hefur
