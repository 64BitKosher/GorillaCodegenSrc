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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1, "Photon.Voice", "AudioUtil/VoiceLevelDetectCalibrate`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AudioUtil::VoiceLevelDetectCalibrate_1 : public ::Il2CppObject/*, public ::Photon::Voice::IProcessor_1<T>*/ {
    public:
    public:
    // private Photon.Voice.AudioUtil/ILevelMeter <LevelMeter>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::AudioUtil::ILevelMeter* LevelMeter;
    // Field size check
    static_assert(sizeof(::Photon::Voice::AudioUtil::ILevelMeter*) == 0x8);
    // private Photon.Voice.AudioUtil/IVoiceDetector <VoiceDetector>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::AudioUtil::IVoiceDetector* VoiceDetector;
    // Field size check
    static_assert(sizeof(::Photon::Voice::AudioUtil::IVoiceDetector*) == 0x8);
    // private Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> calibration
    // Size: 0x8
    // Offset: 0x0
    ::Photon::Voice::AudioUtil::VoiceDetectorCalibration_1<T>* calibration;
    // Field size check
    static_assert(sizeof(::Photon::Voice::AudioUtil::VoiceDetectorCalibration_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IProcessor_1<T>
    operator ::Photon::Voice::IProcessor_1<T>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IProcessor_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.AudioUtil/ILevelMeter <LevelMeter>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::AudioUtil::ILevelMeter*& dyn_$LevelMeter$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::dyn_$LevelMeter$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<LevelMeter>k__BackingField"))->offset;
      return *reinterpret_cast<::Photon::Voice::AudioUtil::ILevelMeter**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.AudioUtil/IVoiceDetector <VoiceDetector>k__BackingField
    [[deprecated("Use field access instead!")]] ::Photon::Voice::AudioUtil::IVoiceDetector*& dyn_$VoiceDetector$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::dyn_$VoiceDetector$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<VoiceDetector>k__BackingField"))->offset;
      return *reinterpret_cast<::Photon::Voice::AudioUtil::IVoiceDetector**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Photon.Voice.AudioUtil/VoiceDetectorCalibration`1<T> calibration
    [[deprecated("Use field access instead!")]] ::Photon::Voice::AudioUtil::VoiceDetectorCalibration_1<T>*& dyn_calibration() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::dyn_calibration");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "calibration"))->offset;
      return *reinterpret_cast<::Photon::Voice::AudioUtil::VoiceDetectorCalibration_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Photon.Voice.AudioUtil/ILevelMeter get_LevelMeter()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Photon::Voice::AudioUtil::ILevelMeter* get_LevelMeter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::get_LevelMeter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_LevelMeter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Photon::Voice::AudioUtil::ILevelMeter*, false>(this, ___internal__method);
    }
    // private System.Void set_LevelMeter(Photon.Voice.AudioUtil/ILevelMeter value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_LevelMeter(::Photon::Voice::AudioUtil::ILevelMeter* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::set_LevelMeter");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_LevelMeter", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public Photon.Voice.AudioUtil/IVoiceDetector get_VoiceDetector()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Photon::Voice::AudioUtil::IVoiceDetector* get_VoiceDetector() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::get_VoiceDetector");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_VoiceDetector", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Photon::Voice::AudioUtil::IVoiceDetector*, false>(this, ___internal__method);
    }
    // private System.Void set_VoiceDetector(Photon.Voice.AudioUtil/IVoiceDetector value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_VoiceDetector(::Photon::Voice::AudioUtil::IVoiceDetector* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::set_VoiceDetector");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_VoiceDetector", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(System.Int32 samplingRate, System.Int32 channels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::VoiceLevelDetectCalibrate_1<T>* New_ctor(int samplingRate, int channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::VoiceLevelDetectCalibrate_1<T>*, creationType>(samplingRate, channels)));
    }
    // public System.Void Calibrate(System.Int32 durationMs, System.Action`1<System.Single> onCalibrated)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Calibrate(int durationMs, ::System::Action_1<float>* onCalibrated) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::Calibrate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Calibrate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(durationMs), ::il2cpp_utils::ExtractType(onCalibrated)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, durationMs, onCalibrated);
    }
    // public System.Boolean get_IsCalibrating()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCalibrating() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::get_IsCalibrating");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_IsCalibrating", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public T[] Process(T[] buf)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Process(::ArrayW<T> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::Process");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, buf);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1
  // Could not write size check! Type: Photon.Voice.AudioUtil/VoiceLevelDetectCalibrate`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"