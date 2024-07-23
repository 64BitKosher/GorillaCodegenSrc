// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.XmlSerializationReader
#include "System/Xml/Serialization/XmlSerializationReader.hpp"
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
  // Forward declaring type: XmlSerializationFixupCallback
  class XmlSerializationFixupCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::XmlSerializationReader::Fixup);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlSerializationReader::Fixup*, "System.Xml.Serialization", "XmlSerializationReader/Fixup");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.XmlSerializationReader/Fixup
  // [TokenAttribute] Offset: FFFFFFFF
  class XmlSerializationReader::Fixup : public ::Il2CppObject {
    public:
    public:
    // private System.Object source
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* source;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.String[] ids
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> ids;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // private System.Xml.Serialization.XmlSerializationFixupCallback callback
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Serialization::XmlSerializationFixupCallback* callback;
    // Field size check
    static_assert(sizeof(::System::Xml::Serialization::XmlSerializationFixupCallback*) == 0x8);
    public:
    // Get instance field reference: private System.Object source
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_source();
    // Get instance field reference: private System.String[] ids
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_ids();
    // Get instance field reference: private System.Xml.Serialization.XmlSerializationFixupCallback callback
    [[deprecated("Use field access instead!")]] ::System::Xml::Serialization::XmlSerializationFixupCallback*& dyn_callback();
    // public System.Void .ctor(System.Object o, System.Xml.Serialization.XmlSerializationFixupCallback callback, System.Int32 count)
    // Offset: 0x4E59BE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlSerializationReader::Fixup* New_ctor(::Il2CppObject* o, ::System::Xml::Serialization::XmlSerializationFixupCallback* callback, int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::XmlSerializationReader::Fixup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlSerializationReader::Fixup*, creationType>(o, callback, count)));
    }
    // public System.Xml.Serialization.XmlSerializationFixupCallback get_Callback()
    // Offset: 0x4E59C88
    ::System::Xml::Serialization::XmlSerializationFixupCallback* get_Callback();
    // public System.String[] get_Ids()
    // Offset: 0x4E59C90
    ::ArrayW<::StringW> get_Ids();
    // public System.Object get_Source()
    // Offset: 0x4E59C98
    ::Il2CppObject* get_Source();
  }; // System.Xml.Serialization.XmlSerializationReader/Fixup
  #pragma pack(pop)
  static check_size<sizeof(XmlSerializationReader::Fixup), 32 + sizeof(::System::Xml::Serialization::XmlSerializationFixupCallback*)> __System_Xml_Serialization_XmlSerializationReader_FixupSizeCheck;
  static_assert(sizeof(XmlSerializationReader::Fixup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReader::Fixup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReader::Fixup::get_Callback
// Il2CppName: get_Callback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::XmlSerializationFixupCallback* (System::Xml::Serialization::XmlSerializationReader::Fixup::*)()>(&System::Xml::Serialization::XmlSerializationReader::Fixup::get_Callback)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReader::Fixup*), "get_Callback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReader::Fixup::get_Ids
// Il2CppName: get_Ids
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (System::Xml::Serialization::XmlSerializationReader::Fixup::*)()>(&System::Xml::Serialization::XmlSerializationReader::Fixup::get_Ids)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReader::Fixup*), "get_Ids", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::XmlSerializationReader::Fixup::get_Source
// Il2CppName: get_Source
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Serialization::XmlSerializationReader::Fixup::*)()>(&System::Xml::Serialization::XmlSerializationReader::Fixup::get_Source)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::XmlSerializationReader::Fixup*), "get_Source", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};