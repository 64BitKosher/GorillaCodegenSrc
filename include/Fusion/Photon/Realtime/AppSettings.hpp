// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.ConnectionProtocol
#include "ExitGames/Client/Photon/ConnectionProtocol.hpp"
// Including type: Fusion.Photon.Realtime.AuthModeOption
#include "Fusion/Photon/Realtime/AuthModeOption.hpp"
// Including type: ExitGames.Client.Photon.DebugLevel
#include "ExitGames/Client/Photon/DebugLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Forward declaring type: AppSettings
  class AppSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Photon::Realtime::AppSettings);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Photon::Realtime::AppSettings*, "Fusion.Photon.Realtime", "AppSettings");
// Type namespace: Fusion.Photon.Realtime
namespace Fusion::Photon::Realtime {
  // Size: 0x72
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Photon.Realtime.AppSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class AppSettings : public ::Il2CppObject {
    public:
    public:
    // public System.String AppIdRealtime
    // Size: 0x8
    // Offset: 0x10
    ::StringW AppIdRealtime;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AppIdFusion
    // Size: 0x8
    // Offset: 0x18
    ::StringW AppIdFusion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AppIdChat
    // Size: 0x8
    // Offset: 0x20
    ::StringW AppIdChat;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AppIdVoice
    // Size: 0x8
    // Offset: 0x28
    ::StringW AppIdVoice;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String AppVersion
    // Size: 0x8
    // Offset: 0x30
    ::StringW AppVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean UseNameServer
    // Size: 0x1
    // Offset: 0x38
    bool UseNameServer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: UseNameServer and: FixedRegion
    char __padding5[0x7] = {};
    // public System.String FixedRegion
    // Size: 0x8
    // Offset: 0x40
    ::StringW FixedRegion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String BestRegionSummaryFromStorage
    // Size: 0x8
    // Offset: 0x48
    ::StringW BestRegionSummaryFromStorage;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String Server
    // Size: 0x8
    // Offset: 0x50
    ::StringW Server;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 Port
    // Size: 0x4
    // Offset: 0x58
    int Port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Port and: ProxyServer
    char __padding9[0x4] = {};
    // public System.String ProxyServer
    // Size: 0x8
    // Offset: 0x60
    ::StringW ProxyServer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public ExitGames.Client.Photon.ConnectionProtocol Protocol
    // Size: 0x1
    // Offset: 0x68
    ::ExitGames::Client::Photon::ConnectionProtocol Protocol;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::ConnectionProtocol) == 0x1);
    // public System.Boolean EnableProtocolFallback
    // Size: 0x1
    // Offset: 0x69
    bool EnableProtocolFallback;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableProtocolFallback and: AuthMode
    char __padding12[0x2] = {};
    // public Fusion.Photon.Realtime.AuthModeOption AuthMode
    // Size: 0x4
    // Offset: 0x6C
    ::Fusion::Photon::Realtime::AuthModeOption AuthMode;
    // Field size check
    static_assert(sizeof(::Fusion::Photon::Realtime::AuthModeOption) == 0x4);
    // public System.Boolean EnableLobbyStatistics
    // Size: 0x1
    // Offset: 0x70
    bool EnableLobbyStatistics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public ExitGames.Client.Photon.DebugLevel NetworkLogging
    // Size: 0x1
    // Offset: 0x71
    ::ExitGames::Client::Photon::DebugLevel NetworkLogging;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::DebugLevel) == 0x1);
    public:
    // Get instance field reference: public System.String AppIdRealtime
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppIdRealtime();
    // Get instance field reference: public System.String AppIdFusion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppIdFusion();
    // Get instance field reference: public System.String AppIdChat
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppIdChat();
    // Get instance field reference: public System.String AppIdVoice
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppIdVoice();
    // Get instance field reference: public System.String AppVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_AppVersion();
    // Get instance field reference: public System.Boolean UseNameServer
    [[deprecated("Use field access instead!")]] bool& dyn_UseNameServer();
    // Get instance field reference: public System.String FixedRegion
    [[deprecated("Use field access instead!")]] ::StringW& dyn_FixedRegion();
    // Get instance field reference: public System.String BestRegionSummaryFromStorage
    [[deprecated("Use field access instead!")]] ::StringW& dyn_BestRegionSummaryFromStorage();
    // Get instance field reference: public System.String Server
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Server();
    // Get instance field reference: public System.Int32 Port
    [[deprecated("Use field access instead!")]] int& dyn_Port();
    // Get instance field reference: public System.String ProxyServer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ProxyServer();
    // Get instance field reference: public ExitGames.Client.Photon.ConnectionProtocol Protocol
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::ConnectionProtocol& dyn_Protocol();
    // Get instance field reference: public System.Boolean EnableProtocolFallback
    [[deprecated("Use field access instead!")]] bool& dyn_EnableProtocolFallback();
    // Get instance field reference: public Fusion.Photon.Realtime.AuthModeOption AuthMode
    [[deprecated("Use field access instead!")]] ::Fusion::Photon::Realtime::AuthModeOption& dyn_AuthMode();
    // Get instance field reference: public System.Boolean EnableLobbyStatistics
    [[deprecated("Use field access instead!")]] bool& dyn_EnableLobbyStatistics();
    // Get instance field reference: public ExitGames.Client.Photon.DebugLevel NetworkLogging
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::DebugLevel& dyn_NetworkLogging();
    // public System.Boolean get_IsMasterServerAddress()
    // Offset: 0x2ADF3D4
    bool get_IsMasterServerAddress();
    // public System.Boolean get_IsBestRegion()
    // Offset: 0x2ADF3E4
    bool get_IsBestRegion();
    // public System.Boolean get_IsDefaultNameServer()
    // Offset: 0x2ADF400
    bool get_IsDefaultNameServer();
    // public System.Boolean get_IsDefaultPort()
    // Offset: 0x2ADF41C
    bool get_IsDefaultPort();
    // public System.String ToStringFull()
    // Offset: 0x2ADF42C
    ::StringW ToStringFull();
    // static public System.Boolean IsAppId(System.String val)
    // Offset: 0x2ADFB5C
    static bool IsAppId(::StringW val);
    // private System.String HideAppId(System.String appId)
    // Offset: 0x2ADFACC
    ::StringW HideAppId(::StringW appId);
    // public Fusion.Photon.Realtime.AppSettings CopyTo(Fusion.Photon.Realtime.AppSettings d)
    // Offset: 0x2ADFBFC
    ::Fusion::Photon::Realtime::AppSettings* CopyTo(::Fusion::Photon::Realtime::AppSettings* d);
    // public Fusion.Photon.Realtime.AppSettings GetCopy()
    // Offset: 0x2ADE140
    ::Fusion::Photon::Realtime::AppSettings* GetCopy();
    // public System.Void .ctor()
    // Offset: 0x2ADFCEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AppSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Photon::Realtime::AppSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AppSettings*, creationType>()));
    }
  }; // Fusion.Photon.Realtime.AppSettings
  #pragma pack(pop)
  static check_size<sizeof(AppSettings), 113 + sizeof(::ExitGames::Client::Photon::DebugLevel)> __Fusion_Photon_Realtime_AppSettingsSizeCheck;
  static_assert(sizeof(AppSettings) == 0x72);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::get_IsMasterServerAddress
