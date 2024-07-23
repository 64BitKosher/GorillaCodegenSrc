// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Forward declaring type: DeserializeMethod
  class DeserializeMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::DeserializeMethod);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::DeserializeMethod*, "ExitGames.Client.Photon", "DeserializeMethod");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.DeserializeMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class DeserializeMethod : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x49E2110
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeserializeMethod* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::DeserializeMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeserializeMethod*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Byte[] serializedCustomObject)
    // Offset: 0x49E21C0
    ::Il2CppObject* Invoke(::ArrayW<uint8_t> serializedCustomObject);
    // public System.IAsyncResult BeginInvoke(System.Byte[] serializedCustomObject, System.AsyncCallback callback, System.Object object)
    // Offset: 0x49E21D4
    ::System::IAsyncResult* BeginInvoke(::ArrayW<uint8_t> serializedCustomObject, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x49E21F4
    ::Il2CppObject* EndInvoke(::System::IAsyncResult* result);
  }; // ExitGames.Client.Photon.DeserializeMethod
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::DeserializeMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::DeserializeMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::DeserializeMethod::*)(::ArrayW<uint8_t>)>(&ExitGames::Client::Photon::DeserializeMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* serializedCustomObject = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::DeserializeMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedCustomObject});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::DeserializeMethod::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (ExitGames::Client::Photon::DeserializeMethod::*)(::ArrayW<uint8_t>, ::System::AsyncCallback*, ::Il2CppObject*)>(&ExitGames::Client::Photon::DeserializeMethod::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* serializedCustomObject = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::DeserializeMethod*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializedCustomObject, callback, object});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::DeserializeMethod::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (ExitGames::Client::Photon::DeserializeMethod::*)(::System::IAsyncResult*)>(&ExitGames::Client::Photon::DeserializeMethod::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::DeserializeMethod*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
