// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.UnsafeNclNativeMethods
#include "System/Net/UnsafeNclNativeMethods.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::UnsafeNclNativeMethods::HttpApi);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::UnsafeNclNativeMethods::HttpApi*, "System.Net", "UnsafeNclNativeMethods/HttpApi");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.UnsafeNclNativeMethods/HttpApi
  // [TokenAttribute] Offset: FFFFFFFF
  class UnsafeNclNativeMethods::HttpApi : public ::Il2CppObject {
    public:
    // Nested type: ::System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_REQUEST_HEADER_ID
    class HTTP_REQUEST_HEADER_ID;
    // Nested type: ::System::Net::UnsafeNclNativeMethods::HttpApi::HTTP_RESPONSE_HEADER_ID
    class HTTP_RESPONSE_HEADER_ID;
    // Nested type: ::System::Net::UnsafeNclNativeMethods::HttpApi::Enum
    struct Enum;
    // static field const value: static private System.Int32 HttpHeaderRequestMaximum
    static constexpr const int HttpHeaderRequestMaximum = 41;
    // Get static field: static private System.Int32 HttpHeaderRequestMaximum
    static int _get_HttpHeaderRequestMaximum();
    // Set static field: static private System.Int32 HttpHeaderRequestMaximum
    static void _set_HttpHeaderRequestMaximum(int value);
    // static field const value: static private System.Int32 HttpHeaderResponseMaximum
    static constexpr const int HttpHeaderResponseMaximum = 30;
    // Get static field: static private System.Int32 HttpHeaderResponseMaximum
    static int _get_HttpHeaderResponseMaximum();
    // Set static field: static private System.Int32 HttpHeaderResponseMaximum
    static void _set_HttpHeaderResponseMaximum(int value);
    // Get static field: static private System.String[] m_Strings
    static ::ArrayW<::StringW> _get_m_Strings();
    // Set static field: static private System.String[] m_Strings
    static void _set_m_Strings(::ArrayW<::StringW> value);
    // static private System.Void .cctor()
    // Offset: 0x5004D94
    static void _cctor();
  }; // System.Net.UnsafeNclNativeMethods/HttpApi
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::UnsafeNclNativeMethods::HttpApi::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::UnsafeNclNativeMethods::HttpApi::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::UnsafeNclNativeMethods::HttpApi*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
