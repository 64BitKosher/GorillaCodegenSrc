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
  // Forward declaring type: VideoTimeSource
  struct VideoTimeSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Video::VideoTimeSource, "UnityEngine.Video", "VideoTimeSource");
// Type namespace: UnityEngine.Video
namespace UnityEngine::Video {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Video.VideoTimeSource
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [ObsoleteAttribute] Offset: FFFFFFFF
  struct VideoTimeSource/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VideoTimeSource
    constexpr VideoTimeSource(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Video.VideoTimeSource AudioDSPTimeSource
    static constexpr const int AudioDSPTimeSource = 0;
    // Get static field: static public UnityEngine.Video.VideoTimeSource AudioDSPTimeSource
    static ::UnityEngine::Video::VideoTimeSource _get_AudioDSPTimeSource();
    // Set static field: static public UnityEngine.Video.VideoTimeSource AudioDSPTimeSource
    static void _set_AudioDSPTimeSource(::UnityEngine::Video::VideoTimeSource value);
    // static field const value: static public UnityEngine.Video.VideoTimeSource GameTimeSource
    static constexpr const int GameTimeSource = 1;
    // Get static field: static public UnityEngine.Video.VideoTimeSource GameTimeSource
    static ::UnityEngine::Video::VideoTimeSource _get_GameTimeSource();
    // Set static field: static public UnityEngine.Video.VideoTimeSource GameTimeSource
    static void _set_GameTimeSource(::UnityEngine::Video::VideoTimeSource value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // UnityEngine.Video.VideoTimeSource
  #pragma pack(pop)
  static check_size<sizeof(VideoTimeSource), 0 + sizeof(int)> __UnityEngine_Video_VideoTimeSourceSizeCheck;
  static_assert(sizeof(VideoTimeSource) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
