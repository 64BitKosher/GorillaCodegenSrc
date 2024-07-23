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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpVersion
  class HttpVersion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpVersion);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpVersion*, "System.Net", "HttpVersion");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpVersion
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpVersion : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Version Unknown
    static ::System::Version* _get_Unknown();
    // Set static field: static public readonly System.Version Unknown
    static void _set_Unknown(::System::Version* value);
    // Get static field: static public readonly System.Version Version10
    static ::System::Version* _get_Version10();
    // Set static field: static public readonly System.Version Version10
    static void _set_Version10(::System::Version* value);
    // Get static field: static public readonly System.Version Version11
    static ::System::Version* _get_Version11();
    // Set static field: static public readonly System.Version Version11
    static void _set_Version11(::System::Version* value);
    // Get static field: static public readonly System.Version Version20
    static ::System::Version* _get_Version20();
    // Set static field: static public readonly System.Version Version20
    static void _set_Version20(::System::Version* value);
    // public System.Void .ctor()
    // Offset: 0x4FACF68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpVersion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpVersion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpVersion*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4FACF70
    static void _cctor();
  }; // System.Net.HttpVersion
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpVersion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpVersion::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Net::HttpVersion::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpVersion*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
