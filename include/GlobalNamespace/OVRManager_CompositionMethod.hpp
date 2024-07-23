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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CompositionMethod
  struct OVRManager_CompositionMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRManager_CompositionMethod, "", "OVRManager/CompositionMethod");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRManager/CompositionMethod
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRManager_CompositionMethod/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: OVRManager_CompositionMethod
    constexpr OVRManager_CompositionMethod(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRManager/CompositionMethod External
    static constexpr const int External = 0;
    // Get static field: static public OVRManager/CompositionMethod External
    static ::GlobalNamespace::OVRManager_CompositionMethod _get_External();
    // Set static field: static public OVRManager/CompositionMethod External
    static void _set_External(::GlobalNamespace::OVRManager_CompositionMethod value);
    // static field const value: static public OVRManager/CompositionMethod Direct
    static constexpr const int Direct = 1;
    // Get static field: static public OVRManager/CompositionMethod Direct
    static ::GlobalNamespace::OVRManager_CompositionMethod _get_Direct();
    // Set static field: static public OVRManager/CompositionMethod Direct
    static void _set_Direct(::GlobalNamespace::OVRManager_CompositionMethod value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRManager/CompositionMethod
  #pragma pack(pop)
  static check_size<sizeof(OVRManager_CompositionMethod), 0 + sizeof(int)> __GlobalNamespace_OVRManager_CompositionMethodSizeCheck;
  static_assert(sizeof(OVRManager_CompositionMethod) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
