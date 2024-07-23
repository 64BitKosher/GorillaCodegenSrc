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
  // Forward declaring type: GorillaVRConstraint
  class GorillaVRConstraint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaVRConstraint);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaVRConstraint*, "", "GorillaVRConstraint");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GorillaVRConstraint
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaVRConstraint : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean isConstrained
    // Size: 0x1
    // Offset: 0x20
    bool isConstrained;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isConstrained and: angle
    char __padding0[0x3] = {};
    // public System.Single angle
    // Size: 0x4
    // Offset: 0x24
    float angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Boolean isConstrained
    [[deprecated("Use field access instead!")]] bool& dyn_isConstrained();
    // Get instance field reference: public System.Single angle
    [[deprecated("Use field access instead!")]] float& dyn_angle();
    // private System.Void Update()
    // Offset: 0x2722904
    void Update();
    // public System.Void .ctor()
    // Offset: 0x27229A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaVRConstraint* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaVRConstraint::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaVRConstraint*, creationType>()));
    }
  }; // GorillaVRConstraint
  #pragma pack(pop)
  static check_size<sizeof(GorillaVRConstraint), 36 + sizeof(float)> __GlobalNamespace_GorillaVRConstraintSizeCheck;
  static_assert(sizeof(GorillaVRConstraint) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaVRConstraint::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaVRConstraint::*)()>(&GlobalNamespace::GorillaVRConstraint::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaVRConstraint*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaVRConstraint::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
