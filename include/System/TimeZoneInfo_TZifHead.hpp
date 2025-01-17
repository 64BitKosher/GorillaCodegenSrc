// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeZoneInfo
#include "System/TimeZoneInfo.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.TimeZoneInfo/TZVersion
#include "System/TimeZoneInfo_TZVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::TimeZoneInfo::TZifHead, "System", "TimeZoneInfo/TZifHead");
// Type namespace: System
namespace System {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.TimeZoneInfo/TZifHead
  // [TokenAttribute] Offset: FFFFFFFF
  struct TimeZoneInfo::TZifHead/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.UInt32 Magic
    // Size: 0x4
    // Offset: 0x0
    uint Magic;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.TimeZoneInfo/TZVersion Version
    // Size: 0x1
    // Offset: 0x4
    ::System::TimeZoneInfo::TZVersion Version;
    // Field size check
    static_assert(sizeof(::System::TimeZoneInfo::TZVersion) == 0x1);
    // Padding between fields: Version and: IsGmtCount
    char __padding1[0x3] = {};
    // public readonly System.UInt32 IsGmtCount
    // Size: 0x4
    // Offset: 0x8
    uint IsGmtCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 IsStdCount
    // Size: 0x4
    // Offset: 0xC
    uint IsStdCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 LeapCount
    // Size: 0x4
    // Offset: 0x10
    uint LeapCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 TimeCount
    // Size: 0x4
    // Offset: 0x14
    uint TimeCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 TypeCount
    // Size: 0x4
    // Offset: 0x18
    uint TypeCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public readonly System.UInt32 CharCount
    // Size: 0x4
    // Offset: 0x1C
    uint CharCount;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: TZifHead
    constexpr TZifHead(uint Magic_ = {}, ::System::TimeZoneInfo::TZVersion Version_ = {}, uint IsGmtCount_ = {}, uint IsStdCount_ = {}, uint LeapCount_ = {}, uint TimeCount_ = {}, uint TypeCount_ = {}, uint CharCount_ = {}) noexcept : Magic{Magic_}, Version{Version_}, IsGmtCount{IsGmtCount_}, IsStdCount{IsStdCount_}, LeapCount{LeapCount_}, TimeCount{TimeCount_}, TypeCount{TypeCount_}, CharCount{CharCount_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.UInt32 Magic
    [[deprecated("Use field access instead!")]] uint& dyn_Magic();
    // Get instance field reference: public readonly System.TimeZoneInfo/TZVersion Version
    [[deprecated("Use field access instead!")]] ::System::TimeZoneInfo::TZVersion& dyn_Version();
    // Get instance field reference: public readonly System.UInt32 IsGmtCount
    [[deprecated("Use field access instead!")]] uint& dyn_IsGmtCount();
    // Get instance field reference: public readonly System.UInt32 IsStdCount
    [[deprecated("Use field access instead!")]] uint& dyn_IsStdCount();
    // Get instance field reference: public readonly System.UInt32 LeapCount
    [[deprecated("Use field access instead!")]] uint& dyn_LeapCount();
    // Get instance field reference: public readonly System.UInt32 TimeCount
    [[deprecated("Use field access instead!")]] uint& dyn_TimeCount();
    // Get instance field reference: public readonly System.UInt32 TypeCount
    [[deprecated("Use field access instead!")]] uint& dyn_TypeCount();
    // Get instance field reference: public readonly System.UInt32 CharCount
    [[deprecated("Use field access instead!")]] uint& dyn_CharCount();
    // public System.Void .ctor(System.Byte[] data, System.Int32 index)
    // Offset: 0x45B139C
    TZifHead(::ArrayW<uint8_t> data, int index);
  }; // System.TimeZoneInfo/TZifHead
  #pragma pack(pop)
  static check_size<sizeof(TimeZoneInfo::TZifHead), 28 + sizeof(uint)> __System_TimeZoneInfo_TZifHeadSizeCheck;
  static_assert(sizeof(TimeZoneInfo::TZifHead) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TimeZoneInfo::TZifHead::TZifHead
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
