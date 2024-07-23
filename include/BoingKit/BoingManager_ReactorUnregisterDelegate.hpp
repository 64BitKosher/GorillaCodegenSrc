// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.BoingManager
#include "BoingKit/BoingManager.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingReactor
  class BoingReactor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingManager::ReactorUnregisterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManager::ReactorUnregisterDelegate*, "BoingKit", "BoingManager/ReactorUnregisterDelegate");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManager/ReactorUnregisterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManager::ReactorUnregisterDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x28F191C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManager::ReactorUnregisterDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManager::ReactorUnregisterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManager::ReactorUnregisterDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(BoingKit.BoingReactor reactor)
    // Offset: 0x28F1A24
    void Invoke(::BoingKit::BoingReactor* reactor);
    // public System.IAsyncResult BeginInvoke(BoingKit.BoingReactor reactor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28F1A38
    ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingReactor* reactor, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x28F1A58
    void EndInvoke(::System::IAsyncResult* result);
  }; // BoingKit.BoingManager/ReactorUnregisterDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManager::ReactorUnregisterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BoingKit::BoingManager::ReactorUnregisterDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::ReactorUnregisterDelegate::*)(::BoingKit::BoingReactor*)>(&BoingKit::BoingManager::ReactorUnregisterDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* reactor = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingReactor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::ReactorUnregisterDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reactor});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::ReactorUnregisterDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (BoingKit::BoingManager::ReactorUnregisterDelegate::*)(::BoingKit::BoingReactor*, ::System::AsyncCallback*, ::Il2CppObject*)>(&BoingKit::BoingManager::ReactorUnregisterDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* reactor = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingReactor")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::ReactorUnregisterDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reactor, callback, object});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::ReactorUnregisterDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::ReactorUnregisterDelegate::*)(::System::IAsyncResult*)>(&BoingKit::BoingManager::ReactorUnregisterDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::ReactorUnregisterDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
