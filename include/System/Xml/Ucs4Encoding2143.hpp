// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Ucs4Encoding
#include "System/Xml/Ucs4Encoding.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: Ucs4Encoding2143
  class Ucs4Encoding2143;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Ucs4Encoding2143);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding2143*, "System.Xml", "Ucs4Encoding2143");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Ucs4Encoding2143
  // [TokenAttribute] Offset: FFFFFFFF
  class Ucs4Encoding2143 : public ::System::Xml::Ucs4Encoding {
    public:
    // public System.Void .ctor()
    // Offset: 0x4E39EA0
    // Implemented from: System.Xml.Ucs4Encoding
    // Base method: System.Void Ucs4Encoding::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ucs4Encoding2143* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Ucs4Encoding2143::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ucs4Encoding2143*, creationType>()));
    }
    // public override System.String get_EncodingName()
    // Offset: 0x4E3A140
    // Implemented from: System.Text.Encoding
    // Base method: System.String Encoding::get_EncodingName()
    ::StringW get_EncodingName();
    // public override System.Byte[] GetPreamble()
    // Offset: 0x4E3A180
    // Implemented from: System.Text.Encoding
    // Base method: System.Byte[] Encoding::GetPreamble()
    ::ArrayW<uint8_t> GetPreamble();
  }; // System.Xml.Ucs4Encoding2143
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding2143::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding2143::get_EncodingName
// Il2CppName: get_EncodingName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Ucs4Encoding2143::*)()>(&System::Xml::Ucs4Encoding2143::get_EncodingName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding2143*), "get_EncodingName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Ucs4Encoding2143::GetPreamble
// Il2CppName: GetPreamble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (System::Xml::Ucs4Encoding2143::*)()>(&System::Xml::Ucs4Encoding2143::GetPreamble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Ucs4Encoding2143*), "GetPreamble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
