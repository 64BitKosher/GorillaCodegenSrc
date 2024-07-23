// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XmlSchemaException
#include "System/Xml/Schema/XmlSchemaException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: XmlSchemaValidationException
  class XmlSchemaValidationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaValidationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaValidationException*, "System.Xml.Schema", "XmlSchemaValidationException");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XmlSchemaValidationException
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSchemaValidationException : public ::System::Xml::Schema::XmlSchemaException {
    public:
    // System.Void .ctor(System.String res, System.String[] args, System.Exception innerException, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x4DA0780
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaValidationException* New_ctor(::StringW res, ::ArrayW<::StringW> args, ::System::Exception* innerException, ::StringW sourceUri, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaValidationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaValidationException*, creationType>(res, args, innerException, sourceUri, lineNumber, linePosition)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4DA0664
    // Implemented from: System.Xml.Schema.XmlSchemaException
    // Base method: System.Void XmlSchemaException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaValidationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaValidationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaValidationException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4DA066C
    // Implemented from: System.Xml.Schema.XmlSchemaException
    // Base method: System.Void XmlSchemaException::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x4DA0674
    // Implemented from: System.Xml.Schema.XmlSchemaException
    // Base method: System.Void XmlSchemaException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaValidationException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaValidationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaValidationException*, creationType>()));
    }
    // System.Void .ctor(System.String res, System.String arg, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x4DA0680
    // Implemented from: System.Xml.Schema.XmlSchemaException
    // Base method: System.Void XmlSchemaException::.ctor(System.String res, System.String arg, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaValidationException* New_ctor(::StringW res, ::StringW arg, ::StringW sourceUri, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaValidationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaValidationException*, creationType>(res, arg, sourceUri, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x4DA0750
    // Implemented from: System.Xml.Schema.XmlSchemaException
    // Base method: System.Void XmlSchemaException::.ctor(System.String res, System.String[] args, System.String sourceUri, System.Int32 lineNumber, System.Int32 linePosition)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSchemaValidationException* New_ctor(::StringW res, ::ArrayW<::StringW> args, ::StringW sourceUri, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XmlSchemaValidationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSchemaValidationException*, creationType>(res, args, sourceUri, lineNumber, linePosition)));
    }
  }; // System.Xml.Schema.XmlSchemaValidationException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::XmlSchemaValidationException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Xml::Schema::XmlSchemaValidationException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::XmlSchemaValidationException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::XmlSchemaValidationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!