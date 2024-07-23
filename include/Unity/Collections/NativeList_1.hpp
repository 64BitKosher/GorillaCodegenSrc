// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Unity.Collections.INativeList`1
#include "Unity/Collections/INativeList_1.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: Unity.Collections.AllocatorManager/AllocatorHandle
#include "Unity/Collections/AllocatorManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Collections::LowLevel::Unsafe
namespace Unity::Collections::LowLevel::Unsafe {
  // Forward declaring type: UnsafeList`1<T>
  template<typename T>
  struct UnsafeList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: NativeList`1<T>
  template<typename T>
  struct NativeList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::NativeList_1, "Unity.Collections", "NativeList`1");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Collections.NativeList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  // [NativeContainerAttribute] Offset: FFFFFFFF
  // [DebuggerTypeProxyAttribute] Offset: FFFFFFFF
  // [GenerateTestsForBurstCompatibilityAttribute] Offset: FFFFFFFF
  template<typename T>
  struct NativeList_1/*, public ::System::ValueType, public ::System::IDisposable, public ::Unity::Collections::INativeList_1<T>, public ::System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    public:
    // Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* m_ListData
    // Size: 0x8
    // Offset: 0x0
    ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* m_ListData;
    // Field size check
    static_assert(sizeof(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*) == 0x8);
    public:
    // Creating value type constructor for type: NativeList_1
    constexpr NativeList_1(::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>* m_ListData_ = {}) noexcept : m_ListData{m_ListData_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::Unity::Collections::INativeList_1<T>
    operator ::Unity::Collections::INativeList_1<T>() noexcept {
      return *reinterpret_cast<::Unity::Collections::INativeList_1<T>*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<T>
    operator ::System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // Creating conversion operator: operator ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*
    constexpr operator ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*() const noexcept {
      return m_ListData;
    }
    // Autogenerated instance field getter
    // Get instance field: Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* m_ListData
    [[deprecated("Use field access instead!")]] ::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>*& dyn_m_ListData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::dyn_m_ListData");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ListData"))->offset;
      return *reinterpret_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeList_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Unity.Collections.AllocatorManager/AllocatorHandle allocator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    NativeList_1(::Unity::Collections::AllocatorManager::AllocatorHandle allocator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(allocator)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, allocator);
    }
    // public System.Void .ctor(System.Int32 initialCapacity, Unity.Collections.AllocatorManager/AllocatorHandle allocator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    NativeList_1(int initialCapacity, ::Unity::Collections::AllocatorManager::AllocatorHandle allocator) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initialCapacity), ::il2cpp_utils::ExtractType(allocator)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, initialCapacity, allocator);
    }
    // System.Void Initialize(System.Int32 initialCapacity, ref U allocator)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class U>
    void Initialize(int initialCapacity, ByRef<U> allocator) {
      static_assert(std::is_convertible_v<U, ::System::ValueType*> && std::is_convertible_v<std::remove_pointer_t<U>, ::Unity::Collections::AllocatorManager::IAllocator>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::Initialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Initialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(initialCapacity), ::il2cpp_utils::ExtractType(allocator)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, initialCapacity, byref(allocator));
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T get_Item(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::get_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Item(int index, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::set_Item");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index, value);
    }
    // public T ElementAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    T ElementAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::ElementAt");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method, index);
    }
    // public System.Int32 get_Length()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_Length() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::get_Length");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void Add(in T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(value));
    }
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveAt(int index) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::RemoveAt");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "RemoveAt", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, index);
    }
    // public System.Boolean get_IsCreated()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_IsCreated() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::get_IsCreated");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "get_IsCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::System.Collections.IEnumerable.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal__method);
    }
    // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable$T$_GetEnumerator() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Collections::NativeList_1::System.Collections.Generic.IEnumerable<T>.GetEnumerator");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::Unity::Collections::NativeList_1<T>), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<T>*, false>(this, ___internal__method);
    }
  }; // Unity.Collections.NativeList`1
  // Could not write size check! Type: Unity.Collections.NativeList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
