// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.InputSystem.Android.LowLevel.AndroidAxis
#include "UnityEngine/InputSystem/Android/LowLevel/AndroidAxis.hpp"
// Including type: UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource
#include "UnityEngine/InputSystem/Android/LowLevel/AndroidInputSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Android::LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // Forward declaring type: AndroidDeviceCapabilities
  struct AndroidDeviceCapabilities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities, "UnityEngine.InputSystem.Android.LowLevel", "AndroidDeviceCapabilities");
// Type namespace: UnityEngine.InputSystem.Android.LowLevel
namespace UnityEngine::InputSystem::Android::LowLevel {
  // Size: 0x24
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities
  // [TokenAttribute] Offset: FFFFFFFF
  struct AndroidDeviceCapabilities/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::$$c
    class $$c;
    public:
    // public System.String deviceDescriptor
    // Size: 0x8
    // Offset: 0x0
    ::StringW deviceDescriptor;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 productId
    // Size: 0x4
    // Offset: 0x8
    int productId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 vendorId
    // Size: 0x4
    // Offset: 0xC
    int vendorId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean isVirtual
    // Size: 0x1
    // Offset: 0x10
    bool isVirtual;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isVirtual and: motionAxes
    char __padding3[0x7] = {};
    // public UnityEngine.InputSystem.Android.LowLevel.AndroidAxis[] motionAxes
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> motionAxes;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>) == 0x8);
    // public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource inputSources
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources;
    // Field size check
    static_assert(sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource) == 0x4);
    public:
    // Creating value type constructor for type: AndroidDeviceCapabilities
    constexpr AndroidDeviceCapabilities(::StringW deviceDescriptor_ = {}, int productId_ = {}, int vendorId_ = {}, bool isVirtual_ = {}, ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis> motionAxes_ = ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>(static_cast<void*>(nullptr)), ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource inputSources_ = {}) noexcept : deviceDescriptor{deviceDescriptor_}, productId{productId_}, vendorId{vendorId_}, isVirtual{isVirtual_}, motionAxes{motionAxes_}, inputSources{inputSources_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.String deviceDescriptor
    [[deprecated("Use field access instead!")]] ::StringW& dyn_deviceDescriptor();
    // Get instance field reference: public System.Int32 productId
    [[deprecated("Use field access instead!")]] int& dyn_productId();
    // Get instance field reference: public System.Int32 vendorId
    [[deprecated("Use field access instead!")]] int& dyn_vendorId();
    // Get instance field reference: public System.Boolean isVirtual
    [[deprecated("Use field access instead!")]] bool& dyn_isVirtual();
    // Get instance field reference: public UnityEngine.InputSystem.Android.LowLevel.AndroidAxis[] motionAxes
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::InputSystem::Android::LowLevel::AndroidAxis>& dyn_motionAxes();
    // Get instance field reference: public UnityEngine.InputSystem.Android.LowLevel.AndroidInputSource inputSources
    [[deprecated("Use field access instead!")]] ::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource& dyn_inputSources();
    // public System.String ToJson()
    // Offset: 0x514905C
    ::StringW ToJson();
    // static public UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities FromJson(System.String json)
    // Offset: 0x5148E6C
    static ::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities FromJson(::StringW json);
    // public override System.String ToString()
    // Offset: 0x51490C8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.InputSystem.Android.LowLevel.AndroidDeviceCapabilities
  #pragma pack(pop)
  static check_size<sizeof(AndroidDeviceCapabilities), 32 + sizeof(::UnityEngine::InputSystem::Android::LowLevel::AndroidInputSource)> __UnityEngine_InputSystem_Android_LowLevel_AndroidDeviceCapabilitiesSizeCheck;
  static_assert(sizeof(AndroidDeviceCapabilities) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::FromJson
// Il2CppName: FromJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities (*)(::StringW)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::FromJson)> {
  static const MethodInfo* get() {
    static auto* json = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities), "FromJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{json});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Android::LowLevel::AndroidDeviceCapabilities), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};