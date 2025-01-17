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
// Forward declaring namespace: Backtrace::Unity::Runtime::Native
namespace Backtrace::Unity::Runtime::Native {
  // Forward declaring type: INativeClient
  class INativeClient;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceConfiguration
  class BacktraceConfiguration;
}
// Forward declaring namespace: Backtrace::Unity::Model::Breadcrumbs
namespace Backtrace::Unity::Model::Breadcrumbs {
  // Forward declaring type: BacktraceBreadcrumbs
  class BacktraceBreadcrumbs;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class IDictionary_2;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Runtime.Native
namespace Backtrace::Unity::Runtime::Native {
  // Forward declaring type: NativeClientFactory
  class NativeClientFactory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Runtime::Native::NativeClientFactory);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Runtime::Native::NativeClientFactory*, "Backtrace.Unity.Runtime.Native", "NativeClientFactory");
// Type namespace: Backtrace.Unity.Runtime.Native
namespace Backtrace::Unity::Runtime::Native {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Runtime.Native.NativeClientFactory
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeClientFactory : public ::Il2CppObject {
    public:
    // static Backtrace.Unity.Runtime.Native.INativeClient CreateNativeClient(Backtrace.Unity.Model.BacktraceConfiguration configuration, System.String gameObjectName, Backtrace.Unity.Model.Breadcrumbs.BacktraceBreadcrumbs breadcrumbs, System.Collections.Generic.IDictionary`2<System.String,System.String> attributes, System.Collections.Generic.ICollection`1<System.String> attachments)
    // Offset: 0x2A50508
    static ::Backtrace::Unity::Runtime::Native::INativeClient* CreateNativeClient(::Backtrace::Unity::Model::BacktraceConfiguration* configuration, ::StringW gameObjectName, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs* breadcrumbs, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* attributes, ::System::Collections::Generic::ICollection_1<::StringW>* attachments);
  }; // Backtrace.Unity.Runtime.Native.NativeClientFactory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Runtime::Native::NativeClientFactory::CreateNativeClient
// Il2CppName: CreateNativeClient
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Runtime::Native::INativeClient* (*)(::Backtrace::Unity::Model::BacktraceConfiguration*, ::StringW, ::Backtrace::Unity::Model::Breadcrumbs::BacktraceBreadcrumbs*, ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>*, ::System::Collections::Generic::ICollection_1<::StringW>*)>(&Backtrace::Unity::Runtime::Native::NativeClientFactory::CreateNativeClient)> {
  static const MethodInfo* get() {
    static auto* configuration = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model", "BacktraceConfiguration")->byval_arg;
    static auto* gameObjectName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* breadcrumbs = &::il2cpp_utils::GetClassFromName("Backtrace.Unity.Model.Breadcrumbs", "BacktraceBreadcrumbs")->byval_arg;
    static auto* attributes = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IDictionary`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* attachments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "ICollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Runtime::Native::NativeClientFactory*), "CreateNativeClient", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{configuration, gameObjectName, breadcrumbs, attributes, attachments});
  }
};
