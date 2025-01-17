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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LengthStiffnessComparison
  class LengthStiffnessComparison;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LengthStiffnessComparison);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LengthStiffnessComparison*, "", "LengthStiffnessComparison");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: LengthStiffnessComparison
  // [TokenAttribute] Offset: FFFFFFFF
  class LengthStiffnessComparison : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single Run
    // Size: 0x4
    // Offset: 0x20
    float Run;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Tilt
    // Size: 0x4
    // Offset: 0x24
    float Tilt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Period
    // Size: 0x4
    // Offset: 0x28
    float Period;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single Rest
    // Size: 0x4
    // Offset: 0x2C
    float Rest;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Transform BonesA
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Transform* BonesA;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform BonesB
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Transform* BonesB;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single m_timer
    // Size: 0x4
    // Offset: 0x40
    float m_timer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single Run
    [[deprecated("Use field access instead!")]] float& dyn_Run();
    // Get instance field reference: public System.Single Tilt
    [[deprecated("Use field access instead!")]] float& dyn_Tilt();
    // Get instance field reference: public System.Single Period
    [[deprecated("Use field access instead!")]] float& dyn_Period();
    // Get instance field reference: public System.Single Rest
    [[deprecated("Use field access instead!")]] float& dyn_Rest();
    // Get instance field reference: public UnityEngine.Transform BonesA
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_BonesA();
    // Get instance field reference: public UnityEngine.Transform BonesB
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_BonesB();
    // Get instance field reference: private System.Single m_timer
    [[deprecated("Use field access instead!")]] float& dyn_m_timer();
    // private System.Void Start()
    // Offset: 0x2680C34
    void Start();
    // private System.Void FixedUpdate()
    // Offset: 0x2680C3C
    void FixedUpdate();
    // public System.Void .ctor()
    // Offset: 0x268122C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LengthStiffnessComparison* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LengthStiffnessComparison::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LengthStiffnessComparison*, creationType>()));
    }
  }; // LengthStiffnessComparison
  #pragma pack(pop)
  static check_size<sizeof(LengthStiffnessComparison), 64 + sizeof(float)> __GlobalNamespace_LengthStiffnessComparisonSizeCheck;
  static_assert(sizeof(LengthStiffnessComparison) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LengthStiffnessComparison::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LengthStiffnessComparison::*)()>(&GlobalNamespace::LengthStiffnessComparison::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LengthStiffnessComparison*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LengthStiffnessComparison::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LengthStiffnessComparison::*)()>(&GlobalNamespace::LengthStiffnessComparison::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LengthStiffnessComparison*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LengthStiffnessComparison::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
