// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory
#include "UnityEngine/Rendering/Universal/DebugDisplaySettingsRendering_WidgetFactory.hpp"
// Including type: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering
#include "UnityEngine/Rendering/Universal/DebugDisplaySettingsRendering.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0*, "UnityEngine.Rendering.Universal", "DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass12_0");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/SettingsPanel panel
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel* panel;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel*
    constexpr operator ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel*() const noexcept {
      return panel;
    }
    // Get instance field reference: public UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/SettingsPanel panel
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel*& dyn_panel();
    // public System.Void .ctor()
    // Offset: 0x529BC8C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0*, creationType>()));
    }
    // System.Single <CreatePixelValueRangeMin>b__0()
    // Offset: 0x529C3D8
    float $CreatePixelValueRangeMin$b__0();
    // System.Void <CreatePixelValueRangeMin>b__1(System.Single value)
    // Offset: 0x529C428
    void $CreatePixelValueRangeMin$b__1(float value);
  }; // UnityEngine.Rendering.Universal.DebugDisplaySettingsRendering/WidgetFactory/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0), 16 + sizeof(::UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::SettingsPanel*)> __UnityEngine_Rendering_Universal_DebugDisplaySettingsRendering_WidgetFactory_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::$CreatePixelValueRangeMin$b__0
// Il2CppName: <CreatePixelValueRangeMin>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::*)()>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::$CreatePixelValueRangeMin$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0*), "<CreatePixelValueRangeMin>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::$CreatePixelValueRangeMin$b__1
// Il2CppName: <CreatePixelValueRangeMin>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::*)(float)>(&UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0::$CreatePixelValueRangeMin$b__1)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::DebugDisplaySettingsRendering::WidgetFactory::$$c__DisplayClass12_0*), "<CreatePixelValueRangeMin>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
