// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.OpusCodec
#include "Photon/Voice/OpusCodec.hpp"
// Including type: Photon.Voice.IDecoder
#include "Photon/Voice/IDecoder.hpp"
// Including type: Photon.Voice.VoiceInfo
#include "Photon/Voice/VoiceInfo.hpp"
// Including type: Photon.Voice.FrameBuffer
#include "Photon/Voice/FrameBuffer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: POpusCodec
namespace POpusCodec {
  // Forward declaring type: OpusDecoder`1<T>
  template<typename T>
  class OpusDecoder_1;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ILogger
  class ILogger;
  // Forward declaring type: FrameOut`1<T>
  template<typename T>
  class FrameOut_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::OpusCodec::Decoder_1, "Photon.Voice", "OpusCodec/Decoder`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.OpusCodec/Decoder`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class OpusCodec::Decoder_1 : public ::Il2CppObject/*, public ::Photon::Voice::IDecoder*/ {
    public:
    public:
    // protected POpusCodec.OpusDecoder`1<T> decoder
    // Size: 0x8
    // Offset: 0x0
    ::POpusCodec::OpusDecoder_1<T>* decoder;
    // Field size check
    static_assert(sizeof(::POpusCodec::OpusDecoder_1<T>*) == 0x8);
    // private Photon.Voice.ILogger logger
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::ILogger* logger;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ILogger*) == 0x8);
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Action`1<Photon.Voice.FrameOut`1<T>> output
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* output;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*) == 0x8);
    // private Photon.Voice.FrameOut`1<T> frameOut
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::FrameOut_1<T>* frameOut;
    // Field size check
    static_assert(sizeof(::Photon::Voice::FrameOut_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IDecoder
    operator ::Photon::Voice::IDecoder() noexcept {
      return *reinterpret_cast<::Photon::Voice::IDecoder*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: protected POpusCodec.OpusDecoder`1<T> decoder
    [[deprecated("Use field access instead!")]] ::POpusCodec::OpusDecoder_1<T>*& dyn_decoder() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::dyn_decoder");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "decoder"))->offset;
      return *reinterpret_cast<::POpusCodec::OpusDecoder_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.ILogger logger
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ILogger*& dyn_logger() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::dyn_logger");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "logger"))->offset;
      return *reinterpret_cast<::Photon::Voice::ILogger**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::dyn_$Error$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Error>k__BackingField"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action`1<Photon.Voice.FrameOut`1<T>> output
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Photon::Voice::FrameOut_1<T>*>*& dyn_output() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::dyn_output");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "output"))->offset;
      return *reinterpret_cast<::System::Action_1<::Photon::Voice::FrameOut_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.FrameOut`1<T> frameOut
    [[deprecated("Use field access instead!")]] ::Photon::Voice::FrameOut_1<T>*& dyn_frameOut() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::dyn_frameOut");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "frameOut"))->offset;
      return *reinterpret_cast<::Photon::Voice::FrameOut_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Action`1<Photon.Voice.FrameOut`1<T>> output, Photon.Voice.ILogger logger)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OpusCodec::Decoder_1<T>* New_ctor(::System::Action_1<::Photon::Voice::FrameOut_1<T>*>* output, ::Photon::Voice::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OpusCodec::Decoder_1<T>*, creationType>(output, logger)));
    }
    // public System.Void Open(Photon.Voice.VoiceInfo i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Open(::Photon::Voice::VoiceInfo i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::Open");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::OpusCodec::Decoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, i);
    }
    // public System.String get_Error()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_Error() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::get_Error");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::OpusCodec::Decoder_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // private System.Void set_Error(System.String value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Error(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::set_Error");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Error", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::OpusCodec::Decoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Input(ref Photon.Voice.FrameBuffer buf)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Input(ByRef<::Photon::Voice::FrameBuffer> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::OpusCodec::Decoder_1::Input");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::OpusCodec::Decoder_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(buf));
    }
  }; // Photon.Voice.OpusCodec/Decoder`1
  // Could not write size check! Type: Photon.Voice.OpusCodec/Decoder`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
