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
  // Forward declaring type: BoingBehavior
  class BoingBehavior;
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
NEED_NO_BOX(::BoingKit::BoingManager::BehaviorRegisterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManager::BehaviorRegisterDelegate*, "BoingKit", "BoingManager/BehaviorRegisterDelegate");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManager/BehaviorRegisterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManager::BehaviorRegisterDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x28F12B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManager::BehaviorRegisterDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManager::BehaviorRegisterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManager::BehaviorRegisterDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(BoingKit.BoingBehavior behavior)
    // Offset: 0x28F13BC
    void Invoke(::BoingKit::BoingBehavior* behavior);
    // public System.IAsyncResult BeginInvoke(BoingKit.BoingBehavior behavior, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28F13D0
    ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingBehavior* behavior, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x28F13F0
    void EndInvoke(::System::IAsyncResult* result);
  }; // BoingKit.BoingManager/BehaviorRegisterDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManager::BehaviorRegisterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BoingKit::BoingManager::BehaviorRegisterDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::BehaviorRegisterDelegate::*)(::BoingKit::BoingBehavior*)>(&BoingKit::BoingManager::BehaviorRegisterDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* behavior = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingBehavior")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BehaviorRegisterDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behavior});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::BehaviorRegisterDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (BoingKit::BoingManager::BehaviorRegisterDelegate::*)(::BoingKit::BoingBehavior*, ::System::AsyncCallback*, ::Il2CppObject*)>(&BoingKit::BoingManager::BehaviorRegisterDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* behavior = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingBehavior")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BehaviorRegisterDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{behavior, callback, object});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::BehaviorRegisterDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::BehaviorRegisterDelegate::*)(::System::IAsyncResult*)>(&BoingKit::BoingManager::BehaviorRegisterDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::BehaviorRegisterDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
