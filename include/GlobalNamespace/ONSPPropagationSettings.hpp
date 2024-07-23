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
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ONSPPropagationSettings
  class ONSPPropagationSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ONSPPropagationSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ONSPPropagationSettings*, "", "ONSPPropagationSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: ONSPPropagationSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class ONSPPropagationSettings : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Single quality
    // Size: 0x4
    // Offset: 0x20
    float quality;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public System.Single quality
    [[deprecated("Use field access instead!")]] float& dyn_quality();
    // private System.Void Update()
    // Offset: 0x48A91F0
    void Update();
    // public System.Void .ctor()
    // Offset: 0x48A92AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ONSPPropagationSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ONSPPropagationSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ONSPPropagationSettings*, creationType>()));
    }
  }; // ONSPPropagationSettings
  #pragma pack(pop)
  static check_size<sizeof(ONSPPropagationSettings), 32 + sizeof(float)> __GlobalNamespace_ONSPPropagationSettingsSizeCheck;
  static_assert(sizeof(ONSPPropagationSettings) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationSettings::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ONSPPropagationSettings::*)()>(&GlobalNamespace::ONSPPropagationSettings::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ONSPPropagationSettings*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ONSPPropagationSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
