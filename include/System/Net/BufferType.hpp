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
  // Forward declaring type: BufferType
  struct BufferType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferType, "System.Net", "BufferType");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.BufferType
  // [TokenAttribute] Offset: FFFFFFFF
  struct BufferType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BufferType
    constexpr BufferType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.BufferType Empty
    static constexpr const int Empty = 0;
    // Get static field: static public System.Net.BufferType Empty
    static ::System::Net::BufferType _get_Empty();
    // Set static field: static public System.Net.BufferType Empty
    static void _set_Empty(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Data
    static constexpr const int Data = 1;
    // Get static field: static public System.Net.BufferType Data
    static ::System::Net::BufferType _get_Data();
    // Set static field: static public System.Net.BufferType Data
    static void _set_Data(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Token
    static constexpr const int Token = 2;
    // Get static field: static public System.Net.BufferType Token
    static ::System::Net::BufferType _get_Token();
    // Set static field: static public System.Net.BufferType Token
    static void _set_Token(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Parameters
    static constexpr const int Parameters = 3;
    // Get static field: static public System.Net.BufferType Parameters
    static ::System::Net::BufferType _get_Parameters();
    // Set static field: static public System.Net.BufferType Parameters
    static void _set_Parameters(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Missing
    static constexpr const int Missing = 4;
    // Get static field: static public System.Net.BufferType Missing
    static ::System::Net::BufferType _get_Missing();
    // Set static field: static public System.Net.BufferType Missing
    static void _set_Missing(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Extra
    static constexpr const int Extra = 5;
    // Get static field: static public System.Net.BufferType Extra
    static ::System::Net::BufferType _get_Extra();
    // Set static field: static public System.Net.BufferType Extra
    static void _set_Extra(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Trailer
    static constexpr const int Trailer = 6;
    // Get static field: static public System.Net.BufferType Trailer
    static ::System::Net::BufferType _get_Trailer();
    // Set static field: static public System.Net.BufferType Trailer
    static void _set_Trailer(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Header
    static constexpr const int Header = 7;
    // Get static field: static public System.Net.BufferType Header
    static ::System::Net::BufferType _get_Header();
    // Set static field: static public System.Net.BufferType Header
    static void _set_Header(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Padding
    static constexpr const int Padding = 9;
    // Get static field: static public System.Net.BufferType Padding
    static ::System::Net::BufferType _get_Padding();
    // Set static field: static public System.Net.BufferType Padding
    static void _set_Padding(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType Stream
    static constexpr const int Stream = 10;
    // Get static field: static public System.Net.BufferType Stream
    static ::System::Net::BufferType _get_Stream();
    // Set static field: static public System.Net.BufferType Stream
    static void _set_Stream(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType ChannelBindings
    static constexpr const int ChannelBindings = 14;
    // Get static field: static public System.Net.BufferType ChannelBindings
    static ::System::Net::BufferType _get_ChannelBindings();
    // Set static field: static public System.Net.BufferType ChannelBindings
    static void _set_ChannelBindings(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType TargetHost
    static constexpr const int TargetHost = 16;
    // Get static field: static public System.Net.BufferType TargetHost
    static ::System::Net::BufferType _get_TargetHost();
    // Set static field: static public System.Net.BufferType TargetHost
    static void _set_TargetHost(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType ReadOnlyFlag
    static constexpr const int ReadOnlyFlag = -2147483648;
    // Get static field: static public System.Net.BufferType ReadOnlyFlag
    static ::System::Net::BufferType _get_ReadOnlyFlag();
    // Set static field: static public System.Net.BufferType ReadOnlyFlag
    static void _set_ReadOnlyFlag(::System::Net::BufferType value);
    // static field const value: static public System.Net.BufferType ReadOnlyWithChecksum
    static constexpr const int ReadOnlyWithChecksum = 268435456;
    // Get static field: static public System.Net.BufferType ReadOnlyWithChecksum
    static ::System::Net::BufferType _get_ReadOnlyWithChecksum();
    // Set static field: static public System.Net.BufferType ReadOnlyWithChecksum
    static void _set_ReadOnlyWithChecksum(::System::Net::BufferType value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.BufferType
  #pragma pack(pop)
  static check_size<sizeof(BufferType), 0 + sizeof(int)> __System_Net_BufferTypeSizeCheck;
  static_assert(sizeof(BufferType) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"