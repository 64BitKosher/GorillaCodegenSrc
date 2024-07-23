// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.Input.DataModifier`1
#include "Oculus/Interaction/Input/DataModifier_1.hpp"
// Including type: Oculus.Interaction.Input.IHmd
#include "Oculus/Interaction/Input/IHmd.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HmdDataAsset
  class HmdDataAsset;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: Hmd
  class Hmd;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::Hmd);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::Hmd*, "Oculus.Interaction.Input", "Hmd");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Input.Hmd
  // [TokenAttribute] Offset: FFFFFFFF
  class Hmd : public ::Oculus::Interaction::Input::DataModifier_1<::Oculus::Interaction::Input::HmdDataAsset*>/*, public ::Oculus::Interaction::Input::IHmd*/ {
    public:
    // Nested type: ::Oculus::Interaction::Input::Hmd::$$c
    class $$c;
    public:
    // private System.Action WhenUpdated
    // Size: 0x8
    // Offset: 0x70
    ::System::Action* WhenUpdated;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IHmd
    operator ::Oculus::Interaction::Input::IHmd() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IHmd*>(this);
    }
    // Get instance field reference: private System.Action WhenUpdated
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_WhenUpdated();
    // public System.Void add_WhenUpdated(System.Action value)
    // Offset: 0x481E200
    void add_WhenUpdated(::System::Action* value);
    // public System.Void remove_WhenUpdated(System.Action value)
    // Offset: 0x481E29C
    void remove_WhenUpdated(::System::Action* value);
    // protected System.Void Apply(Oculus.Interaction.Input.HmdDataAsset data)
    // Offset: 0x481E338
    void Apply(::Oculus::Interaction::Input::HmdDataAsset* data);
    // public System.Boolean TryGetRootPose(out UnityEngine.Pose pose)
    // Offset: 0x481E3C0
    bool TryGetRootPose(ByRef<::UnityEngine::Pose> pose);
    // public override System.Void MarkInputDataRequiresUpdate()
    // Offset: 0x481E33C
    // Implemented from: Oculus.Interaction.Input.DataSource`1
    // Base method: System.Void DataSource_1::MarkInputDataRequiresUpdate()
    void MarkInputDataRequiresUpdate();
    // public System.Void .ctor()
    // Offset: 0x481E564
    // Implemented from: Oculus.Interaction.Input.DataModifier`1
    // Base method: System.Void DataModifier_1::.ctor()
    // Base method: System.Void DataSource_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hmd* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::Hmd::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hmd*, creationType>()));
    }
  }; // Oculus.Interaction.Input.Hmd
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::add_WhenUpdated
// Il2CppName: add_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Hmd::*)(::System::Action*)>(&Oculus::Interaction::Input::Hmd::add_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Hmd*), "add_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::remove_WhenUpdated
// Il2CppName: remove_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Hmd::*)(::System::Action*)>(&Oculus::Interaction::Input::Hmd::remove_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Hmd*), "remove_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Hmd::*)(::Oculus::Interaction::Input::HmdDataAsset*)>(&Oculus::Interaction::Input::Hmd::Apply)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HmdDataAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Hmd*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::TryGetRootPose
// Il2CppName: TryGetRootPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::Hmd::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Input::Hmd::TryGetRootPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Hmd*), "TryGetRootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::MarkInputDataRequiresUpdate
// Il2CppName: MarkInputDataRequiresUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::Hmd::*)()>(&Oculus::Interaction::Input::Hmd::MarkInputDataRequiresUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::Hmd*), "MarkInputDataRequiresUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::Hmd::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
