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
// Including type: Photon.Voice.AudioUtil/IVoiceDetector
#include "Photon/Voice/AudioUtil_IVoiceDetector.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::AudioUtil::VoiceDetector_1, "Photon.Voice", "AudioUtil/VoiceDetector`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.AudioUtil/VoiceDetector`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class AudioUtil::VoiceDetector_1 : public ::Il2CppObject/*, public ::Photon::Voice::IProcessor_1<T>, public ::Photon::Voice::AudioUtil::IVoiceDetector*/ {
    public:
    public:
    // private System.Boolean <On>k__BackingField
    // Size: 0x1
    // Offset: 0x0
    bool On;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Single norm
    // Size: 0x4
    // Offset: 0x0
    float norm;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // protected System.Single threshold
    // Size: 0x4
    // Offset: 0x0
    float threshold;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean detected
    // Size: 0x1
    // Offset: 0x0
    bool detected;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.DateTime <DetectedTime>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::DateTime DetectedTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Action OnDetected
    // Size: 0x8
    // Offset: 0x0
    ::System::Action* OnDetected;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // protected System.Int32 activityDelay
    // Size: 0x4
    // Offset: 0x0
    int activityDelay;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 autoSilenceCounter
    // Size: 0x4
    // Offset: 0x0
    int autoSilenceCounter;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 valuesCountPerSec
    // Size: 0x4
    // Offset: 0x0
    int valuesCountPerSec;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 activityDelayValuesCount
    // Size: 0x4
    // Offset: 0x0
    int activityDelayValuesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IProcessor_1<T>
    operator ::Photon::Voice::IProcessor_1<T>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IProcessor_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::Photon::Voice::AudioUtil::IVoiceDetector
    operator ::Photon::Voice::AudioUtil::IVoiceDetector() noexcept {
      return *reinterpret_cast<::Photon::Voice::AudioUtil::IVoiceDetector*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean <On>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$On$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_$On$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<On>k__BackingField"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Single norm
    [[deprecated("Use field access instead!")]] float& dyn_norm() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_norm");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "norm"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Single threshold
    [[deprecated("Use field access instead!")]] float& dyn_threshold() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_threshold");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "threshold"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Boolean detected
    [[deprecated("Use field access instead!")]] bool& dyn_detected() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_detected");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "detected"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.DateTime <DetectedTime>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_$DetectedTime$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_$DetectedTime$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<DetectedTime>k__BackingField"))->offset;
      return *reinterpret_cast<::System::DateTime*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Action OnDetected
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_OnDetected() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_OnDetected");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "OnDetected"))->offset;
      return *reinterpret_cast<::System::Action**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 activityDelay
    [[deprecated("Use field access instead!")]] int& dyn_activityDelay() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_activityDelay");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "activityDelay"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 autoSilenceCounter
    [[deprecated("Use field access instead!")]] int& dyn_autoSilenceCounter() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_autoSilenceCounter");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "autoSilenceCounter"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 valuesCountPerSec
    [[deprecated("Use field access instead!")]] int& dyn_valuesCountPerSec() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_valuesCountPerSec");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "valuesCountPerSec"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: protected System.Int32 activityDelayValuesCount
    [[deprecated("Use field access instead!")]] int& dyn_activityDelayValuesCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::dyn_activityDelayValuesCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "activityDelayValuesCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Boolean get_On()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_On() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::get_On");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void set_On(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_On(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::set_On");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Single get_Threshold()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float get_Threshold() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::get_Threshold");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<float, false>(this, ___internal__method);
    }
    // public System.Void set_Threshold(System.Single value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Threshold(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::set_Threshold");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Boolean get_Detected()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_Detected() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::get_Detected");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // protected System.Void set_Detected(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Detected(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::set_Detected");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Detected", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.DateTime get_DetectedTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::DateTime get_DetectedTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::get_DetectedTime");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::DateTime, false>(this, ___internal__method);
    }
    // private System.Void set_DetectedTime(System.DateTime value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_DetectedTime(::System::DateTime value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::set_DetectedTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_DetectedTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int32 get_ActivityDelayMs()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_ActivityDelayMs() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::get_ActivityDelayMs");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void set_ActivityDelayMs(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ActivityDelayMs(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::set_ActivityDelayMs");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void add_OnDetected(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_OnDetected(::System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::add_OnDetected");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void remove_OnDetected(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_OnDetected(::System::Action* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::remove_OnDetected");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // System.Void .ctor(System.Int32 samplingRate, System.Int32 numChannels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::VoiceDetector_1<T>* New_ctor(int samplingRate, int numChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::VoiceDetector_1<T>*, creationType>(samplingRate, numChannels)));
    }
    // public T[] Process(T[] buf)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Process(::ArrayW<T> buf) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::Process");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, buf);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetector_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::AudioUtil::VoiceDetector_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // Photon.Voice.AudioUtil/VoiceDetector`1
  // Could not write size check! Type: Photon.Voice.AudioUtil/VoiceDetector`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
