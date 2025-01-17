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
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ContentTypeValues
  struct ContentTypeValues;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ContentTypeValues, "System.Net", "ContentTypeValues");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ContentTypeValues
  // [TokenAttribute] Offset: FFFFFFFF
  struct ContentTypeValues/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ContentTypeValues
    constexpr ContentTypeValues(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.ContentTypeValues ChangeCipherSpec
    static constexpr const int ChangeCipherSpec = 20;
    // Get static field: static public System.Net.ContentTypeValues ChangeCipherSpec
    static ::System::Net::ContentTypeValues _get_ChangeCipherSpec();
    // Set static field: static public System.Net.ContentTypeValues ChangeCipherSpec
    static void _set_ChangeCipherSpec(::System::Net::ContentTypeValues value);
    // static field const value: static public System.Net.ContentTypeValues Alert
    static constexpr const int Alert = 21;
    // Get static field: static public System.Net.ContentTypeValues Alert
    static ::System::Net::ContentTypeValues _get_Alert();
    // Set static field: static public System.Net.ContentTypeValues Alert
    static void _set_Alert(::System::Net::ContentTypeValues value);
    // static field const value: static public System.Net.ContentTypeValues HandShake
    static constexpr const int HandShake = 22;
    // Get static field: static public System.Net.ContentTypeValues HandShake
    static ::System::Net::ContentTypeValues _get_HandShake();
    // Set static field: static public System.Net.ContentTypeValues HandShake
    static void _set_HandShake(::System::Net::ContentTypeValues value);
    // static field const value: static public System.Net.ContentTypeValues AppData
    static constexpr const int AppData = 23;
    // Get static field: static public System.Net.ContentTypeValues AppData
    static ::System::Net::ContentTypeValues _get_AppData();
    // Set static field: static public System.Net.ContentTypeValues AppData
    static void _set_AppData(::System::Net::ContentTypeValues value);
    // static field const value: static public System.Net.ContentTypeValues Unrecognized
    static constexpr const int Unrecognized = 255;
    // Get static field: static public System.Net.ContentTypeValues Unrecognized
    static ::System::Net::ContentTypeValues _get_Unrecognized();
    // Set static field: static public System.Net.ContentTypeValues Unrecognized
    static void _set_Unrecognized(::System::Net::ContentTypeValues value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.ContentTypeValues
  #pragma pack(pop)
  static check_size<sizeof(ContentTypeValues), 0 + sizeof(int)> __System_Net_ContentTypeValuesSizeCheck;
  static_assert(sizeof(ContentTypeValues) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
