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
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: ImageFormat
  struct ImageFormat;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Photon::Voice::ImageFormat, "Photon.Voice", "ImageFormat");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Voice.ImageFormat
  // [TokenAttribute] Offset: FFFFFFFF
  struct ImageFormat/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ImageFormat
    constexpr ImageFormat(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Photon.Voice.ImageFormat Undefined
    static constexpr const int Undefined = 0;
    // Get static field: static public Photon.Voice.ImageFormat Undefined
    static ::Photon::Voice::ImageFormat _get_Undefined();
    // Set static field: static public Photon.Voice.ImageFormat Undefined
    static void _set_Undefined(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat I420
    static constexpr const int I420 = 1;
    // Get static field: static public Photon.Voice.ImageFormat I420
    static ::Photon::Voice::ImageFormat _get_I420();
    // Set static field: static public Photon.Voice.ImageFormat I420
    static void _set_I420(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat YV12
    static constexpr const int YV12 = 2;
    // Get static field: static public Photon.Voice.ImageFormat YV12
    static ::Photon::Voice::ImageFormat _get_YV12();
    // Set static field: static public Photon.Voice.ImageFormat YV12
    static void _set_YV12(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat Android420
    static constexpr const int Android420 = 3;
    // Get static field: static public Photon.Voice.ImageFormat Android420
    static ::Photon::Voice::ImageFormat _get_Android420();
    // Set static field: static public Photon.Voice.ImageFormat Android420
    static void _set_Android420(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat ABGR
    static constexpr const int ABGR = 4;
    // Get static field: static public Photon.Voice.ImageFormat ABGR
    static ::Photon::Voice::ImageFormat _get_ABGR();
    // Set static field: static public Photon.Voice.ImageFormat ABGR
    static void _set_ABGR(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat BGRA
    static constexpr const int BGRA = 5;
    // Get static field: static public Photon.Voice.ImageFormat BGRA
    static ::Photon::Voice::ImageFormat _get_BGRA();
    // Set static field: static public Photon.Voice.ImageFormat BGRA
    static void _set_BGRA(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat ARGB
    static constexpr const int ARGB = 6;
    // Get static field: static public Photon.Voice.ImageFormat ARGB
    static ::Photon::Voice::ImageFormat _get_ARGB();
    // Set static field: static public Photon.Voice.ImageFormat ARGB
    static void _set_ARGB(::Photon::Voice::ImageFormat value);
    // static field const value: static public Photon.Voice.ImageFormat NV12
    static constexpr const int NV12 = 7;
    // Get static field: static public Photon.Voice.ImageFormat NV12
    static ::Photon::Voice::ImageFormat _get_NV12();
    // Set static field: static public Photon.Voice.ImageFormat NV12
    static void _set_NV12(::Photon::Voice::ImageFormat value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Photon.Voice.ImageFormat
  #pragma pack(pop)
  static check_size<sizeof(ImageFormat), 0 + sizeof(int)> __Photon_Voice_ImageFormatSizeCheck;
  static_assert(sizeof(ImageFormat) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
