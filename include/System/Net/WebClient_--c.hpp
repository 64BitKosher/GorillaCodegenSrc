// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebClient
#include "System/Net/WebClient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: DownloadStringCompletedEventArgs
  class DownloadStringCompletedEventArgs;
  // Forward declaring type: DownloadStringCompletedEventHandler
  class DownloadStringCompletedEventHandler;
  // Forward declaring type: OpenReadCompletedEventArgs
  class OpenReadCompletedEventArgs;
  // Forward declaring type: OpenReadCompletedEventHandler
  class OpenReadCompletedEventHandler;
  // Forward declaring type: OpenWriteCompletedEventArgs
  class OpenWriteCompletedEventArgs;
  // Forward declaring type: OpenWriteCompletedEventHandler
  class OpenWriteCompletedEventHandler;
  // Forward declaring type: UploadStringCompletedEventArgs
  class UploadStringCompletedEventArgs;
  // Forward declaring type: UploadStringCompletedEventHandler
  class UploadStringCompletedEventHandler;
  // Forward declaring type: DownloadDataCompletedEventArgs
  class DownloadDataCompletedEventArgs;
  // Forward declaring type: DownloadDataCompletedEventHandler
  class DownloadDataCompletedEventHandler;
  // Forward declaring type: UploadDataCompletedEventArgs
  class UploadDataCompletedEventArgs;
  // Forward declaring type: UploadDataCompletedEventHandler
  class UploadDataCompletedEventHandler;
  // Forward declaring type: UploadFileCompletedEventArgs
  class UploadFileCompletedEventArgs;
  // Forward declaring type: UploadFileCompletedEventHandler
  class UploadFileCompletedEventHandler;
  // Forward declaring type: UploadValuesCompletedEventArgs
  class UploadValuesCompletedEventArgs;
  // Forward declaring type: UploadValuesCompletedEventHandler
  class UploadValuesCompletedEventHandler;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AsyncCompletedEventArgs
  class AsyncCompletedEventArgs;
  // Forward declaring type: AsyncCompletedEventHandler
  class AsyncCompletedEventHandler;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebClient::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebClient::$$c*, "System.Net", "WebClient/<>c");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebClient/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class WebClient::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Net.WebClient/<>c <>9
    static ::System::Net::WebClient::$$c* _get_$$9();
    // Set static field: static public readonly System.Net.WebClient/<>c <>9
    static void _set_$$9(::System::Net::WebClient::$$c* value);
    // Get static field: static public System.Func`2<System.Net.DownloadStringCompletedEventArgs,System.String> <>9__192_1
    static ::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*, ::StringW>* _get_$$9__192_1();
    // Set static field: static public System.Func`2<System.Net.DownloadStringCompletedEventArgs,System.String> <>9__192_1
    static void _set_$$9__192_1(::System::Func_2<::System::Net::DownloadStringCompletedEventArgs*, ::StringW>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.DownloadStringCompletedEventHandler> <>9__192_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*>* _get_$$9__192_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.DownloadStringCompletedEventHandler> <>9__192_2
    static void _set_$$9__192_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.OpenReadCompletedEventArgs,System.IO.Stream> <>9__194_1
    static ::System::Func_2<::System::Net::OpenReadCompletedEventArgs*, ::System::IO::Stream*>* _get_$$9__194_1();
    // Set static field: static public System.Func`2<System.Net.OpenReadCompletedEventArgs,System.IO.Stream> <>9__194_1
    static void _set_$$9__194_1(::System::Func_2<::System::Net::OpenReadCompletedEventArgs*, ::System::IO::Stream*>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.OpenReadCompletedEventHandler> <>9__194_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*>* _get_$$9__194_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.OpenReadCompletedEventHandler> <>9__194_2
    static void _set_$$9__194_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.OpenWriteCompletedEventArgs,System.IO.Stream> <>9__198_1
    static ::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*, ::System::IO::Stream*>* _get_$$9__198_1();
    // Set static field: static public System.Func`2<System.Net.OpenWriteCompletedEventArgs,System.IO.Stream> <>9__198_1
    static void _set_$$9__198_1(::System::Func_2<::System::Net::OpenWriteCompletedEventArgs*, ::System::IO::Stream*>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.OpenWriteCompletedEventHandler> <>9__198_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*>* _get_$$9__198_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.OpenWriteCompletedEventHandler> <>9__198_2
    static void _set_$$9__198_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.UploadStringCompletedEventArgs,System.String> <>9__202_1
    static ::System::Func_2<::System::Net::UploadStringCompletedEventArgs*, ::StringW>* _get_$$9__202_1();
    // Set static field: static public System.Func`2<System.Net.UploadStringCompletedEventArgs,System.String> <>9__202_1
    static void _set_$$9__202_1(::System::Func_2<::System::Net::UploadStringCompletedEventArgs*, ::StringW>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadStringCompletedEventHandler> <>9__202_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*>* _get_$$9__202_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadStringCompletedEventHandler> <>9__202_2
    static void _set_$$9__202_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.DownloadDataCompletedEventArgs,System.Byte[]> <>9__204_1
    static ::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*, ::ArrayW<uint8_t>>* _get_$$9__204_1();
    // Set static field: static public System.Func`2<System.Net.DownloadDataCompletedEventArgs,System.Byte[]> <>9__204_1
    static void _set_$$9__204_1(::System::Func_2<::System::Net::DownloadDataCompletedEventArgs*, ::ArrayW<uint8_t>>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.DownloadDataCompletedEventHandler> <>9__204_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*>* _get_$$9__204_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.DownloadDataCompletedEventHandler> <>9__204_2
    static void _set_$$9__204_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.ComponentModel.AsyncCompletedEventArgs,System.Object> <>9__206_1
    static ::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*, ::Il2CppObject*>* _get_$$9__206_1();
    // Set static field: static public System.Func`2<System.ComponentModel.AsyncCompletedEventArgs,System.Object> <>9__206_1
    static void _set_$$9__206_1(::System::Func_2<::System::ComponentModel::AsyncCompletedEventArgs*, ::Il2CppObject*>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.ComponentModel.AsyncCompletedEventHandler> <>9__206_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*>* _get_$$9__206_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.ComponentModel.AsyncCompletedEventHandler> <>9__206_2
    static void _set_$$9__206_2(::System::Action_2<::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.UploadDataCompletedEventArgs,System.Byte[]> <>9__210_1
    static ::System::Func_2<::System::Net::UploadDataCompletedEventArgs*, ::ArrayW<uint8_t>>* _get_$$9__210_1();
    // Set static field: static public System.Func`2<System.Net.UploadDataCompletedEventArgs,System.Byte[]> <>9__210_1
    static void _set_$$9__210_1(::System::Func_2<::System::Net::UploadDataCompletedEventArgs*, ::ArrayW<uint8_t>>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadDataCompletedEventHandler> <>9__210_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*>* _get_$$9__210_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadDataCompletedEventHandler> <>9__210_2
    static void _set_$$9__210_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.UploadFileCompletedEventArgs,System.Byte[]> <>9__214_1
    static ::System::Func_2<::System::Net::UploadFileCompletedEventArgs*, ::ArrayW<uint8_t>>* _get_$$9__214_1();
    // Set static field: static public System.Func`2<System.Net.UploadFileCompletedEventArgs,System.Byte[]> <>9__214_1
    static void _set_$$9__214_1(::System::Func_2<::System::Net::UploadFileCompletedEventArgs*, ::ArrayW<uint8_t>>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadFileCompletedEventHandler> <>9__214_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*>* _get_$$9__214_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadFileCompletedEventHandler> <>9__214_2
    static void _set_$$9__214_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*>* value);
    // Get static field: static public System.Func`2<System.Net.UploadValuesCompletedEventArgs,System.Byte[]> <>9__218_1
    static ::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*, ::ArrayW<uint8_t>>* _get_$$9__218_1();
    // Set static field: static public System.Func`2<System.Net.UploadValuesCompletedEventArgs,System.Byte[]> <>9__218_1
    static void _set_$$9__218_1(::System::Func_2<::System::Net::UploadValuesCompletedEventArgs*, ::ArrayW<uint8_t>>* value);
    // Get static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadValuesCompletedEventHandler> <>9__218_2
    static ::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*>* _get_$$9__218_2();
    // Set static field: static public System.Action`2<System.Net.WebClient,System.Net.UploadValuesCompletedEventHandler> <>9__218_2
    static void _set_$$9__218_2(::System::Action_2<::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4FCE354
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4FCE3BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebClient::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebClient::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebClient::$$c*, creationType>()));
    }
    // System.String <DownloadStringTaskAsync>b__192_1(System.Net.DownloadStringCompletedEventArgs args)
    // Offset: 0x4FCE3C4
    ::StringW $DownloadStringTaskAsync$b__192_1(::System::Net::DownloadStringCompletedEventArgs* args);
    // System.Void <DownloadStringTaskAsync>b__192_2(System.Net.WebClient webClient, System.Net.DownloadStringCompletedEventHandler completion)
    // Offset: 0x4FCE408
    void $DownloadStringTaskAsync$b__192_2(::System::Net::WebClient* webClient, ::System::Net::DownloadStringCompletedEventHandler* completion);
    // System.IO.Stream <OpenReadTaskAsync>b__194_1(System.Net.OpenReadCompletedEventArgs args)
    // Offset: 0x4FCE420
    ::System::IO::Stream* $OpenReadTaskAsync$b__194_1(::System::Net::OpenReadCompletedEventArgs* args);
    // System.Void <OpenReadTaskAsync>b__194_2(System.Net.WebClient webClient, System.Net.OpenReadCompletedEventHandler completion)
    // Offset: 0x4FCE464
    void $OpenReadTaskAsync$b__194_2(::System::Net::WebClient* webClient, ::System::Net::OpenReadCompletedEventHandler* completion);
    // System.IO.Stream <OpenWriteTaskAsync>b__198_1(System.Net.OpenWriteCompletedEventArgs args)
    // Offset: 0x4FCE47C
    ::System::IO::Stream* $OpenWriteTaskAsync$b__198_1(::System::Net::OpenWriteCompletedEventArgs* args);
    // System.Void <OpenWriteTaskAsync>b__198_2(System.Net.WebClient webClient, System.Net.OpenWriteCompletedEventHandler completion)
    // Offset: 0x4FCE4C0
    void $OpenWriteTaskAsync$b__198_2(::System::Net::WebClient* webClient, ::System::Net::OpenWriteCompletedEventHandler* completion);
    // System.String <UploadStringTaskAsync>b__202_1(System.Net.UploadStringCompletedEventArgs args)
    // Offset: 0x4FCE4D8
    ::StringW $UploadStringTaskAsync$b__202_1(::System::Net::UploadStringCompletedEventArgs* args);
    // System.Void <UploadStringTaskAsync>b__202_2(System.Net.WebClient webClient, System.Net.UploadStringCompletedEventHandler completion)
    // Offset: 0x4FCE51C
    void $UploadStringTaskAsync$b__202_2(::System::Net::WebClient* webClient, ::System::Net::UploadStringCompletedEventHandler* completion);
    // System.Byte[] <DownloadDataTaskAsync>b__204_1(System.Net.DownloadDataCompletedEventArgs args)
    // Offset: 0x4FCE534
    ::ArrayW<uint8_t> $DownloadDataTaskAsync$b__204_1(::System::Net::DownloadDataCompletedEventArgs* args);
    // System.Void <DownloadDataTaskAsync>b__204_2(System.Net.WebClient webClient, System.Net.DownloadDataCompletedEventHandler completion)
    // Offset: 0x4FCE578
    void $DownloadDataTaskAsync$b__204_2(::System::Net::WebClient* webClient, ::System::Net::DownloadDataCompletedEventHandler* completion);
    // System.Object <DownloadFileTaskAsync>b__206_1(System.ComponentModel.AsyncCompletedEventArgs args)
    // Offset: 0x4FCE590
    ::Il2CppObject* $DownloadFileTaskAsync$b__206_1(::System::ComponentModel::AsyncCompletedEventArgs* args);
    // System.Void <DownloadFileTaskAsync>b__206_2(System.Net.WebClient webClient, System.ComponentModel.AsyncCompletedEventHandler completion)
    // Offset: 0x4FCE598
    void $DownloadFileTaskAsync$b__206_2(::System::Net::WebClient* webClient, ::System::ComponentModel::AsyncCompletedEventHandler* completion);
    // System.Byte[] <UploadDataTaskAsync>b__210_1(System.Net.UploadDataCompletedEventArgs args)
    // Offset: 0x4FCE5B0
    ::ArrayW<uint8_t> $UploadDataTaskAsync$b__210_1(::System::Net::UploadDataCompletedEventArgs* args);
    // System.Void <UploadDataTaskAsync>b__210_2(System.Net.WebClient webClient, System.Net.UploadDataCompletedEventHandler completion)
    // Offset: 0x4FCE5F4
    void $UploadDataTaskAsync$b__210_2(::System::Net::WebClient* webClient, ::System::Net::UploadDataCompletedEventHandler* completion);
    // System.Byte[] <UploadFileTaskAsync>b__214_1(System.Net.UploadFileCompletedEventArgs args)
    // Offset: 0x4FCE60C
    ::ArrayW<uint8_t> $UploadFileTaskAsync$b__214_1(::System::Net::UploadFileCompletedEventArgs* args);
    // System.Void <UploadFileTaskAsync>b__214_2(System.Net.WebClient webClient, System.Net.UploadFileCompletedEventHandler completion)
    // Offset: 0x4FCE650
    void $UploadFileTaskAsync$b__214_2(::System::Net::WebClient* webClient, ::System::Net::UploadFileCompletedEventHandler* completion);
    // System.Byte[] <UploadValuesTaskAsync>b__218_1(System.Net.UploadValuesCompletedEventArgs args)
    // Offset: 0x4FCE668
    ::ArrayW<uint8_t> $UploadValuesTaskAsync$b__218_1(::System::Net::UploadValuesCompletedEventArgs* args);
    // System.Void <UploadValuesTaskAsync>b__218_2(System.Net.WebClient webClient, System.Net.UploadValuesCompletedEventHandler completion)
    // Offset: 0x4FCE6AC
    void $UploadValuesTaskAsync$b__218_2(::System::Net::WebClient* webClient, ::System::Net::UploadValuesCompletedEventHandler* completion);
  }; // System.Net.WebClient/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebClient::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebClient::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadStringTaskAsync$b__192_1
// Il2CppName: <DownloadStringTaskAsync>b__192_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebClient::$$c::*)(::System::Net::DownloadStringCompletedEventArgs*)>(&System::Net::WebClient::$$c::$DownloadStringTaskAsync$b__192_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadStringCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadStringTaskAsync>b__192_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadStringTaskAsync$b__192_2
// Il2CppName: <DownloadStringTaskAsync>b__192_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::DownloadStringCompletedEventHandler*)>(&System::Net::WebClient::$$c::$DownloadStringTaskAsync$b__192_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadStringCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadStringTaskAsync>b__192_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$OpenReadTaskAsync$b__194_1
// Il2CppName: <OpenReadTaskAsync>b__194_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::WebClient::$$c::*)(::System::Net::OpenReadCompletedEventArgs*)>(&System::Net::WebClient::$$c::$OpenReadTaskAsync$b__194_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "OpenReadCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<OpenReadTaskAsync>b__194_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$OpenReadTaskAsync$b__194_2
// Il2CppName: <OpenReadTaskAsync>b__194_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::OpenReadCompletedEventHandler*)>(&System::Net::WebClient::$$c::$OpenReadTaskAsync$b__194_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "OpenReadCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<OpenReadTaskAsync>b__194_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$OpenWriteTaskAsync$b__198_1
// Il2CppName: <OpenWriteTaskAsync>b__198_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::Stream* (System::Net::WebClient::$$c::*)(::System::Net::OpenWriteCompletedEventArgs*)>(&System::Net::WebClient::$$c::$OpenWriteTaskAsync$b__198_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "OpenWriteCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<OpenWriteTaskAsync>b__198_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$OpenWriteTaskAsync$b__198_2
// Il2CppName: <OpenWriteTaskAsync>b__198_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::OpenWriteCompletedEventHandler*)>(&System::Net::WebClient::$$c::$OpenWriteTaskAsync$b__198_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "OpenWriteCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<OpenWriteTaskAsync>b__198_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadStringTaskAsync$b__202_1
// Il2CppName: <UploadStringTaskAsync>b__202_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Net::WebClient::$$c::*)(::System::Net::UploadStringCompletedEventArgs*)>(&System::Net::WebClient::$$c::$UploadStringTaskAsync$b__202_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "UploadStringCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadStringTaskAsync>b__202_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadStringTaskAsync$b__202_2
// Il2CppName: <UploadStringTaskAsync>b__202_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::UploadStringCompletedEventHandler*)>(&System::Net::WebClient::$$c::$UploadStringTaskAsync$b__202_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "UploadStringCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadStringTaskAsync>b__202_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadDataTaskAsync$b__204_1
// Il2CppName: <DownloadDataTaskAsync>b__204_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebClient::$$c::*)(::System::Net::DownloadDataCompletedEventArgs*)>(&System::Net::WebClient::$$c::$DownloadDataTaskAsync$b__204_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadDataCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadDataTaskAsync>b__204_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadDataTaskAsync$b__204_2
// Il2CppName: <DownloadDataTaskAsync>b__204_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::DownloadDataCompletedEventHandler*)>(&System::Net::WebClient::$$c::$DownloadDataTaskAsync$b__204_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "DownloadDataCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadDataTaskAsync>b__204_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadFileTaskAsync$b__206_1
// Il2CppName: <DownloadFileTaskAsync>b__206_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::WebClient::$$c::*)(::System::ComponentModel::AsyncCompletedEventArgs*)>(&System::Net::WebClient::$$c::$DownloadFileTaskAsync$b__206_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "AsyncCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadFileTaskAsync>b__206_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$DownloadFileTaskAsync$b__206_2
// Il2CppName: <DownloadFileTaskAsync>b__206_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::ComponentModel::AsyncCompletedEventHandler*)>(&System::Net::WebClient::$$c::$DownloadFileTaskAsync$b__206_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "AsyncCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<DownloadFileTaskAsync>b__206_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadDataTaskAsync$b__210_1
// Il2CppName: <UploadDataTaskAsync>b__210_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebClient::$$c::*)(::System::Net::UploadDataCompletedEventArgs*)>(&System::Net::WebClient::$$c::$UploadDataTaskAsync$b__210_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "UploadDataCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadDataTaskAsync>b__210_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadDataTaskAsync$b__210_2
// Il2CppName: <UploadDataTaskAsync>b__210_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::UploadDataCompletedEventHandler*)>(&System::Net::WebClient::$$c::$UploadDataTaskAsync$b__210_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "UploadDataCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadDataTaskAsync>b__210_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadFileTaskAsync$b__214_1
// Il2CppName: <UploadFileTaskAsync>b__214_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebClient::$$c::*)(::System::Net::UploadFileCompletedEventArgs*)>(&System::Net::WebClient::$$c::$UploadFileTaskAsync$b__214_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "UploadFileCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadFileTaskAsync>b__214_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadFileTaskAsync$b__214_2
// Il2CppName: <UploadFileTaskAsync>b__214_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::UploadFileCompletedEventHandler*)>(&System::Net::WebClient::$$c::$UploadFileTaskAsync$b__214_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "UploadFileCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadFileTaskAsync>b__214_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadValuesTaskAsync$b__218_1
// Il2CppName: <UploadValuesTaskAsync>b__218_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Net::WebClient::$$c::*)(::System::Net::UploadValuesCompletedEventArgs*)>(&System::Net::WebClient::$$c::$UploadValuesTaskAsync$b__218_1)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("System.Net", "UploadValuesCompletedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadValuesTaskAsync>b__218_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: System::Net::WebClient::$$c::$UploadValuesTaskAsync$b__218_2
// Il2CppName: <UploadValuesTaskAsync>b__218_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebClient::$$c::*)(::System::Net::WebClient*, ::System::Net::UploadValuesCompletedEventHandler*)>(&System::Net::WebClient::$$c::$UploadValuesTaskAsync$b__218_2)> {
  static const MethodInfo* get() {
    static auto* webClient = &::il2cpp_utils::GetClassFromName("System.Net", "WebClient")->byval_arg;
    static auto* completion = &::il2cpp_utils::GetClassFromName("System.Net", "UploadValuesCompletedEventHandler")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebClient::$$c*), "<UploadValuesTaskAsync>b__218_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{webClient, completion});
  }
};
