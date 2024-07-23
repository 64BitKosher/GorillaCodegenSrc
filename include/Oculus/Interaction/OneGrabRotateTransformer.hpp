// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.ITransformer
#include "Oculus/Interaction/ITransformer.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IGrabbable
  class IGrabbable;
  // Skipping declaration: Axis because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: OneGrabRotateTransformer
  class OneGrabRotateTransformer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::OneGrabRotateTransformer);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::OneGrabRotateTransformer*, "Oculus.Interaction", "OneGrabRotateTransformer");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0xAC
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.OneGrabRotateTransformer
  // [TokenAttribute] Offset: FFFFFFFF
  class OneGrabRotateTransformer : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::ITransformer*/ {
    public:
    // Nested type: ::Oculus::Interaction::OneGrabRotateTransformer::Axis
    struct Axis;
    // Nested type: ::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints
    class OneGrabRotateConstraints;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.OneGrabRotateTransformer/Axis
    // [TokenAttribute] Offset: FFFFFFFF
    struct Axis/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Axis
      constexpr Axis(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Right
      static constexpr const int Right = 0;
      // Get static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Right
      static ::Oculus::Interaction::OneGrabRotateTransformer::Axis _get_Right();
      // Set static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Right
      static void _set_Right(::Oculus::Interaction::OneGrabRotateTransformer::Axis value);
      // static field const value: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Up
      static constexpr const int Up = 1;
      // Get static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Up
      static ::Oculus::Interaction::OneGrabRotateTransformer::Axis _get_Up();
      // Set static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Up
      static void _set_Up(::Oculus::Interaction::OneGrabRotateTransformer::Axis value);
      // static field const value: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Forward
      static constexpr const int Forward = 2;
      // Get static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Forward
      static ::Oculus::Interaction::OneGrabRotateTransformer::Axis _get_Forward();
      // Set static field: static public Oculus.Interaction.OneGrabRotateTransformer/Axis Forward
      static void _set_Forward(::Oculus::Interaction::OneGrabRotateTransformer::Axis value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.OneGrabRotateTransformer/Axis
    #pragma pack(pop)
    static check_size<sizeof(OneGrabRotateTransformer::Axis), 0 + sizeof(int)> __Oculus_Interaction_OneGrabRotateTransformer_AxisSizeCheck;
    static_assert(sizeof(OneGrabRotateTransformer::Axis) == 0x4);
    public:
    // private UnityEngine.Transform _pivotTransform
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* pivotTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private Oculus.Interaction.OneGrabRotateTransformer/Axis _rotationAxis
    // Size: 0x4
    // Offset: 0x28
    ::Oculus::Interaction::OneGrabRotateTransformer::Axis rotationAxis;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::OneGrabRotateTransformer::Axis) == 0x4);
    // Padding between fields: rotationAxis and: constraints
    char __padding1[0x4] = {};
    // private Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints _constraints
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints* constraints;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints*) == 0x8);
    // private System.Single _relativeAngle
    // Size: 0x4
    // Offset: 0x38
    float relativeAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _constrainedRelativeAngle
    // Size: 0x4
    // Offset: 0x3C
    float constrainedRelativeAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Oculus.Interaction.IGrabbable _grabbable
    // Size: 0x8
    // Offset: 0x40
    ::Oculus::Interaction::IGrabbable* grabbable;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IGrabbable*) == 0x8);
    // private UnityEngine.Vector3 _grabPositionInPivotSpace
    // Size: 0xC
    // Offset: 0x48
    ::UnityEngine::Vector3 grabPositionInPivotSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Pose _transformPoseInPivotSpace
    // Size: 0x1C
    // Offset: 0x54
    ::UnityEngine::Pose transformPoseInPivotSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Pose _worldPivotPose
    // Size: 0x1C
    // Offset: 0x70
    ::UnityEngine::Pose worldPivotPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // private UnityEngine.Vector3 _previousVectorInPivotSpace
    // Size: 0xC
    // Offset: 0x8C
    ::UnityEngine::Vector3 previousVectorInPivotSpace;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _localRotation
    // Size: 0x10
    // Offset: 0x98
    ::UnityEngine::Quaternion localRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Single _startAngle
    // Size: 0x4
    // Offset: 0xA8
    float startAngle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::ITransformer
    operator ::Oculus::Interaction::ITransformer() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::ITransformer*>(this);
    }
    // Get instance field reference: private UnityEngine.Transform _pivotTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__pivotTransform();
    // Get instance field reference: private Oculus.Interaction.OneGrabRotateTransformer/Axis _rotationAxis
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::OneGrabRotateTransformer::Axis& dyn__rotationAxis();
    // Get instance field reference: private Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints _constraints
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints*& dyn__constraints();
    // Get instance field reference: private System.Single _relativeAngle
    [[deprecated("Use field access instead!")]] float& dyn__relativeAngle();
    // Get instance field reference: private System.Single _constrainedRelativeAngle
    [[deprecated("Use field access instead!")]] float& dyn__constrainedRelativeAngle();
    // Get instance field reference: private Oculus.Interaction.IGrabbable _grabbable
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IGrabbable*& dyn__grabbable();
    // Get instance field reference: private UnityEngine.Vector3 _grabPositionInPivotSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__grabPositionInPivotSpace();
    // Get instance field reference: private UnityEngine.Pose _transformPoseInPivotSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__transformPoseInPivotSpace();
    // Get instance field reference: private UnityEngine.Pose _worldPivotPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__worldPivotPose();
    // Get instance field reference: private UnityEngine.Vector3 _previousVectorInPivotSpace
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__previousVectorInPivotSpace();
    // Get instance field reference: private UnityEngine.Quaternion _localRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__localRotation();
    // Get instance field reference: private System.Single _startAngle
    [[deprecated("Use field access instead!")]] float& dyn__startAngle();
    // public UnityEngine.Transform get_Pivot()
    // Offset: 0x478C71C
    ::UnityEngine::Transform* get_Pivot();
    // public Oculus.Interaction.OneGrabRotateTransformer/Axis get_RotationAxis()
    // Offset: 0x478C79C
    ::Oculus::Interaction::OneGrabRotateTransformer::Axis get_RotationAxis();
    // public Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints get_Constraints()
    // Offset: 0x478C7A4
    ::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints* get_Constraints();
    // public System.Void set_Constraints(Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints value)
    // Offset: 0x478C7AC
    void set_Constraints(::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints* value);
    // public System.Void Initialize(Oculus.Interaction.IGrabbable grabbable)
    // Offset: 0x478C7B4
    void Initialize(::Oculus::Interaction::IGrabbable* grabbable);
    // public UnityEngine.Pose ComputeWorldPivotPose()
    // Offset: 0x478C7BC
    ::UnityEngine::Pose ComputeWorldPivotPose();
    // public System.Void BeginTransform()
    // Offset: 0x478CA14
    void BeginTransform();
    // public System.Void UpdateTransform()
    // Offset: 0x478D098
    void UpdateTransform();
    // public System.Void EndTransform()
    // Offset: 0x478D6EC
    void EndTransform();
    // public System.Void InjectOptionalPivotTransform(UnityEngine.Transform pivotTransform)
    // Offset: 0x478D6F0
    void InjectOptionalPivotTransform(::UnityEngine::Transform* pivotTransform);
    // public System.Void InjectOptionalRotationAxis(Oculus.Interaction.OneGrabRotateTransformer/Axis rotationAxis)
    // Offset: 0x478D6F8
    void InjectOptionalRotationAxis(::Oculus::Interaction::OneGrabRotateTransformer::Axis rotationAxis);
    // public System.Void InjectOptionalConstraints(Oculus.Interaction.OneGrabRotateTransformer/OneGrabRotateConstraints constraints)
    // Offset: 0x478D700
    void InjectOptionalConstraints(::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints* constraints);
    // public System.Void .ctor()
    // Offset: 0x478D708
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneGrabRotateTransformer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::OneGrabRotateTransformer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneGrabRotateTransformer*, creationType>()));
    }
  }; // Oculus.Interaction.OneGrabRotateTransformer
  #pragma pack(pop)
  static check_size<sizeof(OneGrabRotateTransformer), 168 + sizeof(float)> __Oculus_Interaction_OneGrabRotateTransformerSizeCheck;
  static_assert(sizeof(OneGrabRotateTransformer) == 0xAC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::OneGrabRotateTransformer::Axis, "Oculus.Interaction", "OneGrabRotateTransformer/Axis");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::get_Pivot
