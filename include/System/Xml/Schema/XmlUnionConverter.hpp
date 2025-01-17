// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlBaseConverter
#include "System/Xml/Schema/XmlBaseConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaType
  class XmlSchemaType;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: IXmlNamespaceResolver
  class IXmlNamespaceResolver;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlUnionConverter
  class XmlUnionConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlUnionConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlUnionConverter*, "System.Xml.Schema", "XmlUnionConverter");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x32
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlUnionConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlUnionConverter : public ::System::Xml::Schema::XmlBaseConverter {
    public:
    public:
    // private System.Xml.Schema.XmlValueConverter[] converters
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Xml::Schema::XmlValueConverter*> converters;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XmlValueConverter*>) == 0x8);
    // private System.Boolean hasAtomicMember
    // Size: 0x1
    // Offset: 0x30
    bool hasAtomicMember;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean hasListMember
    // Size: 0x1
    // Offset: 0x31
    bool hasListMember;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.Xml.Schema.XmlValueConverter[] converters
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::XmlValueConverter*>& dyn_converters();
    // Get instance field reference: private System.Boolean hasAtomicMember
    [[deprecated("Use field access instead!")]] bool& dyn_hasAtomicMember();
    // Get instance field reference: private System.Boolean hasListMember
    [[deprecated("Use field access instead!")]] bool& dyn_hasListMember();
    // static public System.Xml.Schema.XmlValueConverter Create(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x4DC7F70
    static ::System::Xml::Schema::XmlValueConverter* Create(::System::Xml::Schema::XmlSchemaType* schemaType);
    // protected System.Void .ctor(System.Xml.Schema.XmlSchemaType schemaType)
    // Offset: 0x4DC7D10
    // Implemented from: System.Xml.Schema.XmlBaseConverter
    // Base method: System.Void XmlBaseConverter::.ctor(System.Xml.Schema.XmlSchemaType schemaType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlUnionConverter* New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlUnionConverter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlUnionConverter*, creationType>(schemaType)));
    }
    // public override System.Object ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    // Offset: 0x4DC7FC8
    // Implemented from: System.Xml.Schema.XmlValueConverter
    // Base method: System.Object XmlValueConverter::ChangeType(System.Object value, System.Type destinationType, System.Xml.IXmlNamespaceResolver nsResolver)
    ::Il2CppObject* ChangeType(::Il2CppObject* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver);
  }; // System.Xml.Schema.XmlUnionConverter
  #pragma pack(pop)
  static check_size<sizeof(XmlUnionConverter), 49 + sizeof(bool)> __System_Xml_Schema_XmlUnionConverterSizeCheck;
  static_assert(sizeof(XmlUnionConverter) == 0x32);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlUnionConverter::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(&System::Xml::Schema::XmlUnionConverter::Create)> {
  static const MethodInfo* get() {
    static auto* schemaType = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlUnionConverter*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{schemaType});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlUnionConverter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlUnionConverter::ChangeType
// Il2CppName: ChangeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::XmlUnionConverter::*)(::Il2CppObject*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&System::Xml::Schema::XmlUnionConverter::ChangeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* destinationType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* nsResolver = &::il2cpp_utils::GetClassFromName("System.Xml", "IXmlNamespaceResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlUnionConverter*), "ChangeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, destinationType, nsResolver});
  }
};
