// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ShutdownReason
  struct ShutdownReason;
}
// Forward declaring namespace: Fusion::Photon::Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: DisconnectCause
  struct DisconnectCause;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: DisconnectCauseExt
  class DisconnectCauseExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::DisconnectCauseExt);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::DisconnectCauseExt*, "Fusion", "DisconnectCauseExt");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.DisconnectCauseExt
  // [TokenAttribute] Offset: FFFFFFFF
  class DisconnectCauseExt : public ::Il2CppObject {
    public:
    // static public Fusion.ShutdownReason ConvertToShutdownReason(Fusion.Photon.Realtime.DisconnectCause disconnectCause)
    // Offset: 0x2AFFD80
    static ::Fusion::ShutdownReason ConvertToShutdownReason(::Fusion::Photon::Realtime::DisconnectCause disconnectCause);
  }; // Fusion.DisconnectCauseExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::DisconnectCauseExt::ConvertToShutdownReason
// Il2CppName: ConvertToShutdownReason
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::ShutdownReason (*)(::Fusion::Photon::Realtime::DisconnectCause)>(&Fusion::DisconnectCauseExt::ConvertToShutdownReason)> {
  static const MethodInfo* get() {
    static auto* disconnectCause = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "DisconnectCause")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::DisconnectCauseExt*), "ConvertToShutdownReason", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disconnectCause});
  }
};