// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: BinaryCompatibility
  class BinaryCompatibility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::BinaryCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::BinaryCompatibility*, "System.Xml", "BinaryCompatibility");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.BinaryCompatibility
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryCompatibility : public ::Il2CppObject {
    public:
    // static public System.Boolean get_TargetsAtLeast_Desktop_V4_5_2()
    // Offset: 0x4E3E410
    static bool get_TargetsAtLeast_Desktop_V4_5_2();
  }; // System.Xml.BinaryCompatibility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2
// Il2CppName: get_TargetsAtLeast_Desktop_V4_5_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&System::Xml::BinaryCompatibility::get_TargetsAtLeast_Desktop_V4_5_2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::BinaryCompatibility*), "get_TargetsAtLeast_Desktop_V4_5_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
