// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.HandConfidenceVisual
#include "Oculus/Interaction/HandConfidenceVisual.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandConfidenceVisual::$$c__DisplayClass18_0, "Oculus.Interaction", "HandConfidenceVisual/<>c__DisplayClass18_0");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0xC
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandConfidenceVisual/<>c__DisplayClass18_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct HandConfidenceVisual::$$c__DisplayClass18_0/*, public ::System::ValueType*/ {
    public:
    public:
    // public Oculus.Interaction.HandConfidenceVisual <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::Oculus::Interaction::HandConfidenceVisual* $$4__this;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandConfidenceVisual*) == 0x8);
    // public System.Single changeRate
    // Size: 0x4
    // Offset: 0x8
    float changeRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: $$c__DisplayClass18_0
    constexpr $$c__DisplayClass18_0(::Oculus::Interaction::HandConfidenceVisual* $$4__this_ = {}, float changeRate_ = {}) noexcept : $$4__this{$$4__this_}, changeRate{changeRate_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public Oculus.Interaction.HandConfidenceVisual <>4__this
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandConfidenceVisual*& dyn_$$4__this();
    // Get instance field reference: public System.Single changeRate
    [[deprecated("Use field access instead!")]] float& dyn_changeRate();
  }; // Oculus.Interaction.HandConfidenceVisual/<>c__DisplayClass18_0
  #pragma pack(pop)
  static check_size<sizeof(HandConfidenceVisual::$$c__DisplayClass18_0), 8 + sizeof(float)> __Oculus_Interaction_HandConfidenceVisual_$$c__DisplayClass18_0SizeCheck;
  static_assert(sizeof(HandConfidenceVisual::$$c__DisplayClass18_0) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
