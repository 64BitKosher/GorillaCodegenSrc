// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: LocalVoice
  class LocalVoice;
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: IServiceable
  class IServiceable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::IServiceable);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::IServiceable*, "Photon.Voice", "IServiceable");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.IServiceable
  // [TokenAttribute] Offset: FFFFFFFF
  class IServiceable {
    public:
    // public System.Void Service(Photon.Voice.LocalVoice localVoice)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Service(::Photon::Voice::LocalVoice* localVoice);
  }; // Photon.Voice.IServiceable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::IServiceable::Service
// Il2CppName: Service
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::IServiceable::*)(::Photon::Voice::LocalVoice*)>(&Photon::Voice::IServiceable::Service)> {
  static const MethodInfo* get() {
    static auto* localVoice = &::il2cpp_utils::GetClassFromName("Photon.Voice", "LocalVoice")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::IServiceable*), "Service", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localVoice});
  }
};
