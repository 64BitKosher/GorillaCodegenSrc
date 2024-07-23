// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BetterBaker
  class BetterBaker;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BetterBaker);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BetterBaker*, "", "BetterBaker");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: BetterBaker
  // [TokenAttribute] Offset: FFFFFFFF
  class BetterBaker : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::BetterBaker::LightMapMap
    struct LightMapMap;
    public:
    // public System.String bakeryLightmapDirectory
    // Size: 0x8
    // Offset: 0x20
    ::StringW bakeryLightmapDirectory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String dayNightLightmapsDirectory
    // Size: 0x8
    // Offset: 0x28
    ::StringW dayNightLightmapsDirectory;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public UnityEngine.GameObject[] allLights
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::UnityEngine::GameObject*> allLights;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::GameObject*>) == 0x8);
    public:
    // Get instance field reference: public System.String bakeryLightmapDirectory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_bakeryLightmapDirectory();
    // Get instance field reference: public System.String dayNightLightmapsDirectory
    [[deprecated("Use field access instead!")]] ::StringW& dyn_dayNightLightmapsDirectory();
    // Get instance field reference: public UnityEngine.GameObject[] allLights
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::GameObject*>& dyn_allLights();
    // public System.Void .ctor()
    // Offset: 0x2773834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BetterBaker* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BetterBaker::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BetterBaker*, creationType>()));
    }
  }; // BetterBaker
  #pragma pack(pop)
  static check_size<sizeof(BetterBaker), 48 + sizeof(::ArrayW<::UnityEngine::GameObject*>)> __GlobalNamespace_BetterBakerSizeCheck;
  static_assert(sizeof(BetterBaker) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BetterBaker::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!