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
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Dictation
namespace Meta::WitAi::Dictation {
  // Forward declaring type: DictationService
  class DictationService;
}
// Completed forward declares
// Type namespace: Meta.Voice.Samples.Dictation
namespace Meta::Voice::Samples::Dictation {
  // Forward declaring type: DictationActivation
  class DictationActivation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Samples::Dictation::DictationActivation);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::Dictation::DictationActivation*, "Meta.Voice.Samples.Dictation", "DictationActivation");
// Type namespace: Meta.Voice.Samples.Dictation
namespace Meta::Voice::Samples::Dictation {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Samples.Dictation.DictationActivation
  // [TokenAttribute] Offset: FFFFFFFF
  class DictationActivation : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Meta.WitAi.Dictation.DictationService _dictation
    // Size: 0x8
    // Offset: 0x20
    ::Meta::WitAi::Dictation::DictationService* dictation;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Dictation::DictationService*) == 0x8);
    public:
    // Get instance field reference: private Meta.WitAi.Dictation.DictationService _dictation
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Dictation::DictationService*& dyn__dictation();
    // public System.Void ToggleActivation()
    // Offset: 0x44108F4
    void ToggleActivation();
    // public System.Void .ctor()
    // Offset: 0x441094C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictationActivation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Samples::Dictation::DictationActivation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictationActivation*, creationType>()));
    }
  }; // Meta.Voice.Samples.Dictation.DictationActivation
  #pragma pack(pop)
  static check_size<sizeof(DictationActivation), 32 + sizeof(::Meta::WitAi::Dictation::DictationService*)> __Meta_Voice_Samples_Dictation_DictationActivationSizeCheck;
  static_assert(sizeof(DictationActivation) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Samples::Dictation::DictationActivation::ToggleActivation
// Il2CppName: ToggleActivation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::Dictation::DictationActivation::*)()>(&Meta::Voice::Samples::Dictation::DictationActivation::ToggleActivation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Dictation::DictationActivation*), "ToggleActivation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Dictation::DictationActivation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
