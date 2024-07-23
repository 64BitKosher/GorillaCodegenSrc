// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkSceneManagerBase
#include "Fusion/NetworkSceneManagerBase.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkObject
  class NetworkObject;
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
NEED_NO_BOX(::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*, "Fusion", "NetworkSceneManagerBase/FinishedLoadingDelegate");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class NetworkSceneManagerBase::FinishedLoadingDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x28186F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSceneManagerBase::FinishedLoadingDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSceneManagerBase::FinishedLoadingDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject> sceneObjects)
    // Offset: 0x28187F8
    void Invoke(::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObject*>* sceneObjects);
    // public System.IAsyncResult BeginInvoke(System.Collections.Generic.IEnumerable`1<Fusion.NetworkObject> sceneObjects, System.AsyncCallback callback, System.Object object)
    // Offset: 0x281880C
    ::System::IAsyncResult* BeginInvoke(::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObject*>* sceneObjects, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x281882C
    void EndInvoke(::System::IAsyncResult* result);
  }; // Fusion.NetworkSceneManagerBase/FinishedLoadingDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::*)(::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObject*>*)>(&Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* sceneObjects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneObjects});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::*)(::System::Collections::Generic::IEnumerable_1<::Fusion::NetworkObject*>*, ::System::AsyncCallback*, ::Il2CppObject*)>(&Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* sceneObjects = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")})->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sceneObjects, callback, object});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::*)(::System::IAsyncResult*)>(&Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkSceneManagerBase::FinishedLoadingDelegate*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};