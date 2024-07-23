// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections::LowLevel::Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: UntypedUnsafeList
  struct UntypedUnsafeList;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeListDispose
  struct NativeListDispose;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::NativeListDispose, "Unity.Collections", "NativeListDispose");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeListDispose
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeContainerAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  struct NativeListDispose/*, public ::System::ValueType*/ {
    public:
    public:
    // public Unity.Collections.LowLevel.Unsafe.UntypedUnsafeList* m_ListData
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData;
    // Field size check
    static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*) == 0x8);
    public:
    // Creating value type constructor for type: NativeListDispose
    constexpr NativeListDispose(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* m_ListData_ = {}) noexcept : m_ListData{m_ListData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*
    constexpr operator ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*() const noexcept {
      return m_ListData;
    }
    // Get instance field reference: public Unity.Collections.LowLevel.Unsafe.UntypedUnsafeList* m_ListData
    [[deprecated("Use field access instead!")]] ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*& dyn_m_ListData();
    // public System.Void Dispose()
    // Offset: 0x5087FA0
    void Dispose();
  }; // Unity.Collections.NativeListDispose
  #pragma pack(pop)
  static check_size<sizeof(NativeListDispose), 0 + sizeof(::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*)> __Unity_Collections_NativeListDisposeSizeCheck;
  static_assert(sizeof(NativeListDispose) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::NativeListDispose::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Unity::Collections::NativeListDispose::*)()>(&Unity::Collections::NativeListDispose::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::NativeListDispose), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};