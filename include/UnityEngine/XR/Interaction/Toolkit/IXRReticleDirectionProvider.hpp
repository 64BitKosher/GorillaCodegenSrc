// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRInteractor
  class IXRInteractor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRReticleDirectionProvider
  class IXRReticleDirectionProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*, "UnityEngine.XR.Interaction.Toolkit", "IXRReticleDirectionProvider");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.IXRReticleDirectionProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class IXRReticleDirectionProvider {
    public:
    // public System.Void GetReticleDirection(UnityEngine.XR.Interaction.Toolkit.IXRInteractor interactor, UnityEngine.Vector3 hitNormal, out UnityEngine.Vector3 reticleUp, out System.Nullable`1<UnityEngine.Vector3> optionalReticleForward)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetReticleDirection(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor* interactor, ::UnityEngine::Vector3 hitNormal, ByRef<::UnityEngine::Vector3> reticleUp, ByRef<::System::Nullable_1<::UnityEngine::Vector3>> optionalReticleForward);
  }; // UnityEngine.XR.Interaction.Toolkit.IXRReticleDirectionProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::GetReticleDirection
// Il2CppName: GetReticleDirection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::*)(::UnityEngine::XR::Interaction::Toolkit::IXRInteractor*, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>, ByRef<::System::Nullable_1<::UnityEngine::Vector3>>)>(&UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider::GetReticleDirection)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRInteractor")->byval_arg;
    static auto* hitNormal = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* reticleUp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* optionalReticleForward = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::IXRReticleDirectionProvider*), "GetReticleDirection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, hitNormal, reticleUp, optionalReticleForward});
  }
};
