// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IOVRSceneComponent
  class IOVRSceneComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IOVRSceneComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IOVRSceneComponent*, "", "IOVRSceneComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IOVRSceneComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class IOVRSceneComponent {
    public:
    // public System.Void Initialize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Initialize();
  }; // IOVRSceneComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IOVRSceneComponent::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IOVRSceneComponent::*)()>(&GlobalNamespace::IOVRSceneComponent::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IOVRSceneComponent*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
