// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Behaviour
#include "UnityEngine/Behaviour.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GridLayout
  class GridLayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::GridLayout);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::GridLayout*, "UnityEngine", "GridLayout");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.GridLayout
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeTypeAttribute] Offset: FFFFFFFF
  class GridLayout : public ::UnityEngine::Behaviour {
    public:
    // private System.Void DoNothing()
    // Offset: 0x54F83DC
    void DoNothing();
  }; // UnityEngine.GridLayout
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::GridLayout::DoNothing
// Il2CppName: DoNothing
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::GridLayout::*)()>(&UnityEngine::GridLayout::DoNothing)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::GridLayout*), "DoNothing", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
