// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory
#include "UnityEngine/Rendering/DebugDisplaySettingsVolume_WidgetFactory.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VolumeComponent
  class VolumeComponent;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3*, "UnityEngine.Rendering", "DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass3_3");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass3_3
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.VolumeComponent component
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::VolumeComponent* component;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VolumeComponent*) == 0x8);
    // public UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass3_2 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_2* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_2*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Rendering.VolumeComponent component
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VolumeComponent*& dyn_component();
    // Get instance field reference: public UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass3_2 CS$<>8__locals2
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_2*& dyn_CS$$$8__locals2();
    // public System.Void .ctor()
    // Offset: 0x5243608
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3*, creationType>()));
    }
    // System.Boolean <CreateVolumeTable>b__10()
    // Offset: 0x5243610
    bool $CreateVolumeTable$b__10();
  }; // UnityEngine.Rendering.DebugDisplaySettingsVolume/WidgetFactory/<>c__DisplayClass3_3
  #pragma pack(pop)
  static check_size<sizeof(DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3), 24 + sizeof(::UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_2*)> __UnityEngine_Rendering_DebugDisplaySettingsVolume_WidgetFactory_$$c__DisplayClass3_3SizeCheck;
  static_assert(sizeof(DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3::$CreateVolumeTable$b__10
// Il2CppName: <CreateVolumeTable>b__10
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3::*)()>(&UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3::$CreateVolumeTable$b__10)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugDisplaySettingsVolume::WidgetFactory::$$c__DisplayClass3_3*), "<CreateVolumeTable>b__10", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
