// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
// Completed includes
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ChannelBinding
  class ChannelBinding;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ChannelBinding);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ChannelBinding*, "System.Security.Authentication.ExtendedProtection", "ChannelBinding");
// Type namespace: System.Security.Authentication.ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Size: 0x1E
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Authentication.ExtendedProtection.ChannelBinding
  // [TokenAttribute] Offset: FFFFFFFF
  class ChannelBinding : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // public System.Int32 get_Size()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Size();
  }; // System.Security.Authentication.ExtendedProtection.ChannelBinding
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::Authentication::ExtendedProtection::ChannelBinding::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::Authentication::ExtendedProtection::ChannelBinding::*)()>(&System::Security::Authentication::ExtendedProtection::ChannelBinding::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Security::Authentication::ExtendedProtection::ChannelBinding*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
