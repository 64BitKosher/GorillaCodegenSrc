// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.DecalSurfaceData
#include "UnityEngine/Rendering/Universal/DecalSurfaceData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: DBufferSettings
  class DBufferSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DBufferSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DBufferSettings*, "UnityEngine.Rendering.Universal", "DBufferSettings");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.DBufferSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class DBufferSettings : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Rendering.Universal.DecalSurfaceData surfaceData
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::DecalSurfaceData surfaceData;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::DecalSurfaceData) == 0x4);
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::DecalSurfaceData
    constexpr operator ::UnityEngine::Rendering::Universal::DecalSurfaceData() const noexcept {
      return surfaceData;
    }
    // Get instance field reference: public UnityEngine.Rendering.Universal.DecalSurfaceData surfaceData
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::DecalSurfaceData& dyn_surfaceData();
    // public System.Void .ctor()
    // Offset: 0x52D2FD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DBufferSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::DBufferSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DBufferSettings*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.DBufferSettings
  #pragma pack(pop)
  static check_size<sizeof(DBufferSettings), 16 + sizeof(::UnityEngine::Rendering::Universal::DecalSurfaceData)> __UnityEngine_Rendering_Universal_DBufferSettingsSizeCheck;
  static_assert(sizeof(DBufferSettings) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::DBufferSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
