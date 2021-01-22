#ifdef UPB_GOOGLEPB_NOREFLECTION

#include "upb/def.h"
#include "upb/handlers.h"

#include "google/protobuf/message.h"

namespace upb {
namespace googlepb {

const ::google::protobuf::Message* GetProto2FieldPrototype(
    const ::google::protobuf::Message& m,
    const ::google::protobuf::FieldDescriptor* f) {
  throw std::exception();
}

bool TrySetWriteHandlers(const ::google::protobuf::FieldDescriptor* proto2_f,
                         const ::google::protobuf::Message& prototype,
                         const upb::FieldDef* upb_f, upb::Handlers* h) {
  throw std::exception();
}

} // googlepb
} // upb

#endif
