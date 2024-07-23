// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRCustomSkeleton
  class OVRCustomSkeleton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRCustomSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomSkeleton*, "", "OVRCustomSkeleton");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xCC
  #pragma pack(push, 1)
  // Autogenerated type: OVRCustomSkeleton
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class OVRCustomSkeleton : public ::GlobalNamespace::OVRSkeleton/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Writing base type padding for base size: 0xBC to desired offset: 0xC0
    char ___base_padding[0x4] = {};
    // Nested type: ::GlobalNamespace::OVRCustomSkeleton::RetargetingType
    struct RetargetingType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OVRCustomSkeleton/RetargetingType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RetargetingType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RetargetingType
      constexpr RetargetingType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OVRCustomSkeleton/RetargetingType OculusSkeleton
      static constexpr const int OculusSkeleton = 0;
      // Get static field: static public OVRCustomSkeleton/RetargetingType OculusSkeleton
      static ::GlobalNamespace::OVRCustomSkeleton::RetargetingType _get_OculusSkeleton();
      // Set static field: static public OVRCustomSkeleton/RetargetingType OculusSkeleton
      static void _set_OculusSkeleton(::GlobalNamespace::OVRCustomSkeleton::RetargetingType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OVRCustomSkeleton/RetargetingType
    #pragma pack(pop)
    static check_size<sizeof(OVRCustomSkeleton::RetargetingType), 0 + sizeof(int)> __GlobalNamespace_OVRCustomSkeleton_RetargetingTypeSizeCheck;
    static_assert(sizeof(OVRCustomSkeleton::RetargetingType) == 0x4);
    public:
    // private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones_V2
    // Size: 0x8
    // Offset: 0xC0
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* customBones_V2;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Transform*>*) == 0x8);
    // OVRCustomSkeleton/RetargetingType retargetingType
    // Size: 0x4
    // Offset: 0xC8
    ::GlobalNamespace::OVRCustomSkeleton::RetargetingType retargetingType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRCustomSkeleton::RetargetingType) == 0x4);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Transform> _customBones_V2
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Transform*>*& dyn__customBones_V2();
    // Get instance field reference: OVRCustomSkeleton/RetargetingType retargetingType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRCustomSkeleton::RetargetingType& dyn_retargetingType();
    // public System.Collections.Generic.List`1<UnityEngine.Transform> get_CustomBones()
    // Offset: 0x49465FC
    ::System::Collections::Generic::List_1<::UnityEngine::Transform*>* get_CustomBones();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize()
    // Offset: 0x494665C
    void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize();
    // private System.Void UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize()
    // Offset: 0x4946660
    void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize();
    // private System.Void AllocateBones()
    // Offset: 0x4946664
    void AllocateBones();
    // protected override UnityEngine.Transform GetBoneTransform(OVRSkeleton/BoneId boneId)
    // Offset: 0x4946604
    // Implemented from: OVRSkeleton
    // Base method: UnityEngine.Transform OVRSkeleton::GetBoneTransform(OVRSkeleton/BoneId boneId)
    ::UnityEngine::Transform* GetBoneTransform(::GlobalNamespace::OVRSkeleton::BoneId boneId);
    // override System.Void SetSkeletonType(OVRSkeleton/SkeletonType skeletonType)
    // Offset: 0x4946734
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::SetSkeletonType(OVRSkeleton/SkeletonType skeletonType)
    void SetSkeletonType(::GlobalNamespace::OVRSkeleton::SkeletonType skeletonType);
    // public System.Void .ctor()
    // Offset: 0x49467C4
    // Implemented from: OVRSkeleton
    // Base method: System.Void OVRSkeleton::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRCustomSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRCustomSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRCustomSkeleton*, creationType>()));
    }
  }; // OVRCustomSkeleton
  #pragma pack(pop)
  static check_size<sizeof(OVRCustomSkeleton), 200 + sizeof(::GlobalNamespace::OVRCustomSkeleton::RetargetingType)> __GlobalNamespace_OVRCustomSkeletonSizeCheck;
  static_assert(sizeof(OVRCustomSkeleton) == 0xCC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRCustomSkeleton::RetargetingType, "", "OVRCustomSkeleton/RetargetingType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::get_CustomBones
// Il2CppName: get_CustomBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Transform*>* (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::get_CustomBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "get_CustomBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
// Il2CppName: UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::AllocateBones
// Il2CppName: AllocateBones
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)()>(&GlobalNamespace::OVRCustomSkeleton::AllocateBones)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "AllocateBones", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::GetBoneTransform
// Il2CppName: GetBoneTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::OVRSkeleton::BoneId)>(&GlobalNamespace::OVRCustomSkeleton::GetBoneTransform)> {
  static const MethodInfo* get() {
    static auto* boneId = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/BoneId")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "GetBoneTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{boneId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::SetSkeletonType
// Il2CppName: SetSkeletonType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRCustomSkeleton::*)(::GlobalNamespace::OVRSkeleton::SkeletonType)>(&GlobalNamespace::OVRCustomSkeleton::SetSkeletonType)> {
  static const MethodInfo* get() {
    static auto* skeletonType = &::il2cpp_utils::GetClassFromName("", "OVRSkeleton/SkeletonType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRCustomSkeleton*), "SetSkeletonType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{skeletonType});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRCustomSkeleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!