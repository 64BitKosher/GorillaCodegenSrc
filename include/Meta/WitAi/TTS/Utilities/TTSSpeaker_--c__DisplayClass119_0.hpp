// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.TTS.Utilities.TTSSpeaker
#include "Meta/WitAi/TTS/Utilities/TTSSpeaker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass119_0");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass119_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSSpeaker::$$c__DisplayClass119_0 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData requestData
    // Size: 0x20
    // Offset: 0x10
    ::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData requestData;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData) == 0x20);
    public:
    // Creating conversion operator: operator ::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData
    constexpr operator ::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData() const noexcept {
      return requestData;
    }
    // Get instance field reference: public Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData requestData
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData& dyn_requestData();
    // public System.Void .ctor()
    // Offset: 0x44602E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeaker::$$c__DisplayClass119_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeaker::$$c__DisplayClass119_0*, creationType>()));
    }
    // System.Boolean <HandleUnload>b__0(Meta.WitAi.TTS.Utilities.TTSSpeaker/TTSSpeakerRequestData checkRequest)
    // Offset: 0x4461A9C
    bool $HandleUnload$b__0(::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData checkRequest);
  }; // Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass119_0
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeaker::$$c__DisplayClass119_0), 16 + sizeof(::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData)> __Meta_WitAi_TTS_Utilities_TTSSpeaker_$$c__DisplayClass119_0SizeCheck;
  static_assert(sizeof(TTSSpeaker::$$c__DisplayClass119_0) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0::$HandleUnload$b__0
// Il2CppName: <HandleUnload>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker::TTSSpeakerRequestData)>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0::$HandleUnload$b__0)> {
  static const MethodInfo* get() {
    static auto* checkRequest = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Utilities", "TTSSpeaker/TTSSpeakerRequestData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass119_0*), "<HandleUnload>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{checkRequest});
  }
};
