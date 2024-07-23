// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DisposeHelper
  class DisposeHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DisposeHelper);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DisposeHelper*, "UnityEngine.UIElements", "DisposeHelper");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DisposeHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class DisposeHelper : public ::Il2CppObject {
    public:
    // static public System.Void NotifyDisposedUsed(System.IDisposable disposable)
    // Offset: 0x563A068
    static void NotifyDisposedUsed(::System::IDisposable* disposable);
  }; // UnityEngine.UIElements.DisposeHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed
// Il2CppName: NotifyDisposedUsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IDisposable*)>(&UnityEngine::UIElements::DisposeHelper::NotifyDisposedUsed)> {
  static const MethodInfo* get() {
    static auto* disposable = &::il2cpp_utils::GetClassFromName("System", "IDisposable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DisposeHelper*), "NotifyDisposedUsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposable});
  }
};
