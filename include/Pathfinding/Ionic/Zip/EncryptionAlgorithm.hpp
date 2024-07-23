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
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: EncryptionAlgorithm
  struct EncryptionAlgorithm;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::EncryptionAlgorithm, "Pathfinding.Ionic.Zip", "EncryptionAlgorithm");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.EncryptionAlgorithm
  // [TokenAttribute] Offset: FFFFFFFF
  struct EncryptionAlgorithm/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: EncryptionAlgorithm
    constexpr EncryptionAlgorithm(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm None
    static constexpr const int None = 0;
    // Get static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm None
    static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm _get_None();
    // Set static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm None
    static void _set_None(::Pathfinding::Ionic::Zip::EncryptionAlgorithm value);
    // static field const value: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm PkzipWeak
    static constexpr const int PkzipWeak = 1;
    // Get static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm PkzipWeak
    static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm _get_PkzipWeak();
    // Set static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm PkzipWeak
    static void _set_PkzipWeak(::Pathfinding::Ionic::Zip::EncryptionAlgorithm value);
    // static field const value: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm Unsupported
    static constexpr const int Unsupported = 4;
    // Get static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm Unsupported
    static ::Pathfinding::Ionic::Zip::EncryptionAlgorithm _get_Unsupported();
    // Set static field: static public Pathfinding.Ionic.Zip.EncryptionAlgorithm Unsupported
    static void _set_Unsupported(::Pathfinding::Ionic::Zip::EncryptionAlgorithm value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Pathfinding.Ionic.Zip.EncryptionAlgorithm
  #pragma pack(pop)
  static check_size<sizeof(EncryptionAlgorithm), 0 + sizeof(int)> __Pathfinding_Ionic_Zip_EncryptionAlgorithmSizeCheck;
  static_assert(sizeof(EncryptionAlgorithm) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"