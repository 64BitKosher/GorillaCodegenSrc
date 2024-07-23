// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebRequest
  class WebRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: IWebRequestCreate
  class IWebRequestCreate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::IWebRequestCreate);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IWebRequestCreate*, "System.Net", "IWebRequestCreate");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.IWebRequestCreate
  // [TokenAttribute] Offset: FFFFFFFF
  class IWebRequestCreate {
    public:
    // public System.Net.WebRequest Create(System.Uri uri)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Net::WebRequest* Create(::System::Uri* uri);
  }; // System.Net.IWebRequestCreate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::IWebRequestCreate::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::WebRequest* (System::Net::IWebRequestCreate::*)(::System::Uri*)>(&System::Net::IWebRequestCreate::Create)> {
  static const MethodInfo* get() {
    static auto* uri = &::il2cpp_utils::GetClassFromName("System", "Uri")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::IWebRequestCreate*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{uri});
  }
};