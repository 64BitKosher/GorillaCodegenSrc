// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: UriComponents
  struct UriComponents;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IriHelper
  class IriHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IriHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IriHelper*, "System", "IriHelper");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IriHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class IriHelper : public ::Il2CppObject {
    public:
    // static System.Boolean CheckIriUnicodeRange(System.Char unicode, System.Boolean isQuery)
    // Offset: 0x4F60E20
    static bool CheckIriUnicodeRange(::Il2CppChar unicode, bool isQuery);
    // static System.Boolean CheckIriUnicodeRange(System.Char highSurr, System.Char lowSurr, ref System.Boolean surrogatePair, System.Boolean isQuery)
    // Offset: 0x4F60E78
    static bool CheckIriUnicodeRange(::Il2CppChar highSurr, ::Il2CppChar lowSurr, ByRef<bool> surrogatePair, bool isQuery);
    // static System.Boolean CheckIsReserved(System.Char ch, System.UriComponents component)
    // Offset: 0x4F614A8
    static bool CheckIsReserved(::Il2CppChar ch, ::System::UriComponents component);
    // static System.String EscapeUnescapeIri(System.Char* pInput, System.Int32 start, System.Int32 end, System.UriComponents component)
    // Offset: 0x4F615EC
    static ::StringW EscapeUnescapeIri(::Il2CppChar* pInput, int start, int end, ::System::UriComponents component);
  }; // System.IriHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IriHelper::CheckIriUnicodeRange
// Il2CppName: CheckIriUnicodeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, bool)>(&System::IriHelper::CheckIriUnicodeRange)> {
  static const MethodInfo* get() {
    static auto* unicode = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* isQuery = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIriUnicodeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{unicode, isQuery});
  }
};
// Writing MetadataGetter for method: System::IriHelper::CheckIriUnicodeRange
// Il2CppName: CheckIriUnicodeRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, ::Il2CppChar, ByRef<bool>, bool)>(&System::IriHelper::CheckIriUnicodeRange)> {
  static const MethodInfo* get() {
    static auto* highSurr = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* lowSurr = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* surrogatePair = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* isQuery = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIriUnicodeRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highSurr, lowSurr, surrogatePair, isQuery});
  }
};
// Writing MetadataGetter for method: System::IriHelper::CheckIsReserved
// Il2CppName: CheckIsReserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppChar, ::System::UriComponents)>(&System::IriHelper::CheckIsReserved)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "UriComponents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "CheckIsReserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch, component});
  }
};
// Writing MetadataGetter for method: System::IriHelper::EscapeUnescapeIri
// Il2CppName: EscapeUnescapeIri
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Il2CppChar*, int, int, ::System::UriComponents)>(&System::IriHelper::EscapeUnescapeIri)> {
  static const MethodInfo* get() {
    static auto* pInput = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Char"))->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* component = &::il2cpp_utils::GetClassFromName("System", "UriComponents")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IriHelper*), "EscapeUnescapeIri", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pInput, start, end, component});
  }
};
