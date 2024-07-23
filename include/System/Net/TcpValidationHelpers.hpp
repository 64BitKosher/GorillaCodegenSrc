// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: TcpValidationHelpers
  class TcpValidationHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TcpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TcpValidationHelpers*, "System.Net", "TcpValidationHelpers");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TcpValidationHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class TcpValidationHelpers : public ::Il2CppObject {
    public:
    // static public System.Boolean ValidatePortNumber(System.Int32 port)
    // Offset: 0x4FA9698
    static bool ValidatePortNumber(int port);
  }; // System.Net.TcpValidationHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TcpValidationHelpers::ValidatePortNumber
// Il2CppName: ValidatePortNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&System::Net::TcpValidationHelpers::ValidatePortNumber)> {
  static const MethodInfo* get() {
    static auto* port = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TcpValidationHelpers*), "ValidatePortNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{port});
  }
};
