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
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpStatusCode
  struct HttpStatusCode;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpStatusDescription
  class HttpStatusDescription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpStatusDescription);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStatusDescription*, "System.Net", "HttpStatusDescription");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpStatusDescription
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpStatusDescription : public ::Il2CppObject {
    public:
    // static System.String Get(System.Net.HttpStatusCode code)
    // Offset: 0x4FA4968
    static ::StringW Get(::System::Net::HttpStatusCode code);
    // static System.String Get(System.Int32 code)
    // Offset: 0x4FA496C
    static ::StringW Get(int code);
  }; // System.Net.HttpStatusDescription
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpStatusDescription::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::HttpStatusCode)>(&System::Net::HttpStatusDescription::Get)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System.Net", "HttpStatusCode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStatusDescription*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStatusDescription::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&System::Net::HttpStatusDescription::Get)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStatusDescription*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
