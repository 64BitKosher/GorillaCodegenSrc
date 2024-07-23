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
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB2_ValidationLevel
  struct MB2_ValidationLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB2_ValidationLevel, "DigitalOpus.MB.Core", "MB2_ValidationLevel");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB2_ValidationLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB2_ValidationLevel/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB2_ValidationLevel
    constexpr MB2_ValidationLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB2_ValidationLevel none
    static constexpr const int none = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel none
    static ::DigitalOpus::MB::Core::MB2_ValidationLevel _get_none();
    // Set static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel none
    static void _set_none(::DigitalOpus::MB::Core::MB2_ValidationLevel value);
    // static field const value: static public DigitalOpus.MB.Core.MB2_ValidationLevel quick
    static constexpr const int quick = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel quick
    static ::DigitalOpus::MB::Core::MB2_ValidationLevel _get_quick();
    // Set static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel quick
    static void _set_quick(::DigitalOpus::MB::Core::MB2_ValidationLevel value);
    // static field const value: static public DigitalOpus.MB.Core.MB2_ValidationLevel robust
    static constexpr const int robust = 2;
    // Get static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel robust
    static ::DigitalOpus::MB::Core::MB2_ValidationLevel _get_robust();
    // Set static field: static public DigitalOpus.MB.Core.MB2_ValidationLevel robust
    static void _set_robust(::DigitalOpus::MB::Core::MB2_ValidationLevel value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB2_ValidationLevel
  #pragma pack(pop)
  static check_size<sizeof(MB2_ValidationLevel), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB2_ValidationLevelSizeCheck;
  static_assert(sizeof(MB2_ValidationLevel) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
