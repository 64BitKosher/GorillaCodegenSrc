// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.IAudioReader`1
#include "Photon/Voice/IAudioReader_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: Photon::Voice
namespace Photon::Voice {
  // Forward declaring type: ILogger
  class ILogger;
}
// Completed forward declares
// Type namespace: Photon.Voice.Unity
namespace Photon::Voice::Unity {
  // Forward declaring type: MicWrapper
  class MicWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Voice::Unity::MicWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::Unity::MicWrapper*, "Photon.Voice.Unity", "MicWrapper");
// Type namespace: Photon.Voice.Unity
namespace Photon::Voice::Unity {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.Unity.MicWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class MicWrapper : public ::Il2CppObject/*, public ::Photon::Voice::IAudioReader_1<float>*/ {
    public:
    public:
    // private UnityEngine.AudioClip mic
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioClip* mic;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioClip*) == 0x8);
    // private System.String device
    // Size: 0x8
    // Offset: 0x18
    ::StringW device;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Photon.Voice.ILogger logger
    // Size: 0x8
    // Offset: 0x20
    ::Photon::Voice::ILogger* logger;
    // Field size check
    static_assert(sizeof(::Photon::Voice::ILogger*) == 0x8);
    // private System.String <Error>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::StringW Error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 micPrevPos
    // Size: 0x4
    // Offset: 0x30
    int micPrevPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 micLoopCnt
    // Size: 0x4
    // Offset: 0x34
    int micLoopCnt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 readAbsPos
    // Size: 0x4
    // Offset: 0x38
    int readAbsPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Photon::Voice::IAudioReader_1<float>
    operator ::Photon::Voice::IAudioReader_1<float>() noexcept {
      return *reinterpret_cast<::Photon::Voice::IAudioReader_1<float>*>(this);
    }
    // Get instance field reference: private UnityEngine.AudioClip mic
    [[deprecated("Use field access instead!")]] ::UnityEngine::AudioClip*& dyn_mic();
    // Get instance field reference: private System.String device
    [[deprecated("Use field access instead!")]] ::StringW& dyn_device();
    // Get instance field reference: private Photon.Voice.ILogger logger
    [[deprecated("Use field access instead!")]] ::Photon::Voice::ILogger*& dyn_logger();
    // Get instance field reference: private System.String <Error>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Error$k__BackingField();
    // Get instance field reference: private System.Int32 micPrevPos
    [[deprecated("Use field access instead!")]] int& dyn_micPrevPos();
    // Get instance field reference: private System.Int32 micLoopCnt
    [[deprecated("Use field access instead!")]] int& dyn_micLoopCnt();
    // Get instance field reference: private System.Int32 readAbsPos
    [[deprecated("Use field access instead!")]] int& dyn_readAbsPos();
    // public UnityEngine.AudioClip get_Mic()
    // Offset: 0x4A77AB8
    ::UnityEngine::AudioClip* get_Mic();
    // public System.Void .ctor(System.String device, System.Int32 suggestedFrequency, Photon.Voice.ILogger logger)
    // Offset: 0x4A77AC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MicWrapper* New_ctor(::StringW device, int suggestedFrequency, ::Photon::Voice::ILogger* logger) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::Unity::MicWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MicWrapper*, creationType>(device, suggestedFrequency, logger)));
    }
    // public System.Int32 get_SamplingRate()
    // Offset: 0x4A781E0
    int get_SamplingRate();
    // public System.Int32 get_Channels()
    // Offset: 0x4A78210
    int get_Channels();
    // public System.String get_Error()
    // Offset: 0x4A78240
    ::StringW get_Error();
    // private System.Void set_Error(System.String value)
    // Offset: 0x4A78248
    void set_Error(::StringW value);
    // public System.Void Dispose()
    // Offset: 0x4A78250
    void Dispose();
    // public System.Boolean Read(System.Single[] buffer)
    // Offset: 0x4A782C8
    bool Read(::ArrayW<float> buffer);
  }; // Photon.Voice.Unity.MicWrapper
  #pragma pack(pop)
  static check_size<sizeof(MicWrapper), 56 + sizeof(int)> __Photon_Voice_Unity_MicWrapperSizeCheck;
  static_assert(sizeof(MicWrapper) == 0x3C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::get_Mic
// Il2CppName: get_Mic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (Photon::Voice::Unity::MicWrapper::*)()>(&Photon::Voice::Unity::MicWrapper::get_Mic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "get_Mic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::get_SamplingRate
// Il2CppName: get_SamplingRate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::Unity::MicWrapper::*)()>(&Photon::Voice::Unity::MicWrapper::get_SamplingRate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "get_SamplingRate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::get_Channels
// Il2CppName: get_Channels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Photon::Voice::Unity::MicWrapper::*)()>(&Photon::Voice::Unity::MicWrapper::get_Channels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "get_Channels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::get_Error
// Il2CppName: get_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Photon::Voice::Unity::MicWrapper::*)()>(&Photon::Voice::Unity::MicWrapper::get_Error)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "get_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::set_Error
// Il2CppName: set_Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Unity::MicWrapper::*)(::StringW)>(&Photon::Voice::Unity::MicWrapper::set_Error)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "set_Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Photon::Voice::Unity::MicWrapper::*)()>(&Photon::Voice::Unity::MicWrapper::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Voice::Unity::MicWrapper::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Photon::Voice::Unity::MicWrapper::*)(::ArrayW<float>)>(&Photon::Voice::Unity::MicWrapper::Read)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Photon::Voice::Unity::MicWrapper*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer});
  }
};
