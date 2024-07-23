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
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebExceptionMapping
  class WebExceptionMapping;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebExceptionMapping);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebExceptionMapping*, "System.Net", "WebExceptionMapping");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebExceptionMapping
  // [TokenAttribute] Offset: FFFFFFFF
  class WebExceptionMapping : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.String[] s_Mapping
    static ::ArrayW<::StringW> _get_s_Mapping();
    // Set static field: static private readonly System.String[] s_Mapping
    static void _set_s_Mapping(::ArrayW<::StringW> value);
    // static System.String GetWebStatusString(System.Net.WebExceptionStatus status)
    // Offset: 0x4FD8744
    static ::StringW GetWebStatusString(::System::Net::WebExceptionStatus status);
    // static private System.Void .cctor()
    // Offset: 0x4FD88E0
    static void _cctor();
  }; // System.Net.WebExceptionMapping
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebExceptionMapping::GetWebStatusString
// Il2CppName: GetWebStatusString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Net::WebExceptionStatus)>(&System::Net::WebExceptionMapping::GetWebStatusString)> {
  static const MethodInfo* get() {
    static auto* status = &::il2cpp_utils::GetClassFromName("System.Net", "WebExceptionStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebExceptionMapping*), "GetWebStatusString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{status});
  }
};
// Writing MetadataGetter for method: System::Net::WebExceptionMapping::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::WebExceptionMapping::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::WebExceptionMapping*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
