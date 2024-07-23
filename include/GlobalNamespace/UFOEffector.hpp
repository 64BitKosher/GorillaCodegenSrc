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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UFOEffector
  class UFOEffector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UFOEffector);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UFOEffector*, "", "UFOEffector");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: UFOEffector
  // [TokenAttribute] Offset: FFFFFFFF
  class UFOEffector : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single m_radius
    // Size: 0x4
    // Offset: 0x20
    float m_radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_moveDistance
    // Size: 0x4
    // Offset: 0x24
    float m_moveDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_rotateAngle
    // Size: 0x4
    // Offset: 0x28
    float m_rotateAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: private System.Single m_radius
    [[deprecated("Use field access instead!")]] float& dyn_m_radius();
    // Get instance field reference: private System.Single m_moveDistance
    [[deprecated("Use field access instead!")]] float& dyn_m_moveDistance();
    // Get instance field reference: private System.Single m_rotateAngle
    [[deprecated("Use field access instead!")]] float& dyn_m_rotateAngle();
    // public System.Void Start()
    // Offset: 0x2682260
    void Start();
    // public System.Void FixedUpdate()
    // Offset: 0x26822CC
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x268256C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UFOEffector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UFOEffector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UFOEffector*, creationType>()));
    }
  }; // UFOEffector
  #pragma pack(pop)
  static check_size<sizeof(UFOEffector), 40 + sizeof(float)> __GlobalNamespace_UFOEffectorSizeCheck;
  static_assert(sizeof(UFOEffector) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UFOEffector::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UFOEffector::*)()>(&GlobalNamespace::UFOEffector::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UFOEffector*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UFOEffector::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::UFOEffector::*)()>(&GlobalNamespace::UFOEffector::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UFOEffector*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UFOEffector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!