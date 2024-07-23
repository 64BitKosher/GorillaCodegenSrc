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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlMapping
  class XmlMapping;
  // Forward declaring type: UnreferencedObjectEventHandler
  class UnreferencedObjectEventHandler;
  // Forward declaring type: XmlAttributeEventHandler
  class XmlAttributeEventHandler;
  // Forward declaring type: XmlElementEventHandler
  class XmlElementEventHandler;
  // Forward declaring type: XmlNodeEventHandler
  class XmlNodeEventHandler;
  // Forward declaring type: XmlAttributeOverrides
  class XmlAttributeOverrides;
  // Forward declaring type: XmlRootAttribute
  class XmlRootAttribute;
  // Forward declaring type: XmlAttributeEventArgs
  class XmlAttributeEventArgs;
  // Forward declaring type: XmlElementEventArgs
  class XmlElementEventArgs;
  // Forward declaring type: XmlNodeEventArgs
  class XmlNodeEventArgs;
  // Forward declaring type: UnreferencedObjectEventArgs
  class UnreferencedObjectEventArgs;
  // Forward declaring type: XmlSerializationReader
  class XmlSerializationReader;
  // Forward declaring type: XmlSerializationWriter
  class XmlSerializationWriter;
  // Forward declaring type: XmlSerializerNamespaces
  class XmlSerializerNamespaces;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextReader
  class TextReader;
  // Forward declaring type: TextWriter
  class TextWriter;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlReader
  class XmlReader;
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Completed forward declares
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Forward declaring type: XmlSerializer
  class XmlSerializer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializer*, "System.Xml.Serialization", "XmlSerializer");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializer
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializer : public ::Il2CppObject {
    public:
    // Nested type: ::System::Xml::Serialization::XmlSerializer::SerializerData
    class SerializerData;
    public:
    // private System.Boolean customSerializer
    // Size: 0x1
    // Offset: 0x10
    bool customSerializer;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: customSerializer and: typeMapping
    char __padding0[0x7] = {};
    // private System.Xml.Serialization.XmlMapping typeMapping
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Serialization::XmlMapping* typeMapping;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlMapping*) == 0x8);
    // private System.Xml.Serialization.XmlSerializer/SerializerData serializerData
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Serialization::XmlSerializer::SerializerData* serializerData;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlSerializer::SerializerData*) == 0x8);
    // private System.Xml.Serialization.UnreferencedObjectEventHandler onUnreferencedObject
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Serialization::UnreferencedObjectEventHandler* onUnreferencedObject;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::UnreferencedObjectEventHandler*) == 0x8);
    // private System.Xml.Serialization.XmlAttributeEventHandler onUnknownAttribute
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Serialization::XmlAttributeEventHandler* onUnknownAttribute;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlAttributeEventHandler*) == 0x8);
    // private System.Xml.Serialization.XmlElementEventHandler onUnknownElement
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Serialization::XmlElementEventHandler* onUnknownElement;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlElementEventHandler*) == 0x8);
    // private System.Xml.Serialization.XmlNodeEventHandler onUnknownNode
    // Size: 0x8
    // Offset: 0x40
    ::System::Xml::Serialization::XmlNodeEventHandler* onUnknownNode;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlNodeEventHandler*) == 0x8);
    public:
    // Get static field: static private System.Int32 generationThreshold
    static int _get_generationThreshold();
    // Set static field: static private System.Int32 generationThreshold
    static void _set_generationThreshold(int value);
    // Get static field: static private System.Boolean backgroundGeneration
    static bool _get_backgroundGeneration();
    // Set static field: static private System.Boolean backgroundGeneration
    static void _set_backgroundGeneration(bool value);
    // Get static field: static private System.Boolean deleteTempFiles
    static bool _get_deleteTempFiles();
    // Set static field: static private System.Boolean deleteTempFiles
    static void _set_deleteTempFiles(bool value);
    // Get static field: static private System.Boolean generatorFallback
    static bool _get_generatorFallback();
    // Set static field: static private System.Boolean generatorFallback
    static void _set_generatorFallback(bool value);
    // Get static field: static private System.Collections.Hashtable serializerTypes
    static ::System::Collections::Hashtable* _get_serializerTypes();
    // Set static field: static private System.Collections.Hashtable serializerTypes
    static void _set_serializerTypes(::System::Collections::Hashtable* value);
    // Get instance field reference: private System.Boolean customSerializer
    [[deprecated("Use field access instead!")]] bool& dyn_customSerializer();
    // Get instance field reference: private System.Xml.Serialization.XmlMapping typeMapping
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlMapping*& dyn_typeMapping();
    // Get instance field reference: private System.Xml.Serialization.XmlSerializer/SerializerData serializerData
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlSerializer::SerializerData*& dyn_serializerData();
    // Get instance field reference: private System.Xml.Serialization.UnreferencedObjectEventHandler onUnreferencedObject
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::UnreferencedObjectEventHandler*& dyn_onUnreferencedObject();
    // Get instance field reference: private System.Xml.Serialization.XmlAttributeEventHandler onUnknownAttribute
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlAttributeEventHandler*& dyn_onUnknownAttribute();
    // Get instance field reference: private System.Xml.Serialization.XmlElementEventHandler onUnknownElement
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlElementEventHandler*& dyn_onUnknownElement();
    // Get instance field reference: private System.Xml.Serialization.XmlNodeEventHandler onUnknownNode
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlNodeEventHandler*& dyn_onUnknownNode();
    // static private System.Void .cctor()
    // Offset: 0x4E69414
    static void _cctor();
    // public System.Void .ctor(System.Type type, System.Xml.Serialization.XmlAttributeOverrides overrides, System.Type[] extraTypes, System.Xml.Serialization.XmlRootAttribute root, System.String defaultNamespace)
    // Offset: 0x4E694C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializer* New_ctor(::System::Type* type, ::System::Xml::Serialization::XmlAttributeOverrides* overrides, ::ArrayW<::System::Type*> extraTypes, ::System::Xml::Serialization::XmlRootAttribute* root, ::StringW defaultNamespace) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializer*, creationType>(type, overrides, extraTypes, root, defaultNamespace)));
    }
    // System.Xml.Serialization.XmlMapping get_Mapping()
    // Offset: 0x4E69658
    ::System::Xml::Serialization::XmlMapping* get_Mapping();
    // System.Void OnUnknownAttribute(System.Xml.Serialization.XmlAttributeEventArgs e)
    // Offset: 0x4E69660
    void OnUnknownAttribute(::System::Xml::Serialization::XmlAttributeEventArgs* e);
    // System.Void OnUnknownElement(System.Xml.Serialization.XmlElementEventArgs e)
    // Offset: 0x4E69688
    void OnUnknownElement(::System::Xml::Serialization::XmlElementEventArgs* e);
    // System.Void OnUnknownNode(System.Xml.Serialization.XmlNodeEventArgs e)
    // Offset: 0x4E696B0
    void OnUnknownNode(::System::Xml::Serialization::XmlNodeEventArgs* e);
    // System.Void OnUnreferencedObject(System.Xml.Serialization.UnreferencedObjectEventArgs e)
    // Offset: 0x4E696D8
    void OnUnreferencedObject(::System::Xml::Serialization::UnreferencedObjectEventArgs* e);
    // protected System.Xml.Serialization.XmlSerializationReader CreateReader()
    // Offset: 0x4E69700
    ::System::Xml::Serialization::XmlSerializationReader* CreateReader();
    // protected System.Xml.Serialization.XmlSerializationWriter CreateWriter()
    // Offset: 0x4E69738
    ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter();
    // public System.Object Deserialize(System.IO.TextReader textReader)
    // Offset: 0x4E69770
    ::Il2CppObject* Deserialize(::System::IO::TextReader* textReader);
    // public System.Object Deserialize(System.Xml.XmlReader xmlReader)
    // Offset: 0x4E69804
    ::Il2CppObject* Deserialize(::System::Xml::XmlReader* xmlReader);
    // protected System.Object Deserialize(System.Xml.Serialization.XmlSerializationReader reader)
    // Offset: 0x4E698D0
    ::Il2CppObject* Deserialize(::System::Xml::Serialization::XmlSerializationReader* reader);
    // protected System.Void Serialize(System.Object o, System.Xml.Serialization.XmlSerializationWriter writer)
    // Offset: 0x4E69BB4
    void Serialize(::Il2CppObject* o, ::System::Xml::Serialization::XmlSerializationWriter* writer);
    // public System.Void Serialize(System.IO.TextWriter textWriter, System.Object o)
    // Offset: 0x4E69DAC
    void Serialize(::System::IO::TextWriter* textWriter, ::Il2CppObject* o);
    // public System.Void Serialize(System.Xml.XmlWriter xmlWriter, System.Object o)
    // Offset: 0x4E6A148
    void Serialize(::System::Xml::XmlWriter* xmlWriter, ::Il2CppObject* o);
    // public System.Void Serialize(System.Xml.XmlWriter xmlWriter, System.Object o, System.Xml.Serialization.XmlSerializerNamespaces namespaces)
    // Offset: 0x4E69E3C
    void Serialize(::System::Xml::XmlWriter* xmlWriter, ::Il2CppObject* o, ::System::Xml::Serialization::XmlSerializerNamespaces* namespaces);
    // private System.Xml.Serialization.XmlSerializationWriter CreateWriter(System.Xml.Serialization.XmlMapping typeMapping)
    // Offset: 0x4E6A150
    ::System::Xml::Serialization::XmlSerializationWriter* CreateWriter(::System::Xml::Serialization::XmlMapping* typeMapping);
    // private System.Xml.Serialization.XmlSerializationReader CreateReader(System.Xml.Serialization.XmlMapping typeMapping)
    // Offset: 0x4E69874
    ::System::Xml::Serialization::XmlSerializationReader* CreateReader(::System::Xml::Serialization::XmlMapping* typeMapping);
  }; // System.Xml.Serialization.XmlSerializer
  #pragma pack(pop)
  static check_size<sizeof(XmlSerializer), 64 + sizeof(::System::Xml::Serialization::XmlNodeEventHandler*)> __System_Xml_Serialization_XmlSerializerSizeCheck;
  static_assert(sizeof(XmlSerializer) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Xml::Serialization::XmlSerializer::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::get_Mapping
// Il2CppName: get_Mapping
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlMapping* (System::Xml::Serialization::XmlSerializer::*)()>(&System::Xml::Serialization::XmlSerializer::get_Mapping)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "get_Mapping", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::OnUnknownAttribute
// Il2CppName: OnUnknownAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlAttributeEventArgs*)>(&System::Xml::Serialization::XmlSerializer::OnUnknownAttribute)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlAttributeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "OnUnknownAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::OnUnknownElement
// Il2CppName: OnUnknownElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlElementEventArgs*)>(&System::Xml::Serialization::XmlSerializer::OnUnknownElement)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlElementEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "OnUnknownElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::OnUnknownNode
// Il2CppName: OnUnknownNode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlNodeEventArgs*)>(&System::Xml::Serialization::XmlSerializer::OnUnknownNode)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlNodeEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "OnUnknownNode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::OnUnreferencedObject
// Il2CppName: OnUnreferencedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::UnreferencedObjectEventArgs*)>(&System::Xml::Serialization::XmlSerializer::OnUnreferencedObject)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "UnreferencedObjectEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "OnUnreferencedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::CreateReader
// Il2CppName: CreateReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationReader* (System::Xml::Serialization::XmlSerializer::*)()>(&System::Xml::Serialization::XmlSerializer::CreateReader)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "CreateReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::CreateWriter
// Il2CppName: CreateWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (System::Xml::Serialization::XmlSerializer::*)()>(&System::Xml::Serialization::XmlSerializer::CreateWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "CreateWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializer::*)(::System::IO::TextReader*)>(&System::Xml::Serialization::XmlSerializer::Deserialize)> {
  static const MethodInfo* get() {
    static auto* textReader = &::il2cpp_utils::GetClassFromName("System.IO", "TextReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textReader});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::XmlReader*)>(&System::Xml::Serialization::XmlSerializer::Deserialize)> {
  static const MethodInfo* get() {
    static auto* xmlReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlReader});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlSerializationReader*)>(&System::Xml::Serialization::XmlSerializer::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlSerializationReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::Il2CppObject*, ::System::Xml::Serialization::XmlSerializationWriter*)>(&System::Xml::Serialization::XmlSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* writer = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlSerializationWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{o, writer});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::IO::TextWriter*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* textWriter = &::il2cpp_utils::GetClassFromName("System.IO", "TextWriter")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textWriter, o});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::XmlWriter*, ::Il2CppObject*)>(&System::Xml::Serialization::XmlSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* xmlWriter = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlWriter, o});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::XmlWriter*, ::Il2CppObject*, ::System::Xml::Serialization::XmlSerializerNamespaces*)>(&System::Xml::Serialization::XmlSerializer::Serialize)> {
  static const MethodInfo* get() {
    static auto* xmlWriter = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlWriter")->byval_arg;
    static auto* o = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* namespaces = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlSerializerNamespaces")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{xmlWriter, o, namespaces});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::CreateWriter
// Il2CppName: CreateWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationWriter* (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlMapping*)>(&System::Xml::Serialization::XmlSerializer::CreateWriter)> {
  static const MethodInfo* get() {
    static auto* typeMapping = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "CreateWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeMapping});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializer::CreateReader
// Il2CppName: CreateReader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationReader* (System::Xml::Serialization::XmlSerializer::*)(::System::Xml::Serialization::XmlMapping*)>(&System::Xml::Serialization::XmlSerializer::CreateReader)> {
  static const MethodInfo* get() {
    static auto* typeMapping = &::il2cpp_utils::GetClassFromName("System.Xml.Serialization", "XmlMapping")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializer*), "CreateReader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{typeMapping});
  }
};
