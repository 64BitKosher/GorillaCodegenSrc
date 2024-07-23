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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: CookieTokenizer
  class CookieTokenizer;
  // Forward declaring type: Cookie
  class Cookie;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: CookieParser
  class CookieParser;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::CookieParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CookieParser*, "System.Net", "CookieParser");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.CookieParser
  // [TokenAttribute] Offset: FFFFFFFF
  class CookieParser : public ::Il2CppObject {
    public:
    public:
    // private System.Net.CookieTokenizer m_tokenizer
    // Size: 0x8
    // Offset: 0x10
    ::System::Net::CookieTokenizer* m_tokenizer;
    // Field size check
    static_assert(sizeof(::System::Net::CookieTokenizer*) == 0x8);
    // private System.Net.Cookie m_savedCookie
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Cookie* m_savedCookie;
    // Field size check
    static_assert(sizeof(::System::Net::Cookie*) == 0x8);
    public:
    // Get instance field reference: private System.Net.CookieTokenizer m_tokenizer
    [[deprecated("Use field access instead!")]] ::System::Net::CookieTokenizer*& dyn_m_tokenizer();
    // Get instance field reference: private System.Net.Cookie m_savedCookie
    [[deprecated("Use field access instead!")]] ::System::Net::Cookie*& dyn_m_savedCookie();
    // System.Void .ctor(System.String cookieString)
    // Offset: 0x4FF7624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CookieParser* New_ctor(::StringW cookieString) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::CookieParser::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CookieParser*, creationType>(cookieString)));
    }
    // System.Net.Cookie Get()
    // Offset: 0x4FF769C
    ::System::Net::Cookie* Get();
    // System.Net.Cookie GetServer()
    // Offset: 0x4FF7BD8
    ::System::Net::Cookie* GetServer();
    // static System.String CheckQuoted(System.String value)
    // Offset: 0x4FF5A84
    static ::StringW CheckQuoted(::StringW value);
  }; // System.Net.CookieParser
  #pragma pack(pop)
  static check_size<sizeof(CookieParser), 24 + sizeof(::System::Net::Cookie*)> __System_Net_CookieParserSizeCheck;
  static_assert(sizeof(CookieParser) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::CookieParser::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::CookieParser::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cookie* (System::Net::CookieParser::*)()>(&System::Net::CookieParser::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieParser*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieParser::GetServer
// Il2CppName: GetServer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::Cookie* (System::Net::CookieParser::*)()>(&System::Net::CookieParser::GetServer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieParser*), "GetServer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::CookieParser::CheckQuoted
// Il2CppName: CheckQuoted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&System::Net::CookieParser::CheckQuoted)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::CookieParser*), "CheckQuoted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
