// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRMeshData
#include "GlobalNamespace/OVRMeshData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRGLTFAnimationNodeMorphTargetHandler
  class OVRGLTFAnimationNodeMorphTargetHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*, "", "OVRGLTFAnimationNodeMorphTargetHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x61
  #pragma pack(push, 1)
  // Autogenerated type: OVRGLTFAnimationNodeMorphTargetHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRGLTFAnimationNodeMorphTargetHandler : public ::Il2CppObject {
    public:
    public:
    // private OVRMeshData <MeshData>k__BackingField
    // Size: 0x48
    // Offset: 0x10
    ::GlobalNamespace::OVRMeshData MeshData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRMeshData) == 0x48);
    // public System.Single[] Weights
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<float> Weights;
    // Field size check
    static_assert(sizeof(::ArrayW<float>) == 0x8);
    // private System.Boolean modified
    // Size: 0x1
    // Offset: 0x60
    bool modified;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private OVRMeshData <MeshData>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRMeshData& dyn_$MeshData$k__BackingField();
    // Get instance field reference: public System.Single[] Weights
    [[deprecated("Use field access instead!")]] ::ArrayW<float>& dyn_Weights();
    // Get instance field reference: private System.Boolean modified
    [[deprecated("Use field access instead!")]] bool& dyn_modified();
    // public OVRMeshData get_MeshData()
    // Offset: 0x48BEBE8
    ::GlobalNamespace::OVRMeshData get_MeshData();
    // private System.Void set_MeshData(OVRMeshData value)
    // Offset: 0x48BEBF8
    void set_MeshData(::GlobalNamespace::OVRMeshData value);
    // public System.Void .ctor(OVRMeshData meshData)
    // Offset: 0x48BEC1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRGLTFAnimationNodeMorphTargetHandler* New_ctor(::GlobalNamespace::OVRMeshData meshData) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRGLTFAnimationNodeMorphTargetHandler*, creationType>(meshData)));
    }
    // public System.Void Update()
    // Offset: 0x48BEC5C
    void Update();
    // public System.Void MarkModified()
    // Offset: 0x48BF018
    void MarkModified();
  }; // OVRGLTFAnimationNodeMorphTargetHandler
  #pragma pack(pop)
  static check_size<sizeof(OVRGLTFAnimationNodeMorphTargetHandler), 96 + sizeof(bool)> __GlobalNamespace_OVRGLTFAnimationNodeMorphTargetHandlerSizeCheck;
  static_assert(sizeof(OVRGLTFAnimationNodeMorphTargetHandler) == 0x61);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::get_MeshData
// Il2CppName: get_MeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRMeshData (GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(&GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::get_MeshData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*), "get_MeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::set_MeshData
// Il2CppName: set_MeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)(::GlobalNamespace::OVRMeshData)>(&GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::set_MeshData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRMeshData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*), "set_MeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(&GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified
// Il2CppName: MarkModified
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(&GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*), "MarkModified", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