// Il2CppName: get_IsMasterServerAddress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::get_IsMasterServerAddress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "get_IsMasterServerAddress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::get_IsBestRegion
// Il2CppName: get_IsBestRegion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::get_IsBestRegion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "get_IsBestRegion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::get_IsDefaultNameServer
// Il2CppName: get_IsDefaultNameServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::get_IsDefaultNameServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "get_IsDefaultNameServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::get_IsDefaultPort
// Il2CppName: get_IsDefaultPort
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::get_IsDefaultPort)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "get_IsDefaultPort", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::ToStringFull
// Il2CppName: ToStringFull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::ToStringFull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "ToStringFull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::IsAppId
// Il2CppName: IsAppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&Fusion::Photon::Realtime::AppSettings::IsAppId)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "IsAppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::HideAppId
// Il2CppName: HideAppId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Photon::Realtime::AppSettings::*)(::StringW)>(&Fusion::Photon::Realtime::AppSettings::HideAppId)> {
  static const MethodInfo* get() {
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "HideAppId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{appId});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Photon::Realtime::AppSettings* (Fusion::Photon::Realtime::AppSettings::*)(::Fusion::Photon::Realtime::AppSettings*)>(&Fusion::Photon::Realtime::AppSettings::CopyTo)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("Fusion.Photon.Realtime", "AppSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::GetCopy
// Il2CppName: GetCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Photon::Realtime::AppSettings* (Fusion::Photon::Realtime::AppSettings::*)()>(&Fusion::Photon::Realtime::AppSettings::GetCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Photon::Realtime::AppSettings*), "GetCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Photon::Realtime::AppSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!