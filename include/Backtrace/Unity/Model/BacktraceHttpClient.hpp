// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Backtrace.Unity.Model.IBacktraceHttpClient
#include "Backtrace/Unity/Model/IBacktraceHttpClient.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: Backtrace::Unity::Json
namespace Backtrace::Unity::Json {
  // Forward declaring type: BacktraceJObject
  class BacktraceJObject;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
  // Forward declaring type: IMultipartFormSection
  class IMultipartFormSection;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceHttpClient
  class BacktraceHttpClient;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::BacktraceHttpClient);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::BacktraceHttpClient*, "Backtrace.Unity.Model", "BacktraceHttpClient");
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.BacktraceHttpClient
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceHttpClient : public ::Il2CppObject/*, public ::Backtrace::Unity::Model::IBacktraceHttpClient*/ {
    public:
    // Nested type: ::Backtrace::Unity::Model::BacktraceHttpClient::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    public:
    // private System.Boolean <IgnoreSslValidation>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool IgnoreSslValidation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Backtrace::Unity::Model::IBacktraceHttpClient
    operator ::Backtrace::Unity::Model::IBacktraceHttpClient() noexcept {
      return *reinterpret_cast<::Backtrace::Unity::Model::IBacktraceHttpClient*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return IgnoreSslValidation;
    }
    // static field const value: static private System.String DiagnosticFileName
    static constexpr const char* DiagnosticFileName = "upload_file";
    // Get static field: static private System.String DiagnosticFileName
    static ::StringW _get_DiagnosticFileName();
    // Set static field: static private System.String DiagnosticFileName
    static void _set_DiagnosticFileName(::StringW value);
    // static field const value: static private System.Int32 RequestTimeout
    static constexpr const int RequestTimeout = 15000;
    // Get static field: static private System.Int32 RequestTimeout
    static int _get_RequestTimeout();
    // Set static field: static private System.Int32 RequestTimeout
    static void _set_RequestTimeout(int value);
    // Get instance field reference: private System.Boolean <IgnoreSslValidation>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IgnoreSslValidation$k__BackingField();
    // public System.Boolean get_IgnoreSslValidation()
    // Offset: 0x2A62790
    bool get_IgnoreSslValidation();
    // public System.Void set_IgnoreSslValidation(System.Boolean value)
    // Offset: 0x2A62798
    void set_IgnoreSslValidation(bool value);
    // public System.Void Post(System.String submissionUrl, Backtrace.Unity.Json.BacktraceJObject jObject, System.Action`3<System.Int64,System.Boolean,System.String> onComplete)
    // Offset: 0x2A627A4
    void Post(::StringW submissionUrl, ::Backtrace::Unity::Json::BacktraceJObject* jObject, ::System::Action_3<int64_t, bool, ::StringW>* onComplete);
    // public UnityEngine.Networking.UnityWebRequest Post(System.String submissionUrl, System.String json, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A59024
    ::UnityEngine::Networking::UnityWebRequest* Post(::StringW submissionUrl, ::StringW json, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // public UnityEngine.Networking.UnityWebRequest Post(System.String submissionUrl, System.Byte[] minidump, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A59844
    ::UnityEngine::Networking::UnityWebRequest* Post(::StringW submissionUrl, ::ArrayW<uint8_t> minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // private UnityEngine.Networking.UnityWebRequest Post(System.String submissionUrl, System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> formData)
    // Offset: 0x2A62B9C
    ::UnityEngine::Networking::UnityWebRequest* Post(::StringW submissionUrl, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* formData);
    // private System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> CreateJsonFormData(System.Byte[] json, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A629EC
    ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* CreateJsonFormData(::ArrayW<uint8_t> json, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // private System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> CreateMinidumpFormData(System.Byte[] minidump, System.Collections.Generic.IEnumerable`1<System.String> attachments, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A62C20
    ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* CreateMinidumpFormData(::ArrayW<uint8_t> minidump, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // private System.Void AddAttributesToFormData(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> formData, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes)
    // Offset: 0x2A62D80
    void AddAttributesToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* formData, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes);
    // private System.Void AddAttachmentToFormData(System.Collections.Generic.List`1<UnityEngine.Networking.IMultipartFormSection> formData, System.Collections.Generic.IEnumerable`1<System.String> attachments)
    // Offset: 0x2A63140
    void AddAttachmentToFormData(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* formData, ::System::Collections::Generic::IEnumerable_1<::StringW>* attachments);
    // public System.Void .ctor()
    // Offset: 0x2A581AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceHttpClient* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::BacktraceHttpClient::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceHttpClient*, creationType>()));
    }
  }; // Backtrace.Unity.Model.BacktraceHttpClient
  #pragma pack(pop)
  static check_size<sizeof(BacktraceHttpClient), 16 + sizeof(bool)> __Backtrace_Unity_Model_BacktraceHttpClientSizeCheck;
  static_assert(sizeof(BacktraceHttpClient) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::get_IgnoreSslValidation
// Il2CppName: get_IgnoreSslValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Backtrace::Unity::Model::BacktraceHttpClient::*)()>(&Backtrace::Unity::Model::BacktraceHttpClient::get_IgnoreSslValidation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "get_IgnoreSslValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::set_IgnoreSslValidation
// Il2CppName: set_IgnoreSslValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceHttpClient::*)(bool)>(&Backtrace::Unity::Model::BacktraceHttpClient::set_IgnoreSslValidation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "set_IgnoreSslValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::Backtrace::Unity::Json::BacktraceJObject*, ::System::Action_3<int64_t, bool, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  static const MethodInfo* get() {
    static auto* submissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* jObject = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Json", "BacktraceJObject")->byval_arg;
    static auto* onComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int64"), ::il2cpp_utils::GetClassFromName("System", "Boolean"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{submissionUrl, jObject, onComplete});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::StringW, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  static const MethodInfo* get() {
    static auto* submissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{submissionUrl, json, attachments, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  static const MethodInfo* get() {
    static auto* submissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* minidump = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{submissionUrl, minidump, attachments, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Networking::UnityWebRequest* (Backtrace::Unity::Model::BacktraceHttpClient::*)(::StringW, ::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::Post)> {
  static const MethodInfo* get() {
    static auto* submissionUrl = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "IMultipartFormSection")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{submissionUrl, formData});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::CreateJsonFormData
// Il2CppName: CreateJsonFormData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* (Backtrace::Unity::Model::BacktraceHttpClient::*)(::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::CreateJsonFormData)> {
  static const MethodInfo* get() {
    static auto* json = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "CreateJsonFormData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json, attachments, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::CreateMinidumpFormData
// Il2CppName: CreateMinidumpFormData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>* (Backtrace::Unity::Model::BacktraceHttpClient::*)(::ArrayW<uint8_t>, ::System::Collections::Generic::IEnumerable_1<::StringW>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::CreateMinidumpFormData)> {
  static const MethodInfo* get() {
    static auto* minidump = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "CreateMinidumpFormData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{minidump, attachments, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::AddAttributesToFormData
// Il2CppName: AddAttributesToFormData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceHttpClient::*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::AddAttributesToFormData)> {
  static const MethodInfo* get() {
    static auto* formData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "IMultipartFormSection")})->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "AddAttributesToFormData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formData, attributes});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::AddAttachmentToFormData
// Il2CppName: AddAttachmentToFormData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::BacktraceHttpClient::*)(::System::Collections::Generic::List_1<::UnityEngine::Networking::IMultipartFormSection*>*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(&Backtrace::Unity::Model::BacktraceHttpClient::AddAttachmentToFormData)> {
  static const MethodInfo* get() {
    static auto* formData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "IMultipartFormSection")})->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::BacktraceHttpClient*), "AddAttachmentToFormData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formData, attachments});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::BacktraceHttpClient::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
