// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.AudioUtil
#include "Photon/Voice/AudioUtil.hpp"
// Including type: Photon.Voice.AudioUtil/IVoiceDetector
#include "Photon/Voice/AudioUtil_IVoiceDetector.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::AudioUtil::VoiceDetectorDummy);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::AudioUtil::VoiceDetectorDummy*, "Photon.Voice", "AudioUtil/VoiceDetectorDummy");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.AudioUtil/VoiceDetectorDummy
  // [TokenAttribute] Offset: FFFFFFFF
  class AudioUtil::VoiceDetectorDummy : public ::Il2CppObject/*, public ::Photon::Voice::AudioUtil::IVoiceDetector*/ {
    public:
    public:
    // private System.DateTime <DetectedTime>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::DateTime DetectedTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::AudioUtil::IVoiceDetector
    operator ::Photon::Voice::AudioUtil::IVoiceDetector() noexcept {
      return *reinterpret_cast<::Photon::Voice::AudioUtil::IVoiceDetector*>(this);
    }
    // Creating conversion operator: operator ::System::DateTime
    constexpr operator ::System::DateTime() const noexcept {
      return DetectedTime;
    }
    // Get instance field reference: private System.DateTime <DetectedTime>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_$DetectedTime$k__BackingField();
    // public System.Boolean get_On()
    // Offset: 0x4A62158
    bool get_On();
    // public System.Void set_On(System.Boolean value)
    // Offset: 0x4A62160
    void set_On(bool value);
    // public System.Single get_Threshold()
    // Offset: 0x4A62164
    float get_Threshold();
    // public System.Void set_Threshold(System.Single value)
    // Offset: 0x4A6216C
    void set_Threshold(float value);
    // public System.Boolean get_Detected()
    // Offset: 0x4A62170
    bool get_Detected();
    // public System.Int32 get_ActivityDelayMs()
    // Offset: 0x4A62178
    int get_ActivityDelayMs();
    // public System.Void set_ActivityDelayMs(System.Int32 value)
    // Offset: 0x4A62180
    void set_ActivityDelayMs(int value);
    // public System.DateTime get_DetectedTime()
    // Offset: 0x4A62184
    ::System::DateTime get_DetectedTime();
    // private System.Void set_DetectedTime(System.DateTime value)
    // Offset: 0x4A6218C
    void set_DetectedTime(::System::DateTime value);
    // public System.Void add_OnDetected(System.Action value)
    // Offset: 0x4A62194
    void add_OnDetected(::System::Action* value);
    // public System.Void remove_OnDetected(System.Action value)
    // Offset: 0x4A62198
    void remove_OnDetected(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x4A6219C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioUtil::VoiceDetectorDummy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::AudioUtil::VoiceDetectorDummy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioUtil::VoiceDetectorDummy*, creationType>()));
    }
  }; // Photon.Voice.AudioUtil/VoiceDetectorDummy
  #pragma pack(pop)
  static check_size<sizeof(AudioUtil::VoiceDetectorDummy), 16 + sizeof(::System::DateTime)> __Photon_Voice_AudioUtil_VoiceDetectorDummySizeCheck;
  static_assert(sizeof(AudioUtil::VoiceDetectorDummy) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::get_On
// Il2CppName: get_On
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)()>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::get_On)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "get_On", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::set_On
// Il2CppName: set_On
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(bool)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::set_On)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "set_On", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::get_Threshold
// Il2CppName: get_Threshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)()>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::get_Threshold)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "get_Threshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::set_Threshold
// Il2CppName: set_Threshold
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(float)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::set_Threshold)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "set_Threshold", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::get_Detected
// Il2CppName: get_Detected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)()>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::get_Detected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "get_Detected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::get_ActivityDelayMs
// Il2CppName: get_ActivityDelayMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)()>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::get_ActivityDelayMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "get_ActivityDelayMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::set_ActivityDelayMs
// Il2CppName: set_ActivityDelayMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(int)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::set_ActivityDelayMs)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "set_ActivityDelayMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::get_DetectedTime
// Il2CppName: get_DetectedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)()>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::get_DetectedTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "get_DetectedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::set_DetectedTime
// Il2CppName: set_DetectedTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(::System::DateTime)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::set_DetectedTime)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "set_DetectedTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::add_OnDetected
// Il2CppName: add_OnDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(::System::Action*)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::add_OnDetected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "add_OnDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::remove_OnDetected
// Il2CppName: remove_OnDetected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::AudioUtil::VoiceDetectorDummy::*)(::System::Action*)>(&Photon::Voice::AudioUtil::VoiceDetectorDummy::remove_OnDetected)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::AudioUtil::VoiceDetectorDummy*), "remove_OnDetected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::AudioUtil::VoiceDetectorDummy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
