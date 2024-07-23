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
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::TTS::Data
namespace Meta::WitAi::TTS::Data {
  // Forward declaring type: TTSClipData
  class TTSClipData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0*, "Meta.WitAi.TTS.Utilities", "TTSSpeaker/<>c__DisplayClass54_0");
// Type namespace: Meta.WitAi.TTS.Utilities
namespace Meta::WitAi::TTS::Utilities {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass54_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TTSSpeaker::$$c__DisplayClass54_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 activeRequests
    // Size: 0x4
    // Offset: 0x10
    int activeRequests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return activeRequests;
    }
    // Get instance field reference: public System.Int32 activeRequests
    [[deprecated("Use field access instead!")]] int& dyn_activeRequests();
    // public System.Void .ctor()
    // Offset: 0x4461B30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeaker::$$c__DisplayClass54_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeaker::$$c__DisplayClass54_0*, creationType>()));
    }
    // System.Void <WaitForCompletion>b__0(Meta.WitAi.TTS.Utilities.TTSSpeaker speaker, Meta.WitAi.TTS.Data.TTSClipData clip)
    // Offset: 0x4461B38
    void $WaitForCompletion$b__0(::Meta::WitAi::TTS::Utilities::TTSSpeaker* speaker, ::Meta::WitAi::TTS::Data::TTSClipData* clip);
    // System.Boolean <WaitForCompletion>b__1()
    // Offset: 0x4461B48
    bool $WaitForCompletion$b__1();
  }; // Meta.WitAi.TTS.Utilities.TTSSpeaker/<>c__DisplayClass54_0
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeaker::$$c__DisplayClass54_0), 16 + sizeof(int)> __Meta_WitAi_TTS_Utilities_TTSSpeaker_$$c__DisplayClass54_0SizeCheck;
  static_assert(sizeof(TTSSpeaker::$$c__DisplayClass54_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::$WaitForCompletion$b__0
// Il2CppName: <WaitForCompletion>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::*)(::Meta::WitAi::TTS::Utilities::TTSSpeaker*, ::Meta::WitAi::TTS::Data::TTSClipData*)>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::$WaitForCompletion$b__0)> {
  static const MethodInfo* get() {
    static auto* speaker = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Utilities", "TTSSpeaker")->byval_arg;
    static auto* clip = &::il2cpp_utils::GetClassFromName("Meta.WitAi.TTS.Data", "TTSClipData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0*), "<WaitForCompletion>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{speaker, clip});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::$WaitForCompletion$b__1
// Il2CppName: <WaitForCompletion>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::*)()>(&Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0::$WaitForCompletion$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::TTS::Utilities::TTSSpeaker::$$c__DisplayClass54_0*), "<WaitForCompletion>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
