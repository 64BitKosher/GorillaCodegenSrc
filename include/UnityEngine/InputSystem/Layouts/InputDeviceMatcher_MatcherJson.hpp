// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Layouts.InputDeviceMatcher
#include "UnityEngine/InputSystem/Layouts/InputDeviceMatcher.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Size: 0x58
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputDeviceMatcher::MatcherJson/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability
    struct Capability;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson/Capability
    // [TokenAttribute] Offset: FFFFFFFF
    struct Capability/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.String path
      // Size: 0x8
      // Offset: 0x0
      ::StringW path;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.String value
      // Size: 0x8
      // Offset: 0x8
      ::StringW value;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      public:
      // Creating value type constructor for type: Capability
      constexpr Capability(::StringW path_ = {}, ::StringW value_ = {}) noexcept : path{path_}, value{value_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.String path
      [[deprecated("Use field access instead!")]] ::StringW& dyn_path();
      // Get instance field reference: public System.String value
      [[deprecated("Use field access instead!")]] ::StringW& dyn_value();
    }; // UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson/Capability
    #pragma pack(pop)
    static check_size<sizeof(InputDeviceMatcher::MatcherJson::Capability), 8 + sizeof(::StringW)> __UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJson_CapabilitySizeCheck;
    static_assert(sizeof(InputDeviceMatcher::MatcherJson::Capability) == 0x10);
    public:
    // public System.String interface
    // Size: 0x8
    // Offset: 0x0
    ::StringW interface;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] interfaces
    // Size: 0x8
    // Offset: 0x8
    ::ArrayW<::StringW> interfaces;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String deviceClass
    // Size: 0x8
    // Offset: 0x10
    ::StringW deviceClass;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] deviceClasses
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> deviceClasses;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String manufacturer
    // Size: 0x8
    // Offset: 0x20
    ::StringW manufacturer;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] manufacturers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> manufacturers;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String product
    // Size: 0x8
    // Offset: 0x30
    ::StringW product;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] products
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::StringW> products;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.String version
    // Size: 0x8
    // Offset: 0x40
    ::StringW version;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String[] versions
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<::StringW> versions;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson/Capability[] capabilities
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability> capabilities;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability>) == 0x8);
    public:
    // Creating value type constructor for type: MatcherJson
    constexpr MatcherJson(::StringW interface_ = {}, ::ArrayW<::StringW> interfaces_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::StringW deviceClass_ = {}, ::ArrayW<::StringW> deviceClasses_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::StringW manufacturer_ = {}, ::ArrayW<::StringW> manufacturers_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::StringW product_ = {}, ::ArrayW<::StringW> products_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::StringW version_ = {}, ::ArrayW<::StringW> versions_ = ::ArrayW<::StringW>(static_cast<void*>(nullptr)), ::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability> capabilities_ = ::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability>(static_cast<void*>(nullptr))) noexcept : interface{interface_}, interfaces{interfaces_}, deviceClass{deviceClass_}, deviceClasses{deviceClasses_}, manufacturer{manufacturer_}, manufacturers{manufacturers_}, product{product_}, products{products_}, version{version_}, versions{versions_}, capabilities{capabilities_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String interface
    [[deprecated("Use field access instead!")]] ::StringW& dyn_interface();
    // Get instance field reference: public System.String[] interfaces
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_interfaces();
    // Get instance field reference: public System.String deviceClass
    [[deprecated("Use field access instead!")]] ::StringW& dyn_deviceClass();
    // Get instance field reference: public System.String[] deviceClasses
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_deviceClasses();
    // Get instance field reference: public System.String manufacturer
    [[deprecated("Use field access instead!")]] ::StringW& dyn_manufacturer();
    // Get instance field reference: public System.String[] manufacturers
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_manufacturers();
    // Get instance field reference: public System.String product
    [[deprecated("Use field access instead!")]] ::StringW& dyn_product();
    // Get instance field reference: public System.String[] products
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_products();
    // Get instance field reference: public System.String version
    [[deprecated("Use field access instead!")]] ::StringW& dyn_version();
    // Get instance field reference: public System.String[] versions
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_versions();
    // Get instance field reference: public UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson/Capability[] capabilities
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability>& dyn_capabilities();
    // static public UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson FromMatcher(UnityEngine.InputSystem.Layouts.InputDeviceMatcher matcher)
    // Offset: 0x516AD98
    static ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson FromMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher ToMatcher()
    // Offset: 0x516B150
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher ToMatcher();
  }; // UnityEngine.InputSystem.Layouts.InputDeviceMatcher/MatcherJson
  #pragma pack(pop)
  static check_size<sizeof(InputDeviceMatcher::MatcherJson), 80 + sizeof(::ArrayW<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability>)> __UnityEngine_InputSystem_Layouts_InputDeviceMatcher_MatcherJsonSizeCheck;
  static_assert(sizeof(InputDeviceMatcher::MatcherJson) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::Capability, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher/MatcherJson/Capability");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::FromMatcher
// Il2CppName: FromMatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson (*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::FromMatcher)> {
  static const MethodInfo* get() {
    static auto* matcher = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceMatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson), "FromMatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{matcher});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::ToMatcher
// Il2CppName: ToMatcher
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson::ToMatcher)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson), "ToMatcher", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
