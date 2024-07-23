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
  // Forward declaring type: MB_TextureTilingTreatment
  struct MB_TextureTilingTreatment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_TextureTilingTreatment, "DigitalOpus.MB.Core", "MB_TextureTilingTreatment");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_TextureTilingTreatment
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_TextureTilingTreatment/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: MB_TextureTilingTreatment
    constexpr MB_TextureTilingTreatment(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment none
    static constexpr const int none = 0;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment none
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_none();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment none
    static void _set_none(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment considerUVs
    static constexpr const int considerUVs = 1;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment considerUVs
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_considerUVs();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment considerUVs
    static void _set_considerUVs(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeX
    static constexpr const int edgeToEdgeX = 2;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeX
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_edgeToEdgeX();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeX
    static void _set_edgeToEdgeX(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeY
    static constexpr const int edgeToEdgeY = 3;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeY
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_edgeToEdgeY();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeY
    static void _set_edgeToEdgeY(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeXY
    static constexpr const int edgeToEdgeXY = 4;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeXY
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_edgeToEdgeXY();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment edgeToEdgeXY
    static void _set_edgeToEdgeXY(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // static field const value: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment unknown
    static constexpr const int unknown = 5;
    // Get static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment unknown
    static ::DigitalOpus::MB::Core::MB_TextureTilingTreatment _get_unknown();
    // Set static field: static public DigitalOpus.MB.Core.MB_TextureTilingTreatment unknown
    static void _set_unknown(::DigitalOpus::MB::Core::MB_TextureTilingTreatment value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // DigitalOpus.MB.Core.MB_TextureTilingTreatment
  #pragma pack(pop)
  static check_size<sizeof(MB_TextureTilingTreatment), 0 + sizeof(int)> __DigitalOpus_MB_Core_MB_TextureTilingTreatmentSizeCheck;
  static_assert(sizeof(MB_TextureTilingTreatment) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"