// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.FtpControlStream
#include "System/Net/FtpControlStream.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpControlStream::GetPathOption, "System.Net", "FtpControlStream/GetPathOption");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpControlStream/GetPathOption
  // [TokenAttribute] Offset: FFFFFFFF
  struct FtpControlStream::GetPathOption/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: GetPathOption
    constexpr GetPathOption(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.FtpControlStream/GetPathOption Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Net.FtpControlStream/GetPathOption Normal
    static ::System::Net::FtpControlStream::GetPathOption _get_Normal();
    // Set static field: static public System.Net.FtpControlStream/GetPathOption Normal
    static void _set_Normal(::System::Net::FtpControlStream::GetPathOption value);
    // static field const value: static public System.Net.FtpControlStream/GetPathOption AssumeFilename
    static constexpr const int AssumeFilename = 1;
    // Get static field: static public System.Net.FtpControlStream/GetPathOption AssumeFilename
    static ::System::Net::FtpControlStream::GetPathOption _get_AssumeFilename();
    // Set static field: static public System.Net.FtpControlStream/GetPathOption AssumeFilename
    static void _set_AssumeFilename(::System::Net::FtpControlStream::GetPathOption value);
    // static field const value: static public System.Net.FtpControlStream/GetPathOption AssumeNoFilename
    static constexpr const int AssumeNoFilename = 2;
    // Get static field: static public System.Net.FtpControlStream/GetPathOption AssumeNoFilename
    static ::System::Net::FtpControlStream::GetPathOption _get_AssumeNoFilename();
    // Set static field: static public System.Net.FtpControlStream/GetPathOption AssumeNoFilename
    static void _set_AssumeNoFilename(::System::Net::FtpControlStream::GetPathOption value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.FtpControlStream/GetPathOption
  #pragma pack(pop)
  static check_size<sizeof(FtpControlStream::GetPathOption), 0 + sizeof(int)> __System_Net_FtpControlStream_GetPathOptionSizeCheck;
  static_assert(sizeof(FtpControlStream::GetPathOption) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"