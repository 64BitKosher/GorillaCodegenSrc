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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ProgressUpdateCancelableDelegate
  class ProgressUpdateCancelableDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*, "DigitalOpus.MB.Core", "ProgressUpdateCancelableDelegate");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.ProgressUpdateCancelableDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class ProgressUpdateCancelableDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x43AA184
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProgressUpdateCancelableDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProgressUpdateCancelableDelegate*, creationType>(object, method)));
    }
    // public System.Boolean Invoke(System.String msg, System.Single progress)
    // Offset: 0x43AA238
    bool Invoke(::StringW msg, float progress);
    // public System.IAsyncResult BeginInvoke(System.String msg, System.Single progress, System.AsyncCallback callback, System.Object object)
    // Offset: 0x43AA24C
    ::System::IAsyncResult* BeginInvoke(::StringW msg, float progress, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Boolean EndInvoke(System.IAsyncResult result)
    // Offset: 0x43AA2E0
    bool EndInvoke(::System::IAsyncResult* result);
  }; // DigitalOpus.MB.Core.ProgressUpdateCancelableDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::StringW, float)>(&DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, progress});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::StringW, float, ::System::AsyncCallback*, ::Il2CppObject*)>(&DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* msg = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* progress = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{msg, progress, callback, object});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::*)(::System::IAsyncResult*)>(&DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ProgressUpdateCancelableDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
