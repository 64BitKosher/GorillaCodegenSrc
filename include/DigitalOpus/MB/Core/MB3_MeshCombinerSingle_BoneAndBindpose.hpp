// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle
#include "DigitalOpus/MB/Core/MB3_MeshCombinerSingle.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose, "DigitalOpus.MB.Core", "MB3_MeshCombinerSingle/BoneAndBindpose");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DigitalOpus.MB.Core.MB3_MeshCombinerSingle/BoneAndBindpose
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB3_MeshCombinerSingle::BoneAndBindpose/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Transform bone
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* bone;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Matrix4x4 bindPose
    // Size: 0x40
    // Offset: 0x8
    ::UnityEngine::Matrix4x4 bindPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    public:
    // Creating value type constructor for type: BoneAndBindpose
    constexpr BoneAndBindpose(::UnityEngine::Transform* bone_ = {}, ::UnityEngine::Matrix4x4 bindPose_ = {}) noexcept : bone{bone_}, bindPose{bindPose_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Transform bone
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_bone();
    // Get instance field reference: public UnityEngine.Matrix4x4 bindPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_bindPose();
    // public System.Void .ctor(UnityEngine.Transform t, UnityEngine.Matrix4x4 bp)
    // Offset: 0x43CB16C
    // ABORTED: conflicts with another method.  BoneAndBindpose(::UnityEngine::Transform* t, ::UnityEngine::Matrix4x4 bp);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x43CB1A8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x43CB2F8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // DigitalOpus.MB.Core.MB3_MeshCombinerSingle/BoneAndBindpose
  #pragma pack(pop)
  static check_size<sizeof(MB3_MeshCombinerSingle::BoneAndBindpose), 8 + sizeof(::UnityEngine::Matrix4x4)> __DigitalOpus_MB_Core_MB3_MeshCombinerSingle_BoneAndBindposeSizeCheck;
  static_assert(sizeof(MB3_MeshCombinerSingle::BoneAndBindpose) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::BoneAndBindpose
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::*)(::Il2CppObject*)>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::*)()>(&DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB3_MeshCombinerSingle::BoneAndBindpose), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
