// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Xml::SmallXmlParser::IAttrList);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Xml::SmallXmlParser::IAttrList*, "Mono.Xml", "SmallXmlParser/IAttrList");
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser/IAttrList
  // [TokenAttribute] Offset: FFFFFFFF
  class SmallXmlParser::IAttrList {
    public:
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length();
    // public System.String GetName(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetName(int i);
    // public System.String GetValue(System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetValue(int i);
    // public System.String GetValue(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW GetValue(::StringW name);
    // public System.String[] get_Names()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::StringW> get_Names();
    // public System.String[] get_Values()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::StringW> get_Values();
  }; // Mono.Xml.SmallXmlParser/IAttrList
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::get_Length
// Il2CppName: get_Length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Mono::Xml::SmallXmlParser::IAttrList::*)()>(&Mono::Xml::SmallXmlParser::IAttrList::get_Length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "get_Length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::GetName
// Il2CppName: GetName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Xml::SmallXmlParser::IAttrList::*)(int)>(&Mono::Xml::SmallXmlParser::IAttrList::GetName)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "GetName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Xml::SmallXmlParser::IAttrList::*)(int)>(&Mono::Xml::SmallXmlParser::IAttrList::GetValue)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::GetValue
// Il2CppName: GetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Xml::SmallXmlParser::IAttrList::*)(::StringW)>(&Mono::Xml::SmallXmlParser::IAttrList::GetValue)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "GetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::get_Names
// Il2CppName: get_Names
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Mono::Xml::SmallXmlParser::IAttrList::*)()>(&Mono::Xml::SmallXmlParser::IAttrList::get_Names)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "get_Names", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Xml::SmallXmlParser::IAttrList::get_Values
// Il2CppName: get_Values
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (Mono::Xml::SmallXmlParser::IAttrList::*)()>(&Mono::Xml::SmallXmlParser::IAttrList::get_Values)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Xml::SmallXmlParser::IAttrList*), "get_Values", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
