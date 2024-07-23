// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DayCycleTextureMoment
  class DayCycleTextureMoment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DayCycleTextureMoment);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DayCycleTextureMoment*, "", "DayCycleTextureMoment");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: DayCycleTextureMoment
  // [TokenAttribute] Offset: FFFFFFFF
  class DayCycleTextureMoment : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.Texture2D sunnyTex
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Texture2D* sunnyTex;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public UnityEngine.Texture2D cloudyTex
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* cloudyTex;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.Texture2D sunnyTex
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_sunnyTex();
    // Get instance field reference: public UnityEngine.Texture2D cloudyTex
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_cloudyTex();
    // public System.Void .ctor()
    // Offset: 0x279952C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DayCycleTextureMoment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DayCycleTextureMoment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DayCycleTextureMoment*, creationType>()));
    }
  }; // DayCycleTextureMoment
  #pragma pack(pop)
  static check_size<sizeof(DayCycleTextureMoment), 24 + sizeof(::UnityEngine::Texture2D*)> __GlobalNamespace_DayCycleTextureMomentSizeCheck;
  static_assert(sizeof(DayCycleTextureMoment) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DayCycleTextureMoment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
