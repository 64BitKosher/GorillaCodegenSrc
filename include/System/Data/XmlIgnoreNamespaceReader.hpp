// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlNodeReader
#include "System/Xml/XmlNodeReader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlDocument
  class XmlDocument;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: XmlIgnoreNamespaceReader
  class XmlIgnoreNamespaceReader;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::XmlIgnoreNamespaceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::XmlIgnoreNamespaceReader*, "System.Data", "XmlIgnoreNamespaceReader");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.XmlIgnoreNamespaceReader
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlIgnoreNamespaceReader : public ::System::Xml::XmlNodeReader {
    public:
    public:
    // private System.Collections.Generic.List`1<System.String> _namespacesToIgnore
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* namespacesToIgnore;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::StringW>*
    constexpr operator ::System::Collections::Generic::List_1<::StringW>*() const noexcept {
      return namespacesToIgnore;
    }
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> _namespacesToIgnore
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn__namespacesToIgnore();
    // System.Void .ctor(System.Xml.XmlDocument xdoc, System.String[] namespacesToIgnore)
    // Offset: 0x4C8EED8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlIgnoreNamespaceReader* New_ctor(::System::Xml::XmlDocument* xdoc, ::ArrayW<::StringW> namespacesToIgnore) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::XmlIgnoreNamespaceReader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlIgnoreNamespaceReader*, creationType>(xdoc, namespacesToIgnore)));
    }
    // public override System.Boolean MoveToFirstAttribute()
    // Offset: 0x4C8EF78
    // Implemented from: System.Xml.XmlNodeReader
    // Base method: System.Boolean XmlNodeReader::MoveToFirstAttribute()
    bool MoveToFirstAttribute();
    // public override System.Boolean MoveToNextAttribute()
    // Offset: 0x4C8F088
    // Implemented from: System.Xml.XmlNodeReader
    // Base method: System.Boolean XmlNodeReader::MoveToNextAttribute()
    bool MoveToNextAttribute();
  }; // System.Data.XmlIgnoreNamespaceReader
  #pragma pack(pop)
  static check_size<sizeof(XmlIgnoreNamespaceReader), 48 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __System_Data_XmlIgnoreNamespaceReaderSizeCheck;
  static_assert(sizeof(XmlIgnoreNamespaceReader) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::XmlIgnoreNamespaceReader::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute
// Il2CppName: MoveToFirstAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlIgnoreNamespaceReader::*)()>(&System::Data::XmlIgnoreNamespaceReader::MoveToFirstAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlIgnoreNamespaceReader*), "MoveToFirstAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute
// Il2CppName: MoveToNextAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::XmlIgnoreNamespaceReader::*)()>(&System::Data::XmlIgnoreNamespaceReader::MoveToNextAttribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::XmlIgnoreNamespaceReader*), "MoveToNextAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
