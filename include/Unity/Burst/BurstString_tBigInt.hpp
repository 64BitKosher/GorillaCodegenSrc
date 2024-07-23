// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Burst.BurstString
#include "Unity/Burst/BurstString.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString::tBigInt, "Unity.Burst", "BurstString/tBigInt");
// Type namespace: Unity.Burst
namespace Unity::Burst {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Burst.BurstString/tBigInt
  // [TokenAttribute] Offset: FFFFFFFF
  struct BurstString::tBigInt/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer
    struct $m_blocks$e__FixedBuffer;
    // Size: 0x4
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    struct $m_blocks$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.UInt32 FixedElementField
      // Size: 0x4
      // Offset: 0x0
      uint FixedElementField;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: $m_blocks$e__FixedBuffer
      constexpr $m_blocks$e__FixedBuffer(uint FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
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
    }; // Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(BurstString::tBigInt::$m_blocks$e__FixedBuffer), 0 + sizeof(uint)> __Unity_Burst_BurstString_tBigInt_$m_blocks$e__FixedBufferSizeCheck;
    static_assert(sizeof(BurstString::tBigInt::$m_blocks$e__FixedBuffer) == 0x4);
    public:
    // public System.Int32 m_length
    // Size: 0x4
    // Offset: 0x0
    int m_length;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer m_blocks
    // Size: 0x4
    // Offset: 0x4
    ::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer m_blocks;
    // Field size check
    static_assert(sizeof(::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer) == 0x4);
    public:
    // Creating value type constructor for type: tBigInt
    constexpr tBigInt(int m_length_ = {}, ::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer m_blocks_ = {}) noexcept : m_length{m_length_}, m_blocks{m_blocks_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 m_length
    [[deprecated("Use field access instead!")]] int& dyn_m_length();
    // Get instance field reference: public Unity.Burst.BurstString/tBigInt/<m_blocks>e__FixedBuffer m_blocks
    [[deprecated("Use field access instead!")]] ::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer& dyn_m_blocks();
    // public System.Int32 GetLength()
    // Offset: 0x5085670
    int GetLength();
    // public System.UInt32 GetBlock(System.Int32 idx)
    // Offset: 0x5084ECC
    uint GetBlock(int idx);
    // public System.Boolean IsZero()
    // Offset: 0x5084ED8
    bool IsZero();
    // public System.Void SetU64(System.UInt64 val)
    // Offset: 0x5084E9C
    void SetU64(uint64_t val);
    // public System.Void SetU32(System.UInt32 val)
    // Offset: 0x50841E4
    void SetU32(uint val);
  }; // Unity.Burst.BurstString/tBigInt
  #pragma pack(pop)
  static check_size<sizeof(BurstString::tBigInt), 4 + sizeof(::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer)> __Unity_Burst_BurstString_tBigIntSizeCheck;
  static_assert(sizeof(BurstString::tBigInt) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::BurstString::tBigInt::$m_blocks$e__FixedBuffer, "Unity.Burst", "BurstString/tBigInt/<m_blocks>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Burst::BurstString::tBigInt::GetLength
// Il2CppName: GetLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Unity::Burst::BurstString::tBigInt::*)()>(&Unity::Burst::BurstString::tBigInt::GetLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstString::tBigInt), "GetLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstString::tBigInt::GetBlock
// Il2CppName: GetBlock
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Unity::Burst::BurstString::tBigInt::*)(int)>(&Unity::Burst::BurstString::tBigInt::GetBlock)> {
  static const MethodInfo* get() {
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstString::tBigInt), "GetBlock", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{idx});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstString::tBigInt::IsZero
// Il2CppName: IsZero
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Unity::Burst::BurstString::tBigInt::*)()>(&Unity::Burst::BurstString::tBigInt::IsZero)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstString::tBigInt), "IsZero", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstString::tBigInt::SetU64
// Il2CppName: SetU64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Burst::BurstString::tBigInt::*)(uint64_t)>(&Unity::Burst::BurstString::tBigInt::SetU64)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstString::tBigInt), "SetU64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
// Writing MetadataGetter for method: Unity::Burst::BurstString::tBigInt::SetU32
// Il2CppName: SetU32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Burst::BurstString::tBigInt::*)(uint)>(&Unity::Burst::BurstString::tBigInt::SetU32)> {
  static const MethodInfo* get() {
    static auto* val = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Burst::BurstString::tBigInt), "SetU32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{val});
  }
};
