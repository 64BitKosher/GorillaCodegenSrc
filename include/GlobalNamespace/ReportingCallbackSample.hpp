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
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: PlatformInitialize
  class PlatformInitialize;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ReportingCallbackSample
  class ReportingCallbackSample;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ReportingCallbackSample);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ReportingCallbackSample*, "", "ReportingCallbackSample");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ReportingCallbackSample
  // [TokenAttribute] Offset: FFFFFFFF
  class ReportingCallbackSample : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.UI.Text InVRConsole
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* InVRConsole;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public UnityEngine.UI.Text DestinationsConsole
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* DestinationsConsole;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.UI.Text InVRConsole
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_InVRConsole();
    // Get instance field reference: public UnityEngine.UI.Text DestinationsConsole
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_DestinationsConsole();
    // private System.Void Start()
    // Offset: 0x48503A8
    void Start();
    // private System.Void OnReportButtonIntentNotif(Oculus.Platform.Message`1<System.String> message)
    // Offset: 0x4850548
    void OnReportButtonIntentNotif(::Oculus::Platform::Message_1<::StringW>* message);
    // private System.Void UpdateConsole(System.String value)
    // Offset: 0x485049C
    void UpdateConsole(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x485072C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReportingCallbackSample* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ReportingCallbackSample::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReportingCallbackSample*, creationType>()));
    }
    // private System.Void <Start>b__2_0(Oculus.Platform.Message`1<Oculus.Platform.Models.PlatformInitialize> message)
    // Offset: 0x4850734
    void $Start$b__2_0(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>* message);
  }; // ReportingCallbackSample
  #pragma pack(pop)
  static check_size<sizeof(ReportingCallbackSample), 40 + sizeof(::UnityEngine::UI::Text*)> __GlobalNamespace_ReportingCallbackSampleSizeCheck;
  static_assert(sizeof(ReportingCallbackSample) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ReportingCallbackSample::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportingCallbackSample::*)()>(&GlobalNamespace::ReportingCallbackSample::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportingCallbackSample*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportingCallbackSample::OnReportButtonIntentNotif
// Il2CppName: OnReportButtonIntentNotif
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportingCallbackSample::*)(::Oculus::Platform::Message_1<::StringW>*)>(&GlobalNamespace::ReportingCallbackSample::OnReportButtonIntentNotif)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportingCallbackSample*), "OnReportButtonIntentNotif", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportingCallbackSample::UpdateConsole
// Il2CppName: UpdateConsole
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportingCallbackSample::*)(::StringW)>(&GlobalNamespace::ReportingCallbackSample::UpdateConsole)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportingCallbackSample*), "UpdateConsole", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ReportingCallbackSample::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ReportingCallbackSample::$Start$b__2_0
// Il2CppName: <Start>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ReportingCallbackSample::*)(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PlatformInitialize*>*)>(&GlobalNamespace::ReportingCallbackSample::$Start$b__2_0)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Platform", "Message`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Platform.Models", "PlatformInitialize")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ReportingCallbackSample*), "<Start>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
