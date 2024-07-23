// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
}
// Completed forward declares
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: AudioUtil
  class AudioUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::AudioUtil);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::AudioUtil*, "Photon.Voice", "AudioUtil");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.AudioUtil
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioUtil : public ::Il2CppObject {
    public:
    // Nested type: ::Photon::Voice::AudioUtil::ToneAudioReader_1<T>
    template<typename T>
    class ToneAudioReader_1;
    // Nested type: ::Photon::Voice::AudioUtil::ToneAudioPusher_1<T>
    template<typename T>
    class ToneAudioPusher_1;
    // Nested type: ::Photon::Voice::AudioUtil::TempoUp_1<T>
    template<typename T>
    class TempoUp_1;
    // Nested type: ::Photon::Voice::AudioUtil::Resampler_1<T>
    template<typename T>
    class Resampler_1;
    // Nested type: ::Photon::Voice::AudioUtil::ILevelMeter
    class ILevelMeter;
    // Nested type: ::Photon::Voice::AudioUtil::LevelMeterDummy
    class LevelMeterDummy;
    // Nested type: ::Photon::Voice::AudioUtil::LevelMeter_1<T>
    template<typename T>
    class LevelMeter_1;
    // Nested type: ::Photon::Voice::AudioUtil::LevelMeterFloat
    class LevelMeterFloat;
    // Nested type: ::Photon::Voice::AudioUtil::LevelMeterShort
    class LevelMeterShort;
    // Nested type: ::Photon::Voice::AudioUtil::IVoiceDetector
    class IVoiceDetector;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceDetectorCalibration_1<T>
    template<typename T>
    class VoiceDetectorCalibration_1;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceDetectorDummy
    class VoiceDetectorDummy;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceDetector_1<T>
    template<typename T>
    class VoiceDetector_1;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceDetectorFloat
    class VoiceDetectorFloat;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceDetectorShort
    class VoiceDetectorShort;
    // Nested type: ::Photon::Voice::AudioUtil::VoiceLevelDetectCalibrate_1<T>
    template<typename T>
    class VoiceLevelDetectCalibrate_1;
    // static public System.Void Resample(T[] src, T[] dst, System.Int32 dstCount, System.Int32 channels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Resample(::ArrayW<T> src, ::ArrayW<T> dst, int dstCount, int channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resample");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Voice", "AudioUtil", "Resample", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(src), ::il2cpp_utils::ExtractType(dst), ::il2cpp_utils::ExtractType(dstCount), ::il2cpp_utils::ExtractType(channels)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, src, dst, dstCount, channels);
    }
    // static public System.Void Resample(T[] src, System.Int32 srcOffset, System.Int32 srcCount, T[] dst, System.Int32 dstOffset, System.Int32 dstCount, System.Int32 channels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Resample(::ArrayW<T> src, int srcOffset, int srcCount, ::ArrayW<T> dst, int dstOffset, int dstCount, int channels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resample");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Voice", "AudioUtil", "Resample", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(src), ::il2cpp_utils::ExtractType(srcOffset), ::il2cpp_utils::ExtractType(srcCount), ::il2cpp_utils::ExtractType(dst), ::il2cpp_utils::ExtractType(dstOffset), ::il2cpp_utils::ExtractType(dstCount), ::il2cpp_utils::ExtractType(channels)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, src, srcOffset, srcCount, dst, dstOffset, dstCount, channels);
    }
    // static public System.Void Resample(T[] src, System.Int32 srcOffset, System.Int32 srcCount, System.Int32 srcChannels, T[] dst, System.Int32 dstOffset, System.Int32 dstCount, System.Int32 dstChannels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Resample(::ArrayW<T> src, int srcOffset, int srcCount, int srcChannels, ::ArrayW<T> dst, int dstOffset, int dstCount, int dstChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::Resample");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Voice", "AudioUtil", "Resample", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(src), ::il2cpp_utils::ExtractType(srcOffset), ::il2cpp_utils::ExtractType(srcCount), ::il2cpp_utils::ExtractType(srcChannels), ::il2cpp_utils::ExtractType(dst), ::il2cpp_utils::ExtractType(dstOffset), ::il2cpp_utils::ExtractType(dstCount), ::il2cpp_utils::ExtractType(dstChannels)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, src, srcOffset, srcCount, srcChannels, dst, dstOffset, dstCount, dstChannels);
    }
    // static public System.Void ResampleAndConvert(System.Int16[] src, System.Single[] dst, System.Int32 dstCount, System.Int32 channels)
    // Offset: 0x4A619E8
    static void ResampleAndConvert(::ArrayW<int16_t> src, ::ArrayW<float> dst, int dstCount, int channels);
    // static public System.Void ResampleAndConvert(System.Single[] src, System.Int16[] dst, System.Int32 dstCount, System.Int32 channels)
    // Offset: 0x4A61BB4
    static void ResampleAndConvert(::ArrayW<float> src, ::ArrayW<int16_t> dst, int dstCount, int channels);
    // static public System.Void Convert(System.Single[] src, System.Int16[] dst, System.Int32 dstCount)
    // Offset: 0x4A61DBC
    static void Convert(::ArrayW<float> src, ::ArrayW<int16_t> dst, int dstCount);
    // static public System.Void Convert(System.Int16[] src, System.Single[] dst, System.Int32 dstCount)
    // Offset: 0x4A61E3C
    static void Convert(::ArrayW<int16_t> src, ::ArrayW<float> dst, int dstCount);
    // static public System.Void ForceToStereo(T[] src, T[] dst, System.Int32 srcChannels)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void ForceToStereo(::ArrayW<T> src, ::ArrayW<T> dst, int srcChannels) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::ForceToStereo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Voice", "AudioUtil", "ForceToStereo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(src), ::il2cpp_utils::ExtractType(dst), ::il2cpp_utils::ExtractType(srcChannels)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, src, dst, srcChannels);
    }
    // static System.String tostr(T[] x, System.Int32 lim)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::StringW tostr(::ArrayW<T> x, int lim) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::tostr");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Photon.Voice", "AudioUtil", "tostr", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(x), ::il2cpp_utils::ExtractType(lim)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, x, lim);
    }
  }; // Photon.Voice.AudioUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::Resample
// Il2CppName: Resample
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::Resample
// Il2CppName: Resample
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::Resample
// Il2CppName: Resample
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::ResampleAndConvert
// Il2CppName: ResampleAndConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int16_t>, ::ArrayW<float>, int, int)>(&Photon::Voice::AudioUtil::ResampleAndConvert)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* dstCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil*), "ResampleAndConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst, dstCount, channels});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::ResampleAndConvert
// Il2CppName: ResampleAndConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<float>, ::ArrayW<int16_t>, int, int)>(&Photon::Voice::AudioUtil::ResampleAndConvert)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* dstCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil*), "ResampleAndConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst, dstCount, channels});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<float>, ::ArrayW<int16_t>, int)>(&Photon::Voice::AudioUtil::Convert)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* dstCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst, dstCount});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<int16_t>, ::ArrayW<float>, int)>(&Photon::Voice::AudioUtil::Convert)> {
  static const MethodInfo* get() {
    static auto* src = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int16"), 1)->byval_arg;
    static auto* dst = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* dstCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, dst, dstCount});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::ForceToStereo
// Il2CppName: ForceToStereo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::tostr
// Il2CppName: tostr
// Cannot write MetadataGetter for generic methods!
