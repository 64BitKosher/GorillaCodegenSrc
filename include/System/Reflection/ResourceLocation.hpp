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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: ResourceLocation
  struct ResourceLocation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ResourceLocation, "System.Reflection", "ResourceLocation");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.ResourceLocation
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct ResourceLocation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ResourceLocation
    constexpr ResourceLocation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Reflection.ResourceLocation ContainedInAnotherAssembly
    static constexpr const int ContainedInAnotherAssembly = 2;
    // Get static field: static public System.Reflection.ResourceLocation ContainedInAnotherAssembly
    static ::System::Reflection::ResourceLocation _get_ContainedInAnotherAssembly();
    // Set static field: static public System.Reflection.ResourceLocation ContainedInAnotherAssembly
    static void _set_ContainedInAnotherAssembly(::System::Reflection::ResourceLocation value);
    // static field const value: static public System.Reflection.ResourceLocation ContainedInManifestFile
    static constexpr const int ContainedInManifestFile = 4;
    // Get static field: static public System.Reflection.ResourceLocation ContainedInManifestFile
    static ::System::Reflection::ResourceLocation _get_ContainedInManifestFile();
    // Set static field: static public System.Reflection.ResourceLocation ContainedInManifestFile
    static void _set_ContainedInManifestFile(::System::Reflection::ResourceLocation value);
    // static field const value: static public System.Reflection.ResourceLocation Embedded
    static constexpr const int Embedded = 1;
    // Get static field: static public System.Reflection.ResourceLocation Embedded
    static ::System::Reflection::ResourceLocation _get_Embedded();
    // Set static field: static public System.Reflection.ResourceLocation Embedded
    static void _set_Embedded(::System::Reflection::ResourceLocation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Reflection.ResourceLocation
  #pragma pack(pop)
  static check_size<sizeof(ResourceLocation), 0 + sizeof(int)> __System_Reflection_ResourceLocationSizeCheck;
  static_assert(sizeof(ResourceLocation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
