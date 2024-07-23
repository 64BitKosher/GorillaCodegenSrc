// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.ICopyFrom`1
#include "Oculus/Interaction/Input/ICopyFrom_1.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Body::Input
namespace Oculus::Interaction::Body::Input {
  // Forward declaring type: ISkeletonMapping
  class ISkeletonMapping;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Body.Input
namespace Oculus::Interaction::Body::Input {
  // Forward declaring type: BodyDataAsset
  class BodyDataAsset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Body::Input::BodyDataAsset);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Body::Input::BodyDataAsset*, "Oculus.Interaction.Body.Input", "BodyDataAsset");
// Type namespace: Oculus.Interaction.Body.Input
namespace Oculus::Interaction::Body::Input {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Body.Input.BodyDataAsset
  // [TokenAttribute] Offset: FFFFFFFF
  class BodyDataAsset : public ::Il2CppObject/*, public ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*/ {
    public:
    public:
    // private Oculus.Interaction.Body.Input.ISkeletonMapping <SkeletonMapping>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Oculus::Interaction::Body::Input::ISkeletonMapping* SkeletonMapping;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Body::Input::ISkeletonMapping*) == 0x8);
    // private UnityEngine.Pose <Root>k__BackingField
    // Size: 0x1C
    // Offset: 0x18
    ::UnityEngine::Pose Root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private System.Single <RootScale>k__BackingField
    // Size: 0x4
    // Offset: 0x34
    float RootScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x38
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x39
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: IsDataHighConfidence and: JointPoses
    char __padding4[0x6] = {};
    // private UnityEngine.Pose[] <JointPoses>k__BackingField
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::UnityEngine::Pose> JointPoses;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Pose>) == 0x8);
    // private System.Int32 <SkeletonChangedCount>k__BackingField
    // Size: 0x4
    // Offset: 0x48
    int SkeletonChangedCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>
    operator ::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::ICopyFrom_1<::Oculus::Interaction::Body::Input::BodyDataAsset*>*>(this);
    }
    // Get instance field reference: private Oculus.Interaction.Body.Input.ISkeletonMapping <SkeletonMapping>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::Input::ISkeletonMapping*& dyn_$SkeletonMapping$k__BackingField();
    // Get instance field reference: private UnityEngine.Pose <Root>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_$Root$k__BackingField();
    // Get instance field reference: private System.Single <RootScale>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$RootScale$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private UnityEngine.Pose[] <JointPoses>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Pose>& dyn_$JointPoses$k__BackingField();
    // Get instance field reference: private System.Int32 <SkeletonChangedCount>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$SkeletonChangedCount$k__BackingField();
    // public Oculus.Interaction.Body.Input.ISkeletonMapping get_SkeletonMapping()
    // Offset: 0x48462F4
    ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping();
    // public System.Void set_SkeletonMapping(Oculus.Interaction.Body.Input.ISkeletonMapping value)
    // Offset: 0x48462FC
    void set_SkeletonMapping(::Oculus::Interaction::Body::Input::ISkeletonMapping* value);
    // public UnityEngine.Pose get_Root()
    // Offset: 0x4846304
    ::UnityEngine::Pose get_Root();
    // public System.Void set_Root(UnityEngine.Pose value)
    // Offset: 0x4846318
    void set_Root(::UnityEngine::Pose value);
    // public System.Single get_RootScale()
    // Offset: 0x4846334
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0x484633C
    void set_RootScale(float value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x4846344
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x484634C
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x4846358
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x4846360
    void set_IsDataHighConfidence(bool value);
    // public UnityEngine.Pose[] get_JointPoses()
    // Offset: 0x484636C
    ::ArrayW<::UnityEngine::Pose> get_JointPoses();
    // public System.Void set_JointPoses(UnityEngine.Pose[] value)
    // Offset: 0x4846374
    void set_JointPoses(::ArrayW<::UnityEngine::Pose> value);
    // public System.Int32 get_SkeletonChangedCount()
    // Offset: 0x484637C
    int get_SkeletonChangedCount();
    // public System.Void set_SkeletonChangedCount(System.Int32 value)
    // Offset: 0x4846384
    void set_SkeletonChangedCount(int value);
    // public System.Void CopyFrom(Oculus.Interaction.Body.Input.BodyDataAsset source)
    // Offset: 0x484638C
    void CopyFrom(::Oculus::Interaction::Body::Input::BodyDataAsset* source);
    // public System.Void .ctor()
    // Offset: 0x4846488
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BodyDataAsset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Body::Input::BodyDataAsset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BodyDataAsset*, creationType>()));
    }
  }; // Oculus.Interaction.Body.Input.BodyDataAsset
  #pragma pack(pop)
  static check_size<sizeof(BodyDataAsset), 72 + sizeof(int)> __Oculus_Interaction_Body_Input_BodyDataAssetSizeCheck;
  static_assert(sizeof(BodyDataAsset) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonMapping
// Il2CppName: get_SkeletonMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_SkeletonMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonMapping
// Il2CppName: set_SkeletonMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(::Oculus::Interaction::Body::Input::ISkeletonMapping*)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonMapping)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.Input", "ISkeletonMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_SkeletonMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_Root
// Il2CppName: get_Root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_Root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_Root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_Root
// Il2CppName: set_Root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(::UnityEngine::Pose)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_Root)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_Root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_RootScale
// Il2CppName: get_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_RootScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_RootScale
// Il2CppName: set_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(float)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_RootScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(bool)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(bool)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_JointPoses
// Il2CppName: get_JointPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Pose> (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_JointPoses)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_JointPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_JointPoses
// Il2CppName: set_JointPoses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(::ArrayW<::UnityEngine::Pose>)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_JointPoses)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Pose"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_JointPoses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonChangedCount
// Il2CppName: get_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::Body::Input::BodyDataAsset::*)()>(&Oculus::Interaction::Body::Input::BodyDataAsset::get_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "get_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonChangedCount
// Il2CppName: set_SkeletonChangedCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(int)>(&Oculus::Interaction::Body::Input::BodyDataAsset::set_SkeletonChangedCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "set_SkeletonChangedCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::Input::BodyDataAsset::*)(::Oculus::Interaction::Body::Input::BodyDataAsset*)>(&Oculus::Interaction::Body::Input::BodyDataAsset::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.Input", "BodyDataAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::Input::BodyDataAsset*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::Input::BodyDataAsset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
