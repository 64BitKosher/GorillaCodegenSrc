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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Meta.XR.BuildingBlocks
namespace Meta::XR::BuildingBlocks {
  // Forward declaring type: BuildingBlock
  class BuildingBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::XR::BuildingBlocks::BuildingBlock);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::BuildingBlocks::BuildingBlock*, "Meta.XR.BuildingBlocks", "BuildingBlock");
// Type namespace: Meta.XR.BuildingBlocks
namespace Meta::XR::BuildingBlocks {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Meta.XR.BuildingBlocks.BuildingBlock
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class BuildingBlock : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // System.String blockId
    // Size: 0x8
    // Offset: 0x20
    ::StringW blockId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.String instanceId
    // Size: 0x8
    // Offset: 0x28
    ::StringW instanceId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 version
    // Size: 0x4
    // Offset: 0x30
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.String blockId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_blockId();
    // Get instance field reference: System.String instanceId
    [[deprecated("Use field access instead!")]] ::StringW& dyn_instanceId();
    // Get instance field reference: System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // public System.String get_BlockId()
    // Offset: 0x446AA6C
    ::StringW get_BlockId();
    // public System.String get_InstanceId()
    // Offset: 0x446AA74
    ::StringW get_InstanceId();
    // public System.Int32 get_Version()
    // Offset: 0x446AA7C
    int get_Version();
    // private System.Void Start()
    // Offset: 0x446AA84
    void Start();
    // public System.Void .ctor()
    // Offset: 0x446ACA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuildingBlock* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::XR::BuildingBlocks::BuildingBlock::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuildingBlock*, creationType>()));
    }
  }; // Meta.XR.BuildingBlocks.BuildingBlock
  #pragma pack(pop)
  static check_size<sizeof(BuildingBlock), 48 + sizeof(int)> __Meta_XR_BuildingBlocks_BuildingBlockSizeCheck;
  static_assert(sizeof(BuildingBlock) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::XR::BuildingBlocks::BuildingBlock::get_BlockId
// Il2CppName: get_BlockId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::XR::BuildingBlocks::BuildingBlock::*)()>(&Meta::XR::BuildingBlocks::BuildingBlock::get_BlockId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::BuildingBlocks::BuildingBlock*), "get_BlockId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::BuildingBlocks::BuildingBlock::get_InstanceId
// Il2CppName: get_InstanceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::XR::BuildingBlocks::BuildingBlock::*)()>(&Meta::XR::BuildingBlocks::BuildingBlock::get_InstanceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::BuildingBlocks::BuildingBlock*), "get_InstanceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::BuildingBlocks::BuildingBlock::get_Version
// Il2CppName: get_Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::XR::BuildingBlocks::BuildingBlock::*)()>(&Meta::XR::BuildingBlocks::BuildingBlock::get_Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::BuildingBlocks::BuildingBlock*), "get_Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::BuildingBlocks::BuildingBlock::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::XR::BuildingBlocks::BuildingBlock::*)()>(&Meta::XR::BuildingBlocks::BuildingBlock::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::XR::BuildingBlocks::BuildingBlock*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::XR::BuildingBlocks::BuildingBlock::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
