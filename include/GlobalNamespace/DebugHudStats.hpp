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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LogType
  struct LogType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DebugHudStats
  class DebugHudStats;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugHudStats);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugHudStats*, "", "DebugHudStats");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: DebugHudStats
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugHudStats : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TMP_Text text
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TMP_Text* text;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Text*) == 0x8);
    // private TMPro.TMP_Text fpsWarning
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TMP_Text* fpsWarning;
    // Field size check
    static_assert(sizeof(::TMPro::TMP_Text*) == 0x8);
    // private System.Single delayUpdateRate
    // Size: 0x4
    // Offset: 0x30
    float delayUpdateRate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single updateTimer
    // Size: 0x4
    // Offset: 0x34
    float updateTimer;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sessionAnytrackingLost
    // Size: 0x4
    // Offset: 0x38
    float sessionAnytrackingLost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single last30SecondsTrackingLost
    // Size: 0x4
    // Offset: 0x3C
    float last30SecondsTrackingLost;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single firstAwake
    // Size: 0x4
    // Offset: 0x40
    float firstAwake;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean wasTrackingLost
    // Size: 0x1
    // Offset: 0x44
    bool wasTrackingLost;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean leftHandTracked
    // Size: 0x1
    // Offset: 0x45
    bool leftHandTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean rightHandTracked
    // Size: 0x1
    // Offset: 0x46
    bool rightHandTracked;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: rightHandTracked and: builder
    char __padding9[0x1] = {};
    // private System.Text.StringBuilder builder
    // Size: 0x8
    // Offset: 0x48
    ::System::Text::StringBuilder* builder;
    // Field size check
    static_assert(sizeof(::System::Text::StringBuilder*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> logMessages
    // Size: 0x8
    // Offset: 0x50
    ::System::Collections::Generic::List_1<::StringW>* logMessages;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // private System.Boolean buttonDown
    // Size: 0x1
    // Offset: 0x58
    bool buttonDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean showLog
    // Size: 0x1
    // Offset: 0x59
    bool showLog;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showLog and: lowFps
    char __padding13[0x2] = {};
    // private System.Int32 lowFps
    // Size: 0x4
    // Offset: 0x5C
    int lowFps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static private DebugHudStats _instance
    static ::GlobalNamespace::DebugHudStats* _get__instance();
    // Set static field: static private DebugHudStats _instance
    static void _set__instance(::GlobalNamespace::DebugHudStats* value);
    // Get instance field reference: private TMPro.TMP_Text text
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Text*& dyn_text();
    // Get instance field reference: private TMPro.TMP_Text fpsWarning
    [[deprecated("Use field access instead!")]] ::TMPro::TMP_Text*& dyn_fpsWarning();
    // Get instance field reference: private System.Single delayUpdateRate
    [[deprecated("Use field access instead!")]] float& dyn_delayUpdateRate();
    // Get instance field reference: private System.Single updateTimer
    [[deprecated("Use field access instead!")]] float& dyn_updateTimer();
    // Get instance field reference: public System.Single sessionAnytrackingLost
    [[deprecated("Use field access instead!")]] float& dyn_sessionAnytrackingLost();
    // Get instance field reference: public System.Single last30SecondsTrackingLost
    [[deprecated("Use field access instead!")]] float& dyn_last30SecondsTrackingLost();
    // Get instance field reference: private System.Single firstAwake
    [[deprecated("Use field access instead!")]] float& dyn_firstAwake();
    // Get instance field reference: private System.Boolean wasTrackingLost
    [[deprecated("Use field access instead!")]] bool& dyn_wasTrackingLost();
    // Get instance field reference: private System.Boolean leftHandTracked
    [[deprecated("Use field access instead!")]] bool& dyn_leftHandTracked();
    // Get instance field reference: private System.Boolean rightHandTracked
    [[deprecated("Use field access instead!")]] bool& dyn_rightHandTracked();
    // Get instance field reference: private System.Text.StringBuilder builder
    [[deprecated("Use field access instead!")]] ::System::Text::StringBuilder*& dyn_builder();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> logMessages
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_logMessages();
    // Get instance field reference: private System.Boolean buttonDown
    [[deprecated("Use field access instead!")]] bool& dyn_buttonDown();
    // Get instance field reference: private System.Boolean showLog
    [[deprecated("Use field access instead!")]] bool& dyn_showLog();
    // Get instance field reference: private System.Int32 lowFps
    [[deprecated("Use field access instead!")]] int& dyn_lowFps();
    // static public DebugHudStats get_Instance()
    // Offset: 0x2775814
    static ::GlobalNamespace::DebugHudStats* get_Instance();
    // private System.Void Awake()
    // Offset: 0x277585C
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0x2775984
    void OnDestroy();
    // private System.Void Update()
    // Offset: 0x2775A38
    void Update();
    // private System.Void OnEnable()
    // Offset: 0x2776300
    void OnEnable();
    // private System.Void LogMessageReceived(System.String condition, System.String stackTrace, UnityEngine.LogType type)
    // Offset: 0x27763A4
    void LogMessageReceived(::StringW condition, ::StringW stackTrace, ::UnityEngine::LogType type);
    // private System.String getColorStringFromLogType(UnityEngine.LogType type)
    // Offset: 0x27764D0
    ::StringW getColorStringFromLogType(::UnityEngine::LogType type);
    // private System.Void OnDisable()
    // Offset: 0x2776544
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x27765E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugHudStats* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugHudStats::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugHudStats*, creationType>()));
    }
  }; // DebugHudStats
  #pragma pack(pop)
  static check_size<sizeof(DebugHudStats), 92 + sizeof(int)> __GlobalNamespace_DebugHudStatsSizeCheck;
  static_assert(sizeof(DebugHudStats) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::get_Instance
// Il2CppName: get_Instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::DebugHudStats* (*)()>(&GlobalNamespace::DebugHudStats::get_Instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "get_Instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)()>(&GlobalNamespace::DebugHudStats::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)()>(&GlobalNamespace::DebugHudStats::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)()>(&GlobalNamespace::DebugHudStats::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)()>(&GlobalNamespace::DebugHudStats::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::LogMessageReceived
// Il2CppName: LogMessageReceived
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&GlobalNamespace::DebugHudStats::LogMessageReceived)> {
  static const MethodInfo* get() {
    static auto* condition = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* stackTrace = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "LogMessageReceived", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{condition, stackTrace, type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::getColorStringFromLogType
// Il2CppName: getColorStringFromLogType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::DebugHudStats::*)(::UnityEngine::LogType)>(&GlobalNamespace::DebugHudStats::getColorStringFromLogType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine", "LogType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "getColorStringFromLogType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugHudStats::*)()>(&GlobalNamespace::DebugHudStats::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugHudStats*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugHudStats::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