// Il2CppName: get_Pivot
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::get_Pivot)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "get_Pivot", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::get_RotationAxis
// Il2CppName: get_RotationAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::OneGrabRotateTransformer::Axis (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::get_RotationAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "get_RotationAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::get_Constraints
// Il2CppName: get_Constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints* (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::get_Constraints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "get_Constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::set_Constraints
// Il2CppName: set_Constraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints*)>(&Oculus::Interaction::OneGrabRotateTransformer::set_Constraints)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "OneGrabRotateTransformer/OneGrabRotateConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "set_Constraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::IGrabbable*)>(&Oculus::Interaction::OneGrabRotateTransformer::Initialize)> {
  static const MethodInfo* get() {
    static auto* grabbable = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IGrabbable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabbable});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::ComputeWorldPivotPose
// Il2CppName: ComputeWorldPivotPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::ComputeWorldPivotPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "ComputeWorldPivotPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::BeginTransform
// Il2CppName: BeginTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::BeginTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "BeginTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::UpdateTransform
// Il2CppName: UpdateTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::UpdateTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "UpdateTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::EndTransform
// Il2CppName: EndTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)()>(&Oculus::Interaction::OneGrabRotateTransformer::EndTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "EndTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalPivotTransform
// Il2CppName: InjectOptionalPivotTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalPivotTransform)> {
  static const MethodInfo* get() {
    static auto* pivotTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "InjectOptionalPivotTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pivotTransform});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalRotationAxis
// Il2CppName: InjectOptionalRotationAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::OneGrabRotateTransformer::Axis)>(&Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalRotationAxis)> {
  static const MethodInfo* get() {
    static auto* rotationAxis = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "OneGrabRotateTransformer/Axis")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "InjectOptionalRotationAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotationAxis});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalConstraints
// Il2CppName: InjectOptionalConstraints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::OneGrabRotateTransformer::*)(::Oculus::Interaction::OneGrabRotateTransformer::OneGrabRotateConstraints*)>(&Oculus::Interaction::OneGrabRotateTransformer::InjectOptionalConstraints)> {
  static const MethodInfo* get() {
    static auto* constraints = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "OneGrabRotateTransformer/OneGrabRotateConstraints")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::OneGrabRotateTransformer*), "InjectOptionalConstraints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{constraints});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::OneGrabRotateTransformer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
