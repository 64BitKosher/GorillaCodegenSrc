// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.FocusChangeDirection
#include "UnityEngine/UIElements/FocusChangeDirection.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElementFocusChangeDirection
  class VisualElementFocusChangeDirection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualElementFocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualElementFocusChangeDirection*, "UnityEngine.UIElements", "VisualElementFocusChangeDirection");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualElementFocusChangeDirection
  // [TokenAttribute] Offset: FFFFFFFF
  class VisualElementFocusChangeDirection : public ::UnityEngine::UIElements::FocusChangeDirection {
    public:
    // Get static field: static private readonly UnityEngine.UIElements.VisualElementFocusChangeDirection s_Left
    static ::UnityEngine::UIElements::VisualElementFocusChangeDirection* _get_s_Left();
    // Set static field: static private readonly UnityEngine.UIElements.VisualElementFocusChangeDirection s_Left
    static void _set_s_Left(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value);
    // Get static field: static private readonly UnityEngine.UIElements.VisualElementFocusChangeDirection s_Right
    static ::UnityEngine::UIElements::VisualElementFocusChangeDirection* _get_s_Right();
    // Set static field: static private readonly UnityEngine.UIElements.VisualElementFocusChangeDirection s_Right
    static void _set_s_Right(::UnityEngine::UIElements::VisualElementFocusChangeDirection* value);
    // static public UnityEngine.UIElements.FocusChangeDirection get_left()
    // Offset: 0x55C208C
    static ::UnityEngine::UIElements::FocusChangeDirection* get_left();
    // static public UnityEngine.UIElements.FocusChangeDirection get_right()
    // Offset: 0x55C20E4
    static ::UnityEngine::UIElements::FocusChangeDirection* get_right();
    // protected System.Void .ctor(System.Int32 value)
    // Offset: 0x55C213C
    // Implemented from: UnityEngine.UIElements.FocusChangeDirection
    // Base method: System.Void FocusChangeDirection::.ctor(System.Int32 value)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualElementFocusChangeDirection* New_ctor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualElementFocusChangeDirection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualElementFocusChangeDirection*, creationType>(value)));
    }
    // static private System.Void .cctor()
    // Offset: 0x55C21A4
    // Implemented from: UnityEngine.UIElements.FocusChangeDirection
    // Base method: System.Void FocusChangeDirection::.cctor()
    static void _cctor();
  }; // UnityEngine.UIElements.VisualElementFocusChangeDirection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusChangeDirection::get_left
// Il2CppName: get_left
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&UnityEngine::UIElements::VisualElementFocusChangeDirection::get_left)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusChangeDirection*), "get_left", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusChangeDirection::get_right
// Il2CppName: get_right
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::FocusChangeDirection* (*)()>(&UnityEngine::UIElements::VisualElementFocusChangeDirection::get_right)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusChangeDirection*), "get_right", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusChangeDirection::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualElementFocusChangeDirection::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::VisualElementFocusChangeDirection::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualElementFocusChangeDirection*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
