// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: EventDispatcher
  class EventDispatcher;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: RuntimeEventDispatcher
  class RuntimeEventDispatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::RuntimeEventDispatcher);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::RuntimeEventDispatcher*, "UnityEngine.UIElements", "RuntimeEventDispatcher");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.RuntimeEventDispatcher
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeEventDispatcher : public ::Il2CppObject {
    public:
    // static public UnityEngine.UIElements.EventDispatcher Create()
    // Offset: 0x565D798
    static ::UnityEngine::UIElements::EventDispatcher* Create();
  }; // UnityEngine.UIElements.RuntimeEventDispatcher
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::RuntimeEventDispatcher::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (*)()>(&UnityEngine::UIElements::RuntimeEventDispatcher::Create)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::RuntimeEventDispatcher*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};