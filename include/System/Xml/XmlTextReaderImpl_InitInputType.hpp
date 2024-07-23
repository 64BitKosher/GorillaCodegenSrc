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
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl::InitInputType, "System.Xml", "XmlTextReaderImpl/InitInputType");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlTextReaderImpl/InitInputType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlTextReaderImpl::InitInputType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InitInputType
    constexpr InitInputType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlTextReaderImpl/InitInputType UriString
    static constexpr const int UriString = 0;
    // Get static field: static public System.Xml.XmlTextReaderImpl/InitInputType UriString
    static ::System::Xml::XmlTextReaderImpl::InitInputType _get_UriString();
    // Set static field: static public System.Xml.XmlTextReaderImpl/InitInputType UriString
    static void _set_UriString(::System::Xml::XmlTextReaderImpl::InitInputType value);
    // static field const value: static public System.Xml.XmlTextReaderImpl/InitInputType Stream
    static constexpr const int Stream = 1;
    // Get static field: static public System.Xml.XmlTextReaderImpl/InitInputType Stream
    static ::System::Xml::XmlTextReaderImpl::InitInputType _get_Stream();
    // Set static field: static public System.Xml.XmlTextReaderImpl/InitInputType Stream
    static void _set_Stream(::System::Xml::XmlTextReaderImpl::InitInputType value);
    // static field const value: static public System.Xml.XmlTextReaderImpl/InitInputType TextReader
    static constexpr const int TextReader = 2;
    // Get static field: static public System.Xml.XmlTextReaderImpl/InitInputType TextReader
    static ::System::Xml::XmlTextReaderImpl::InitInputType _get_TextReader();
    // Set static field: static public System.Xml.XmlTextReaderImpl/InitInputType TextReader
    static void _set_TextReader(::System::Xml::XmlTextReaderImpl::InitInputType value);
    // static field const value: static public System.Xml.XmlTextReaderImpl/InitInputType Invalid
    static constexpr const int Invalid = 3;
    // Get static field: static public System.Xml.XmlTextReaderImpl/InitInputType Invalid
    static ::System::Xml::XmlTextReaderImpl::InitInputType _get_Invalid();
    // Set static field: static public System.Xml.XmlTextReaderImpl/InitInputType Invalid
    static void _set_Invalid(::System::Xml::XmlTextReaderImpl::InitInputType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XmlTextReaderImpl/InitInputType
  #pragma pack(pop)
  static check_size<sizeof(XmlTextReaderImpl::InitInputType), 0 + sizeof(int)> __System_Xml_XmlTextReaderImpl_InitInputTypeSizeCheck;
  static_assert(sizeof(XmlTextReaderImpl::InitInputType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
