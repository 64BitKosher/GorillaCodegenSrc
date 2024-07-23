// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.IHandSkeletonProvider
#include "Oculus/Interaction/Input/IHandSkeletonProvider.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandSkeleton
  class HandSkeleton;
  // Forward declaring type: Handedness
  struct Handedness;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HandSkeletonOVR
  class HandSkeletonOVR;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::HandSkeletonOVR);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::HandSkeletonOVR*, "Oculus.Interaction.Input", "HandSkeletonOVR");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.HandSkeletonOVR
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class HandSkeletonOVR : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IHandSkeletonProvider*/ {
    public:
    // Nested type: ::Oculus::Interaction::Input::HandSkeletonOVR::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    public:
    // private readonly Oculus.Interaction.Input.HandSkeleton[] _skeletons
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*> skeletons;
    // Field size check
    static_assert(sizeof(::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IHandSkeletonProvider
    operator ::Oculus::Interaction::Input::IHandSkeletonProvider() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IHandSkeletonProvider*>(this);
    }
    // Get instance field reference: private readonly Oculus.Interaction.Input.HandSkeleton[] _skeletons
    [[deprecated("Use field access instead!")]] ::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>& dyn__skeletons();
    // public Oculus.Interaction.Input.HandSkeleton get_Item(Oculus.Interaction.Input.Handedness handedness)
    // Offset: 0x47931AC
    ::Oculus::Interaction::Input::HandSkeleton* get_Item(::Oculus::Interaction::Input::Handedness handedness);
    // protected System.Void Awake()
    // Offset: 0x47931DC
    void Awake();
    // static public Oculus.Interaction.Input.HandSkeleton CreateSkeletonData(Oculus.Interaction.Input.Handedness handedness)
    // Offset: 0x4790644
    static ::Oculus::Interaction::Input::HandSkeleton* CreateSkeletonData(::Oculus::Interaction::Input::Handedness handedness);
    // static private System.Void ApplyToSkeleton(in OVRPlugin/Skeleton2 ovrSkeleton, Oculus.Interaction.Input.HandSkeleton handSkeleton)
    // Offset: 0x4793278
    static void ApplyToSkeleton(ByRef<::GlobalNamespace::OVRPlugin::Skeleton2> ovrSkeleton, ::Oculus::Interaction::Input::HandSkeleton* handSkeleton);
    // public System.Void .ctor()
    // Offset: 0x479349C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandSkeletonOVR* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::HandSkeletonOVR::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandSkeletonOVR*, creationType>()));
    }
  }; // Oculus.Interaction.Input.HandSkeletonOVR
  #pragma pack(pop)
  static check_size<sizeof(HandSkeletonOVR), 32 + sizeof(::ArrayW<::Oculus::Interaction::Input::HandSkeleton*>)> __Oculus_Interaction_Input_HandSkeletonOVRSizeCheck;
  static_assert(sizeof(HandSkeletonOVR) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeletonOVR::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (Oculus::Interaction::Input::HandSkeletonOVR::*)(::Oculus::Interaction::Input::Handedness)>(&Oculus::Interaction::Input::HandSkeletonOVR::get_Item)> {
  static const MethodInfo* get() {
    static auto* handedness = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "Handedness")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeletonOVR*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handedness});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeletonOVR::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HandSkeletonOVR::*)()>(&Oculus::Interaction::Input::HandSkeletonOVR::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeletonOVR*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeletonOVR::CreateSkeletonData
// Il2CppName: CreateSkeletonData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandSkeleton* (*)(::Oculus::Interaction::Input::Handedness)>(&Oculus::Interaction::Input::HandSkeletonOVR::CreateSkeletonData)> {
  static const MethodInfo* get() {
    static auto* handedness = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "Handedness")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeletonOVR*), "CreateSkeletonData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handedness});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeletonOVR::ApplyToSkeleton
// Il2CppName: ApplyToSkeleton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::GlobalNamespace::OVRPlugin::Skeleton2>, ::Oculus::Interaction::Input::HandSkeleton*)>(&Oculus::Interaction::Input::HandSkeletonOVR::ApplyToSkeleton)> {
  static const MethodInfo* get() {
    static auto* ovrSkeleton = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Skeleton2")->this_arg;
    static auto* handSkeleton = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandSkeleton")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HandSkeletonOVR*), "ApplyToSkeleton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ovrSkeleton, handSkeleton});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HandSkeletonOVR::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
