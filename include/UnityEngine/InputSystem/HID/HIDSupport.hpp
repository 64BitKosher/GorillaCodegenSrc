// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.HID.HID/UsagePage
#include "UnityEngine/InputSystem/HID/HID.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: ReadOnlyArray`1<TValue>
  template<typename TValue>
  struct ReadOnlyArray_1;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // Forward declaring type: HIDSupport
  class HIDSupport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::HID::HIDSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport*, "UnityEngine.InputSystem.HID", "HIDSupport");
// Type namespace: UnityEngine.InputSystem.HID
namespace UnityEngine::InputSystem::HID {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.HID.HIDSupport
  // [TokenAttribute] Offset: FFFFFFFF
  class HIDSupport : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage
    struct HIDPageUsage;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage
    // [TokenAttribute] Offset: FFFFFFFF
    struct HIDPageUsage/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.InputSystem.HID.HID/UsagePage page
      // Size: 0x4
      // Offset: 0x0
      ::UnityEngine::InputSystem::HID::HID::UsagePage page;
      // Field size check
      static_assert(sizeof(::UnityEngine::InputSystem::HID::HID::UsagePage) == 0x4);
      // public System.Int32 usage
      // Size: 0x4
      // Offset: 0x4
      int usage;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: HIDPageUsage
      constexpr HIDPageUsage(::UnityEngine::InputSystem::HID::HID::UsagePage page_ = {}, int usage_ = {}) noexcept : page{page_}, usage{usage_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.InputSystem.HID.HID/UsagePage page
      [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::HID::HID::UsagePage& dyn_page();
      // Get instance field reference: public System.Int32 usage
      [[deprecated("Use field access instead!")]] int& dyn_usage();
      // public System.Void .ctor(UnityEngine.InputSystem.HID.HID/UsagePage page, System.Int32 usage)
      // Offset: 0x5142618
      // ABORTED: conflicts with another method.  HIDPageUsage(::UnityEngine::InputSystem::HID::HID::UsagePage page, int usage);
      // public System.Void .ctor(UnityEngine.InputSystem.HID.HID/GenericDesktop usage)
      // Offset: 0x5142780
      HIDPageUsage(::UnityEngine::InputSystem::HID::HID::GenericDesktop usage);
    }; // UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage
    #pragma pack(pop)
    static check_size<sizeof(HIDSupport::HIDPageUsage), 4 + sizeof(int)> __UnityEngine_InputSystem_HID_HIDSupport_HIDPageUsageSizeCheck;
    static_assert(sizeof(HIDSupport::HIDPageUsage) == 0x8);
    // Get static field: static private UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage[] s_SupportedHIDUsages
    static ::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage> _get_s_SupportedHIDUsages();
    // Set static field: static private UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage[] s_SupportedHIDUsages
    static void _set_s_SupportedHIDUsages(::ArrayW<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage> value);
    // static public UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage> get_supportedHIDUsages()
    // Offset: 0x514237C
    static ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage> get_supportedHIDUsages();
    // static public System.Void set_supportedHIDUsages(UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.HID.HIDSupport/HIDPageUsage> value)
    // Offset: 0x51423DC
    static void set_supportedHIDUsages(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage> value);
    // static System.Void Initialize()
    // Offset: 0x5142620
    static void Initialize();
  }; // UnityEngine.InputSystem.HID.HIDSupport
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage, "UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages
// Il2CppName: get_supportedHIDUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage> (*)()>(&UnityEngine::InputSystem::HID::HIDSupport::get_supportedHIDUsages)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDSupport*), "get_supportedHIDUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages
// Il2CppName: set_supportedHIDUsages
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::HID::HIDSupport::HIDPageUsage>)>(&UnityEngine::InputSystem::HID::HIDSupport::set_supportedHIDUsages)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "ReadOnlyArray`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.HID", "HIDSupport/HIDPageUsage")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDSupport*), "set_supportedHIDUsages", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::HID::HIDSupport::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::HID::HIDSupport::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::HID::HIDSupport*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};