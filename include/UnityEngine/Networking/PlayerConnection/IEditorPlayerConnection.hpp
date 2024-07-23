// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Forward declaring namespace: UnityEngine::Networking::PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: MessageEventArgs
  class MessageEventArgs;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Forward declaring type: IEditorPlayerConnection
  class IEditorPlayerConnection;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*, "UnityEngine.Networking.PlayerConnection", "IEditorPlayerConnection");
// Type namespace: UnityEngine.Networking.PlayerConnection
namespace UnityEngine::Networking::PlayerConnection {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection
  // [TokenAttribute] Offset: FFFFFFFF
  class IEditorPlayerConnection {
    public:
    // public System.Void Register(System.Guid messageId, UnityEngine.Events.UnityAction`1<UnityEngine.Networking.PlayerConnection.MessageEventArgs> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Register(::System::Guid messageId, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>* callback);
    // public System.Void RegisterConnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterConnection(::UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void RegisterDisconnection(UnityEngine.Events.UnityAction`1<System.Int32> callback)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RegisterDisconnection(::UnityEngine::Events::UnityAction_1<int>* callback);
    // public System.Void Send(System.Guid messageId, System.Byte[] data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Send(::System::Guid messageId, ::ArrayW<uint8_t> data);
  }; // UnityEngine.Networking.PlayerConnection.IEditorPlayerConnection
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::System::Guid, ::UnityEngine::Events::UnityAction_1<::UnityEngine::Networking::PlayerConnection::MessageEventArgs*>*)>(&UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Register)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Networking.PlayerConnection", "MessageEventArgs")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection
// Il2CppName: RegisterConnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int>*)>(&UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterConnection)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*), "RegisterConnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection
// Il2CppName: RegisterDisconnection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::UnityEngine::Events::UnityAction_1<int>*)>(&UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::RegisterDisconnection)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.Events", "UnityAction`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*), "RegisterDisconnection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::*)(::System::Guid, ::ArrayW<uint8_t>)>(&UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection::Send)> {
  static const MethodInfo* get() {
    static auto* messageId = &::il2cpp_utils::GetClassFromName("System", "Guid")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::PlayerConnection::IEditorPlayerConnection*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{messageId, data});
  }
};
