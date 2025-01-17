// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.IWitRequestEndpointInfo
#include "Meta/WitAi/IWitRequestEndpointInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Configuration
namespace Meta::WitAi::Data::Configuration {
  // Forward declaring type: WitConfiguration
  class WitConfiguration;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Configuration
namespace Meta::WitAi::Configuration {
  // Forward declaring type: WitEndpointConfig
  class WitEndpointConfig;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Configuration::WitEndpointConfig);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Configuration::WitEndpointConfig*, "Meta.WitAi.Configuration", "WitEndpointConfig");
// Type namespace: Meta.WitAi.Configuration
namespace Meta::WitAi::Configuration {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Configuration.WitEndpointConfig
  // [TokenAttribute] Offset: FFFFFFFF
  class WitEndpointConfig : public ::Il2CppObject/*, public ::Meta::WitAi::IWitRequestEndpointInfo*/ {
    public:
    public:
    // private System.String _uriScheme
    // Size: 0x8
    // Offset: 0x10
    ::StringW uriScheme;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _authority
    // Size: 0x8
    // Offset: 0x18
    ::StringW authority;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 _port
    // Size: 0x4
    // Offset: 0x20
    int port;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: port and: witApiVersion
    char __padding2[0x4] = {};
    // private System.String _witApiVersion
    // Size: 0x8
    // Offset: 0x28
    ::StringW witApiVersion;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _message
    // Size: 0x8
    // Offset: 0x30
    ::StringW message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _speech
    // Size: 0x8
    // Offset: 0x38
    ::StringW speech;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _dictation
    // Size: 0x8
    // Offset: 0x40
    ::StringW dictation;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _synthesize
    // Size: 0x8
    // Offset: 0x48
    ::StringW synthesize;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _event
    // Size: 0x8
    // Offset: 0x50
    ::StringW event;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _converse
    // Size: 0x8
    // Offset: 0x58
    ::StringW converse;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::IWitRequestEndpointInfo
    operator ::Meta::WitAi::IWitRequestEndpointInfo() noexcept {
      return *reinterpret_cast<::Meta::WitAi::IWitRequestEndpointInfo*>(this);
    }
    // Get static field: static private Meta.WitAi.Configuration.WitEndpointConfig defaultEndpointConfig
    static ::Meta::WitAi::Configuration::WitEndpointConfig* _get_defaultEndpointConfig();
    // Set static field: static private Meta.WitAi.Configuration.WitEndpointConfig defaultEndpointConfig
    static void _set_defaultEndpointConfig(::Meta::WitAi::Configuration::WitEndpointConfig* value);
    // Get instance field reference: private System.String _uriScheme
    [[deprecated("Use field access instead!")]] ::StringW& dyn__uriScheme();
    // Get instance field reference: private System.String _authority
    [[deprecated("Use field access instead!")]] ::StringW& dyn__authority();
    // Get instance field reference: private System.Int32 _port
    [[deprecated("Use field access instead!")]] int& dyn__port();
    // Get instance field reference: private System.String _witApiVersion
    [[deprecated("Use field access instead!")]] ::StringW& dyn__witApiVersion();
    // Get instance field reference: private System.String _message
    [[deprecated("Use field access instead!")]] ::StringW& dyn__message();
    // Get instance field reference: private System.String _speech
    [[deprecated("Use field access instead!")]] ::StringW& dyn__speech();
    // Get instance field reference: private System.String _dictation
    [[deprecated("Use field access instead!")]] ::StringW& dyn__dictation();
    // Get instance field reference: private System.String _synthesize
    [[deprecated("Use field access instead!")]] ::StringW& dyn__synthesize();
    // Get instance field reference: private System.String _event
    [[deprecated("Use field access instead!")]] ::StringW& dyn__event();
    // Get instance field reference: private System.String _converse
    [[deprecated("Use field access instead!")]] ::StringW& dyn__converse();
    // public System.String get_UriScheme()
    // Offset: 0x443CD84
    ::StringW get_UriScheme();
    // public System.String get_Authority()
    // Offset: 0x443CDDC
    ::StringW get_Authority();
    // public System.Int32 get_Port()
    // Offset: 0x443CE34
    int get_Port();
    // public System.String get_WitApiVersion()
    // Offset: 0x443CE44
    ::StringW get_WitApiVersion();
    // public System.String get_Message()
    // Offset: 0x443CE9C
    ::StringW get_Message();
    // public System.String get_Speech()
    // Offset: 0x442C348
    ::StringW get_Speech();
    // public System.String get_Dictation()
    // Offset: 0x442C3A0
    ::StringW get_Dictation();
    // public System.String get_Synthesize()
    // Offset: 0x443CEF4
    ::StringW get_Synthesize();
    // public System.String get_Event()
    // Offset: 0x443CF4C
    ::StringW get_Event();
    // public System.String get_Converse()
    // Offset: 0x443CFA4
    ::StringW get_Converse();
    // static public Meta.WitAi.Configuration.WitEndpointConfig GetEndpointConfig(Meta.WitAi.Data.Configuration.WitConfiguration witConfig)
    // Offset: 0x442C2A8
    static ::Meta::WitAi::Configuration::WitEndpointConfig* GetEndpointConfig(::Meta::WitAi::Data::Configuration::WitConfiguration* witConfig);
    // public System.Void .ctor()
    // Offset: 0x443CFFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitEndpointConfig* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Configuration::WitEndpointConfig::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitEndpointConfig*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x443D004
    static void _cctor();
  }; // Meta.WitAi.Configuration.WitEndpointConfig
  #pragma pack(pop)
  static check_size<sizeof(WitEndpointConfig), 88 + sizeof(::StringW)> __Meta_WitAi_Configuration_WitEndpointConfigSizeCheck;
  static_assert(sizeof(WitEndpointConfig) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_UriScheme
// Il2CppName: get_UriScheme
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_UriScheme)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_UriScheme", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Authority
// Il2CppName: get_Authority
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Authority)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Authority", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Port
// Il2CppName: get_Port
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Port)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Port", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_WitApiVersion
// Il2CppName: get_WitApiVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_WitApiVersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_WitApiVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Speech
// Il2CppName: get_Speech
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Speech)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Speech", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Dictation
// Il2CppName: get_Dictation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Dictation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Dictation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Synthesize
// Il2CppName: get_Synthesize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Synthesize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Synthesize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Event
// Il2CppName: get_Event
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Event)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Event", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::get_Converse
// Il2CppName: get_Converse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Configuration::WitEndpointConfig::*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::get_Converse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "get_Converse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::GetEndpointConfig
// Il2CppName: GetEndpointConfig
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Configuration::WitEndpointConfig* (*)(::Meta::WitAi::Data::Configuration::WitConfiguration*)>(&Meta::WitAi::Configuration::WitEndpointConfig::GetEndpointConfig)> {
  static const MethodInfo* get() {
    static auto* witConfig = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Configuration", "WitConfiguration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), "GetEndpointConfig", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{witConfig});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Configuration::WitEndpointConfig::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::WitAi::Configuration::WitEndpointConfig::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Configuration::WitEndpointConfig*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
