// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider
#include "UnityEngine/AddressableAssets/ResourceProviders/ContentCatalogProvider.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex, "UnityEngine.AddressableAssets.ResourceProviders", "ContentCatalogProvider/DependencyHashIndex");
// Type namespace: UnityEngine.AddressableAssets.ResourceProviders
namespace UnityEngine::AddressableAssets::ResourceProviders {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex
  // [TokenAttribute] Offset: FFFFFFFF
  struct ContentCatalogProvider::DependencyHashIndex/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DependencyHashIndex
    constexpr DependencyHashIndex(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Remote
    static constexpr const int Remote = 0;
    // Get static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Remote
    static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex _get_Remote();
    // Set static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Remote
    static void _set_Remote(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex value);
    // static field const value: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Cache
    static constexpr const int Cache = 1;
    // Get static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Cache
    static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex _get_Cache();
    // Set static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Cache
    static void _set_Cache(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex value);
    // static field const value: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Count
    static constexpr const int Count = 2;
    // Get static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Count
    static ::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex _get_Count();
    // Set static field: static public UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex Count
    static void _set_Count(::UnityEngine::AddressableAssets::ResourceProviders::ContentCatalogProvider::DependencyHashIndex value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.AddressableAssets.ResourceProviders.ContentCatalogProvider/DependencyHashIndex
  #pragma pack(pop)
  static check_size<sizeof(ContentCatalogProvider::DependencyHashIndex), 0 + sizeof(int)> __UnityEngine_AddressableAssets_ResourceProviders_ContentCatalogProvider_DependencyHashIndexSizeCheck;
  static_assert(sizeof(ContentCatalogProvider::DependencyHashIndex) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
