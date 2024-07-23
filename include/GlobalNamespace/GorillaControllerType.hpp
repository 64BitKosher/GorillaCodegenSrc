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
  // Forward declaring type: GorillaControllerType
  struct GorillaControllerType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaControllerType, "", "GorillaControllerType");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: GorillaControllerType
  // [TokenAttribute] Offset: FFFFFFFF
  struct GorillaControllerType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GorillaControllerType
    constexpr GorillaControllerType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public GorillaControllerType OCULUS_DEFAULT
    static constexpr const int OCULUS_DEFAULT = 0;
    // Get static field: static public GorillaControllerType OCULUS_DEFAULT
    static ::GlobalNamespace::GorillaControllerType _get_OCULUS_DEFAULT();
    // Set static field: static public GorillaControllerType OCULUS_DEFAULT
    static void _set_OCULUS_DEFAULT(::GlobalNamespace::GorillaControllerType value);
    // static field const value: static public GorillaControllerType INDEX
    static constexpr const int INDEX = 1;
    // Get static field: static public GorillaControllerType INDEX
    static ::GlobalNamespace::GorillaControllerType _get_INDEX();
    // Set static field: static public GorillaControllerType INDEX
    static void _set_INDEX(::GlobalNamespace::GorillaControllerType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // GorillaControllerType
  #pragma pack(pop)
  static check_size<sizeof(GorillaControllerType), 0 + sizeof(int)> __GlobalNamespace_GorillaControllerTypeSizeCheck;
  static_assert(sizeof(GorillaControllerType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"