// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessage
  struct SimulationMessage;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SimulationMessagePtr
  struct SimulationMessagePtr;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SimulationMessagePtr, "Fusion", "SimulationMessagePtr");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.SimulationMessagePtr
  // [TokenAttribute] Offset: FFFFFFFF
  struct SimulationMessagePtr/*, public ::System::ValueType*/ {
    public:
    public:
    // public Fusion.SimulationMessage* Message
    // Size: 0x8
    // Offset: 0x0
    ::Fusion::SimulationMessage* Message;
    // Field size check
    static_assert(sizeof(::Fusion::SimulationMessage*) == 0x8);
    public:
    // Creating value type constructor for type: SimulationMessagePtr
    constexpr SimulationMessagePtr(::Fusion::SimulationMessage* Message_ = {}) noexcept : Message{Message_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Fusion::SimulationMessage*
    constexpr operator ::Fusion::SimulationMessage*() const noexcept {
      return Message;
    }
    // Get instance field reference: public Fusion.SimulationMessage* Message
    [[deprecated("Use field access instead!")]] ::Fusion::SimulationMessage*& dyn_Message();
  }; // Fusion.SimulationMessagePtr
  #pragma pack(pop)
  static check_size<sizeof(SimulationMessagePtr), 0 + sizeof(::Fusion::SimulationMessage*)> __Fusion_SimulationMessagePtrSizeCheck;
  static_assert(sizeof(SimulationMessagePtr) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
