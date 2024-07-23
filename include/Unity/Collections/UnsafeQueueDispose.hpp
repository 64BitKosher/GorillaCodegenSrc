// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Collections.AllocatorManager/AllocatorHandle
#include "Unity/Collections/AllocatorManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections
namespace Unity::Collections {
  // Forward declaring type: UnsafeQueueData
  struct UnsafeQueueData;
  // Forward declaring type: UnsafeQueueBlockPoolData
  struct UnsafeQueueBlockPoolData;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: UnsafeQueueDispose
  struct UnsafeQueueDispose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::UnsafeQueueDispose, "Unity.Collections", "UnsafeQueueDispose");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.UnsafeQueueDispose
  // [TokenAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  struct UnsafeQueueDispose/*, public ::System::ValueType*/ {
    public:
    public:
    // Unity.Collections.UnsafeQueueData* m_Buffer
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Collections::UnsafeQueueData* m_Buffer;
    // Field size check
    static_assert(sizeof(::Unity::Collections::UnsafeQueueData*) == 0x8);
    // Unity.Collections.UnsafeQueueBlockPoolData* m_QueuePool
    // Size: 0x8
    // Offset: 0x8
    ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool;
    // Field size check
    static_assert(sizeof(::Unity::Collections::UnsafeQueueBlockPoolData*) == 0x8);
    // Unity.Collections.AllocatorManager/AllocatorHandle m_AllocatorLabel
    // Size: 0x4
    // Offset: 0x10
    ::Unity::Collections::AllocatorManager::AllocatorHandle m_AllocatorLabel;
    // Field size check
    static_assert(sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle) == 0x4);
    public:
    // Creating value type constructor for type: UnsafeQueueDispose
    constexpr UnsafeQueueDispose(::Unity::Collections::UnsafeQueueData* m_Buffer_ = {}, ::Unity::Collections::UnsafeQueueBlockPoolData* m_QueuePool_ = {}, ::Unity::Collections::AllocatorManager::AllocatorHandle m_AllocatorLabel_ = {}) noexcept : m_Buffer{m_Buffer_}, m_QueuePool{m_QueuePool_}, m_AllocatorLabel{m_AllocatorLabel_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: Unity.Collections.UnsafeQueueData* m_Buffer
    [[deprecated("Use field access instead!")]] ::Unity::Collections::UnsafeQueueData*& dyn_m_Buffer();
    // Get instance field reference: Unity.Collections.UnsafeQueueBlockPoolData* m_QueuePool
    [[deprecated("Use field access instead!")]] ::Unity::Collections::UnsafeQueueBlockPoolData*& dyn_m_QueuePool();
    // Get instance field reference: Unity.Collections.AllocatorManager/AllocatorHandle m_AllocatorLabel
    [[deprecated("Use field access instead!")]] ::Unity::Collections::AllocatorManager::AllocatorHandle& dyn_m_AllocatorLabel();
    // public System.Void Dispose()
    // Offset: 0x508942C
    void Dispose();
  }; // Unity.Collections.UnsafeQueueDispose
  #pragma pack(pop)
  static check_size<sizeof(UnsafeQueueDispose), 16 + sizeof(::Unity::Collections::AllocatorManager::AllocatorHandle)> __Unity_Collections_UnsafeQueueDisposeSizeCheck;
  static_assert(sizeof(UnsafeQueueDispose) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::UnsafeQueueDispose::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::UnsafeQueueDispose::*)()>(&Unity::Collections::UnsafeQueueDispose::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::UnsafeQueueDispose), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
