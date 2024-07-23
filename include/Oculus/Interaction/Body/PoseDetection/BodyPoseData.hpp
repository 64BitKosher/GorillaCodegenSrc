// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: Oculus.Interaction.Body.PoseDetection.IBodyPose
#include "Oculus/Interaction/Body/PoseDetection/IBodyPose.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: Oculus.Interaction.Body.Input.BodyJointId
#include "Oculus/Interaction/Body/Input/BodyJointId.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Oculus::Interaction::Body::PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: Oculus::Interaction::Body::Input
namespace Oculus::Interaction::Body::Input {
  // Forward declaring type: ISkeletonMapping
  class ISkeletonMapping;
  // Forward declaring type: IBody
  class IBody;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Body.PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
  // Forward declaring type: BodyPoseData
  class BodyPoseData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Body::PoseDetection::BodyPoseData);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Body::PoseDetection::BodyPoseData*, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData");
// Type namespace: Oculus.Interaction.Body.PoseDetection
namespace Oculus::Interaction::Body::PoseDetection {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Body.PoseDetection.BodyPoseData
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class BodyPoseData : public ::UnityEngine::ScriptableObject/*, public ::Oculus::Interaction::Body::PoseDetection::IBodyPose, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::JointData
    struct JointData;
    // Nested type: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Mapping
    class Mapping;
    // Nested type: ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::$$c
    class $$c;
    // Size: 0x40
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
    // [TokenAttribute] Offset: FFFFFFFF
    struct JointData/*, public ::System::ValueType*/ {
      public:
      public:
      // public Oculus.Interaction.Body.Input.BodyJointId JointId
      // Size: 0x4
      // Offset: 0x0
      ::Oculus::Interaction::Body::Input::BodyJointId JointId;
      // Field size check
      static_assert(sizeof(::Oculus::Interaction::Body::Input::BodyJointId) == 0x4);
      // public Oculus.Interaction.Body.Input.BodyJointId ParentId
      // Size: 0x4
      // Offset: 0x4
      ::Oculus::Interaction::Body::Input::BodyJointId ParentId;
      // Field size check
      static_assert(sizeof(::Oculus::Interaction::Body::Input::BodyJointId) == 0x4);
      // public UnityEngine.Pose PoseFromRoot
      // Size: 0x1C
      // Offset: 0x8
      ::UnityEngine::Pose PoseFromRoot;
      // Field size check
      static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
      // public UnityEngine.Pose LocalPose
      // Size: 0x1C
      // Offset: 0x24
      ::UnityEngine::Pose LocalPose;
      // Field size check
      static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
      public:
      // Creating value type constructor for type: JointData
      constexpr JointData(::Oculus::Interaction::Body::Input::BodyJointId JointId_ = {}, ::Oculus::Interaction::Body::Input::BodyJointId ParentId_ = {}, ::UnityEngine::Pose PoseFromRoot_ = {}, ::UnityEngine::Pose LocalPose_ = {}) noexcept : JointId{JointId_}, ParentId{ParentId_}, PoseFromRoot{PoseFromRoot_}, LocalPose{LocalPose_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Oculus.Interaction.Body.Input.BodyJointId JointId
      [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::Input::BodyJointId& dyn_JointId();
      // Get instance field reference: public Oculus.Interaction.Body.Input.BodyJointId ParentId
      [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::Input::BodyJointId& dyn_ParentId();
      // Get instance field reference: public UnityEngine.Pose PoseFromRoot
      [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_PoseFromRoot();
      // Get instance field reference: public UnityEngine.Pose LocalPose
      [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn_LocalPose();
    }; // Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData
    #pragma pack(pop)
    static check_size<sizeof(BodyPoseData::JointData), 36 + sizeof(::UnityEngine::Pose)> __Oculus_Interaction_Body_PoseDetection_BodyPoseData_JointDataSizeCheck;
    static_assert(sizeof(BodyPoseData::JointData) == 0x40);
    public:
    // private System.Action WhenBodyPoseUpdated
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* WhenBodyPoseUpdated;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData> _jointData
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseData::JointData>* jointData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseData::JointData>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> _posesFromRoot
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>* posesFromRoot;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> _localPoses
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>* localPoses;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>*) == 0x8);
    // private Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping _mapping
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Mapping* mapping;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Mapping*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose
    operator ::Oculus::Interaction::Body::PoseDetection::IBodyPose() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Body::PoseDetection::IBodyPose*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action WhenBodyPoseUpdated
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenBodyPoseUpdated();
    // Get instance field reference: private System.Collections.Generic.List`1<Oculus.Interaction.Body.PoseDetection.BodyPoseData/JointData> _jointData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Oculus::Interaction::Body::PoseDetection::BodyPoseData::JointData>*& dyn__jointData();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> _posesFromRoot
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>*& dyn__posesFromRoot();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<Oculus.Interaction.Body.Input.BodyJointId,UnityEngine.Pose> _localPoses
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::Oculus::Interaction::Body::Input::BodyJointId, ::UnityEngine::Pose>*& dyn__localPoses();
    // Get instance field reference: private Oculus.Interaction.Body.PoseDetection.BodyPoseData/Mapping _mapping
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Mapping*& dyn__mapping();
    // public System.Void add_WhenBodyPoseUpdated(System.Action value)
    // Offset: 0x4842DC8
    void add_WhenBodyPoseUpdated(::System::Action* value);
    // public System.Void remove_WhenBodyPoseUpdated(System.Action value)
    // Offset: 0x4842E64
    void remove_WhenBodyPoseUpdated(::System::Action* value);
    // public System.Boolean GetJointPoseFromRoot(Oculus.Interaction.Body.Input.BodyJointId bodyJointId, out UnityEngine.Pose pose)
    // Offset: 0x4842F00
    bool GetJointPoseFromRoot(::Oculus::Interaction::Body::Input::BodyJointId bodyJointId, ByRef<::UnityEngine::Pose> pose);
    // public System.Boolean GetJointPoseLocal(Oculus.Interaction.Body.Input.BodyJointId bodyJointId, out UnityEngine.Pose pose)
    // Offset: 0x4842F68
    bool GetJointPoseLocal(::Oculus::Interaction::Body::Input::BodyJointId bodyJointId, ByRef<::UnityEngine::Pose> pose);
    // public Oculus.Interaction.Body.Input.ISkeletonMapping get_SkeletonMapping()
    // Offset: 0x4842FD0
    ::Oculus::Interaction::Body::Input::ISkeletonMapping* get_SkeletonMapping();
    // public System.Void SetBodyPose(Oculus.Interaction.Body.Input.IBody body)
    // Offset: 0x4842FD8
    void SetBodyPose(::Oculus::Interaction::Body::Input::IBody* body);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x4843894
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x4843898
    void OnAfterDeserialize();
    // private System.Void Rebuild()
    // Offset: 0x4843598
    void Rebuild();
    // public System.Void .ctor()
    // Offset: 0x484389C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BodyPoseData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Body::PoseDetection::BodyPoseData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BodyPoseData*, creationType>()));
    }
  }; // Oculus.Interaction.Body.PoseDetection.BodyPoseData
  #pragma pack(pop)
  static check_size<sizeof(BodyPoseData), 56 + sizeof(::Oculus::Interaction::Body::PoseDetection::BodyPoseData::Mapping*)> __Oculus_Interaction_Body_PoseDetection_BodyPoseDataSizeCheck;
  static_assert(sizeof(BodyPoseData) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Body::PoseDetection::BodyPoseData::JointData, "Oculus.Interaction.Body.PoseDetection", "BodyPoseData/JointData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::add_WhenBodyPoseUpdated
// Il2CppName: add_WhenBodyPoseUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::System::Action*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::add_WhenBodyPoseUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "add_WhenBodyPoseUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::remove_WhenBodyPoseUpdated
// Il2CppName: remove_WhenBodyPoseUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::System::Action*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::remove_WhenBodyPoseUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "remove_WhenBodyPoseUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseFromRoot
// Il2CppName: GetJointPoseFromRoot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::BodyJointId, ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseFromRoot)> {
  static const MethodInfo* get() {
    static auto* bodyJointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.Input", "BodyJointId")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "GetJointPoseFromRoot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyJointId, pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseLocal
// Il2CppName: GetJointPoseLocal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::BodyJointId, ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::GetJointPoseLocal)> {
  static const MethodInfo* get() {
    static auto* bodyJointId = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.Input", "BodyJointId")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "GetJointPoseLocal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bodyJointId, pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::get_SkeletonMapping
// Il2CppName: get_SkeletonMapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Body::Input::ISkeletonMapping* (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::get_SkeletonMapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "get_SkeletonMapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::SetBodyPose
// Il2CppName: SetBodyPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)(::Oculus::Interaction::Body::Input::IBody*)>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::SetBodyPose)> {
  static const MethodInfo* get() {
    static auto* body = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Body.Input", "IBody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "SetBodyPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{body});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Body::PoseDetection::BodyPoseData::*)()>(&Oculus::Interaction::Body::PoseDetection::BodyPoseData::Rebuild)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Body::PoseDetection::BodyPoseData*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Body::PoseDetection::BodyPoseData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
