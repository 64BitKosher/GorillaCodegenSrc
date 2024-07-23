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
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: SearchTarget
  struct SearchTarget;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::IO::SearchTarget, "System.IO", "SearchTarget");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.SearchTarget
  // [TokenAttribute] Offset: FFFFFFFF
  struct SearchTarget/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: SearchTarget
    constexpr SearchTarget(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.IO.SearchTarget Files
    static constexpr const int Files = 1;
    // Get static field: static public System.IO.SearchTarget Files
    static ::System::IO::SearchTarget _get_Files();
    // Set static field: static public System.IO.SearchTarget Files
    static void _set_Files(::System::IO::SearchTarget value);
    // static field const value: static public System.IO.SearchTarget Directories
    static constexpr const int Directories = 2;
    // Get static field: static public System.IO.SearchTarget Directories
    static ::System::IO::SearchTarget _get_Directories();
    // Set static field: static public System.IO.SearchTarget Directories
    static void _set_Directories(::System::IO::SearchTarget value);
    // static field const value: static public System.IO.SearchTarget Both
    static constexpr const int Both = 3;
    // Get static field: static public System.IO.SearchTarget Both
    static ::System::IO::SearchTarget _get_Both();
    // Set static field: static public System.IO.SearchTarget Both
    static void _set_Both(::System::IO::SearchTarget value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.IO.SearchTarget
  #pragma pack(pop)
  static check_size<sizeof(SearchTarget), 0 + sizeof(int)> __System_IO_SearchTargetSizeCheck;
  static_assert(sizeof(SearchTarget) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
