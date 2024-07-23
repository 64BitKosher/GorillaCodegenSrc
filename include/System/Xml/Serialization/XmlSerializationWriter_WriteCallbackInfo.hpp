// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlSerializationWriter
#include "System/Xml/Serialization/XmlSerializationWriter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializationWriteCallback
  class XmlSerializationWriteCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationWriter::WriteCallbackInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationWriter::WriteCallbackInfo*, "System.Xml.Serialization", "XmlSerializationWriter/WriteCallbackInfo");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationWriter::WriteCallbackInfo : public ::Il2CppObject {
    public:
    public:
    // public System.Type Type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* Type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.String TypeName
    // Size: 0x8
    // Offset: 0x18
    ::StringW TypeName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String TypeNs
    // Size: 0x8
    // Offset: 0x20
    ::StringW TypeNs;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Xml.Serialization.XmlSerializationWriteCallback Callback
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Serialization::XmlSerializationWriteCallback* Callback;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlSerializationWriteCallback*) == 0x8);
    public:
    // Get instance field reference: public System.Type Type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_Type();
    // Get instance field reference: public System.String TypeName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TypeName();
    // Get instance field reference: public System.String TypeNs
    [[deprecated("Use field access instead!")]] ::StringW& dyn_TypeNs();
    // Get instance field reference: public System.Xml.Serialization.XmlSerializationWriteCallback Callback
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlSerializationWriteCallback*& dyn_Callback();
    // public System.Void .ctor()
    // Offset: 0x4E6298C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationWriter::WriteCallbackInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationWriter::WriteCallbackInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationWriter::WriteCallbackInfo*, creationType>()));
    }
  }; // System.Xml.Serialization.XmlSerializationWriter/WriteCallbackInfo
  #pragma pack(pop)
  static check_size<sizeof(XmlSerializationWriter::WriteCallbackInfo), 40 + sizeof(::System::Xml::Serialization::XmlSerializationWriteCallback*)> __System_Xml_Serialization_XmlSerializationWriter_WriteCallbackInfoSizeCheck;
  static_assert(sizeof(XmlSerializationWriter::WriteCallbackInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationWriter::WriteCallbackInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
