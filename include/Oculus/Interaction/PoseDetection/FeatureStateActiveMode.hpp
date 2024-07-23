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
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: FeatureStateActiveMode
  struct FeatureStateActiveMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode, "Oculus.Interaction.PoseDetection", "FeatureStateActiveMode");
// Type namespace: Oculus.Interaction.PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.FeatureStateActiveMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct FeatureStateActiveMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FeatureStateActiveMode
    constexpr FeatureStateActiveMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode Is
    static constexpr const int Is = 0;
    // Get static field: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode Is
    static ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode _get_Is();
    // Set static field: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode Is
    static void _set_Is(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode value);
    // static field const value: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode IsNot
    static constexpr const int IsNot = 1;
    // Get static field: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode IsNot
    static ::Oculus::Interaction::PoseDetection::FeatureStateActiveMode _get_IsNot();
    // Set static field: static public Oculus.Interaction.PoseDetection.FeatureStateActiveMode IsNot
    static void _set_IsNot(::Oculus::Interaction::PoseDetection::FeatureStateActiveMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.PoseDetection.FeatureStateActiveMode
  #pragma pack(pop)
  static check_size<sizeof(FeatureStateActiveMode), 0 + sizeof(int)> __Oculus_Interaction_PoseDetection_FeatureStateActiveModeSizeCheck;
  static_assert(sizeof(FeatureStateActiveMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
