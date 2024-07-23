// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRObjectPool
#include "GlobalNamespace/OVRObjectPool.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::OVRObjectPool::ItemScope_1, "", "OVRObjectPool/ItemScope`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRObjectPool/ItemScope`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  template<typename T>
  struct OVRObjectPool::ItemScope_1/*, public ::System::ValueType, public ::System::IDisposable*/ {
    public:
    public:
    // private readonly T _item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T item;
    public:
    // Creating value type constructor for type: ItemScope_1
    constexpr ItemScope_1(T item_ = {}) noexcept : item{item_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T _item
    [[deprecated("Use field access instead!")]] T& dyn__item() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::ItemScope_1::dyn__item");
      auto ___internal__instance = *this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_item"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(out T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ItemScope_1(ByRef<T> item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::ItemScope_1::.ctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractIndependentType<T&>()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(item));
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRObjectPool::ItemScope_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(*this, classof(::GlobalNamespace::OVRObjectPool::ItemScope_1<T>), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // OVRObjectPool/ItemScope`1
  // Could not write size check! Type: OVRObjectPool/ItemScope`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
