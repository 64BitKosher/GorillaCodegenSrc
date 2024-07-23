// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Networking.DownloadHandler
#include "UnityEngine/Networking/DownloadHandler.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Including type: UnityEngine.AudioType
#include "UnityEngine/AudioType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
  // Forward declaring type: Uri
  class Uri;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // Forward declaring type: DownloadHandlerAudioClip
  class DownloadHandlerAudioClip;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Networking::DownloadHandlerAudioClip);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Networking::DownloadHandlerAudioClip*, "UnityEngine.Networking", "DownloadHandlerAudioClip");
// Type namespace: UnityEngine.Networking
namespace UnityEngine::Networking {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Networking.DownloadHandlerAudioClip
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  class DownloadHandlerAudioClip : public ::UnityEngine::Networking::DownloadHandler {
    public:
    public:
    // private Unity.Collections.NativeArray`1<System.Byte> m_NativeData
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::Unity::Collections::NativeArray_1<uint8_t> m_NativeData;
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Unity.Collections.NativeArray`1<System.Byte> m_NativeData
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<uint8_t>& dyn_m_NativeData();
    // static private System.IntPtr Create(UnityEngine.Networking.DownloadHandlerAudioClip obj, System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x5708CF4
    static ::System::IntPtr Create(::UnityEngine::Networking::DownloadHandlerAudioClip* obj, ::StringW url, ::UnityEngine::AudioType audioType);
    // private System.Void InternalCreateAudioClip(System.String url, UnityEngine.AudioType audioType)
    // Offset: 0x5708D48
    void InternalCreateAudioClip(::StringW url, ::UnityEngine::AudioType audioType);
    // public System.Void .ctor(System.Uri uri, UnityEngine.AudioType audioType)
    // Offset: 0x5708DA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DownloadHandlerAudioClip* New_ctor(::System::Uri* uri, ::UnityEngine::AudioType audioType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Networking::DownloadHandlerAudioClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DownloadHandlerAudioClip*, creationType>(uri, audioType)));
    }
    // public UnityEngine.AudioClip get_audioClip()
    // Offset: 0x5708E9C
    ::UnityEngine::AudioClip* get_audioClip();
    // public System.Void set_streamAudio(System.Boolean value)
    // Offset: 0x5708ED8
    void set_streamAudio(bool value);
    // protected override Unity.Collections.NativeArray`1<System.Byte> GetNativeData()
    // Offset: 0x5708E20
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: Unity.Collections.NativeArray`1<System.Byte> DownloadHandler::GetNativeData()
    ::Unity::Collections::NativeArray_1<uint8_t> GetNativeData();
    // public override System.Void Dispose()
    // Offset: 0x5708E2C
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.Void DownloadHandler::Dispose()
    void Dispose();
    // protected override System.String GetText()
    // Offset: 0x5708E50
    // Implemented from: UnityEngine.Networking.DownloadHandler
    // Base method: System.String DownloadHandler::GetText()
    ::StringW GetText();
  }; // UnityEngine.Networking.DownloadHandlerAudioClip
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)(::UnityEngine::Networking::DownloadHandlerAudioClip*, ::StringW, ::UnityEngine::AudioType)>(&UnityEngine::Networking::DownloadHandlerAudioClip::Create)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("UnityEngine.Networking", "DownloadHandlerAudioClip")->byval_arg;
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, url, audioType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip
// Il2CppName: InternalCreateAudioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAudioClip::*)(::StringW, ::UnityEngine::AudioType)>(&UnityEngine::Networking::DownloadHandlerAudioClip::InternalCreateAudioClip)> {
  static const MethodInfo* get() {
    static auto* url = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* audioType = &::il2cpp_utils::GetClassFromName("UnityEngine", "AudioType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "InternalCreateAudioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{url, audioType});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip
// Il2CppName: get_audioClip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioClip* (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::get_audioClip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "get_audioClip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio
// Il2CppName: set_streamAudio
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAudioClip::*)(bool)>(&UnityEngine::Networking::DownloadHandlerAudioClip::set_streamAudio)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "set_streamAudio", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::GetNativeData
// Il2CppName: GetNativeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::GetNativeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "GetNativeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Networking::DownloadHandlerAudioClip::GetText
// Il2CppName: GetText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Networking::DownloadHandlerAudioClip::*)()>(&UnityEngine::Networking::DownloadHandlerAudioClip::GetText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Networking::DownloadHandlerAudioClip*), "GetText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};