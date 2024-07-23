// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.OpusCodec
#include "Photon/Voice/OpusCodec.hpp"
// Including type: Photon.Voice.OpusCodec/Encoder`1
#include "Photon/Voice/OpusCodec_Encoder_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ArraySegment`1 because it is already included!
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ILogger
  class ILogger;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::OpusCodec::EncoderShort);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::OpusCodec::EncoderShort*, "Photon.Voice", "OpusCodec/EncoderShort");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.OpusCodec/EncoderShort
  // [TokenAttribute] Offset: FFFFFFFF
  class OpusCodec::EncoderShort : public ::Photon::Voice::OpusCodec::Encoder_1<int16_t> {
    public:
    // protected System.ArraySegment`1<System.Byte> encodeTyped(System.Int16[] buf)
    // Offset: 0x4A6326C
    ::System::ArraySegment_1<uint8_t> encodeTyped(::ArrayW<int16_t> buf);
    // System.Void .ctor(Photon.Voice.VoiceInfo i, Photon.Voice.ILogger logger)
    // Offset: 0x4A631BC
    // Implemented from: Photon.Voice.OpusCodec/Encoder`1
    // Base method: System.Void Encoder_1::.ctor(Photon.Voice.VoiceInfo i, Photon.Voice.ILogger logger)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpusCodec::EncoderShort* New_ctor(::Photon::Voice::VoiceInfo i, ::Photon::Voice::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::EncoderShort::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpusCodec::EncoderShort*, creationType>(i, logger)));
    }
  }; // Photon.Voice.OpusCodec/EncoderShort
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::OpusCodec::EncoderShort::encodeTyped
// Il2CppName: encodeTyped
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ArraySegment_1<uint8_t> (Photon::Voice::OpusCodec::EncoderShort::*)(::ArrayW<int16_t>)>(&Photon::Voice::OpusCodec::EncoderShort::encodeTyped)> {
  static const MethodInfo* get() {
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::OpusCodec::EncoderShort*), "encodeTyped", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buf});
  }
};
// Writing MetadataGetter for method: Photon::Voice::OpusCodec::EncoderShort::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
