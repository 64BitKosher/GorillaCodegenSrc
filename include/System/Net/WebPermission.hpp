// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.CodeAccessPermission
#include "System/Security/CodeAccessPermission.hpp"
// Including type: System.Security.Permissions.IUnrestrictedPermission
#include "System/Security/Permissions/IUnrestrictedPermission.hpp"
// Including type: System.Security.Permissions.PermissionState
#include "System/Security/Permissions/PermissionState.hpp"
// Including type: System.Net.NetworkAccess
#include "System/Net/NetworkAccess.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Regex
  class Regex;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: DelayedRegex
  class DelayedRegex;
}
// Forward declaring namespace: System::Security
namespace System::Security {
  // Skipping declaration: IPermission because it is already included!
  // Forward declaring type: SecurityElement
  class SecurityElement;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebPermission
  class WebPermission;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebPermission);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebPermission*, "System.Net", "WebPermission");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebPermission
  // [TokenAttribute] Offset: FFFFFFFF
  class WebPermission : public ::System::Security::CodeAccessPermission/*, public ::System::Security::Permissions::IUnrestrictedPermission*/ {
    public:
    public:
    // private System.Boolean m_noRestriction
    // Size: 0x1
    // Offset: 0x10
    bool m_noRestriction;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_UnrestrictedConnect
    // Size: 0x1
    // Offset: 0x11
    bool m_UnrestrictedConnect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_UnrestrictedAccept
    // Size: 0x1
    // Offset: 0x12
    bool m_UnrestrictedAccept;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UnrestrictedAccept and: m_connectList
    char __padding2[0x5] = {};
    // private System.Collections.ArrayList m_connectList
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::ArrayList* m_connectList;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList m_acceptList
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::ArrayList* m_acceptList;
    // Field size check
    static_assert(sizeof(::System::Collections::ArrayList*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Security::Permissions::IUnrestrictedPermission
    operator ::System::Security::Permissions::IUnrestrictedPermission() noexcept {
      return *reinterpret_cast<::System::Security::Permissions::IUnrestrictedPermission*>(this);
    }
    // static field const value: static System.String MatchAll
    static constexpr const char* MatchAll = ".*";
    // Get static field: static System.String MatchAll
    static ::StringW _get_MatchAll();
    // Set static field: static System.String MatchAll
    static void _set_MatchAll(::StringW value);
    // Get static field: static private System.Text.RegularExpressions.Regex s_MatchAllRegex
    static ::System::Text::RegularExpressions::Regex* _get_s_MatchAllRegex();
    // Set static field: static private System.Text.RegularExpressions.Regex s_MatchAllRegex
    static void _set_s_MatchAllRegex(::System::Text::RegularExpressions::Regex* value);
    // Get instance field reference: private System.Boolean m_noRestriction
    [[deprecated("Use field access instead!")]] bool& dyn_m_noRestriction();
    // Get instance field reference: private System.Boolean m_UnrestrictedConnect
    [[deprecated("Use field access instead!")]] bool& dyn_m_UnrestrictedConnect();
    // Get instance field reference: private System.Boolean m_UnrestrictedAccept
    [[deprecated("Use field access instead!")]] bool& dyn_m_UnrestrictedAccept();
    // Get instance field reference: private System.Collections.ArrayList m_connectList
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_m_connectList();
    // Get instance field reference: private System.Collections.ArrayList m_acceptList
    [[deprecated("Use field access instead!")]] ::System::Collections::ArrayList*& dyn_m_acceptList();
    // static System.Text.RegularExpressions.Regex get_MatchAllRegex()
    // Offset: 0x4FE04E0
    static ::System::Text::RegularExpressions::Regex* get_MatchAllRegex();
    // public System.Collections.IEnumerator get_ConnectList()
    // Offset: 0x4FE05A4
    ::System::Collections::IEnumerator* get_ConnectList();
    // public System.Collections.IEnumerator get_AcceptList()
    // Offset: 0x4FE08A4
    ::System::Collections::IEnumerator* get_AcceptList();
    // public System.Void .ctor(System.Security.Permissions.PermissionState state)
    // Offset: 0x4FDF504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(::System::Security::Permissions::PermissionState state) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(state)));
    }
    // System.Void .ctor(System.Boolean unrestricted)
    // Offset: 0x4FE0BA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(bool unrestricted) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(unrestricted)));
    }
    // public System.Void .ctor()
    // Offset: 0x4FE0C4C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>()));
    }
    // System.Void .ctor(System.Net.NetworkAccess access)
    // Offset: 0x4FDF5B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(::System::Net::NetworkAccess access) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(access)));
    }
    // public System.Void .ctor(System.Net.NetworkAccess access, System.Text.RegularExpressions.Regex uriRegex)
    // Offset: 0x4FE0CDC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(::System::Net::NetworkAccess access, ::System::Text::RegularExpressions::Regex* uriRegex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(access, uriRegex)));
    }
    // public System.Void .ctor(System.Net.NetworkAccess access, System.String uriString)
    // Offset: 0x4FE0F0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(::System::Net::NetworkAccess access, ::StringW uriString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(access, uriString)));
    }
    // System.Void .ctor(System.Net.NetworkAccess access, System.Uri uri)
    // Offset: 0x4FE0FBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebPermission* New_ctor(::System::Net::NetworkAccess access, ::System::Uri* uri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebPermission::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebPermission*, creationType>(access, uri)));
    }
    // public System.Void AddPermission(System.Net.NetworkAccess access, System.String uriString)
    // Offset: 0x4FDFCA8
    void AddPermission(::System::Net::NetworkAccess access, ::StringW uriString);
    // System.Void AddPermission(System.Net.NetworkAccess access, System.Uri uri)
    // Offset: 0x4FE106C
    void AddPermission(::System::Net::NetworkAccess access, ::System::Uri* uri);
    // public System.Void AddPermission(System.Net.NetworkAccess access, System.Text.RegularExpressions.Regex uriRegex)
    // Offset: 0x4FE0D8C
    void AddPermission(::System::Net::NetworkAccess access, ::System::Text::RegularExpressions::Regex* uriRegex);
    // System.Void AddAsPattern(System.Net.NetworkAccess access, System.Net.DelayedRegex uriRegexPattern)
    // Offset: 0x4FDF664
    void AddAsPattern(::System::Net::NetworkAccess access, ::System::Net::DelayedRegex* uriRegexPattern);
    // public System.Boolean IsUnrestricted()
    // Offset: 0x4FE171C
    bool IsUnrestricted();
    // static private System.Boolean isSpecialSubsetCase(System.String regexToCheck, System.Collections.ArrayList permList)
    // Offset: 0x4FE20E8
    static bool isSpecialSubsetCase(::StringW regexToCheck, ::System::Collections::ArrayList* permList);
    // static private System.Boolean isMatchedURI(System.Object uriToCheck, System.Collections.ArrayList uriPatternList)
    // Offset: 0x4FE2534
    static bool isMatchedURI(::Il2CppObject* uriToCheck, ::System::Collections::ArrayList* uriPatternList);
    // static private System.Void intersectList(System.Collections.ArrayList A, System.Collections.ArrayList B, System.Collections.ArrayList result)
    // Offset: 0x4FE335C
    static void intersectList(::System::Collections::ArrayList* A, ::System::Collections::ArrayList* B, ::System::Collections::ArrayList* result);
    // static private System.Object intersectPair(System.Object L, System.Object R, out System.Boolean isUri)
    // Offset: 0x4FE5BA8
    static ::Il2CppObject* intersectPair(::Il2CppObject* L, ::Il2CppObject* R, ByRef<bool> isUri);
    // public override System.Security.IPermission Copy()
    // Offset: 0x4FE1724
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Security.IPermission CodeAccessPermission::Copy()
    ::System::Security::IPermission* Copy();
    // public override System.Boolean IsSubsetOf(System.Security.IPermission target)
    // Offset: 0x4FE18E0
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Boolean CodeAccessPermission::IsSubsetOf(System.Security.IPermission target)
    bool IsSubsetOf(::System::Security::IPermission* target);
    // public override System.Security.IPermission Union(System.Security.IPermission target)
    // Offset: 0x4FE2AC0
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Security.IPermission CodeAccessPermission::Union(System.Security.IPermission target)
    ::System::Security::IPermission* Union(::System::Security::IPermission* target);
    // public override System.Security.IPermission Intersect(System.Security.IPermission target)
    // Offset: 0x4FE305C
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Security.IPermission CodeAccessPermission::Intersect(System.Security.IPermission target)
    ::System::Security::IPermission* Intersect(::System::Security::IPermission* target);
    // public override System.Void FromXml(System.Security.SecurityElement securityElement)
    // Offset: 0x4FE4424
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Void CodeAccessPermission::FromXml(System.Security.SecurityElement securityElement)
    void FromXml(::System::Security::SecurityElement* securityElement);
    // public override System.Security.SecurityElement ToXml()
    // Offset: 0x4FE4F98
    // Implemented from: System.Security.CodeAccessPermission
    // Base method: System.Security.SecurityElement CodeAccessPermission::ToXml()
    ::System::Security::SecurityElement* ToXml();
  }; // System.Net.WebPermission
  #pragma pack(pop)
  static check_size<sizeof(WebPermission), 32 + sizeof(::System::Collections::ArrayList*)> __System_Net_WebPermissionSizeCheck;
  static_assert(sizeof(WebPermission) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebPermission::get_MatchAllRegex
// Il2CppName: get_MatchAllRegex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Regex* (*)()>(&System::Net::WebPermission::get_MatchAllRegex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "get_MatchAllRegex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::get_ConnectList
// Il2CppName: get_ConnectList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::WebPermission::*)()>(&System::Net::WebPermission::get_ConnectList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "get_ConnectList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::get_AcceptList
// Il2CppName: get_AcceptList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (System::Net::WebPermission::*)()>(&System::Net::WebPermission::get_AcceptList)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "get_AcceptList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::WebPermission::AddPermission
// Il2CppName: AddPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::StringW)>(&System::Net::WebPermission::AddPermission)> {
  static const MethodInfo* get() {
    static auto* access = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkAccess")->byval_arg;
    static auto* uriString = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "AddPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{access, uriString});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::AddPermission
// Il2CppName: AddPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Uri*)>(&System::Net::WebPermission::AddPermission)> {
  static const MethodInfo* get() {
    static auto* access = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkAccess")->byval_arg;
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "AddPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{access, uri});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::AddPermission
// Il2CppName: AddPermission
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Text::RegularExpressions::Regex*)>(&System::Net::WebPermission::AddPermission)> {
  static const MethodInfo* get() {
    static auto* access = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkAccess")->byval_arg;
    static auto* uriRegex = &::il2cpp_utils::GetClassFromName("System.Text.RegularExpressions", "Regex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "AddPermission", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{access, uriRegex});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::AddAsPattern
// Il2CppName: AddAsPattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebPermission::*)(::System::Net::NetworkAccess, ::System::Net::DelayedRegex*)>(&System::Net::WebPermission::AddAsPattern)> {
  static const MethodInfo* get() {
    static auto* access = &::il2cpp_utils::GetClassFromName("System.Net", "NetworkAccess")->byval_arg;
    static auto* uriRegexPattern = &::il2cpp_utils::GetClassFromName("System.Net", "DelayedRegex")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "AddAsPattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{access, uriRegexPattern});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::IsUnrestricted
// Il2CppName: IsUnrestricted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebPermission::*)()>(&System::Net::WebPermission::IsUnrestricted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "IsUnrestricted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::isSpecialSubsetCase
// Il2CppName: isSpecialSubsetCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Collections::ArrayList*)>(&System::Net::WebPermission::isSpecialSubsetCase)> {
  static const MethodInfo* get() {
    static auto* regexToCheck = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* permList = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "isSpecialSubsetCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{regexToCheck, permList});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::isMatchedURI
// Il2CppName: isMatchedURI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::System::Collections::ArrayList*)>(&System::Net::WebPermission::isMatchedURI)> {
  static const MethodInfo* get() {
    static auto* uriToCheck = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* uriPatternList = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "isMatchedURI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uriToCheck, uriPatternList});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::intersectList
// Il2CppName: intersectList
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::ArrayList*, ::System::Collections::ArrayList*, ::System::Collections::ArrayList*)>(&System::Net::WebPermission::intersectList)> {
  static const MethodInfo* get() {
    static auto* A = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* B = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System.Collections", "ArrayList")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "intersectList", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{A, B, result});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::intersectPair
// Il2CppName: intersectPair
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::Il2CppObject*, ByRef<bool>)>(&System::Net::WebPermission::intersectPair)> {
  static const MethodInfo* get() {
    static auto* L = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* R = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* isUri = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "intersectPair", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{L, R, isUri});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::Copy
// Il2CppName: Copy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::IPermission* (System::Net::WebPermission::*)()>(&System::Net::WebPermission::Copy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "Copy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::IsSubsetOf
// Il2CppName: IsSubsetOf
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::WebPermission::*)(::System::Security::IPermission*)>(&System::Net::WebPermission::IsSubsetOf)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "IsSubsetOf", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::Union
// Il2CppName: Union
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::IPermission* (System::Net::WebPermission::*)(::System::Security::IPermission*)>(&System::Net::WebPermission::Union)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "Union", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::Intersect
// Il2CppName: Intersect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::IPermission* (System::Net::WebPermission::*)(::System::Security::IPermission*)>(&System::Net::WebPermission::Intersect)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Security", "IPermission")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "Intersect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::FromXml
// Il2CppName: FromXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::WebPermission::*)(::System::Security::SecurityElement*)>(&System::Net::WebPermission::FromXml)> {
  static const MethodInfo* get() {
    static auto* securityElement = &::il2cpp_utils::GetClassFromName("System.Security", "SecurityElement")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "FromXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{securityElement});
  }
};
// Writing MetadataGetter for method: System::Net::WebPermission::ToXml
// Il2CppName: ToXml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::SecurityElement* (System::Net::WebPermission::*)()>(&System::Net::WebPermission::ToXml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebPermission*), "ToXml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
