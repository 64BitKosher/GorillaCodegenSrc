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
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: AssetLoadMode
  struct AssetLoadMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode, "UnityEngine.ResourceManagement.ResourceProviders", "AssetLoadMode");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode
  // [TokenAttribute] Offset: FFFFFFFF
  struct AssetLoadMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AssetLoadMode
    constexpr AssetLoadMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode RequestedAssetAndDependencies
    static constexpr const int RequestedAssetAndDependencies = 0;
    // Get static field: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode RequestedAssetAndDependencies
    static ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode _get_RequestedAssetAndDependencies();
    // Set static field: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode RequestedAssetAndDependencies
    static void _set_RequestedAssetAndDependencies(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value);
    // static field const value: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode AllPackedAssetsAndDependencies
    static constexpr const int AllPackedAssetsAndDependencies = 1;
    // Get static field: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode AllPackedAssetsAndDependencies
    static ::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode _get_AllPackedAssetsAndDependencies();
    // Set static field: static public UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode AllPackedAssetsAndDependencies
    static void _set_AllPackedAssetsAndDependencies(::UnityEngine::ResourceManagement::ResourceProviders::AssetLoadMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ResourceManagement.ResourceProviders.AssetLoadMode
  #pragma pack(pop)
  static check_size<sizeof(AssetLoadMode), 0 + sizeof(int)> __UnityEngine_ResourceManagement_ResourceProviders_AssetLoadModeSizeCheck;
  static_assert(sizeof(AssetLoadMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"