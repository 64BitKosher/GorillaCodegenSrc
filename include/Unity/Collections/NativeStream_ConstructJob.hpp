// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.NativeStream
#include "Unity/Collections/NativeStream.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Unity.Jobs.IJob
#include "Unity/Jobs/IJob.hpp"
// Including type: Unity.Collections.NativeArray`1
#include "Unity/Collections/NativeArray_1.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeStream::ConstructJob, "Unity.Collections", "NativeStream/ConstructJob");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeStream/ConstructJob
  // [TokenAttribute] Offset: FFFFFFFF
  // [BurstCompileAttribute] Offset: FFFFFFFF
  struct NativeStream::ConstructJob/*, public ::System::ValueType, public ::Unity::Jobs::IJob*/ {
    public:
    public:
    // public Unity.Collections.NativeStream Container
    // Size: 0x20
    // Offset: 0x0
    ::Unity::Collections::NativeStream Container;
    // Field size check
    static_assert(sizeof(::Unity::Collections::NativeStream) == 0x20);
    // public Unity.Collections.NativeArray`1<System.Int32> Length
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    ::Unity::Collections::NativeArray_1<int> Length;
    public:
    // Creating value type constructor for type: ConstructJob
    constexpr ConstructJob(::Unity::Collections::NativeStream Container_ = {}, ::Unity::Collections::NativeArray_1<int> Length_ = {}) noexcept : Container{Container_}, Length{Length_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Jobs::IJob
    operator ::Unity::Jobs::IJob() noexcept {
      return *reinterpret_cast<::Unity::Jobs::IJob*>(this);
    }
    // Get instance field reference: public Unity.Collections.NativeStream Container
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeStream& dyn_Container();
    // Get instance field reference: public Unity.Collections.NativeArray`1<System.Int32> Length
    [[deprecated("Use field access instead!")]] ::Unity::Collections::NativeArray_1<int>& dyn_Length();
    // public System.Void Execute()
    // Offset: 0x5088248
    void Execute();
  }; // Unity.Collections.NativeStream/ConstructJob
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeStream::ConstructJob::Execute
// Il2CppName: Execute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeStream::ConstructJob::*)()>(&Unity::Collections::NativeStream::ConstructJob::Execute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::NativeStream::ConstructJob), "Execute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
