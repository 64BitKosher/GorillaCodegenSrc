// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.HandGrab.Recorder
namespace Oculus::Interaction::HandGrab::Recorder {
  // Forward declaring type: RigidbodyDetector
  class RigidbodyDetector;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*, "Oculus.Interaction.HandGrab.Recorder", "RigidbodyDetector");
// Type namespace: Oculus.Interaction.HandGrab.Recorder
namespace Oculus::Interaction::HandGrab::Recorder {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandGrab.Recorder.RigidbodyDetector
  // [TokenAttribute] Offset: FFFFFFFF
  class RigidbodyDetector : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Collections.Generic.HashSet`1<UnityEngine.Rigidbody> _ignoredBodies
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::HashSet_1<::UnityEngine::Rigidbody*>* ignoredBodies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::UnityEngine::Rigidbody*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Rigidbody> <IntersectingBodies>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* IntersectingBodies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.HashSet`1<UnityEngine.Rigidbody> _ignoredBodies
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::UnityEngine::Rigidbody*>*& dyn__ignoredBodies();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Rigidbody> <IntersectingBodies>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*& dyn_$IntersectingBodies$k__BackingField();
    // public System.Collections.Generic.List`1<UnityEngine.Rigidbody> get_IntersectingBodies()
    // Offset: 0x479D974
    ::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* get_IntersectingBodies();
    // private System.Void set_IntersectingBodies(System.Collections.Generic.List`1<UnityEngine.Rigidbody> value)
    // Offset: 0x479D97C
    void set_IntersectingBodies(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* value);
    // public System.Void IgnoreBody(UnityEngine.Rigidbody body)
    // Offset: 0x479C434
    void IgnoreBody(::UnityEngine::Rigidbody* body);
    // public System.Void UnIgnoreBody(UnityEngine.Rigidbody body)
    // Offset: 0x479D984
    void UnIgnoreBody(::UnityEngine::Rigidbody* body);
    // private System.Void OnTriggerEnter(UnityEngine.Collider collider)
    // Offset: 0x479DA14
    void OnTriggerEnter(::UnityEngine::Collider* collider);
    // private System.Void OnTriggerExit(UnityEngine.Collider collider)
    // Offset: 0x479DB74
    void OnTriggerExit(::UnityEngine::Collider* collider);
    // public System.Void .ctor()
    // Offset: 0x479DC54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RigidbodyDetector* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RigidbodyDetector*, creationType>()));
    }
  }; // Oculus.Interaction.HandGrab.Recorder.RigidbodyDetector
  #pragma pack(pop)
  static check_size<sizeof(RigidbodyDetector), 40 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*)> __Oculus_Interaction_HandGrab_Recorder_RigidbodyDetectorSizeCheck;
  static_assert(sizeof(RigidbodyDetector) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::get_IntersectingBodies
// Il2CppName: get_IntersectingBodies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>* (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)()>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::get_IntersectingBodies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "get_IntersectingBodies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::set_IntersectingBodies
// Il2CppName: set_IntersectingBodies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::System::Collections::Generic::List_1<::UnityEngine::Rigidbody*>*)>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::set_IntersectingBodies)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "set_IntersectingBodies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::IgnoreBody
// Il2CppName: IgnoreBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Rigidbody*)>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::IgnoreBody)> {
  static const MethodInfo* get() {
    static auto* body = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "IgnoreBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{body});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::UnIgnoreBody
// Il2CppName: UnIgnoreBody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Rigidbody*)>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::UnIgnoreBody)> {
  static const MethodInfo* get() {
    static auto* body = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rigidbody")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "UnIgnoreBody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{body});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Collider*)>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::*)(::UnityEngine::Collider*)>(&Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* collider = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{collider});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandGrab::Recorder::RigidbodyDetector::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
