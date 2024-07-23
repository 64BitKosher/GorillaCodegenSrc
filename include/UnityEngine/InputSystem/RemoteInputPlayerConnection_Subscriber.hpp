// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.RemoteInputPlayerConnection
#include "UnityEngine/InputSystem/RemoteInputPlayerConnection.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.InputSystem.InputRemoting/Message
#include "UnityEngine/InputSystem/InputRemoting.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IObserver`1<T>
  template<typename T>
  class IObserver_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber*, "UnityEngine.InputSystem", "RemoteInputPlayerConnection/Subscriber");
// Type namespace: UnityEngine.InputSystem
namespace UnityEngine::InputSystem {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
  // [TokenAttribute] Offset: FFFFFFFF
  class RemoteInputPlayerConnection::Subscriber : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // public UnityEngine.InputSystem.RemoteInputPlayerConnection owner
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::InputSystem::RemoteInputPlayerConnection* owner;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::RemoteInputPlayerConnection*) == 0x8);
    // public System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> observer
    // Size: 0x8
    // Offset: 0x18
    ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting::Message>* observer;
    // Field size check
    static_assert(sizeof(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting::Message>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: public UnityEngine.InputSystem.RemoteInputPlayerConnection owner
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::RemoteInputPlayerConnection*& dyn_owner();
    // Get instance field reference: public System.IObserver`1<UnityEngine.InputSystem.InputRemoting/Message> observer
    [[deprecated("Use field access instead!")]] ::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting::Message>*& dyn_observer();
    // public System.Void Dispose()
    // Offset: 0x5108EF4
    void Dispose();
    // public System.Void .ctor()
    // Offset: 0x5108800
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RemoteInputPlayerConnection::Subscriber* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RemoteInputPlayerConnection::Subscriber*, creationType>()));
    }
  }; // UnityEngine.InputSystem.RemoteInputPlayerConnection/Subscriber
  #pragma pack(pop)
  static check_size<sizeof(RemoteInputPlayerConnection::Subscriber), 24 + sizeof(::System::IObserver_1<::UnityEngine::InputSystem::InputRemoting::Message>*)> __UnityEngine_InputSystem_RemoteInputPlayerConnection_SubscriberSizeCheck;
  static_assert(sizeof(RemoteInputPlayerConnection::Subscriber) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber::*)()>(&UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::RemoteInputPlayerConnection::Subscriber::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!