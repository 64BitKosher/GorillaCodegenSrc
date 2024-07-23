// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpValidationHelpers
  class HttpValidationHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpValidationHelpers*, "System.Net", "HttpValidationHelpers");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpValidationHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpValidationHelpers : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Char[] s_httpTrimCharacters
    static ::ArrayW<::Il2CppChar> _get_s_httpTrimCharacters();
    // Set static field: static private readonly System.Char[] s_httpTrimCharacters
    static void _set_s_httpTrimCharacters(::ArrayW<::Il2CppChar> value);
    // static System.String CheckBadHeaderNameChars(System.String name)
    // Offset: 0x4FA5004
    static ::StringW CheckBadHeaderNameChars(::StringW name);
    // static System.Boolean ContainsNonAsciiChars(System.String token)
    // Offset: 0x4FA51DC
    static bool ContainsNonAsciiChars(::StringW token);
    // static System.Boolean IsValidToken(System.String token)
    // Offset: 0x4FA5260
    static bool IsValidToken(::StringW token);
    // static public System.String CheckBadHeaderValueChars(System.String value)
    // Offset: 0x4FA52F8
    static ::StringW CheckBadHeaderValueChars(::StringW value);
    // static public System.Boolean IsInvalidMethodOrHeaderString(System.String stringValue)
    // Offset: 0x4FA50DC
    static bool IsInvalidMethodOrHeaderString(::StringW stringValue);
    // static private System.Void .cctor()
    // Offset: 0x4FA54DC
    static void _cctor();
  }; // System.Net.HttpValidationHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::CheckBadHeaderNameChars
// Il2CppName: CheckBadHeaderNameChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::HttpValidationHelpers::CheckBadHeaderNameChars)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), "CheckBadHeaderNameChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::ContainsNonAsciiChars
// Il2CppName: ContainsNonAsciiChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpValidationHelpers::ContainsNonAsciiChars)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), "ContainsNonAsciiChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::IsValidToken
// Il2CppName: IsValidToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpValidationHelpers::IsValidToken)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), "IsValidToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::CheckBadHeaderValueChars
// Il2CppName: CheckBadHeaderValueChars
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::HttpValidationHelpers::CheckBadHeaderValueChars)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), "CheckBadHeaderValueChars", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString
// Il2CppName: IsInvalidMethodOrHeaderString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&System::Net::HttpValidationHelpers::IsInvalidMethodOrHeaderString)> {
  static const MethodInfo* get() {
    static auto* stringValue = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), "IsInvalidMethodOrHeaderString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stringValue});
  }
};
// Writing MetadataGetter for method: System::Net::HttpValidationHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpValidationHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpValidationHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
