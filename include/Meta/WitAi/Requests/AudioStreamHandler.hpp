// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.DownloadHandlerScript
#include "UnityEngine/Networking/DownloadHandlerScript.hpp"
// Including type: Meta.WitAi.Requests.IVRequestStreamable
#include "Meta/WitAi/Requests/IVRequestStreamable.hpp"
// Including type: Meta.WitAi.Requests.AudioStreamDecodeType
#include "Meta/WitAi/Requests/AudioStreamDecodeType.hpp"
// Including type: UnityEngine.AudioType
#include "UnityEngine/AudioType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Requests
namespace Meta::WitAi::Requests {
}
// Forward declaring namespace: Meta::Voice::Audio
namespace Meta::Voice::Audio {
  // Forward declaring type: IAudioClipStream
  class IAudioClipStream;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Forward declaring type: AudioStreamHandler
  class AudioStreamHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Requests::AudioStreamHandler);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Requests::AudioStreamHandler*, "Meta.WitAi.Requests", "AudioStreamHandler");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Requests.AudioStreamHandler
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class AudioStreamHandler : public ::UnityEngine::Networking::DownloadHandlerScript/*, public ::Meta::WitAi::Requests::IVRequestStreamable*/ {
    public:
    // Nested type: ::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass24_0
    class $$c__DisplayClass24_0;
    // Nested type: ::Meta::WitAi::Requests::AudioStreamHandler::$$c__DisplayClass36_0
    class $$c__DisplayClass36_0;
    // Nested type: ::Meta::WitAi::Requests::AudioStreamHandler::$FinalWait$d__31
    class $FinalWait$d__31;
    public:
    // private Meta.Voice.Audio.IAudioClipStream <ClipStream>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Meta::Voice::Audio::IAudioClipStream* ClipStream;
    // Field size check
    static_assert(sizeof(::Meta::Voice::Audio::IAudioClipStream*) == 0x8);
    // private Meta.WitAi.Requests.AudioStreamDecodeType <DecodeType>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::Meta::WitAi::Requests::AudioStreamDecodeType DecodeType;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::AudioStreamDecodeType) == 0x4);
    // private System.Boolean <IsStreamReady>k__BackingField
    // Size: 0x1
    // Offset: 0x24
    bool IsStreamReady;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsStreamComplete>k__BackingField
    // Size: 0x1
    // Offset: 0x25
    bool IsStreamComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _hasLeftover
    // Size: 0x1
    // Offset: 0x26
    bool hasLeftover;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasLeftover and: leftovers
    char __padding4[0x1] = {};
    // private System.Byte[] _leftovers
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> leftovers;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Int32 _decodingChunks
    // Size: 0x4
    // Offset: 0x30
    int decodingChunks;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _requestComplete
    // Size: 0x1
    // Offset: 0x34
    bool requestComplete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: requestComplete and: errorDecoded
    char __padding7[0x3] = {};
    // private System.Int32 _errorDecoded
    // Size: 0x4
    // Offset: 0x38
    int errorDecoded;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: errorDecoded and: errorBytes
    char __padding8[0x4] = {};
    // private System.Byte[] _errorBytes
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> errorBytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Requests::IVRequestStreamable
    operator ::Meta::WitAi::Requests::IVRequestStreamable() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Requests::IVRequestStreamable*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Meta.Voice.Audio.IAudioClipStream <ClipStream>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::Voice::Audio::IAudioClipStream*& dyn_$ClipStream$k__BackingField();
    // Get instance field reference: private Meta.WitAi.Requests.AudioStreamDecodeType <DecodeType>k__BackingField
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::AudioStreamDecodeType& dyn_$DecodeType$k__BackingField();
    // Get instance field reference: private System.Boolean <IsStreamReady>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsStreamReady$k__BackingField();
    // Get instance field reference: private System.Boolean <IsStreamComplete>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsStreamComplete$k__BackingField();
    // Get instance field reference: private System.Boolean _hasLeftover
    [[deprecated("Use field access instead!")]] bool& dyn__hasLeftover();
    // Get instance field reference: private System.Byte[] _leftovers
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__leftovers();
    // Get instance field reference: private System.Int32 _decodingChunks
    [[deprecated("Use field access instead!")]] int& dyn__decodingChunks();
    // Get instance field reference: private System.Boolean _requestComplete
    [[deprecated("Use field access instead!")]] bool& dyn__requestComplete();
    // Get instance field reference: private System.Int32 _errorDecoded
    [[deprecated("Use field access instead!")]] int& dyn__errorDecoded();
    // Get instance field reference: private System.Byte[] _errorBytes
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__errorBytes();
    // public Meta.Voice.Audio.IAudioClipStream get_ClipStream()
    // Offset: 0x44404D8
    ::Meta::Voice::Audio::IAudioClipStream* get_ClipStream();
    // private System.Void set_ClipStream(Meta.Voice.Audio.IAudioClipStream value)
    // Offset: 0x44404E0
    void set_ClipStream(::Meta::Voice::Audio::IAudioClipStream* value);
    // public Meta.WitAi.Requests.AudioStreamDecodeType get_DecodeType()
    // Offset: 0x44404E8
    ::Meta::WitAi::Requests::AudioStreamDecodeType get_DecodeType();
    // private System.Void set_DecodeType(Meta.WitAi.Requests.AudioStreamDecodeType value)
    // Offset: 0x44404F0
    void set_DecodeType(::Meta::WitAi::Requests::AudioStreamDecodeType value);
    // public System.Boolean get_IsStreamReady()
    // Offset: 0x44404F8
    bool get_IsStreamReady();
    // private System.Void set_IsStreamReady(System.Boolean value)
    // Offset: 0x4440500
    void set_IsStreamReady(bool value);
    // public System.Boolean get_IsStreamComplete()
    // Offset: 0x444050C
    bool get_IsStreamComplete();
    // private System.Void set_IsStreamComplete(System.Boolean value)
    // Offset: 0x4440514
    void set_IsStreamComplete(bool value);
    // public System.Void .ctor(Meta.Voice.Audio.IAudioClipStream newClipStream, UnityEngine.AudioType newDecodeType)
    // Offset: 0x4440520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioStreamHandler* New_ctor(::Meta::Voice::Audio::IAudioClipStream* newClipStream, ::UnityEngine::AudioType newDecodeType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::AudioStreamHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioStreamHandler*, creationType>(newClipStream, newDecodeType)));
    }
    // private System.Single[] DecodeData(System.Byte[] receiveData, System.Int32 dataLength)
    // Offset: 0x4440BDC
    ::ArrayW<float> DecodeData(::ArrayW<uint8_t> receiveData, int dataLength);
    // private System.Void OnDecodeComplete(System.Single[] newSamples, System.String error)
    // Offset: 0x4440DB8
    void OnDecodeComplete(::ArrayW<float> newSamples, ::StringW error);
    // private System.Void TryToFinalize()
    // Offset: 0x4441008
    void TryToFinalize();
    // private System.Collections.IEnumerator FinalWait()
    // Offset: 0x44414AC
    ::System::Collections::IEnumerator* FinalWait();
    // public System.Void CleanUp()
    // Offset: 0x4441540
    void CleanUp();
    // static public Meta.WitAi.Requests.AudioStreamDecodeType GetDecodeType(UnityEngine.AudioType audioType)
    // Offset: 0x4440670
    static ::Meta::WitAi::Requests::AudioStreamDecodeType GetDecodeType(::UnityEngine::AudioType audioType);
    // static public System.Boolean CanDecodeType(UnityEngine.AudioType audioType)
    // Offset: 0x4441670
    static bool CanDecodeType(::UnityEngine::AudioType audioType);
    // static public UnityEngine.AudioClip GetClipFromRawData(System.Byte[] rawData, Meta.WitAi.Requests.AudioStreamDecodeType decodeType, System.String clipName, System.Int32 channels, System.Int32 sampleRate)
    // Offset: 0x4441688
    static ::UnityEngine::AudioClip* GetClipFromRawData(::ArrayW<uint8_t> rawData, ::Meta::WitAi::Requests::AudioStreamDecodeType decodeType, ::StringW clipName, int channels, int sampleRate);
    // static public System.Void GetClipFromRawDataAsync(System.Byte[] rawData, Meta.WitAi.Requests.AudioStreamDecodeType decodeType, System.String clipName, System.Int32 channels, System.Int32 sampleRate, System.Action`2<UnityEngine.AudioClip,System.String> onComplete)
    // Offset: 0x44417CC
    static void GetClipFromRawDataAsync(::ArrayW<uint8_t> rawData, ::Meta::WitAi::Requests::AudioStreamDecodeType decodeType, ::StringW clipName, int channels, int sampleRate, ::System::Action_2<::UnityEngine::AudioClip*, ::StringW>* onComplete);
    // static public System.Single[] DecodeAudio(System.Byte[] rawData, Meta.WitAi.Requests.AudioStreamDecodeType decodeType)
    // Offset: 0x44416C8
    static ::ArrayW<float> DecodeAudio(::ArrayW<uint8_t> rawData, ::Meta::WitAi::Requests::AudioStreamDecodeType decodeType);
    // static private UnityEngine.AudioClip GetClipFromSamples(System.Single[] samples, System.String clipName, System.Int32 channels, System.Int32 sampleRate)
    // Offset: 0x4441778
    static ::UnityEngine::AudioClip* GetClipFromSamples(::ArrayW<float> samples, ::StringW clipName, int channels, int sampleRate);
    // static public System.Int32 GetClipSamplesFromContentLength(System.UInt64 contentLength, Meta.WitAi.Requests.AudioStreamDecodeType decodeType)
    // Offset: 0x4440958
    static int GetClipSamplesFromContentLength(uint64_t contentLength, ::Meta::WitAi::Requests::AudioStreamDecodeType decodeType);
    // static public System.Single[] DecodePCM16(System.Byte[] rawData)
    // Offset: 0x4441948
    static ::ArrayW<float> DecodePCM16(::ArrayW<uint8_t> rawData);
    // static private System.Single[] DecodeChunkPCM16(System.Byte[] chunkData, System.Int32 chunkLength, ref System.Boolean hasLeftover, ref System.Byte[] leftovers)
    // Offset: 0x4440C04
    static ::ArrayW<float> DecodeChunkPCM16(::ArrayW<uint8_t> chunkData, int chunkLength, ByRef<bool> hasLeftover, ByRef<::ArrayW<uint8_t>> leftovers);
    // static private System.Single DecodeSamplePCM16(System.Byte[] rawData, System.Int32 index)
    // Offset: 0x4441A78
    static float DecodeSamplePCM16(::ArrayW<uint8_t> rawData, int index);
    // protected override System.Void ReceiveContentLengthHeader(System.UInt64 contentLength)
    // Offset: 0x4440688
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::ReceiveContentLengthHeader(System.UInt64 contentLength)
    void ReceiveContentLengthHeader(uint64_t contentLength);
    // protected override System.Boolean ReceiveData(System.Byte[] receiveData, System.Int32 dataLength)
    // Offset: 0x44409DC
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Boolean DownloadHandler::ReceiveData(System.Byte[] receiveData, System.Int32 dataLength)
    bool ReceiveData(::ArrayW<uint8_t> receiveData, int dataLength);
    // protected override System.String GetText()
    // Offset: 0x4441264
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.String DownloadHandler::GetText()
    ::StringW GetText();
    // protected override System.Single GetProgress()
    // Offset: 0x44412E4
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Single DownloadHandler::GetProgress()
    float GetProgress();
    // protected override System.Void CompleteContent()
    // Offset: 0x4441494
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::CompleteContent()
    void CompleteContent();
  }; // Meta.WitAi.Requests.AudioStreamHandler
  #pragma pack(pop)
  static check_size<sizeof(AudioStreamHandler), 64 + sizeof(::ArrayW<uint8_t>)> __Meta_WitAi_Requests_AudioStreamHandlerSizeCheck;
  static_assert(sizeof(AudioStreamHandler) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::get_ClipStream
// Il2CppName: get_ClipStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Audio::IAudioClipStream* (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::get_ClipStream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "get_ClipStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::set_ClipStream
// Il2CppName: set_ClipStream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::Voice::Audio::IAudioClipStream*)>(&Meta::WitAi::Requests::AudioStreamHandler::set_ClipStream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.Voice.Audio", "IAudioClipStream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "set_ClipStream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::get_DecodeType
// Il2CppName: get_DecodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::AudioStreamDecodeType (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::get_DecodeType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "get_DecodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::set_DecodeType
// Il2CppName: set_DecodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(::Meta::WitAi::Requests::AudioStreamDecodeType)>(&Meta::WitAi::Requests::AudioStreamHandler::set_DecodeType)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "AudioStreamDecodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "set_DecodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::get_IsStreamReady
// Il2CppName: get_IsStreamReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::get_IsStreamReady)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "get_IsStreamReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::set_IsStreamReady
// Il2CppName: set_IsStreamReady
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(bool)>(&Meta::WitAi::Requests::AudioStreamHandler::set_IsStreamReady)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "set_IsStreamReady", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::get_IsStreamComplete
// Il2CppName: get_IsStreamComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::get_IsStreamComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "get_IsStreamComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::set_IsStreamComplete
// Il2CppName: set_IsStreamComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(bool)>(&Meta::WitAi::Requests::AudioStreamHandler::set_IsStreamComplete)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "set_IsStreamComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::DecodeData
// Il2CppName: DecodeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<uint8_t>, int)>(&Meta::WitAi::Requests::AudioStreamHandler::DecodeData)> {
  static const MethodInfo* get() {
    static auto* receiveData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "DecodeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiveData, dataLength});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::OnDecodeComplete
// Il2CppName: OnDecodeComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<float>, ::StringW)>(&Meta::WitAi::Requests::AudioStreamHandler::OnDecodeComplete)> {
  static const MethodInfo* get() {
    static auto* newSamples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "OnDecodeComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newSamples, error});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::TryToFinalize
// Il2CppName: TryToFinalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::TryToFinalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "TryToFinalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::FinalWait
// Il2CppName: FinalWait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::FinalWait)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "FinalWait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::CleanUp
// Il2CppName: CleanUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::CleanUp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "CleanUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetDecodeType
// Il2CppName: GetDecodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Requests::AudioStreamDecodeType (*)(::UnityEngine::AudioType)>(&Meta::WitAi::Requests::AudioStreamHandler::GetDecodeType)> {
  static const MethodInfo* get() {
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetDecodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioType});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::CanDecodeType
// Il2CppName: CanDecodeType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AudioType)>(&Meta::WitAi::Requests::AudioStreamHandler::CanDecodeType)> {
  static const MethodInfo* get() {
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "CanDecodeType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{audioType});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetClipFromRawData
// Il2CppName: GetClipFromRawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::ArrayW<uint8_t>, ::Meta::WitAi::Requests::AudioStreamDecodeType, ::StringW, int, int)>(&Meta::WitAi::Requests::AudioStreamHandler::GetClipFromRawData)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* decodeType = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "AudioStreamDecodeType")->byval_arg;
    static auto* clipName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetClipFromRawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, decodeType, clipName, channels, sampleRate});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetClipFromRawDataAsync
// Il2CppName: GetClipFromRawDataAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<uint8_t>, ::Meta::WitAi::Requests::AudioStreamDecodeType, ::StringW, int, int, ::System::Action_2<::UnityEngine::AudioClip*, ::StringW>*)>(&Meta::WitAi::Requests::AudioStreamHandler::GetClipFromRawDataAsync)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* decodeType = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "AudioStreamDecodeType")->byval_arg;
    static auto* clipName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* onComplete = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "AudioClip"), ::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetClipFromRawDataAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, decodeType, clipName, channels, sampleRate, onComplete});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::DecodeAudio
