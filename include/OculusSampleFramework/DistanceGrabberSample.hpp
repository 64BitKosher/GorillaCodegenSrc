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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: DistanceGrabber
  class DistanceGrabber;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: DistanceGrabberSample
  class DistanceGrabberSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::DistanceGrabberSample);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::DistanceGrabberSample*, "OculusSampleFramework", "DistanceGrabberSample");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.DistanceGrabberSample
  // [TokenAttribute] Offset: FFFFFFFF
  class DistanceGrabberSample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean useSpherecast
    // Size: 0x1
    // Offset: 0x20
    bool useSpherecast;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean allowGrabThroughWalls
    // Size: 0x1
    // Offset: 0x21
    bool allowGrabThroughWalls;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: allowGrabThroughWalls and: m_grabbers
    char __padding1[0x6] = {};
    // private OculusSampleFramework.DistanceGrabber[] m_grabbers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::OculusSampleFramework::DistanceGrabber*> m_grabbers;
    // Field size check
    static_assert(sizeof(::ArrayW<::OculusSampleFramework::DistanceGrabber*>) == 0x8);
    public:
    // Get instance field reference: private System.Boolean useSpherecast
    [[deprecated("Use field access instead!")]] bool& dyn_useSpherecast();
    // Get instance field reference: private System.Boolean allowGrabThroughWalls
    [[deprecated("Use field access instead!")]] bool& dyn_allowGrabThroughWalls();
    // Get instance field reference: private OculusSampleFramework.DistanceGrabber[] m_grabbers
    [[deprecated("Use field access instead!")]] ::ArrayW<::OculusSampleFramework::DistanceGrabber*>& dyn_m_grabbers();
    // public System.Boolean get_UseSpherecast()
    // Offset: 0x282A4C8
    bool get_UseSpherecast();
    // public System.Void set_UseSpherecast(System.Boolean value)
    // Offset: 0x282A4D0
    void set_UseSpherecast(bool value);
    // public System.Boolean get_AllowGrabThroughWalls()
    // Offset: 0x282A54C
    bool get_AllowGrabThroughWalls();
    // public System.Void set_AllowGrabThroughWalls(System.Boolean value)
    // Offset: 0x282A554
    void set_AllowGrabThroughWalls(bool value);
    // private System.Void Start()
    // Offset: 0x282A5B0
    void Start();
    // public System.Void ToggleSphereCasting(UnityEngine.UI.Toggle t)
    // Offset: 0x282A858
    void ToggleSphereCasting(::UnityEngine::UI::Toggle* t);
    // public System.Void ToggleGrabThroughWalls(UnityEngine.UI.Toggle t)
    // Offset: 0x282A868
    void ToggleGrabThroughWalls(::UnityEngine::UI::Toggle* t);
    // public System.Void .ctor()
    // Offset: 0x282A878
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DistanceGrabberSample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::DistanceGrabberSample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DistanceGrabberSample*, creationType>()));
    }
  }; // OculusSampleFramework.DistanceGrabberSample
  #pragma pack(pop)
  static check_size<sizeof(DistanceGrabberSample), 40 + sizeof(::ArrayW<::OculusSampleFramework::DistanceGrabber*>)> __OculusSampleFramework_DistanceGrabberSampleSizeCheck;
  static_assert(sizeof(DistanceGrabberSample) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::get_UseSpherecast
// Il2CppName: get_UseSpherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabberSample::*)()>(&OculusSampleFramework::DistanceGrabberSample::get_UseSpherecast)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "get_UseSpherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::set_UseSpherecast
// Il2CppName: set_UseSpherecast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabberSample::*)(bool)>(&OculusSampleFramework::DistanceGrabberSample::set_UseSpherecast)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "set_UseSpherecast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::get_AllowGrabThroughWalls
// Il2CppName: get_AllowGrabThroughWalls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (OculusSampleFramework::DistanceGrabberSample::*)()>(&OculusSampleFramework::DistanceGrabberSample::get_AllowGrabThroughWalls)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "get_AllowGrabThroughWalls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::set_AllowGrabThroughWalls
// Il2CppName: set_AllowGrabThroughWalls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabberSample::*)(bool)>(&OculusSampleFramework::DistanceGrabberSample::set_AllowGrabThroughWalls)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "set_AllowGrabThroughWalls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabberSample::*)()>(&OculusSampleFramework::DistanceGrabberSample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::ToggleSphereCasting
// Il2CppName: ToggleSphereCasting
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabberSample::*)(::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::DistanceGrabberSample::ToggleSphereCasting)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "ToggleSphereCasting", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::ToggleGrabThroughWalls
// Il2CppName: ToggleGrabThroughWalls
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::DistanceGrabberSample::*)(::UnityEngine::UI::Toggle*)>(&OculusSampleFramework::DistanceGrabberSample::ToggleGrabThroughWalls)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::DistanceGrabberSample*), "ToggleGrabThroughWalls", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::DistanceGrabberSample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
