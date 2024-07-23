// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Platform.Message`1
#include "Oculus/Platform/Message_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: NetSyncConnection
  class NetSyncConnection;
  // Forward declaring type: NetSyncSessionsChangedNotification
  class NetSyncSessionsChangedNotification;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: NetSync
  class NetSync;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::NetSync);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSync*, "Oculus.Platform", "NetSync");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.NetSync
  // [TokenAttribute] Offset: FFFFFFFF
  class NetSync : public ::Il2CppObject {
    public:
    // static public System.Void SetConnectionStatusChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncConnection> callback)
    // Offset: 0x4881910
    static void SetConnectionStatusChangedNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncConnection*>::Callback* callback);
    // static public System.Void SetSessionsChangedNotificationCallback(Oculus.Platform.Message`1/Callback<Oculus.Platform.Models.NetSyncSessionsChangedNotification> callback)
    // Offset: 0x4881984
    static void SetSessionsChangedNotificationCallback(typename ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionsChangedNotification*>::Callback* callback);
  }; // Oculus.Platform.NetSync
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::NetSync::SetConnectionStatusChangedNotificationCallback
// Il2CppName: SetConnectionStatusChangedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
// Writing MetadataGetter for method: Oculus::Platform::NetSync::SetSessionsChangedNotificationCallback
// Il2CppName: SetSessionsChangedNotificationCallback
// Cannot write MetadataGetter for a method that has a nested type with a declaring generic type anywhere within it!
// Talk to sc2ad if this is something you want
