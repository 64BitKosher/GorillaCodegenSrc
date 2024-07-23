// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.AllocatorManager/AllocatorHandle
#include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IEquatable`1 because it is already included!
}
// Completed forward declares
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: HashMapHelper`1<TKey>
  template<typename TKey>
  struct HashMapHelper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1, "Unity.Collections.LowLevel.Unsafe", "HashMapHelper`1");
// Type namespace: Unity.Collections.LowLevel.Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  template<typename TKey>
  struct HashMapHelper_1/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Byte* Ptr
    // Size: 0x8
    // Offset: 0x0
    uint8_t* Ptr;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // TKey* Keys
    // Size: 0x8
    // Offset: 0x0
    TKey* Keys;
    // Field size check
    static_assert(sizeof(TKey*) == 0x8);
    // System.Int32* Next
    // Size: 0x8
    // Offset: 0x0
    int* Next;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // System.Int32* Buckets
    // Size: 0x8
    // Offset: 0x0
    int* Buckets;
    // Field size check
    static_assert(sizeof(int*) == 0x8);
    // System.Int32 Count
    // Size: 0x4
    // Offset: 0x0
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Capacity
    // Size: 0x4
    // Offset: 0x0
    int Capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Log2MinGrowth
    // Size: 0x4
    // Offset: 0x0
    int Log2MinGrowth;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 BucketCapacity
    // Size: 0x4
    // Offset: 0x0
    int BucketCapacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 AllocatedIndex
    // Size: 0x4
    // Offset: 0x0
    int AllocatedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 FirstFreeIdx
    // Size: 0x4
    // Offset: 0x0
    int FirstFreeIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 SizeOfTValue
    // Size: 0x4
    // Offset: 0x0
    int SizeOfTValue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Unity.Collections.AllocatorManager/AllocatorHandle Allocator
    // Size: 0x4
    // Offset: 0x0
    ::Unity::Collections::AllocatorManager::AllocatorHandle Allocator;
    // Field size check
    static_assert(sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle) == 0x4);
    public:
    // Creating value type constructor for type: HashMapHelper_1
    constexpr HashMapHelper_1(uint8_t* Ptr_ = {}, TKey* Keys_ = {}, int* Next_ = {}, int* Buckets_ = {}, int Count_ = {}, int Capacity_ = {}, int Log2MinGrowth_ = {}, int BucketCapacity_ = {}, int AllocatedIndex_ = {}, int FirstFreeIdx_ = {}, int SizeOfTValue_ = {}, ::Unity::Collections::AllocatorManager::AllocatorHandle Allocator_ = {}) noexcept : Ptr{Ptr_}, Keys{Keys_}, Next{Next_}, Buckets{Buckets_}, Count{Count_}, Capacity{Capacity_}, Log2MinGrowth{Log2MinGrowth_}, BucketCapacity{BucketCapacity_}, AllocatedIndex{AllocatedIndex_}, FirstFreeIdx{FirstFreeIdx_}, SizeOfTValue{SizeOfTValue_}, Allocator{Allocator_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Byte* Ptr
    [[deprecated("Use field access instead!")]] uint8_t*& dyn_Ptr() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Ptr");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Ptr"))->offset;
      return *reinterpret_cast<uint8_t**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: TKey* Keys
    [[deprecated("Use field access instead!")]] TKey*& dyn_Keys() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Keys");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Keys"))->offset;
      return *reinterpret_cast<TKey**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32* Next
    [[deprecated("Use field access instead!")]] int*& dyn_Next() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Next");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Next"))->offset;
      return *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32* Buckets
    [[deprecated("Use field access instead!")]] int*& dyn_Buckets() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Buckets");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Buckets"))->offset;
      return *reinterpret_cast<int**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Count");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Count"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 Capacity
    [[deprecated("Use field access instead!")]] int& dyn_Capacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Capacity");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Capacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 Log2MinGrowth
    [[deprecated("Use field access instead!")]] int& dyn_Log2MinGrowth() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Log2MinGrowth");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Log2MinGrowth"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 BucketCapacity
    [[deprecated("Use field access instead!")]] int& dyn_BucketCapacity() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_BucketCapacity");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "BucketCapacity"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 AllocatedIndex
    [[deprecated("Use field access instead!")]] int& dyn_AllocatedIndex() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_AllocatedIndex");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "AllocatedIndex"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 FirstFreeIdx
    [[deprecated("Use field access instead!")]] int& dyn_FirstFreeIdx() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_FirstFreeIdx");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "FirstFreeIdx"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Int32 SizeOfTValue
    [[deprecated("Use field access instead!")]] int& dyn_SizeOfTValue() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_SizeOfTValue");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "SizeOfTValue"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: Unity.Collections.AllocatorManager/AllocatorHandle Allocator
    [[deprecated("Use field access instead!")]] ::Unity::Collections::AllocatorManager::AllocatorHandle& dyn_Allocator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::dyn_Allocator");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Allocator"))->offset;
      return *reinterpret_cast<::Unity::Collections::AllocatorManager::AllocatorHandle*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Boolean get_IsCreated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::get_IsCreated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_IsCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::Dispose");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Dispose", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // static System.Void Free(Unity.Collections.LowLevel.Unsafe.HashMapHelper`1<TKey>* data)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Free(::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1<TKey>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::LowLevel::Unsafe::HashMapHelper_1::Free");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HashMapHelper_1<TKey>>::get(), "Free", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(data)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, data);
    }
  }; // Unity.Collections.LowLevel.Unsafe.HashMapHelper`1
  // Could not write size check! Type: Unity.Collections.LowLevel.Unsafe.HashMapHelper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
