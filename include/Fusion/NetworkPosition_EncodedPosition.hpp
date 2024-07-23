// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkPosition
#include "Fusion/NetworkPosition.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPosition::EncodedPosition, "Fusion", "NetworkPosition/EncodedPosition");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkPosition/EncodedPosition
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkPosition::EncodedPosition/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer
    struct $Data$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Fusion.NetworkPosition/EncodedPosition/<Data>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $Data$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt32 FixedElementField
      // Size: 0x4
      // Offset: 0x0
      uint FixedElementField;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: $Data$e__FixedBuffer
      constexpr $Data$e__FixedBuffer(uint FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint
      constexpr operator uint() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.UInt32 FixedElementField
      [[deprecated("Use field access instead!")]] uint& dyn_FixedElementField();
    }; // Fusion.NetworkPosition/EncodedPosition/<Data>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(NetworkPosition::EncodedPosition::$Data$e__FixedBuffer), 0 + sizeof(uint)> __Fusion_NetworkPosition_EncodedPosition_$Data$e__FixedBufferSizeCheck;
    static_assert(sizeof(NetworkPosition::EncodedPosition::$Data$e__FixedBuffer) == 0x4);
    public:
    // public Fusion.NetworkPosition/EncodedPosition/<Data>e__FixedBuffer Data
    // Size: 0x4
    // Offset: 0x0
    ::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer Data;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer) == 0x4);
    public:
    // Creating value type constructor for type: EncodedPosition
    constexpr EncodedPosition(::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer Data_ = {}) noexcept : Data{Data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer
    constexpr operator ::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer() const noexcept {
      return Data;
    }
    // Get instance field reference: public Fusion.NetworkPosition/EncodedPosition/<Data>e__FixedBuffer Data
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer& dyn_Data();
  }; // Fusion.NetworkPosition/EncodedPosition
  #pragma pack(pop)
  static check_size<sizeof(NetworkPosition::EncodedPosition), 0 + sizeof(::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer)> __Fusion_NetworkPosition_EncodedPositionSizeCheck;
  static_assert(sizeof(NetworkPosition::EncodedPosition) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPosition::EncodedPosition::$Data$e__FixedBuffer, "Fusion", "NetworkPosition/EncodedPosition/<Data>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
