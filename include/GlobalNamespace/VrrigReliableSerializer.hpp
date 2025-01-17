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
  // Forward declaring type: PhotonMessageInfo
  struct PhotonMessageInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VrrigReliableSerializer
  class VrrigReliableSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VrrigReliableSerializer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VrrigReliableSerializer*, "", "VrrigReliableSerializer");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: VrrigReliableSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class VrrigReliableSerializer : public ::GlobalNamespace::GorillaSerializer {
    public:
    // protected override System.Boolean OnInstantiateSetup(Photon.Pun.PhotonMessageInfo info, out UnityEngine.GameObject outTargetObject, out System.Type outTargetType)
    // Offset: 0x26FE2B4
    // Implemented from: GorillaSerializer
    // Base method: System.Boolean GorillaSerializer::OnInstantiateSetup(Photon.Pun.PhotonMessageInfo info, out UnityEngine.GameObject outTargetObject, out System.Type outTargetType)
    bool OnInstantiateSetup(::Photon::Pun::PhotonMessageInfo info, ByRef<::UnityEngine::GameObject*> outTargetObject, ByRef<::System::Type*> outTargetType);
    // public System.Void .ctor()
    // Offset: 0x26FE448
    // Implemented from: GorillaSerializer
    // Base method: System.Void GorillaSerializer::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VrrigReliableSerializer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::VrrigReliableSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VrrigReliableSerializer*, creationType>()));
    }
  }; // VrrigReliableSerializer
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VrrigReliableSerializer::OnInstantiateSetup
// Il2CppName: OnInstantiateSetup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::VrrigReliableSerializer::*)(::Photon::Pun::PhotonMessageInfo, ByRef<::UnityEngine::GameObject*>, ByRef<::System::Type*>)>(&GlobalNamespace::VrrigReliableSerializer::OnInstantiateSetup)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("Photon.Pun", "PhotonMessageInfo")->byval_arg;
    static auto* outTargetObject = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->this_arg;
    static auto* outTargetType = &::il2cpp_utils::GetClassFromName("System", "Type")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VrrigReliableSerializer*), "OnInstantiateSetup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, outTargetObject, outTargetType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::VrrigReliableSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
