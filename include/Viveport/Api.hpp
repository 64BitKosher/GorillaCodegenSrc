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
// Forward declaring namespace: Viveport
namespace Viveport {
  // Forward declaring type: StatusCallback
  class StatusCallback;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Viveport::Internal
namespace Viveport::Internal {
  // Forward declaring type: GetLicenseCallback
  class GetLicenseCallback;
  // Forward declaring type: StatusCallback
  class StatusCallback;
  // Forward declaring type: QueryRuntimeModeCallback
  class QueryRuntimeModeCallback;
  // Forward declaring type: StatusCallback2
  class StatusCallback2;
}
// Completed forward declares
// Type namespace: Viveport
namespace Viveport {
  // Forward declaring type: Api
  class Api;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Viveport::Api);
DEFINE_IL2CPP_ARG_TYPE(::Viveport::Api*, "Viveport", "Api");
// Type namespace: Viveport
namespace Viveport {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Viveport.Api
  // [TokenAttribute] Offset: FFFFFFFF
  class Api : public ::Il2CppObject {
    public:
    // Nested type: ::Viveport::Api::LicenseChecker
    class LicenseChecker;
    // Get static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.GetLicenseCallback> InternalGetLicenseCallbacks
    static ::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>* _get_InternalGetLicenseCallbacks();
    // Set static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.GetLicenseCallback> InternalGetLicenseCallbacks
    static void _set_InternalGetLicenseCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::GetLicenseCallback*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.StatusCallback> InternalStatusCallbacks
    static ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>* _get_InternalStatusCallbacks();
    // Set static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.StatusCallback> InternalStatusCallbacks
    static void _set_InternalStatusCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.QueryRuntimeModeCallback> InternalQueryRunTimeCallbacks
    static ::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>* _get_InternalQueryRunTimeCallbacks();
    // Set static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.QueryRuntimeModeCallback> InternalQueryRunTimeCallbacks
    static void _set_InternalQueryRunTimeCallbacks(::System::Collections::Generic::List_1<::Viveport::Internal::QueryRuntimeModeCallback*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.StatusCallback2> InternalStatusCallback2s
    static ::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>* _get_InternalStatusCallback2s();
    // Set static field: static readonly System.Collections.Generic.List`1<Viveport.Internal.StatusCallback2> InternalStatusCallback2s
    static void _set_InternalStatusCallback2s(::System::Collections::Generic::List_1<::Viveport::Internal::StatusCallback2*>* value);
    // Get static field: static readonly System.Collections.Generic.List`1<Viveport.Api/LicenseChecker> InternalLicenseCheckers
    static ::System::Collections::Generic::List_1<::Viveport::Api::LicenseChecker*>* _get_InternalLicenseCheckers();
    // Set static field: static readonly System.Collections.Generic.List`1<Viveport.Api/LicenseChecker> InternalLicenseCheckers
    static void _set_InternalLicenseCheckers(::System::Collections::Generic::List_1<::Viveport::Api::LicenseChecker*>* value);
    // Get static field: static private Viveport.Internal.StatusCallback initIl2cppCallback
    static ::Viveport::Internal::StatusCallback* _get_initIl2cppCallback();
    // Set static field: static private Viveport.Internal.StatusCallback initIl2cppCallback
    static void _set_initIl2cppCallback(::Viveport::Internal::StatusCallback* value);
    // Get static field: static private Viveport.Internal.StatusCallback shutdownIl2cppCallback
    static ::Viveport::Internal::StatusCallback* _get_shutdownIl2cppCallback();
    // Set static field: static private Viveport.Internal.StatusCallback shutdownIl2cppCallback
    static void _set_shutdownIl2cppCallback(::Viveport::Internal::StatusCallback* value);
    // Get static field: static private Viveport.Internal.QueryRuntimeModeCallback queryRuntimeModeIl2cppCallback
    static ::Viveport::Internal::QueryRuntimeModeCallback* _get_queryRuntimeModeIl2cppCallback();
    // Set static field: static private Viveport.Internal.QueryRuntimeModeCallback queryRuntimeModeIl2cppCallback
    static void _set_queryRuntimeModeIl2cppCallback(::Viveport::Internal::QueryRuntimeModeCallback* value);
    // Get static field: static private readonly System.String VERSION
    static ::StringW _get_VERSION();
    // Set static field: static private readonly System.String VERSION
    static void _set_VERSION(::StringW value);
    // Get static field: static private System.String _appId
    static ::StringW _get__appId();
    // Set static field: static private System.String _appId
    static void _set__appId(::StringW value);
    // Get static field: static private System.String _appKey
    static ::StringW _get__appKey();
    // Set static field: static private System.String _appKey
    static void _set__appKey(::StringW value);
    // static public System.Void GetLicense(Viveport.Api/LicenseChecker checker, System.String appId, System.String appKey)
    // Offset: 0x27AACA8
    static void GetLicense(::Viveport::Api::LicenseChecker* checker, ::StringW appId, ::StringW appKey);
    // static private System.Void InitIl2cppCallback(System.Int32 errorCode)
    // Offset: 0x27AABC0
    static void InitIl2cppCallback(int errorCode);
    // static public System.Int32 Init(Viveport.StatusCallback callback, System.String appId)
    // Offset: 0x27AAF64
    static int Init(::Viveport::StatusCallback* callback, ::StringW appId);
    // static private System.Void ShutdownIl2cppCallback(System.Int32 errorCode)
    // Offset: 0x27AAC34
    static void ShutdownIl2cppCallback(int errorCode);
    // static public System.Int32 Shutdown(Viveport.StatusCallback callback)
    // Offset: 0x27AB380
    static int Shutdown(::Viveport::StatusCallback* callback);
    // static public System.String Version()
    // Offset: 0x27AB660
    static ::StringW Version();
    // public System.Void .ctor()
    // Offset: 0x27AB7E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Api* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Viveport::Api::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Api*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x27AB7EC
    static void _cctor();
  }; // Viveport.Api
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Viveport::Api::GetLicense
// Il2CppName: GetLicense
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Viveport::Api::LicenseChecker*, ::StringW, ::StringW)>(&Viveport::Api::GetLicense)> {
  static const MethodInfo* get() {
    static auto* checker = &::il2cpp_utils::GetClassFromName("Viveport", "Api/LicenseChecker")->byval_arg;
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* appKey = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "GetLicense", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checker, appId, appKey});
  }
};
// Writing MetadataGetter for method: Viveport::Api::InitIl2cppCallback
// Il2CppName: InitIl2cppCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Viveport::Api::InitIl2cppCallback)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "InitIl2cppCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
// Writing MetadataGetter for method: Viveport::Api::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Viveport::StatusCallback*, ::StringW)>(&Viveport::Api::Init)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Viveport", "StatusCallback")->byval_arg;
    static auto* appId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, appId});
  }
};
// Writing MetadataGetter for method: Viveport::Api::ShutdownIl2cppCallback
// Il2CppName: ShutdownIl2cppCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int)>(&Viveport::Api::ShutdownIl2cppCallback)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "ShutdownIl2cppCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode});
  }
};
// Writing MetadataGetter for method: Viveport::Api::Shutdown
// Il2CppName: Shutdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Viveport::StatusCallback*)>(&Viveport::Api::Shutdown)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::GetClassFromName("Viveport", "StatusCallback")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "Shutdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback});
  }
};
// Writing MetadataGetter for method: Viveport::Api::Version
// Il2CppName: Version
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Viveport::Api::Version)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), "Version", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Viveport::Api::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Viveport::Api::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Viveport::Api::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Viveport::Api*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
