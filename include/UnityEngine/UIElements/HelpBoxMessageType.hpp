// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: HelpBoxMessageType
  struct HelpBoxMessageType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::HelpBoxMessageType, "UnityEngine.UIElements", "HelpBoxMessageType");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.HelpBoxMessageType
  // [TokenAttribute] Offset: FFFFFFFF
  struct HelpBoxMessageType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: HelpBoxMessageType
    constexpr HelpBoxMessageType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.HelpBoxMessageType None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.UIElements.HelpBoxMessageType None
    static ::UnityEngine::UIElements::HelpBoxMessageType _get_None();
    // Set static field: static public UnityEngine.UIElements.HelpBoxMessageType None
    static void _set_None(::UnityEngine::UIElements::HelpBoxMessageType value);
    // static field const value: static public UnityEngine.UIElements.HelpBoxMessageType Info
    static constexpr const int Info = 1;
    // Get static field: static public UnityEngine.UIElements.HelpBoxMessageType Info
    static ::UnityEngine::UIElements::HelpBoxMessageType _get_Info();
    // Set static field: static public UnityEngine.UIElements.HelpBoxMessageType Info
    static void _set_Info(::UnityEngine::UIElements::HelpBoxMessageType value);
    // static field const value: static public UnityEngine.UIElements.HelpBoxMessageType Warning
    static constexpr const int Warning = 2;
    // Get static field: static public UnityEngine.UIElements.HelpBoxMessageType Warning
    static ::UnityEngine::UIElements::HelpBoxMessageType _get_Warning();
    // Set static field: static public UnityEngine.UIElements.HelpBoxMessageType Warning
    static void _set_Warning(::UnityEngine::UIElements::HelpBoxMessageType value);
    // static field const value: static public UnityEngine.UIElements.HelpBoxMessageType Error
    static constexpr const int Error = 3;
    // Get static field: static public UnityEngine.UIElements.HelpBoxMessageType Error
    static ::UnityEngine::UIElements::HelpBoxMessageType _get_Error();
    // Set static field: static public UnityEngine.UIElements.HelpBoxMessageType Error
    static void _set_Error(::UnityEngine::UIElements::HelpBoxMessageType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.UIElements.HelpBoxMessageType
  #pragma pack(pop)
  static check_size<sizeof(HelpBoxMessageType), 0 + sizeof(int)> __UnityEngine_UIElements_HelpBoxMessageTypeSizeCheck;
  static_assert(sizeof(HelpBoxMessageType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
