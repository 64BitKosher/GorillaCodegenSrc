// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BetterBaker
#include "GlobalNamespace/BetterBaker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterBaker::LightMapMap, "", "BetterBaker/LightMapMap");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: BetterBaker/LightMapMap
  // [TokenAttribute] Offset: FFFFFFFF
  struct BetterBaker::LightMapMap/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.String timeOfDayName
    // Size: 0x8
    // Offset: 0x0
    ::StringW timeOfDayName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject lightObject
    // Size: 0x8
    // Offset: 0x8
    ::UnityEngine::GameObject* lightObject;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    public:
    // Creating value type constructor for type: LightMapMap
    constexpr LightMapMap(::StringW timeOfDayName_ = {}, ::UnityEngine::GameObject* lightObject_ = {}) noexcept : timeOfDayName{timeOfDayName_}, lightObject{lightObject_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String timeOfDayName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_timeOfDayName();
    // Get instance field reference: public UnityEngine.GameObject lightObject
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_lightObject();
  }; // BetterBaker/LightMapMap
  #pragma pack(pop)
  static check_size<sizeof(BetterBaker::LightMapMap), 8 + sizeof(::UnityEngine::GameObject*)> __GlobalNamespace_BetterBaker_LightMapMapSizeCheck;
  static_assert(sizeof(BetterBaker::LightMapMap) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
