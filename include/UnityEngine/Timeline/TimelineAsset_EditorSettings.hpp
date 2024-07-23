// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Timeline.TimelineAsset
#include "UnityEngine/Timeline/TimelineAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: StandardFrameRates
  struct StandardFrameRates;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::TimelineAsset::EditorSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TimelineAsset::EditorSettings*, "UnityEngine.Timeline", "TimelineAsset/EditorSettings");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineAsset/EditorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class TimelineAsset::EditorSettings : public ::Il2CppObject {
    public:
    public:
    // private System.Double m_Framerate
    // Size: 0x8
    // Offset: 0x10
    double m_Framerate;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Boolean m_ScenePreview
    // Size: 0x1
    // Offset: 0x18
    bool m_ScenePreview;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static readonly System.Double kMinFrameRate
    static double _get_kMinFrameRate();
    // Set static field: static readonly System.Double kMinFrameRate
    static void _set_kMinFrameRate(double value);
    // Get static field: static readonly System.Double kMaxFrameRate
    static double _get_kMaxFrameRate();
    // Set static field: static readonly System.Double kMaxFrameRate
    static void _set_kMaxFrameRate(double value);
    // Get static field: static readonly System.Double kDefaultFrameRate
    static double _get_kDefaultFrameRate();
    // Set static field: static readonly System.Double kDefaultFrameRate
    static void _set_kDefaultFrameRate(double value);
    // Get instance field reference: private System.Double m_Framerate
    [[deprecated("Use field access instead!")]] double& dyn_m_Framerate();
    // Get instance field reference: private System.Boolean m_ScenePreview
    [[deprecated("Use field access instead!")]] bool& dyn_m_ScenePreview();
    // public System.Single get_fps()
    // Offset: 0x53B6FF8
    float get_fps();
    // public System.Void set_fps(System.Single value)
    // Offset: 0x53B7004
    void set_fps(float value);
    // public System.Double get_frameRate()
    // Offset: 0x53B708C
    double get_frameRate();
    // public System.Void set_frameRate(System.Double value)
    // Offset: 0x53B48BC
    void set_frameRate(double value);
    // public System.Void SetStandardFrameRate(UnityEngine.Timeline.StandardFrameRates enumValue)
    // Offset: 0x53B7094
    void SetStandardFrameRate(::UnityEngine::Timeline::StandardFrameRates enumValue);
    // public System.Boolean get_scenePreview()
    // Offset: 0x53B71A4
    bool get_scenePreview();
    // public System.Void set_scenePreview(System.Boolean value)
    // Offset: 0x53B71AC
    void set_scenePreview(bool value);
    // public System.Void .ctor()
    // Offset: 0x53B6F88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimelineAsset::EditorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::TimelineAsset::EditorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimelineAsset::EditorSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x53B71B8
    static void _cctor();
  }; // UnityEngine.Timeline.TimelineAsset/EditorSettings
  #pragma pack(pop)
  static check_size<sizeof(TimelineAsset::EditorSettings), 24 + sizeof(bool)> __UnityEngine_Timeline_TimelineAsset_EditorSettingsSizeCheck;
  static_assert(sizeof(TimelineAsset::EditorSettings) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::get_fps
// Il2CppName: get_fps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::get_fps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "get_fps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::set_fps
// Il2CppName: set_fps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(float)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::set_fps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "set_fps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::get_frameRate
// Il2CppName: get_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::get_frameRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "get_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::set_frameRate
// Il2CppName: set_frameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(double)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::set_frameRate)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "set_frameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::SetStandardFrameRate
// Il2CppName: SetStandardFrameRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(::UnityEngine::Timeline::StandardFrameRates)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::SetStandardFrameRate)> {
  static const MethodInfo* get() {
    static auto* enumValue = &::il2cpp_utils::GetClassFromName("UnityEngine.Timeline", "StandardFrameRates")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "SetStandardFrameRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enumValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::get_scenePreview
// Il2CppName: get_scenePreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::get_scenePreview)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "get_scenePreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::set_scenePreview
// Il2CppName: set_scenePreview
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Timeline::TimelineAsset::EditorSettings::*)(bool)>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::set_scenePreview)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), "set_scenePreview", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Timeline::TimelineAsset::EditorSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Timeline::TimelineAsset::EditorSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Timeline::TimelineAsset::EditorSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
