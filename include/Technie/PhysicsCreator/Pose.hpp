// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: Pose
  class Pose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::Pose);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::Pose*, "Technie.PhysicsCreator", "Pose");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.Pose
  // [TokenAttribute] Offset: FFFFFFFF
  class Pose : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Vector3 forward
    // Size: 0xC
    // Offset: 0x10
    ::UnityEngine::Vector3 forward;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 up
    // Size: 0xC
    // Offset: 0x1C
    ::UnityEngine::Vector3 up;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 right
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 right;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: public UnityEngine.Vector3 forward
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_forward();
    // Get instance field reference: public UnityEngine.Vector3 up
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_up();
    // Get instance field reference: public UnityEngine.Vector3 right
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_right();
    // public System.Void .ctor()
    // Offset: 0x5023A50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Pose* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::Pose::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Pose*, creationType>()));
    }
  }; // Technie.PhysicsCreator.Pose
  #pragma pack(pop)
  static check_size<sizeof(Pose), 40 + sizeof(::UnityEngine::Vector3)> __Technie_PhysicsCreator_PoseSizeCheck;
  static_assert(sizeof(Pose) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::Pose::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
