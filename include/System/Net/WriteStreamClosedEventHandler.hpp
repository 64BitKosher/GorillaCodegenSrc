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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WriteStreamClosedEventArgs
  class WriteStreamClosedEventArgs;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WriteStreamClosedEventHandler
  class WriteStreamClosedEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WriteStreamClosedEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WriteStreamClosedEventHandler*, "System.Net", "WriteStreamClosedEventHandler");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WriteStreamClosedEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  class WriteStreamClosedEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4FCF98C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WriteStreamClosedEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WriteStreamClosedEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WriteStreamClosedEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.Net.WriteStreamClosedEventArgs e)
    // Offset: 0x4FCFA98
    void Invoke(::Il2CppObject* sender, ::System::Net::WriteStreamClosedEventArgs* e);
    // public System.IAsyncResult BeginInvoke(System.Object sender, System.Net.WriteStreamClosedEventArgs e, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4FCFAAC
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* sender, ::System::Net::WriteStreamClosedEventArgs* e, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x4FCFAD4
    void EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.WriteStreamClosedEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WriteStreamClosedEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WriteStreamClosedEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WriteStreamClosedEventHandler::*)(::Il2CppObject*, ::System::Net::WriteStreamClosedEventArgs*)>(&System::Net::WriteStreamClosedEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "WriteStreamClosedEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WriteStreamClosedEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e});
  }
};
// Writing MetadataGetter for method: System::Net::WriteStreamClosedEventHandler::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::WriteStreamClosedEventHandler::*)(::Il2CppObject*, ::System::Net::WriteStreamClosedEventArgs*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::WriteStreamClosedEventHandler::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Net", "WriteStreamClosedEventArgs")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WriteStreamClosedEventHandler*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, e, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::WriteStreamClosedEventHandler::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WriteStreamClosedEventHandler::*)(::System::IAsyncResult*)>(&System::Net::WriteStreamClosedEventHandler::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WriteStreamClosedEventHandler*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};