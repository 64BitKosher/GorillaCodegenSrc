// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Demo.WaterSpray
#include "Oculus/Interaction/Demo/WaterSpray.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Demo::WaterSpray::NozzleMode, "Oculus.Interaction.Demo", "WaterSpray/NozzleMode");
// Type namespace: Oculus.Interaction.Demo
namespace Oculus::Interaction::Demo {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Demo.WaterSpray/NozzleMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct WaterSpray::NozzleMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NozzleMode
    constexpr NozzleMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Spray
    static constexpr const int Spray = 0;
    // Get static field: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Spray
    static ::Oculus::Interaction::Demo::WaterSpray::NozzleMode _get_Spray();
    // Set static field: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Spray
    static void _set_Spray(::Oculus::Interaction::Demo::WaterSpray::NozzleMode value);
    // static field const value: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Stream
    static constexpr const int Stream = 1;
    // Get static field: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Stream
    static ::Oculus::Interaction::Demo::WaterSpray::NozzleMode _get_Stream();
    // Set static field: static public Oculus.Interaction.Demo.WaterSpray/NozzleMode Stream
    static void _set_Stream(::Oculus::Interaction::Demo::WaterSpray::NozzleMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.Demo.WaterSpray/NozzleMode
  #pragma pack(pop)
  static check_size<sizeof(WaterSpray::NozzleMode), 0 + sizeof(int)> __Oculus_Interaction_Demo_WaterSpray_NozzleModeSizeCheck;
  static_assert(sizeof(WaterSpray::NozzleMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