// Il2CppName: DecodeAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(::ArrayW<uint8_t>, ::Meta::WitAi::Requests::AudioStreamDecodeType)>(&Meta::WitAi::Requests::AudioStreamHandler::DecodeAudio)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* decodeType = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "AudioStreamDecodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "DecodeAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, decodeType});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetClipFromSamples
// Il2CppName: GetClipFromSamples
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (*)(::ArrayW<float>, ::StringW, int, int)>(&Meta::WitAi::Requests::AudioStreamHandler::GetClipFromSamples)> {
  static const MethodInfo* get() {
    static auto* samples = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* clipName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* sampleRate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetClipFromSamples", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{samples, clipName, channels, sampleRate});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetClipSamplesFromContentLength
// Il2CppName: GetClipSamplesFromContentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(uint64_t, ::Meta::WitAi::Requests::AudioStreamDecodeType)>(&Meta::WitAi::Requests::AudioStreamHandler::GetClipSamplesFromContentLength)> {
  static const MethodInfo* get() {
    static auto* contentLength = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* decodeType = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Requests", "AudioStreamDecodeType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetClipSamplesFromContentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentLength, decodeType});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::DecodePCM16
// Il2CppName: DecodePCM16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(::ArrayW<uint8_t>)>(&Meta::WitAi::Requests::AudioStreamHandler::DecodePCM16)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "DecodePCM16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::DecodeChunkPCM16
// Il2CppName: DecodeChunkPCM16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<float> (*)(::ArrayW<uint8_t>, int, ByRef<bool>, ByRef<::ArrayW<uint8_t>>)>(&Meta::WitAi::Requests::AudioStreamHandler::DecodeChunkPCM16)> {
  static const MethodInfo* get() {
    static auto* chunkData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* chunkLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* hasLeftover = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    static auto* leftovers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "DecodeChunkPCM16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chunkData, chunkLength, hasLeftover, leftovers});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::DecodeSamplePCM16
// Il2CppName: DecodeSamplePCM16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::ArrayW<uint8_t>, int)>(&Meta::WitAi::Requests::AudioStreamHandler::DecodeSamplePCM16)> {
  static const MethodInfo* get() {
    static auto* rawData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "DecodeSamplePCM16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rawData, index});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::ReceiveContentLengthHeader
// Il2CppName: ReceiveContentLengthHeader
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)(uint64_t)>(&Meta::WitAi::Requests::AudioStreamHandler::ReceiveContentLengthHeader)> {
  static const MethodInfo* get() {
    static auto* contentLength = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "ReceiveContentLengthHeader", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contentLength});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::ReceiveData
// Il2CppName: ReceiveData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::WitAi::Requests::AudioStreamHandler::*)(::ArrayW<uint8_t>, int)>(&Meta::WitAi::Requests::AudioStreamHandler::ReceiveData)> {
  static const MethodInfo* get() {
    static auto* receiveData = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* dataLength = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "ReceiveData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{receiveData, dataLength});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::GetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::GetProgress
// Il2CppName: GetProgress
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::GetProgress)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "GetProgress", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Requests::AudioStreamHandler::CompleteContent
// Il2CppName: CompleteContent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Requests::AudioStreamHandler::*)()>(&Meta::WitAi::Requests::AudioStreamHandler::CompleteContent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Requests::AudioStreamHandler*), "CompleteContent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};