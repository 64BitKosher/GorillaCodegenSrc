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
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: XmlStandalone
  struct XmlStandalone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlStandalone, "System.Xml", "XmlStandalone");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlStandalone
  // [TokenAttribute] Offset: FFFFFFFF
  struct XmlStandalone/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: XmlStandalone
    constexpr XmlStandalone(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.XmlStandalone Omit
    static constexpr const int Omit = 0;
    // Get static field: static public System.Xml.XmlStandalone Omit
    static ::System::Xml::XmlStandalone _get_Omit();
    // Set static field: static public System.Xml.XmlStandalone Omit
    static void _set_Omit(::System::Xml::XmlStandalone value);
    // static field const value: static public System.Xml.XmlStandalone Yes
    static constexpr const int Yes = 1;
    // Get static field: static public System.Xml.XmlStandalone Yes
    static ::System::Xml::XmlStandalone _get_Yes();
    // Set static field: static public System.Xml.XmlStandalone Yes
    static void _set_Yes(::System::Xml::XmlStandalone value);
    // static field const value: static public System.Xml.XmlStandalone No
    static constexpr const int No = 2;
    // Get static field: static public System.Xml.XmlStandalone No
    static ::System::Xml::XmlStandalone _get_No();
    // Set static field: static public System.Xml.XmlStandalone No
    static void _set_No(::System::Xml::XmlStandalone value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.XmlStandalone
  #pragma pack(pop)
  static check_size<sizeof(XmlStandalone), 0 + sizeof(int)> __System_Xml_XmlStandaloneSizeCheck;
  static_assert(sizeof(XmlStandalone) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
