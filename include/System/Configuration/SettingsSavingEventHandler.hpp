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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: CancelEventArgs
  class CancelEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsSavingEventHandler
  class SettingsSavingEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsSavingEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsSavingEventHandler*, "System.Configuration", "SettingsSavingEventHandler");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsSavingEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsSavingEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4F5B550
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsSavingEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsSavingEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsSavingEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.ComponentModel.CancelEventArgs e)
    // Offset: 0x4F5B588
    void Invoke(::Il2CppObject* sender, ::System::ComponentModel::CancelEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.ComponentModel.CancelEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4F5B5C0
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::ComponentModel::CancelEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4F5B5F8
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Configuration.SettingsSavingEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsSavingEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsSavingEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingsSavingEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::CancelEventArgs*)>(&System::Configuration::SettingsSavingEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CancelEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsSavingEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingsSavingEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Configuration::SettingsSavingEventHandler::*)(::Il2CppObject*, ::System::ComponentModel::CancelEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Configuration::SettingsSavingEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "CancelEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsSavingEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Configuration::SettingsSavingEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Configuration::SettingsSavingEventHandler::*)(::System::IAsyncResult*)>(&System::Configuration::SettingsSavingEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Configuration::SettingsSavingEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};