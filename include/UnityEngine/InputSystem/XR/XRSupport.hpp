// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: XRSupport
  class XRSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::XR::XRSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::XRSupport*, "UnityEngine.InputSystem.XR", "XRSupport");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.XR.XRSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class XRSupport : public ::Il2CppObject {
    public:
    // static public System.Void Initialize()
    // Offset: 0x512A3C0
    static void Initialize();
  }; // UnityEngine.InputSystem.XR.XRSupport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::XRSupport::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::XR::XRSupport::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::XRSupport*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
