// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.Claims.ClaimsIdentity
#include "System/Security/Claims/ClaimsIdentity.hpp"
// Including type: System.Runtime.Serialization.IDeserializationCallback
#include "System/Runtime/Serialization/IDeserializationCallback.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Security.Principal.WindowsAccountType
#include "System/Security/Principal/WindowsAccountType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Security::Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsImpersonationContext
  class WindowsImpersonationContext;
}
// Completed forward declares
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Forward declaring type: WindowsIdentity
  class WindowsIdentity;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Principal::WindowsIdentity);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::WindowsIdentity*, "System.Security.Principal", "WindowsIdentity");
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.WindowsIdentity
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class WindowsIdentity : public ::System::Security::Claims::ClaimsIdentity/*, public ::System::Runtime::Serialization::IDeserializationCallback, public ::System::Runtime::Serialization::ISerializable, public ::System::IDisposable*/ {
    public:
    public:
    // private System.IntPtr _token
    // Size: 0x8
    // Offset: 0x78
    ::System::IntPtr token;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.String _type
    // Size: 0x8
    // Offset: 0x80
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Security.Principal.WindowsAccountType _account
    // Size: 0x4
    // Offset: 0x88
    ::System::Security::Principal::WindowsAccountType account;
    // Field size check
    static_assert(sizeof(::System::Security::Principal::WindowsAccountType) == 0x4);
    // private System.Boolean _authenticated
    // Size: 0x1
    // Offset: 0x8C
    bool authenticated;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: authenticated and: name
    char __padding3[0x3] = {};
    // private System.String _name
    // Size: 0x8
    // Offset: 0x90
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Runtime.Serialization.SerializationInfo _info
    // Size: 0x8
    // Offset: 0x98
    ::System::Runtime::Serialization::SerializationInfo* info;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::SerializationInfo*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::IDeserializationCallback
    operator ::System::Runtime::Serialization::IDeserializationCallback() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::IDeserializationCallback*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get static field: static private System.IntPtr invalidWindows
    static ::System::IntPtr _get_invalidWindows();
    // Set static field: static private System.IntPtr invalidWindows
    static void _set_invalidWindows(::System::IntPtr value);
    // Get instance field reference: private System.IntPtr _token
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn__token();
    // Get instance field reference: private System.String _type
    [[deprecated("Use field access instead!")]] ::StringW& dyn__type();
    // Get instance field reference: private System.Security.Principal.WindowsAccountType _account
    [[deprecated("Use field access instead!")]] ::System::Security::Principal::WindowsAccountType& dyn__account();
    // Get instance field reference: private System.Boolean _authenticated
    [[deprecated("Use field access instead!")]] bool& dyn__authenticated();
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private System.Runtime.Serialization.SerializationInfo _info
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::SerializationInfo*& dyn__info();
    // public System.Void .ctor(System.IntPtr userToken, System.String type, System.Security.Principal.WindowsAccountType acctType, System.Boolean isAuthenticated)
    // Offset: 0x451C440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsIdentity* New_ctor(::System::IntPtr userToken, ::StringW type, ::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::WindowsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsIdentity*, creationType>(userToken, type, acctType, isAuthenticated)));
    }
    // System.Void .ctor(System.Security.Claims.ClaimsIdentity claimsIdentity, System.IntPtr userToken)
    // Offset: 0x451C65C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsIdentity* New_ctor(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::WindowsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsIdentity*, creationType>(claimsIdentity, userToken)));
    }
    // public System.Void Dispose()
    // Offset: 0x451C6B4
    void Dispose();
    // static public System.Security.Principal.WindowsIdentity GetCurrent()
    // Offset: 0x451C6BC
    static ::System::Security::Principal::WindowsIdentity* GetCurrent();
    // public System.Security.Principal.WindowsImpersonationContext Impersonate()
    // Offset: 0x451C73C
    ::System::Security::Principal::WindowsImpersonationContext* Impersonate();
    // private System.Void System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object sender)
    // Offset: 0x451C8A8
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x451CBB0
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // System.Security.Claims.ClaimsIdentity CloneAsBase()
    // Offset: 0x451CD18
    ::System::Security::Claims::ClaimsIdentity* CloneAsBase();
    // System.IntPtr GetTokenInternal()
    // Offset: 0x451CEA0
    ::System::IntPtr GetTokenInternal();
    // private System.Void SetToken(System.IntPtr token)
    // Offset: 0x451C4BC
    void SetToken(::System::IntPtr token);
    // static System.IntPtr GetCurrentToken()
    // Offset: 0x451C738
    static ::System::IntPtr GetCurrentToken();
    // static private System.String GetTokenName(System.IntPtr token)
    // Offset: 0x451C8A4
    static ::StringW GetTokenName(::System::IntPtr token);
    // static private System.Void .cctor()
    // Offset: 0x451CEA8
    static void _cctor();
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x451C618
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.Void ClaimsIdentity::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindowsIdentity* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::Principal::WindowsIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindowsIdentity*, creationType>(info, context)));
    }
    // public override System.String get_AuthenticationType()
    // Offset: 0x451C820
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.String ClaimsIdentity::get_AuthenticationType()
    ::StringW get_AuthenticationType();
    // public override System.String get_Name()
    // Offset: 0x451C828
    // Implemented from: System.Security.Claims.ClaimsIdentity
    // Base method: System.String ClaimsIdentity::get_Name()
    ::StringW get_Name();
  }; // System.Security.Principal.WindowsIdentity
  #pragma pack(pop)
  static check_size<sizeof(WindowsIdentity), 152 + sizeof(::System::Runtime::Serialization::SerializationInfo*)> __System_Security_Principal_WindowsIdentitySizeCheck;
  static_assert(sizeof(WindowsIdentity) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::GetCurrent
// Il2CppName: GetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::WindowsIdentity* (*)()>(&System::Security::Principal::WindowsIdentity::GetCurrent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "GetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::Impersonate
// Il2CppName: Impersonate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::WindowsImpersonationContext* (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::Impersonate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "Impersonate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
// Il2CppName: System.Runtime.Serialization.IDeserializationCallback.OnDeserialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsIdentity::*)(::Il2CppObject*)>(&System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsIdentity::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::CloneAsBase
// Il2CppName: CloneAsBase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Claims::ClaimsIdentity* (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::CloneAsBase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "CloneAsBase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::GetTokenInternal
// Il2CppName: GetTokenInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::GetTokenInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "GetTokenInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::SetToken
// Il2CppName: SetToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Security::Principal::WindowsIdentity::*)(::System::IntPtr)>(&System::Security::Principal::WindowsIdentity::SetToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "SetToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::GetCurrentToken
// Il2CppName: GetCurrentToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&System::Security::Principal::WindowsIdentity::GetCurrentToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "GetCurrentToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::GetTokenName
// Il2CppName: GetTokenName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::IntPtr)>(&System::Security::Principal::WindowsIdentity::GetTokenName)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "GetTokenName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Security::Principal::WindowsIdentity::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::get_AuthenticationType
// Il2CppName: get_AuthenticationType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::get_AuthenticationType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "get_AuthenticationType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Security::Principal::WindowsIdentity::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Security::Principal::WindowsIdentity::*)()>(&System::Security::Principal::WindowsIdentity::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Principal::WindowsIdentity*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};