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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipHTTPRequest
  class MothershipHTTPRequest;
  // Forward declaring type: MothershipHTTPResponse
  class MothershipHTTPResponse;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipHttpRunner
  class MothershipHttpRunner;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipHttpRunner);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipHttpRunner*, "", "MothershipHttpRunner");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MothershipHttpRunner
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipHttpRunner : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MothershipHttpRunner::$SendRequestInternal$d__6
    class $SendRequestInternal$d__6;
    // Get static field: static private MothershipHttpRunner _instance
    static ::GlobalNamespace::MothershipHttpRunner* _get__instance();
    // Set static field: static private MothershipHttpRunner _instance
    static void _set__instance(::GlobalNamespace::MothershipHttpRunner* value);
    // static public MothershipHttpRunner get_instance()
    // Offset: 0x267E368
    static ::GlobalNamespace::MothershipHttpRunner* get_instance();
    // static private System.Void CreateInstance()
    // Offset: 0x267E3F4
    static void CreateInstance();
    // public System.Void Awake()
    // Offset: 0x267E5B0
    void Awake();
    // public System.Void SendRequest(UnityEngine.Networking.UnityWebRequest uwr, MothershipHTTPRequest request, System.Action`1<MothershipHTTPResponse> responseCallback)
    // Offset: 0x267E3B4
    void SendRequest(::UnityEngine::Networking::UnityWebRequest* uwr, ::GlobalNamespace::MothershipHTTPRequest* request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>* responseCallback);
    // private System.Collections.IEnumerator SendRequestInternal(UnityEngine.Networking.UnityWebRequest uwr, MothershipHTTPRequest request, System.Action`1<MothershipHTTPResponse> responseCallback)
    // Offset: 0x267E6E0
    ::System::Collections::IEnumerator* SendRequestInternal(::UnityEngine::Networking::UnityWebRequest* uwr, ::GlobalNamespace::MothershipHTTPRequest* request, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>* responseCallback);
    // public System.Void .ctor()
    // Offset: 0x267E7A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipHttpRunner* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipHttpRunner::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipHttpRunner*, creationType>()));
    }
  }; // MothershipHttpRunner
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::MothershipHttpRunner* (*)()>(&GlobalNamespace::MothershipHttpRunner::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpRunner*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::CreateInstance
// Il2CppName: CreateInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::MothershipHttpRunner::CreateInstance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpRunner*), "CreateInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipHttpRunner::*)()>(&GlobalNamespace::MothershipHttpRunner::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpRunner*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::SendRequest
// Il2CppName: SendRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipHttpRunner::*)(::UnityEngine::Networking::UnityWebRequest*, ::GlobalNamespace::MothershipHTTPRequest*, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*)>(&GlobalNamespace::MothershipHttpRunner::SendRequest)> {
  static const MethodInfo* get() {
    static auto* uwr = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("", "MothershipHTTPRequest")->byval_arg;
    static auto* responseCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MothershipHTTPResponse")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpRunner*), "SendRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uwr, request, responseCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::SendRequestInternal
// Il2CppName: SendRequestInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MothershipHttpRunner::*)(::UnityEngine::Networking::UnityWebRequest*, ::GlobalNamespace::MothershipHTTPRequest*, ::System::Action_1<::GlobalNamespace::MothershipHTTPResponse*>*)>(&GlobalNamespace::MothershipHttpRunner::SendRequestInternal)> {
  static const MethodInfo* get() {
    static auto* uwr = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "UnityWebRequest")->byval_arg;
    static auto* request = &::il2cpp_utils::GetClassFromName("", "MothershipHTTPRequest")->byval_arg;
    static auto* responseCallback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "MothershipHTTPResponse")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipHttpRunner*), "SendRequestInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uwr, request, responseCallback});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipHttpRunner::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!