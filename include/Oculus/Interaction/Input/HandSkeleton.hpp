// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.IReadOnlyHandSkeleton
#include "Oculus/Interaction/Input/IReadOnlyHandSkeleton.hpp"
// Including type: Oculus.Interaction.Input.IReadOnlyHandSkeletonJointList
#include "Oculus/Interaction/Input/IReadOnlyHandSkeletonJointList.hpp"
// Including type: Oculus.Interaction.Input.HandSkeletonJoint
#include "Oculus/Interaction/Input/HandSkeletonJoint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandSkeleton
  class HandSkeleton;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::HandSkeleton);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::HandSkeleton*, "Oculus.Interaction.Input", "HandSkeleton");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.HandSkeleton
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class HandSkeleton : public ::Il2CppObject/*, public ::Oculus::Interaction::Input::IReadOnlyHandSkeleton, public ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*/ {
    public:
    // Nested type: ::Oculus::Interaction::Input::HandSkeleton::$$c
    class $$c;
    public:
    // public Oculus.Interaction.Input.HandSkeletonJoint[] joints
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint> joints;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IReadOnlyHandSkeleton
    operator ::Oculus::Interaction::Input::IReadOnlyHandSkeleton() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeleton*>(this);
    }
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList
    operator ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>
    constexpr operator ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>() const noexcept {
      return joints;
    }
    // Get static field: static public readonly Oculus.Interaction.Input.HandSkeleton DefaultLeftSkeleton
    static ::Oculus::Interaction::Input::HandSkeleton* _get_DefaultLeftSkeleton();
    // Set static field: static public readonly Oculus.Interaction.Input.HandSkeleton DefaultLeftSkeleton
    static void _set_DefaultLeftSkeleton(::Oculus::Interaction::Input::HandSkeleton* value);
    // Get static field: static public readonly Oculus.Interaction.Input.HandSkeleton DefaultRightSkeleton
    static ::Oculus::Interaction::Input::HandSkeleton* _get_DefaultRightSkeleton();
    // Set static field: static public readonly Oculus.Interaction.Input.HandSkeleton DefaultRightSkeleton
    static void _set_DefaultRightSkeleton(::Oculus::Interaction::Input::HandSkeleton* value);
    // Get instance field reference: public Oculus.Interaction.Input.HandSkeletonJoint[] joints
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>& dyn_joints();
    // public Oculus.Interaction.Input.IReadOnlyHandSkeletonJointList get_Joints()
    // Offset: 0x481B7B4
    ::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* get_Joints();
    // public Oculus.Interaction.Input.HandSkeletonJoint get_Item(System.Int32 jointId)
    // Offset: 0x481B7B8
    ::Oculus::Interaction::Input::HandSkeletonJoint get_Item(int jointId);
    // public System.Void .ctor()
    // Offset: 0x481B7EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandSkeleton* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::HandSkeleton::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandSkeleton*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x481B850
    static void _cctor();
  }; // Oculus.Interaction.Input.HandSkeleton
  #pragma pack(pop)
  static check_size<sizeof(HandSkeleton), 16 + sizeof(::ArrayW<::Oculus::Interaction::Input::HandSkeletonJoint>)> __Oculus_Interaction_Input_HandSkeletonSizeCheck;
  static_assert(sizeof(HandSkeleton) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::get_Joints
// Il2CppName: get_Joints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IReadOnlyHandSkeletonJointList* (Oculus::Interaction::Input::HandSkeleton::*)()>(&Oculus::Interaction::Input::HandSkeleton::get_Joints)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeleton*), "get_Joints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandSkeletonJoint (Oculus::Interaction::Input::HandSkeleton::*)(int)>(&Oculus::Interaction::Input::HandSkeleton::get_Item)> {
  static const MethodInfo* get() {
    static auto* jointId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeleton*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointId});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeleton::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::Input::HandSkeleton::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeleton*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
