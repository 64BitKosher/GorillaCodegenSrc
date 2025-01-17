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
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: OwnedState
  struct OwnedState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::OwnedState, "UnityEngine.UIElements.UIR", "OwnedState");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIR.OwnedState
  // [TokenAttribute] Offset: FFFFFFFF
  struct OwnedState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Byte value__
    // Size: 0x1
    // Offset: 0x0
    uint8_t value;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: OwnedState
    constexpr OwnedState(uint8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator uint8_t
    constexpr operator uint8_t() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.UIElements.UIR.OwnedState Inherited
    static constexpr const uint8_t Inherited = 0u;
    // Get static field: static public UnityEngine.UIElements.UIR.OwnedState Inherited
    static ::UnityEngine::UIElements::UIR::OwnedState _get_Inherited();
    // Set static field: static public UnityEngine.UIElements.UIR.OwnedState Inherited
    static void _set_Inherited(::UnityEngine::UIElements::UIR::OwnedState value);
    // static field const value: static public UnityEngine.UIElements.UIR.OwnedState Owned
    static constexpr const uint8_t Owned = 1u;
    // Get static field: static public UnityEngine.UIElements.UIR.OwnedState Owned
    static ::UnityEngine::UIElements::UIR::OwnedState _get_Owned();
    // Set static field: static public UnityEngine.UIElements.UIR.OwnedState Owned
    static void _set_Owned(::UnityEngine::UIElements::UIR::OwnedState value);
    // Get instance field reference: public System.Byte value__
    [[deprecated("Use field access instead!")]] uint8_t& dyn_value__();
  }; // UnityEngine.UIElements.UIR.OwnedState
  #pragma pack(pop)
  static check_size<sizeof(OwnedState), 0 + sizeof(uint8_t)> __UnityEngine_UIElements_UIR_OwnedStateSizeCheck;
  static_assert(sizeof(OwnedState) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
