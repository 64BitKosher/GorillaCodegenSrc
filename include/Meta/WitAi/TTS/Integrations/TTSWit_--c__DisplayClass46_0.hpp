// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.Integrations.TTSWit
#include "Meta/WitAi/TTS/Integrations/TTSWit.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0*, "Meta.WitAi.TTS.Integrations", "TTSWit/<>c__DisplayClass46_0");
// Type namespace: Meta.WitAi.TTS.Integrations
namespace Meta::WitAi::TTS::Integrations {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass46_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSWit::$$c__DisplayClass46_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Type baseType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* baseType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return baseType;
    }
    // Get instance field reference: public System.Type baseType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_baseType();
    // public System.Void .ctor()
    // Offset: 0x445B1DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSWit::$$c__DisplayClass46_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSWit::$$c__DisplayClass46_0*, creationType>()));
    }
    // System.Boolean <GetVoiceSettingsFields>b__0(System.Reflection.FieldInfo field)
    // Offset: 0x445B9BC
    bool $GetVoiceSettingsFields$b__0(::System::Reflection::FieldInfo* field);
  }; // Meta.WitAi.TTS.Integrations.TTSWit/<>c__DisplayClass46_0
  #pragma pack(pop)
  static check_size<sizeof(TTSWit::$$c__DisplayClass46_0), 16 + sizeof(::System::Type*)> __Meta_WitAi_TTS_Integrations_TTSWit_$$c__DisplayClass46_0SizeCheck;
  static_assert(sizeof(TTSWit::$$c__DisplayClass46_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0::$GetVoiceSettingsFields$b__0
// Il2CppName: <GetVoiceSettingsFields>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0::*)(::System::Reflection::FieldInfo*)>(&Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0::$GetVoiceSettingsFields$b__0)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Integrations::TTSWit::$$c__DisplayClass46_0*), "<GetVoiceSettingsFields>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
