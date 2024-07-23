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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ManipulatableSpinner
  class ManipulatableSpinner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TestManipulatableSpinner
  class TestManipulatableSpinner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TestManipulatableSpinner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestManipulatableSpinner*, "", "TestManipulatableSpinner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: TestManipulatableSpinner
  // [TokenAttribute] Offset: FFFFFFFF
  class TestManipulatableSpinner : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public ManipulatableSpinner spinner
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::ManipulatableSpinner* spinner;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ManipulatableSpinner*) == 0x8);
    // public System.Single rotationScale
    // Size: 0x4
    // Offset: 0x28
    float rotationScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public ManipulatableSpinner spinner
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ManipulatableSpinner*& dyn_spinner();
    // Get instance field reference: public System.Single rotationScale
    [[deprecated("Use field access instead!")]] float& dyn_rotationScale();
    // private System.Void Start()
    // Offset: 0x26B7A4C
    void Start();
    // private System.Void LateUpdate()
    // Offset: 0x26B7A50
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0x26B7ABC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestManipulatableSpinner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TestManipulatableSpinner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestManipulatableSpinner*, creationType>()));
    }
  }; // TestManipulatableSpinner
  #pragma pack(pop)
  static check_size<sizeof(TestManipulatableSpinner), 40 + sizeof(float)> __GlobalNamespace_TestManipulatableSpinnerSizeCheck;
  static_assert(sizeof(TestManipulatableSpinner) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TestManipulatableSpinner::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestManipulatableSpinner::*)()>(&GlobalNamespace::TestManipulatableSpinner::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestManipulatableSpinner*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestManipulatableSpinner::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TestManipulatableSpinner::*)()>(&GlobalNamespace::TestManipulatableSpinner::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TestManipulatableSpinner*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TestManipulatableSpinner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
