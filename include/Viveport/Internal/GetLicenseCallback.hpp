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
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Forward declaring type: GetLicenseCallback
  class GetLicenseCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Internal::GetLicenseCallback);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Internal::GetLicenseCallback*, "Viveport.Internal", "GetLicenseCallback");
// Type namespace: Viveport.Internal
namespace Viveport::Internal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Internal.GetLicenseCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class GetLicenseCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x27B6074
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetLicenseCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Internal::GetLicenseCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetLicenseCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message, System.String signature)
    // Offset: 0x27B6128
    void Invoke(::StringW message, ::StringW signature);
    // public System.IAsyncResult BeginInvoke(System.String message, System.String signature, System.AsyncCallback callback, System.Object object)
    // Offset: 0x27B613C
    ::System::IAsyncResult* BeginInvoke(::StringW message, ::StringW signature, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x27B6164
    void EndInvoke(::System::IAsyncResult* result);
  }; // Viveport.Internal.GetLicenseCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Internal::GetLicenseCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Internal::GetLicenseCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Internal::GetLicenseCallback::*)(::StringW, ::StringW)>(&Viveport::Internal::GetLicenseCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::GetLicenseCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, signature});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::GetLicenseCallback::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Viveport::Internal::GetLicenseCallback::*)(::StringW, ::StringW, ::System::AsyncCallback*, ::Il2CppObject*)>(&Viveport::Internal::GetLicenseCallback::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* signature = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::GetLicenseCallback*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, signature, callback, object});
  }
};
// Writing MetadataGetter for method: Viveport::Internal::GetLicenseCallback::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Viveport::Internal::GetLicenseCallback::*)(::System::IAsyncResult*)>(&Viveport::Internal::GetLicenseCallback::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Internal::GetLicenseCallback*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
