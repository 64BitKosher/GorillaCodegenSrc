// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MouthFlapLevel
  struct MouthFlapLevel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MouthFlapLevel, "", "MouthFlapLevel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: MouthFlapLevel
  // [TokenAttribute] Offset: FFFFFFFF
  struct MouthFlapLevel/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector2[] faces
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::UnityEngine::Vector2> faces;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // public System.Single cycleDuration
    // Size: 0x4
    // Offset: 0x8
    float cycleDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single minRequiredVolume
    // Size: 0x4
    // Offset: 0xC
    float minRequiredVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxRequiredVolume
    // Size: 0x4
    // Offset: 0x10
    float maxRequiredVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: MouthFlapLevel
    constexpr MouthFlapLevel(::ArrayW<::UnityEngine::Vector2> faces_ = ::ArrayW<::UnityEngine::Vector2>(static_cast<void*>(nullptr)), float cycleDuration_ = {}, float minRequiredVolume_ = {}, float maxRequiredVolume_ = {}) noexcept : faces{faces_}, cycleDuration{cycleDuration_}, minRequiredVolume{minRequiredVolume_}, maxRequiredVolume{maxRequiredVolume_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector2[] faces
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_faces();
    // Get instance field reference: public System.Single cycleDuration
    [[deprecated("Use field access instead!")]] float& dyn_cycleDuration();
    // Get instance field reference: public System.Single minRequiredVolume
    [[deprecated("Use field access instead!")]] float& dyn_minRequiredVolume();
    // Get instance field reference: public System.Single maxRequiredVolume
    [[deprecated("Use field access instead!")]] float& dyn_maxRequiredVolume();
  }; // MouthFlapLevel
  #pragma pack(pop)
  static check_size<sizeof(MouthFlapLevel), 16 + sizeof(float)> __GlobalNamespace_MouthFlapLevelSizeCheck;
  static_assert(sizeof(MouthFlapLevel) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
