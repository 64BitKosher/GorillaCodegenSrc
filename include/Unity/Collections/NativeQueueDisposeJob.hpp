// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.IJob
#include "Unity/Jobs/IJob.hpp"
// Including type: Unity.Collections.NativeQueueDispose
#include "Unity/Collections/NativeQueueDispose.hpp"
// Completed includes
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeQueueDisposeJob
  struct NativeQueueDisposeJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeQueueDisposeJob, "Unity.Collections", "NativeQueueDisposeJob");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeQueueDisposeJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct NativeQueueDisposeJob/*, public ::System::ValueType, public ::Unity::Jobs::IJob*/ {
    public:
    public:
    // public Unity.Collections.NativeQueueDispose Data
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Collections::NativeQueueDispose Data;
    // Field size check
    static_assert(sizeof(::Unity::Collections::NativeQueueDispose) == 0x8);
    public:
    // Creating value type constructor for type: NativeQueueDisposeJob
    constexpr NativeQueueDisposeJob(::Unity::Collections::NativeQueueDispose Data_ = {}) noexcept : Data{Data_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJob
    operator ::Unity::Jobs::IJob() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJob*>(this);
    }
    // Creating conversion operator: operator ::Unity::Collections::NativeQueueDispose
    constexpr operator ::Unity::Collections::NativeQueueDispose() const noexcept {
      return Data;
    }
    // Get instance field reference: public Unity.Collections.NativeQueueDispose Data
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeQueueDispose& dyn_Data();
    // public System.Void Execute()
    // Offset: 0x5088034
    void Execute();
  }; // Unity.Collections.NativeQueueDisposeJob
  #pragma pack(pop)
  static check_size<sizeof(NativeQueueDisposeJob), 0 + sizeof(::Unity::Collections::NativeQueueDispose)> __Unity_Collections_NativeQueueDisposeJobSizeCheck;
  static_assert(sizeof(NativeQueueDisposeJob) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeQueueDisposeJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeQueueDisposeJob::*)()>(&Unity::Collections::NativeQueueDisposeJob::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::NativeQueueDisposeJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
