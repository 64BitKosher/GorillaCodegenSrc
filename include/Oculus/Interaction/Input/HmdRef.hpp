// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.IHmd
#include "Oculus/Interaction/Input/IHmd.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Forward declaring type: Pose
  struct Pose;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: HmdRef
  class HmdRef;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::HmdRef);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::HmdRef*, "Oculus.Interaction.Input", "HmdRef");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.HmdRef
  // [TokenAttribute] Offset: FFFFFFFF
  class HmdRef : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IHmd*/ {
    public:
    public:
    // private UnityEngine.Object _hmd
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hmd;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHmd Hmd
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHmd* Hmd;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHmd*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IHmd
    operator ::Oculus::Interaction::Input::IHmd() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IHmd*>(this);
    }
    // Get instance field reference: private UnityEngine.Object _hmd
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hmd();
    // Get instance field reference: private Oculus.Interaction.Input.IHmd Hmd
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHmd*& dyn_Hmd();
    // public System.Void add_WhenUpdated(System.Action value)
    // Offset: 0x481E76C
    void add_WhenUpdated(::System::Action* value);
    // public System.Void remove_WhenUpdated(System.Action value)
    // Offset: 0x481E818
    void remove_WhenUpdated(::System::Action* value);
    // protected System.Void Awake()
    // Offset: 0x481E8C4
    void Awake();
    // protected System.Void Start()
    // Offset: 0x481E92C
    void Start();
    // public System.Boolean TryGetRootPose(out UnityEngine.Pose pose)
    // Offset: 0x481E930
    bool TryGetRootPose(ByRef<::UnityEngine::Pose> pose);
    // public System.Void InjectAllHmdRef(Oculus.Interaction.Input.IHmd hmd)
    // Offset: 0x481E9D8
    void InjectAllHmdRef(::Oculus::Interaction::Input::IHmd* hmd);
    // public System.Void InjectHmd(Oculus.Interaction.Input.IHmd hmd)
    // Offset: 0x481E9DC
    void InjectHmd(::Oculus::Interaction::Input::IHmd* hmd);
    // public System.Void .ctor()
    // Offset: 0x481EAAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HmdRef* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::HmdRef::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HmdRef*, creationType>()));
    }
  }; // Oculus.Interaction.Input.HmdRef
  #pragma pack(pop)
  static check_size<sizeof(HmdRef), 40 + sizeof(::Oculus::Interaction::Input::IHmd*)> __Oculus_Interaction_Input_HmdRefSizeCheck;
  static_assert(sizeof(HmdRef) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::add_WhenUpdated
// Il2CppName: add_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)(::System::Action*)>(&Oculus::Interaction::Input::HmdRef::add_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "add_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::remove_WhenUpdated
// Il2CppName: remove_WhenUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)(::System::Action*)>(&Oculus::Interaction::Input::HmdRef::remove_WhenUpdated)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "remove_WhenUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)()>(&Oculus::Interaction::Input::HmdRef::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)()>(&Oculus::Interaction::Input::HmdRef::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::TryGetRootPose
// Il2CppName: TryGetRootPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Input::HmdRef::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::Input::HmdRef::TryGetRootPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "TryGetRootPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::InjectAllHmdRef
// Il2CppName: InjectAllHmdRef
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)(::Oculus::Interaction::Input::IHmd*)>(&Oculus::Interaction::Input::HmdRef::InjectAllHmdRef)> {
  static const MethodInfo* get() {
    static auto* hmd = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHmd")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "InjectAllHmdRef", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hmd});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::InjectHmd
// Il2CppName: InjectHmd
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Input::HmdRef::*)(::Oculus::Interaction::Input::IHmd*)>(&Oculus::Interaction::Input::HmdRef::InjectHmd)> {
  static const MethodInfo* get() {
    static auto* hmd = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHmd")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::HmdRef*), "InjectHmd", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hmd});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Input::HmdRef::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
