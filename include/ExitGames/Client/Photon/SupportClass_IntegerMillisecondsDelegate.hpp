// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.SupportClass
#include "ExitGames/Client/Photon/SupportClass.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate);
DEFINE_IL2CPP_ARG_TYPE(::ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate*, "ExitGames.Client.Photon", "SupportClass/IntegerMillisecondsDelegate");
// Type namespace: ExitGames.Client.Photon
namespace ExitGames::Client::Photon {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  class SupportClass::IntegerMillisecondsDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x49FEB64
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SupportClass::IntegerMillisecondsDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SupportClass::IntegerMillisecondsDelegate*, creationType>(object, method)));
    }
    // public System.Int32 Invoke()
    // Offset: 0x49FEC00
    int Invoke();
    // public System.IAsyncResult BeginInvoke(System.AsyncCallback callback, System.Object object)
    // Offset: 0x49FEC14
    ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(System.IAsyncResult result)
    // Offset: 0x49FEC34
    int EndInvoke(::System::IAsyncResult* result);
  }; // ExitGames.Client.Photon.SupportClass/IntegerMillisecondsDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::*)()>(&ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::Invoke)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::*)(::System::AsyncCallback*, ::Il2CppObject*)>(&ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, object});
  }
};
// Writing MetadataGetter for method: ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::*)(::System::IAsyncResult*)>(&ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(ExitGames::Client::Photon::SupportClass::IntegerMillisecondsDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
