// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaLocomotion::Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaRopeSwing
  class GorillaRopeSwing;
}
// Completed forward declares
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Forward declaring type: GorillaRopeSegment
  class GorillaRopeSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaLocomotion::Gameplay::GorillaRopeSegment);
DEFINE_IL2CPP_ARG_TYPE(::GorillaLocomotion::Gameplay::GorillaRopeSegment*, "GorillaLocomotion.Gameplay", "GorillaRopeSegment");
// Type namespace: GorillaLocomotion.Gameplay
namespace GorillaLocomotion::Gameplay {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GorillaLocomotion.Gameplay.GorillaRopeSegment
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaRopeSegment : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public GorillaLocomotion.Gameplay.GorillaRopeSwing swing
    // Size: 0x8
    // Offset: 0x20
    ::GorillaLocomotion::Gameplay::GorillaRopeSwing* swing;
    // Field size check
    static_assert(sizeof(::GorillaLocomotion::Gameplay::GorillaRopeSwing*) == 0x8);
    // public System.Int32 boneIndex
    // Size: 0x4
    // Offset: 0x28
    int boneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public GorillaLocomotion.Gameplay.GorillaRopeSwing swing
    [[deprecated("Use field access instead!")]] ::GorillaLocomotion::Gameplay::GorillaRopeSwing*& dyn_swing();
    // Get instance field reference: public System.Int32 boneIndex
    [[deprecated("Use field access instead!")]] int& dyn_boneIndex();
    // public System.Void .ctor()
    // Offset: 0x27E6A28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaRopeSegment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaLocomotion::Gameplay::GorillaRopeSegment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaRopeSegment*, creationType>()));
    }
  }; // GorillaLocomotion.Gameplay.GorillaRopeSegment
  #pragma pack(pop)
  static check_size<sizeof(GorillaRopeSegment), 40 + sizeof(int)> __GorillaLocomotion_Gameplay_GorillaRopeSegmentSizeCheck;
  static_assert(sizeof(GorillaRopeSegment) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaLocomotion::Gameplay::GorillaRopeSegment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
