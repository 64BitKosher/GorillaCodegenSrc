// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI
#include "Oculus/Interaction/GrabAPI/FingerPalmGrabAPI.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::ReturnValue, "Oculus.Interaction.GrabAPI", "FingerPalmGrabAPI/ReturnValue");
// Type namespace: Oculus.Interaction.GrabAPI
namespace Oculus::Interaction::GrabAPI {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue
  // [TokenAttribute] Offset: FFFFFFFF
  struct FingerPalmGrabAPI::ReturnValue/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ReturnValue
    constexpr ReturnValue(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Success
    static constexpr const int Success = 0;
    // Get static field: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Success
    static ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::ReturnValue _get_Success();
    // Set static field: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Success
    static void _set_Success(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::ReturnValue value);
    // static field const value: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Failure
    static constexpr const int Failure = -1;
    // Get static field: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Failure
    static ::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::ReturnValue _get_Failure();
    // Set static field: static public Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue Failure
    static void _set_Failure(::Oculus::Interaction::GrabAPI::FingerPalmGrabAPI::ReturnValue value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Oculus.Interaction.GrabAPI.FingerPalmGrabAPI/ReturnValue
  #pragma pack(pop)
  static check_size<sizeof(FingerPalmGrabAPI::ReturnValue), 0 + sizeof(int)> __Oculus_Interaction_GrabAPI_FingerPalmGrabAPI_ReturnValueSizeCheck;
  static_assert(sizeof(FingerPalmGrabAPI::ReturnValue) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
