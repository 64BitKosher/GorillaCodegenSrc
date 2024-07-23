// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoneWeight1
  struct BoneWeight1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::BoneWeight1, "UnityEngine", "BoneWeight1");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.BoneWeight1
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct BoneWeight1/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::BoneWeight1>*/ {
    public:
    public:
    // private System.Single m_Weight
    // Size: 0x4
    // Offset: 0x0
    float m_Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 m_BoneIndex
    // Size: 0x4
    // Offset: 0x4
    int m_BoneIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BoneWeight1
    constexpr BoneWeight1(float m_Weight_ = {}, int m_BoneIndex_ = {}) noexcept : m_Weight{m_Weight_}, m_BoneIndex{m_BoneIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::BoneWeight1>
    operator ::System::IEquatable_1<::UnityEngine::BoneWeight1>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::BoneWeight1>*>(this);
    }
    // Get instance field reference: private System.Single m_Weight
    [[deprecated("Use field access instead!")]] float& dyn_m_Weight();
    // Get instance field reference: private System.Int32 m_BoneIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_BoneIndex();
    // public System.Single get_weight()
    // Offset: 0x54A8BFC
    float get_weight();
    // public System.Int32 get_boneIndex()
    // Offset: 0x54A8C04
    int get_boneIndex();
    // public System.Boolean Equals(UnityEngine.BoneWeight1 other)
    // Offset: 0x54A8C84
    bool Equals(::UnityEngine::BoneWeight1 other);
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x54A8C0C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54A8CE0
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.BoneWeight1
  #pragma pack(pop)
  static check_size<sizeof(BoneWeight1), 4 + sizeof(int)> __UnityEngine_BoneWeight1SizeCheck;
  static_assert(sizeof(BoneWeight1) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::get_weight
// Il2CppName: get_weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::BoneWeight1::*)()>(&UnityEngine::BoneWeight1::get_weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight1), "get_weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::get_boneIndex
// Il2CppName: get_boneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight1::*)()>(&UnityEngine::BoneWeight1::get_boneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight1), "get_boneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoneWeight1::*)(::UnityEngine::BoneWeight1)>(&UnityEngine::BoneWeight1::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "BoneWeight1")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight1), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::BoneWeight1::*)(::Il2CppObject*)>(&UnityEngine::BoneWeight1::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight1), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::BoneWeight1::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::BoneWeight1::*)()>(&UnityEngine::BoneWeight1::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::BoneWeight1), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
