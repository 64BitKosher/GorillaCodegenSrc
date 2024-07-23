// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPlugin::VirtualKeyboardTextureData, "", "OVRPlugin/VirtualKeyboardTextureData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/VirtualKeyboardTextureData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::VirtualKeyboardTextureData/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 TextureWidth
    // Size: 0x4
    // Offset: 0x0
    uint TextureWidth;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 TextureHeight
    // Size: 0x4
    // Offset: 0x4
    uint TextureHeight;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 BufferCapacityInput
    // Size: 0x4
    // Offset: 0x8
    uint BufferCapacityInput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.UInt32 BufferCountOutput
    // Size: 0x4
    // Offset: 0xC
    uint BufferCountOutput;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr Buffer
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Buffer;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: VirtualKeyboardTextureData
    constexpr VirtualKeyboardTextureData(uint TextureWidth_ = {}, uint TextureHeight_ = {}, uint BufferCapacityInput_ = {}, uint BufferCountOutput_ = {}, ::System::IntPtr Buffer_ = {}) noexcept : TextureWidth{TextureWidth_}, TextureHeight{TextureHeight_}, BufferCapacityInput{BufferCapacityInput_}, BufferCountOutput{BufferCountOutput_}, Buffer{Buffer_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 TextureWidth
    [[deprecated("Use field access instead!")]] uint& dyn_TextureWidth();
    // Get instance field reference: public System.UInt32 TextureHeight
    [[deprecated("Use field access instead!")]] uint& dyn_TextureHeight();
    // Get instance field reference: public System.UInt32 BufferCapacityInput
    [[deprecated("Use field access instead!")]] uint& dyn_BufferCapacityInput();
    // Get instance field reference: public System.UInt32 BufferCountOutput
    [[deprecated("Use field access instead!")]] uint& dyn_BufferCountOutput();
    // Get instance field reference: public System.IntPtr Buffer
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Buffer();
  }; // OVRPlugin/VirtualKeyboardTextureData
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::VirtualKeyboardTextureData), 16 + sizeof(::System::IntPtr)> __GlobalNamespace_OVRPlugin_VirtualKeyboardTextureDataSizeCheck;
  static_assert(sizeof(OVRPlugin::VirtualKeyboardTextureData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
