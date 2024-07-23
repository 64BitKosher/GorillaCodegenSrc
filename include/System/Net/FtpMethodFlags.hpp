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
  // Forward declaring type: FtpMethodFlags
  struct FtpMethodFlags;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FtpMethodFlags, "System.Net", "FtpMethodFlags");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.FtpMethodFlags
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct FtpMethodFlags/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FtpMethodFlags
    constexpr FtpMethodFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.FtpMethodFlags None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.FtpMethodFlags None
    static ::System::Net::FtpMethodFlags _get_None();
    // Set static field: static public System.Net.FtpMethodFlags None
    static void _set_None(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags IsDownload
    static constexpr const int IsDownload = 1;
    // Get static field: static public System.Net.FtpMethodFlags IsDownload
    static ::System::Net::FtpMethodFlags _get_IsDownload();
    // Set static field: static public System.Net.FtpMethodFlags IsDownload
    static void _set_IsDownload(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags IsUpload
    static constexpr const int IsUpload = 2;
    // Get static field: static public System.Net.FtpMethodFlags IsUpload
    static ::System::Net::FtpMethodFlags _get_IsUpload();
    // Set static field: static public System.Net.FtpMethodFlags IsUpload
    static void _set_IsUpload(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags TakesParameter
    static constexpr const int TakesParameter = 4;
    // Get static field: static public System.Net.FtpMethodFlags TakesParameter
    static ::System::Net::FtpMethodFlags _get_TakesParameter();
    // Set static field: static public System.Net.FtpMethodFlags TakesParameter
    static void _set_TakesParameter(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags MayTakeParameter
    static constexpr const int MayTakeParameter = 8;
    // Get static field: static public System.Net.FtpMethodFlags MayTakeParameter
    static ::System::Net::FtpMethodFlags _get_MayTakeParameter();
    // Set static field: static public System.Net.FtpMethodFlags MayTakeParameter
    static void _set_MayTakeParameter(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags DoesNotTakeParameter
    static constexpr const int DoesNotTakeParameter = 16;
    // Get static field: static public System.Net.FtpMethodFlags DoesNotTakeParameter
    static ::System::Net::FtpMethodFlags _get_DoesNotTakeParameter();
    // Set static field: static public System.Net.FtpMethodFlags DoesNotTakeParameter
    static void _set_DoesNotTakeParameter(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags ParameterIsDirectory
    static constexpr const int ParameterIsDirectory = 32;
    // Get static field: static public System.Net.FtpMethodFlags ParameterIsDirectory
    static ::System::Net::FtpMethodFlags _get_ParameterIsDirectory();
    // Set static field: static public System.Net.FtpMethodFlags ParameterIsDirectory
    static void _set_ParameterIsDirectory(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags ShouldParseForResponseUri
    static constexpr const int ShouldParseForResponseUri = 64;
    // Get static field: static public System.Net.FtpMethodFlags ShouldParseForResponseUri
    static ::System::Net::FtpMethodFlags _get_ShouldParseForResponseUri();
    // Set static field: static public System.Net.FtpMethodFlags ShouldParseForResponseUri
    static void _set_ShouldParseForResponseUri(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags HasHttpCommand
    static constexpr const int HasHttpCommand = 128;
    // Get static field: static public System.Net.FtpMethodFlags HasHttpCommand
    static ::System::Net::FtpMethodFlags _get_HasHttpCommand();
    // Set static field: static public System.Net.FtpMethodFlags HasHttpCommand
    static void _set_HasHttpCommand(::System::Net::FtpMethodFlags value);
    // static field const value: static public System.Net.FtpMethodFlags MustChangeWorkingDirectoryToPath
    static constexpr const int MustChangeWorkingDirectoryToPath = 256;
    // Get static field: static public System.Net.FtpMethodFlags MustChangeWorkingDirectoryToPath
    static ::System::Net::FtpMethodFlags _get_MustChangeWorkingDirectoryToPath();
    // Set static field: static public System.Net.FtpMethodFlags MustChangeWorkingDirectoryToPath
    static void _set_MustChangeWorkingDirectoryToPath(::System::Net::FtpMethodFlags value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Net.FtpMethodFlags
  #pragma pack(pop)
  static check_size<sizeof(FtpMethodFlags), 0 + sizeof(int)> __System_Net_FtpMethodFlagsSizeCheck;
  static_assert(sizeof(FtpMethodFlags) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"