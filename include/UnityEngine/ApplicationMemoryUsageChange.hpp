// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ApplicationMemoryUsage
#include "UnityEngine/ApplicationMemoryUsage.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ApplicationMemoryUsageChange
  struct ApplicationMemoryUsageChange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ApplicationMemoryUsageChange, "UnityEngine", "ApplicationMemoryUsageChange");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ApplicationMemoryUsageChange
  // [TokenAttribute] Offset: FFFFFFFF
  struct ApplicationMemoryUsageChange/*, public ::System::ValueType*/ {
    public:
    public:
    // private UnityEngine.ApplicationMemoryUsage <memoryUsage>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::ApplicationMemoryUsage memoryUsage;
    // Field size check
    static_assert(sizeof(::UnityEngine::ApplicationMemoryUsage) == 0x4);
    public:
    // Creating value type constructor for type: ApplicationMemoryUsageChange
    constexpr ApplicationMemoryUsageChange(::UnityEngine::ApplicationMemoryUsage memoryUsage_ = {}) noexcept : memoryUsage{memoryUsage_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::ApplicationMemoryUsage
    constexpr operator ::UnityEngine::ApplicationMemoryUsage() const noexcept {
      return memoryUsage;
    }
    // Get instance field reference: private UnityEngine.ApplicationMemoryUsage <memoryUsage>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::ApplicationMemoryUsage& dyn_$memoryUsage$k__BackingField();
    // private System.Void set_memoryUsage(UnityEngine.ApplicationMemoryUsage value)
    // Offset: 0x547D0D4
    void set_memoryUsage(::UnityEngine::ApplicationMemoryUsage value);
    // public System.Void .ctor(UnityEngine.ApplicationMemoryUsage usage)
    // Offset: 0x547B5A0
    // ABORTED: conflicts with another method.  ApplicationMemoryUsageChange(::UnityEngine::ApplicationMemoryUsage usage);
  }; // UnityEngine.ApplicationMemoryUsageChange
  #pragma pack(pop)
  static check_size<sizeof(ApplicationMemoryUsageChange), 0 + sizeof(::UnityEngine::ApplicationMemoryUsage)> __UnityEngine_ApplicationMemoryUsageChangeSizeCheck;
  static_assert(sizeof(ApplicationMemoryUsageChange) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage
// Il2CppName: set_memoryUsage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ApplicationMemoryUsageChange::*)(::UnityEngine::ApplicationMemoryUsage)>(&UnityEngine::ApplicationMemoryUsageChange::set_memoryUsage)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "ApplicationMemoryUsage")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ApplicationMemoryUsageChange), "set_memoryUsage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ApplicationMemoryUsageChange::ApplicationMemoryUsageChange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!