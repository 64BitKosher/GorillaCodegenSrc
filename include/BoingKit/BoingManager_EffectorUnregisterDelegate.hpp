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
  // Forward declaring type: BoingEffector
  class BoingEffector;
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
NEED_NO_BOX(::BoingKit::BoingManager::EffectorUnregisterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManager::EffectorUnregisterDelegate*, "BoingKit", "BoingManager/EffectorUnregisterDelegate");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManager/EffectorUnregisterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManager::EffectorUnregisterDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x28F168C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManager::EffectorUnregisterDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManager::EffectorUnregisterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManager::EffectorUnregisterDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(BoingKit.BoingEffector effector)
    // Offset: 0x28F1794
    void Invoke(::BoingKit::BoingEffector* effector);
    // public System.IAsyncResult BeginInvoke(BoingKit.BoingEffector effector, System.AsyncCallback callback, System.Object object)
    // Offset: 0x28F17A8
    ::System::IAsyncResult* BeginInvoke(::BoingKit::BoingEffector* effector, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x28F17C8
    void EndInvoke(::System::IAsyncResult* result);
  }; // BoingKit.BoingManager/EffectorUnregisterDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManager::EffectorUnregisterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: BoingKit::BoingManager::EffectorUnregisterDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::EffectorUnregisterDelegate::*)(::BoingKit::BoingEffector*)>(&BoingKit::BoingManager::EffectorUnregisterDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* effector = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingEffector")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::EffectorUnregisterDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effector});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::EffectorUnregisterDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (BoingKit::BoingManager::EffectorUnregisterDelegate::*)(::BoingKit::BoingEffector*, ::System::AsyncCallback*, ::Il2CppObject*)>(&BoingKit::BoingManager::EffectorUnregisterDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* effector = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingEffector")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::EffectorUnregisterDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{effector, callback, object});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManager::EffectorUnregisterDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManager::EffectorUnregisterDelegate::*)(::System::IAsyncResult*)>(&BoingKit::BoingManager::EffectorUnregisterDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManager::EffectorUnregisterDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};