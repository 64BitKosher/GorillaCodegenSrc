// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngineInternal.Input.NativeInputEventType
#include "UnityEngineInternal/Input/NativeInputEventType.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Forward declaring type: NativeInputEvent
  struct NativeInputEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngineInternal::Input::NativeInputEvent, "UnityEngineInternal.Input", "NativeInputEvent");
// Type namespace: UnityEngineInternal.Input
namespace UnityEngineInternal::Input {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngineInternal.Input.NativeInputEvent
  // [TokenAttribute] Offset: FFFFFFFF
  struct NativeInputEvent/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngineInternal.Input.NativeInputEventType type
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngineInternal::Input::NativeInputEventType type;
    // Field size check
    static_assert(sizeof(::UnityEngineInternal::Input::NativeInputEventType) == 0x4);
    // public System.UInt16 sizeInBytes
    // Size: 0x2
    // Offset: 0x4
    uint16_t sizeInBytes;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.UInt16 deviceId
    // Size: 0x2
    // Offset: 0x6
    uint16_t deviceId;
    // Field size check
    static_assert(sizeof(uint16_t) == 0x2);
    // public System.Double time
    // Size: 0x8
    // Offset: 0x8
    double time;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Int32 eventId
    // Size: 0x4
    // Offset: 0x10
    int eventId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NativeInputEvent
    constexpr NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType type_ = {}, uint16_t sizeInBytes_ = {}, uint16_t deviceId_ = {}, double time_ = {}, int eventId_ = {}) noexcept : type{type_}, sizeInBytes{sizeInBytes_}, deviceId{deviceId_}, time{time_}, eventId{eventId_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 structSize
    static constexpr const int structSize = 20;
    // Get static field: static public System.Int32 structSize
    static int _get_structSize();
    // Set static field: static public System.Int32 structSize
    static void _set_structSize(int value);
    // Get instance field reference: public UnityEngineInternal.Input.NativeInputEventType type
    [[deprecated("Use field access instead!")]] ::UnityEngineInternal::Input::NativeInputEventType& dyn_type();
    // Get instance field reference: public System.UInt16 sizeInBytes
    [[deprecated("Use field access instead!")]] uint16_t& dyn_sizeInBytes();
    // Get instance field reference: public System.UInt16 deviceId
    [[deprecated("Use field access instead!")]] uint16_t& dyn_deviceId();
    // Get instance field reference: public System.Double time
    [[deprecated("Use field access instead!")]] double& dyn_time();
    // Get instance field reference: public System.Int32 eventId
    [[deprecated("Use field access instead!")]] int& dyn_eventId();
  }; // UnityEngineInternal.Input.NativeInputEvent
  #pragma pack(pop)
  static check_size<sizeof(NativeInputEvent), 16 + sizeof(int)> __UnityEngineInternal_Input_NativeInputEventSizeCheck;
  static_assert(sizeof(NativeInputEvent) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
