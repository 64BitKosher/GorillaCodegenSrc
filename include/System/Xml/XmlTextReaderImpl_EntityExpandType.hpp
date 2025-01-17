// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.XmlTextReaderImpl
#include "System/Xml/XmlTextReaderImpl.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::EntityExpandType, "System.Xml", "XmlTextReaderImpl/EntityExpandType");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/EntityExpandType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlTextReaderImpl::EntityExpandType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EntityExpandType
    constexpr EntityExpandType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlTextReaderImpl/EntityExpandType All
    static constexpr const int All = 0;
    // Get static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType All
    static ::System::Xml::XmlTextReaderImpl::EntityExpandType _get_All();
    // Set static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType All
    static void _set_All(::System::Xml::XmlTextReaderImpl::EntityExpandType value);
    // static field const value: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyGeneral
    static constexpr const int OnlyGeneral = 1;
    // Get static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyGeneral
    static ::System::Xml::XmlTextReaderImpl::EntityExpandType _get_OnlyGeneral();
    // Set static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyGeneral
    static void _set_OnlyGeneral(::System::Xml::XmlTextReaderImpl::EntityExpandType value);
    // static field const value: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyCharacter
    static constexpr const int OnlyCharacter = 2;
    // Get static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyCharacter
    static ::System::Xml::XmlTextReaderImpl::EntityExpandType _get_OnlyCharacter();
    // Set static field: static public System.Xml.XmlTextReaderImpl/EntityExpandType OnlyCharacter
    static void _set_OnlyCharacter(::System::Xml::XmlTextReaderImpl::EntityExpandType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XmlTextReaderImpl/EntityExpandType
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::EntityExpandType), 0 + sizeof(int)> __System_Xml_XmlTextReaderImpl_EntityExpandTypeSizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::EntityExpandType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
