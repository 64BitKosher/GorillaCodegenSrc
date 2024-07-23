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
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: BundleSource
  struct BundleSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::BundleSource, "UnityEngine.ResourceManagement.Util", "BundleSource");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.Util.BundleSource
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct BundleSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: BundleSource
    constexpr BundleSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ResourceManagement.Util.BundleSource None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.ResourceManagement.Util.BundleSource None
    static ::UnityEngine::ResourceManagement::Util::BundleSource _get_None();
    // Set static field: static public UnityEngine.ResourceManagement.Util.BundleSource None
    static void _set_None(::UnityEngine::ResourceManagement::Util::BundleSource value);
    // static field const value: static public UnityEngine.ResourceManagement.Util.BundleSource Local
    static constexpr const int Local = 1;
    // Get static field: static public UnityEngine.ResourceManagement.Util.BundleSource Local
    static ::UnityEngine::ResourceManagement::Util::BundleSource _get_Local();
    // Set static field: static public UnityEngine.ResourceManagement.Util.BundleSource Local
    static void _set_Local(::UnityEngine::ResourceManagement::Util::BundleSource value);
    // static field const value: static public UnityEngine.ResourceManagement.Util.BundleSource Cache
    static constexpr const int Cache = 2;
    // Get static field: static public UnityEngine.ResourceManagement.Util.BundleSource Cache
    static ::UnityEngine::ResourceManagement::Util::BundleSource _get_Cache();
    // Set static field: static public UnityEngine.ResourceManagement.Util.BundleSource Cache
    static void _set_Cache(::UnityEngine::ResourceManagement::Util::BundleSource value);
    // static field const value: static public UnityEngine.ResourceManagement.Util.BundleSource Download
    static constexpr const int Download = 4;
    // Get static field: static public UnityEngine.ResourceManagement.Util.BundleSource Download
    static ::UnityEngine::ResourceManagement::Util::BundleSource _get_Download();
    // Set static field: static public UnityEngine.ResourceManagement.Util.BundleSource Download
    static void _set_Download(::UnityEngine::ResourceManagement::Util::BundleSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.ResourceManagement.Util.BundleSource
  #pragma pack(pop)
  static check_size<sizeof(BundleSource), 0 + sizeof(int)> __UnityEngine_ResourceManagement_Util_BundleSourceSizeCheck;
  static_assert(sizeof(BundleSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
