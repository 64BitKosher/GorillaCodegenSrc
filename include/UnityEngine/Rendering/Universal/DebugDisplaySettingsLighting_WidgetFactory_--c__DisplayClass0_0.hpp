// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory
#include "UnityEngine/Rendering/Universal/DebugDisplaySettingsLighting_WidgetFactory.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting
#include "UnityEngine/Rendering/Universal/DebugDisplaySettingsLighting.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/SettingsPanel panel
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel* panel;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel*
    constexpr operator ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel*() const noexcept {
      return panel;
    }
    // Get instance field reference: public UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/SettingsPanel panel
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel*& dyn_panel();
    // public System.Void .ctor()
    // Offset: 0x5294BFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*, creationType>()));
    }
    // System.Int32 <CreateLightingDebugMode>b__0()
    // Offset: 0x52950AC
    int $CreateLightingDebugMode$b__0();
    // System.Void <CreateLightingDebugMode>b__1(System.Int32 value)
    // Offset: 0x52950FC
    void $CreateLightingDebugMode$b__1(int value);
    // System.Int32 <CreateLightingDebugMode>b__2()
    // Offset: 0x5295150
    int $CreateLightingDebugMode$b__2();
    // System.Void <CreateLightingDebugMode>b__3(System.Int32 value)
    // Offset: 0x52951A0
    void $CreateLightingDebugMode$b__3(int value);
  }; // UnityEngine.Rendering.Universal.DebugDisplaySettingsLighting/WidgetFactory/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0), 16 + sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::SettingsPanel*)> __UnityEngine_Rendering_Universal_DebugDisplaySettingsLighting_WidgetFactory_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__0
// Il2CppName: <CreateLightingDebugMode>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*), "<CreateLightingDebugMode>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__1
// Il2CppName: <CreateLightingDebugMode>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::*)(int)>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*), "<CreateLightingDebugMode>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__2
// Il2CppName: <CreateLightingDebugMode>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__2)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*), "<CreateLightingDebugMode>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__3
// Il2CppName: <CreateLightingDebugMode>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::*)(int)>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0::$CreateLightingDebugMode$b__3)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsLighting::WidgetFactory::$$c__DisplayClass0_0*), "<CreateLightingDebugMode>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
