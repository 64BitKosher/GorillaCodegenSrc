// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Serialization.EnumMap
#include "System/Xml/Serialization/EnumMap.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Serialization::EnumMap::EnumMapMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::EnumMap::EnumMapMember*, "System.Xml.Serialization", "EnumMap/EnumMapMember");
// Type namespace: System.Xml.Serialization
namespace System::Xml::Serialization {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Serialization.EnumMap/EnumMapMember
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumMap::EnumMapMember : public ::Il2CppObject {
    public:
    public:
    // private readonly System.String _xmlName
    // Size: 0x8
    // Offset: 0x10
    ::StringW xmlName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String _enumName
    // Size: 0x8
    // Offset: 0x18
    ::StringW enumName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Int64 _value
    // Size: 0x8
    // Offset: 0x20
    int64_t value;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Get instance field reference: private readonly System.String _xmlName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__xmlName();
    // Get instance field reference: private readonly System.String _enumName
    [[deprecated("Use field access instead!")]] ::StringW& dyn__enumName();
    // Get instance field reference: private readonly System.Int64 _value
    [[deprecated("Use field access instead!")]] int64_t& dyn__value();
    // public System.Void .ctor(System.String xmlName, System.String enumName, System.Int64 value)
    // Offset: 0x4E6F3DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumMap::EnumMapMember* New_ctor(::StringW xmlName, ::StringW enumName, int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Serialization::EnumMap::EnumMapMember::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumMap::EnumMapMember*, creationType>(xmlName, enumName, value)));
    }
    // public System.String get_XmlName()
    // Offset: 0x4E6F434
    ::StringW get_XmlName();
    // public System.String get_EnumName()
    // Offset: 0x4E6F43C
    ::StringW get_EnumName();
    // public System.Int64 get_Value()
    // Offset: 0x4E6F444
    int64_t get_Value();
  }; // System.Xml.Serialization.EnumMap/EnumMapMember
  #pragma pack(pop)
  static check_size<sizeof(EnumMap::EnumMapMember), 32 + sizeof(int64_t)> __System_Xml_Serialization_EnumMap_EnumMapMemberSizeCheck;
  static_assert(sizeof(EnumMap::EnumMapMember) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Serialization::EnumMap::EnumMapMember::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Serialization::EnumMap::EnumMapMember::get_XmlName
// Il2CppName: get_XmlName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::EnumMap::EnumMapMember::*)()>(&System::Xml::Serialization::EnumMap::EnumMapMember::get_XmlName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::EnumMap::EnumMapMember*), "get_XmlName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::EnumMap::EnumMapMember::get_EnumName
// Il2CppName: get_EnumName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Xml::Serialization::EnumMap::EnumMapMember::*)()>(&System::Xml::Serialization::EnumMap::EnumMapMember::get_EnumName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::EnumMap::EnumMapMember*), "get_EnumName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Xml::Serialization::EnumMap::EnumMapMember::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Xml::Serialization::EnumMap::EnumMapMember::*)()>(&System::Xml::Serialization::EnumMap::EnumMapMember::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Serialization::EnumMap::EnumMapMember*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};