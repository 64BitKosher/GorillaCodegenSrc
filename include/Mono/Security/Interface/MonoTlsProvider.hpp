// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Interface::MonoTlsProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Interface::MonoTlsProvider*, "Mono.Security.Interface", "MonoTlsProvider");
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoTlsProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoTlsProvider : public ::Il2CppObject {
    public:
    // System.Void .ctor()
    // Offset: 0x448FDEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoTlsProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Interface::MonoTlsProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoTlsProvider*, creationType>()));
    }
    // public System.Guid get_ID()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Guid get_ID();
    // public System.String get_Name()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Name();
    // public System.Boolean get_SupportsSslStream()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsSslStream();
    // public System.Boolean get_SupportsConnectionInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsConnectionInfo();
    // public System.Boolean get_SupportsMonoExtensions()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsMonoExtensions();
    // public System.Security.Authentication.SslProtocols get_SupportedProtocols()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Security::Authentication::SslProtocols get_SupportedProtocols();
    // System.Boolean get_SupportsCleanShutdown()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_SupportsCleanShutdown();
  }; // Mono.Security.Interface.MonoTlsProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream
// Il2CppName: get_SupportsSslStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsSslStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsSslStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo
// Il2CppName: get_SupportsConnectionInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsConnectionInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsConnectionInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions
// Il2CppName: get_SupportsMonoExtensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsMonoExtensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsMonoExtensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols
// Il2CppName: get_SupportedProtocols
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Authentication::SslProtocols (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportedProtocols)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportedProtocols", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown
// Il2CppName: get_SupportsCleanShutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::Interface::MonoTlsProvider::*)()>(&Mono::Security::Interface::MonoTlsProvider::get_SupportsCleanShutdown)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Interface::MonoTlsProvider*), "get_SupportsCleanShutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
