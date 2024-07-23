// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaSerializer
#include "GlobalNamespace/GorillaSerializer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Pun
namespace Photon::Pun {
  // Forward declaring type: PhotonStream
  class PhotonStream;
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaSerializerMasterOnly
  class GorillaSerializerMasterOnly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaSerializerMasterOnly);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaSerializerMasterOnly*, "", "GorillaSerializerMasterOnly");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: GorillaSerializerMasterOnly
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaSerializerMasterOnly : public ::GlobalNamespace::GorillaSerializer {
    public:
    // protected override System.Boolean ValidOnSerialize(Photon.Pun.PhotonStream stream, in Photon.Pun.PhotonMessageInfo info)
    // Offset: 0x26F8800
    // Implemented from: GorillaSerializer
    // Base method: System.Boolean GorillaSerializer::ValidOnSerialize(Photon.Pun.PhotonStream stream, in Photon.Pun.PhotonMessageInfo info)
    bool ValidOnSerialize(::Photon::Pun::PhotonStream* stream, ByRef<::Photon::Pun::PhotonMessageInfo> info);
    // public System.Void .ctor()
    // Offset: 0x26F722C
    // Implemented from: GorillaSerializer
    // Base method: System.Void GorillaSerializer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaSerializerMasterOnly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaSerializerMasterOnly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaSerializerMasterOnly*, creationType>()));
    }
  }; // GorillaSerializerMasterOnly
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaSerializerMasterOnly::ValidOnSerialize
// Il2CppName: ValidOnSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaSerializerMasterOnly::*)(::Photon::Pun::PhotonStream*, ByRef<::Photon::Pun::PhotonMessageInfo>)>(&GlobalNamespace::GorillaSerializerMasterOnly::ValidOnSerialize)> {
  static const MethodInfo* get() {
    static auto* stream = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonStream")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaSerializerMasterOnly*), "ValidOnSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stream, info});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaSerializerMasterOnly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
