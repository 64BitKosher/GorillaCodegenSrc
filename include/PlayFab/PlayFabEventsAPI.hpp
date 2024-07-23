// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: PlayFab::EventsModels
namespace PlayFab::EventsModels {
  // Forward declaring type: WriteEventsRequest
  class WriteEventsRequest;
  // Forward declaring type: WriteEventsResponse
  class WriteEventsResponse;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabError
  class PlayFabError;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: PlayFab
namespace PlayFab {
  // Forward declaring type: PlayFabEventsAPI
  class PlayFabEventsAPI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::PlayFabEventsAPI);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::PlayFabEventsAPI*, "PlayFab", "PlayFabEventsAPI");
// Type namespace: PlayFab
namespace PlayFab {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.PlayFabEventsAPI
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayFabEventsAPI : public ::Il2CppObject {
    public:
    // static private System.Void .cctor()
    // Offset: 0x4AE2C54
    static void _cctor();
    // static public System.Boolean IsEntityLoggedIn()
    // Offset: 0x4AE2C58
    static bool IsEntityLoggedIn();
    // static public System.Void ForgetAllCredentials()
    // Offset: 0x4AE2CCC
    static void ForgetAllCredentials();
    // static public System.Void WriteEvents(PlayFab.EventsModels.WriteEventsRequest request, System.Action`1<PlayFab.EventsModels.WriteEventsResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x4AE2D2C
    static void WriteEvents(::PlayFab::EventsModels::WriteEventsRequest* request, ::System::Action_1<::PlayFab::EventsModels::WriteEventsResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
    // static public System.Void WriteTelemetryEvents(PlayFab.EventsModels.WriteEventsRequest request, System.Action`1<PlayFab.EventsModels.WriteEventsResponse> resultCallback, System.Action`1<PlayFab.PlayFabError> errorCallback, System.Object customData, System.Collections.Generic.Dictionary`2<System.String,System.String> extraHeaders)
    // Offset: 0x4AE2EC0
    static void WriteTelemetryEvents(::PlayFab::EventsModels::WriteEventsRequest* request, ::System::Action_1<::PlayFab::EventsModels::WriteEventsResponse*>* resultCallback, ::System::Action_1<::PlayFab::PlayFabError*>* errorCallback, ::Il2CppObject* customData, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* extraHeaders);
  }; // PlayFab.PlayFabEventsAPI
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::PlayFabEventsAPI::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PlayFabEventsAPI::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabEventsAPI*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabEventsAPI::IsEntityLoggedIn
// Il2CppName: IsEntityLoggedIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&PlayFab::PlayFabEventsAPI::IsEntityLoggedIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabEventsAPI*), "IsEntityLoggedIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabEventsAPI::ForgetAllCredentials
// Il2CppName: ForgetAllCredentials
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&PlayFab::PlayFabEventsAPI::ForgetAllCredentials)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabEventsAPI*), "ForgetAllCredentials", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabEventsAPI::WriteEvents
// Il2CppName: WriteEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::EventsModels::WriteEventsRequest*, ::System::Action_1<::PlayFab::EventsModels::WriteEventsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabEventsAPI::WriteEvents)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.EventsModels", "WriteEventsRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.EventsModels", "WriteEventsResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabEventsAPI*), "WriteEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};
// Writing MetadataGetter for method: PlayFab::PlayFabEventsAPI::WriteTelemetryEvents
// Il2CppName: WriteTelemetryEvents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::PlayFab::EventsModels::WriteEventsRequest*, ::System::Action_1<::PlayFab::EventsModels::WriteEventsResponse*>*, ::System::Action_1<::PlayFab::PlayFabError*>*, ::Il2CppObject*, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)>(&PlayFab::PlayFabEventsAPI::WriteTelemetryEvents)> {
  static const MethodInfo* get() {
    static auto* request = &::il2cpp_utils::GetClassFromName("PlayFab.EventsModels", "WriteEventsRequest")->byval_arg;
    static auto* resultCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab.EventsModels", "WriteEventsResponse")})->byval_arg;
    static auto* errorCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("PlayFab", "PlayFabError")})->byval_arg;
    static auto* customData = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* extraHeaders = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "Dictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(PlayFab::PlayFabEventsAPI*), "WriteTelemetryEvents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{request, resultCallback, errorCallback, customData, extraHeaders});
  }
};