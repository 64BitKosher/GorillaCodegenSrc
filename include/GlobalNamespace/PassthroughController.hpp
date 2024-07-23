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
  // Forward declaring type: OVRPassthroughLayer
  class OVRPassthroughLayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PassthroughController
  class PassthroughController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PassthroughController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PassthroughController*, "", "PassthroughController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PassthroughController
  // [TokenAttribute] Offset: FFFFFFFF
  class PassthroughController : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private OVRPassthroughLayer passthroughLayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPassthroughLayer* passthroughLayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPassthroughLayer*) == 0x8);
    public:
    // Get instance field reference: private OVRPassthroughLayer passthroughLayer
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPassthroughLayer*& dyn_passthroughLayer();
    // private System.Void Start()
    // Offset: 0x293AA6C
    void Start();
    // private System.Void Update()
    // Offset: 0x293ABE0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x293ADC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PassthroughController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PassthroughController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PassthroughController*, creationType>()));
    }
  }; // PassthroughController
  #pragma pack(pop)
  static check_size<sizeof(PassthroughController), 32 + sizeof(::GlobalNamespace::OVRPassthroughLayer*)> __GlobalNamespace_PassthroughControllerSizeCheck;
  static_assert(sizeof(PassthroughController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PassthroughController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PassthroughController::*)()>(&GlobalNamespace::PassthroughController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PassthroughController::*)()>(&GlobalNamespace::PassthroughController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PassthroughController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PassthroughController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
