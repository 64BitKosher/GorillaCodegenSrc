// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Forward declaring type: XPathResultType
  struct XPathResultType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XPath::XPathResultType, "System.Xml.XPath", "XPathResultType");
// Type namespace: System.Xml.XPath
namespace System::Xml::XPath {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XPath.XPathResultType
  // [TokenAttribute] Offset: FFFFFFFF
  struct XPathResultType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XPathResultType
    constexpr XPathResultType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XPath.XPathResultType Number
    static constexpr const int Number = 0;
    // Get static field: static public System.Xml.XPath.XPathResultType Number
    static ::System::Xml::XPath::XPathResultType _get_Number();
    // Set static field: static public System.Xml.XPath.XPathResultType Number
    static void _set_Number(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType String
    static constexpr const int String = 1;
    // Get static field: static public System.Xml.XPath.XPathResultType String
    static ::System::Xml::XPath::XPathResultType _get_String();
    // Set static field: static public System.Xml.XPath.XPathResultType String
    static void _set_String(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType Boolean
    static constexpr const int Boolean = 2;
    // Get static field: static public System.Xml.XPath.XPathResultType Boolean
    static ::System::Xml::XPath::XPathResultType _get_Boolean();
    // Set static field: static public System.Xml.XPath.XPathResultType Boolean
    static void _set_Boolean(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType NodeSet
    static constexpr const int NodeSet = 3;
    // Get static field: static public System.Xml.XPath.XPathResultType NodeSet
    static ::System::Xml::XPath::XPathResultType _get_NodeSet();
    // Set static field: static public System.Xml.XPath.XPathResultType NodeSet
    static void _set_NodeSet(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType Navigator
    static constexpr const int Navigator = 1;
    // Get static field: static public System.Xml.XPath.XPathResultType Navigator
    static ::System::Xml::XPath::XPathResultType _get_Navigator();
    // Set static field: static public System.Xml.XPath.XPathResultType Navigator
    static void _set_Navigator(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType Any
    static constexpr const int Any = 5;
    // Get static field: static public System.Xml.XPath.XPathResultType Any
    static ::System::Xml::XPath::XPathResultType _get_Any();
    // Set static field: static public System.Xml.XPath.XPathResultType Any
    static void _set_Any(::System::Xml::XPath::XPathResultType value);
    // static field const value: static public System.Xml.XPath.XPathResultType Error
    static constexpr const int Error = 6;
    // Get static field: static public System.Xml.XPath.XPathResultType Error
    static ::System::Xml::XPath::XPathResultType _get_Error();
    // Set static field: static public System.Xml.XPath.XPathResultType Error
    static void _set_Error(::System::Xml::XPath::XPathResultType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XPath.XPathResultType
  #pragma pack(pop)
  static check_size<sizeof(XPathResultType), 0 + sizeof(int)> __System_Xml_XPath_XPathResultTypeSizeCheck;
  static_assert(sizeof(XPathResultType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
