// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.AudioUtil
#include "Photon/Voice/AudioUtil.hpp"
// Including type: Photon.Voice.IProcessor`1
#include "Photon/Voice/IProcessor_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::AudioUtil::Resampler_1, "Photon.Voice", "AudioUtil/Resampler`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.AudioUtil/Resampler`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AudioUtil::Resampler_1 : public ::Il2CppObject/*, public ::Photon::Voice::IProcessor_1<T>*/ {
    public:
    public:
    // protected T[] frameResampled
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> frameResampled;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    // private System.Int32 channels
    // Size: 0x4
    // Offset: 0x0
    int channels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IProcessor_1<T>
    operator ::Photon::Voice::IProcessor_1<T>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IProcessor_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: protected T[] frameResampled
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn_frameResampled() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resampler_1::dyn_frameResampled");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "frameResampled"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 channels
    [[deprecated("Use field access instead!")]] int& dyn_channels() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resampler_1::dyn_channels");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "channels"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(System.Int32 dstSize, System.Int32 channels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::Resampler_1<T>* New_ctor(int dstSize, int channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resampler_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::Resampler_1<T>*, creationType>(dstSize, channels)));
    }
    // public T[] Process(T[] buf)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Process(::ArrayW<T> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resampler_1::Process");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::Resampler_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, buf);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resampler_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::Resampler_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.AudioUtil/Resampler`1
  // Could not write size check! Type: Photon.Voice.AudioUtil/Resampler`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
