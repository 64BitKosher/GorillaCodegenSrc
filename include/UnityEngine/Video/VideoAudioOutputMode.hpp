// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Forward declaring type: VideoAudioOutputMode
  struct VideoAudioOutputMode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoAudioOutputMode, "UnityEngine.Video", "VideoAudioOutputMode");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoAudioOutputMode
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  struct VideoAudioOutputMode/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoAudioOutputMode
    constexpr VideoAudioOutputMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Video.VideoAudioOutputMode None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.Video.VideoAudioOutputMode None
    static ::UnityEngine::Video::VideoAudioOutputMode _get_None();
    // Set static field: static public UnityEngine.Video.VideoAudioOutputMode None
    static void _set_None(::UnityEngine::Video::VideoAudioOutputMode value);
    // static field const value: static public UnityEngine.Video.VideoAudioOutputMode AudioSource
    static constexpr const int AudioSource = 1;
    // Get static field: static public UnityEngine.Video.VideoAudioOutputMode AudioSource
    static ::UnityEngine::Video::VideoAudioOutputMode _get_AudioSource();
    // Set static field: static public UnityEngine.Video.VideoAudioOutputMode AudioSource
    static void _set_AudioSource(::UnityEngine::Video::VideoAudioOutputMode value);
    // static field const value: static public UnityEngine.Video.VideoAudioOutputMode Direct
    static constexpr const int Direct = 2;
    // Get static field: static public UnityEngine.Video.VideoAudioOutputMode Direct
    static ::UnityEngine::Video::VideoAudioOutputMode _get_Direct();
    // Set static field: static public UnityEngine.Video.VideoAudioOutputMode Direct
    static void _set_Direct(::UnityEngine::Video::VideoAudioOutputMode value);
    // static field const value: static public UnityEngine.Video.VideoAudioOutputMode APIOnly
    static constexpr const int APIOnly = 3;
    // Get static field: static public UnityEngine.Video.VideoAudioOutputMode APIOnly
    static ::UnityEngine::Video::VideoAudioOutputMode _get_APIOnly();
    // Set static field: static public UnityEngine.Video.VideoAudioOutputMode APIOnly
    static void _set_APIOnly(::UnityEngine::Video::VideoAudioOutputMode value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Video.VideoAudioOutputMode
  #pragma pack(pop)
  static check_size<sizeof(VideoAudioOutputMode), 0 + sizeof(int)> __UnityEngine_Video_VideoAudioOutputModeSizeCheck;
  static_assert(sizeof(VideoAudioOutputMode) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
