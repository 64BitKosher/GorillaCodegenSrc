// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: UnityEngine.Pool.IObjectPool`1
#include "UnityEngine/Pool/IObjectPool_1.hpp"
// Including type: UnityEngine.Pool.PooledObject`1
#include "UnityEngine/Pool/PooledObject_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: UnityEngine.Pool
namespace UnityEngine::Pool {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Pool::ObjectPool_1, "UnityEngine.Pool", "ObjectPool`1");
// Type namespace: UnityEngine.Pool
namespace UnityEngine::Pool {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Pool.ObjectPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ObjectPool_1 : public ::Il2CppObject/*, public ::System::IDisposable, public ::UnityEngine::Pool::IObjectPool_1<T>*/ {
    public:
    public:
    // readonly System.Collections.Generic.List`1<T> m_List
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<T>* m_List;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<T>*) == 0x8);
    // private readonly System.Func`1<T> m_CreateFunc
    // Size: 0x8
    // Offset: 0x0
    ::System::Func_1<T>* m_CreateFunc;
    // Field size check
    static_assert(sizeof(::System::Func_1<T>*) == 0x8);
    // private readonly System.Action`1<T> m_ActionOnGet
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* m_ActionOnGet;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    // private readonly System.Action`1<T> m_ActionOnRelease
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* m_ActionOnRelease;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    // private readonly System.Action`1<T> m_ActionOnDestroy
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* m_ActionOnDestroy;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    // private readonly System.Int32 m_MaxSize
    // Size: 0x4
    // Offset: 0x0
    int m_MaxSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean m_CollectionCheck
    // Size: 0x1
    // Offset: 0x0
    bool m_CollectionCheck;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Int32 <CountAll>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    int CountAll;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::Pool::IObjectPool_1<T>
    operator ::UnityEngine::Pool::IObjectPool_1<T>() noexcept {
      return *reinterpret_cast<::UnityEngine::Pool::IObjectPool_1<T>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: readonly System.Collections.Generic.List`1<T> m_List
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<T>*& dyn_m_List() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_List");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_List"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Func`1<T> m_CreateFunc
    [[deprecated("Use field access instead!")]] ::System::Func_1<T>*& dyn_m_CreateFunc() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_CreateFunc");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CreateFunc"))->offset;
      return *reinterpret_cast<::System::Func_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> m_ActionOnGet
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_m_ActionOnGet() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_ActionOnGet");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ActionOnGet"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> m_ActionOnRelease
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_m_ActionOnRelease() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_ActionOnRelease");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ActionOnRelease"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Action`1<T> m_ActionOnDestroy
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_m_ActionOnDestroy() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_ActionOnDestroy");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_ActionOnDestroy"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly System.Int32 m_MaxSize
    [[deprecated("Use field access instead!")]] int& dyn_m_MaxSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_MaxSize");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_MaxSize"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: System.Boolean m_CollectionCheck
    [[deprecated("Use field access instead!")]] bool& dyn_m_CollectionCheck() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_m_CollectionCheck");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_CollectionCheck"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 <CountAll>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$CountAll$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::dyn_$CountAll$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<CountAll>k__BackingField"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Int32 get_CountAll()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_CountAll() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::get_CountAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_CountAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // private System.Void set_CountAll(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_CountAll(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::set_CountAll");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_CountAll", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Int32 get_CountInactive()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_CountInactive() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::get_CountInactive");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor(System.Func`1<T> createFunc, System.Action`1<T> actionOnGet, System.Action`1<T> actionOnRelease, System.Action`1<T> actionOnDestroy, System.Boolean collectionCheck, System.Int32 defaultCapacity, System.Int32 maxSize)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectPool_1<T>* New_ctor(::System::Func_1<T>* createFunc, ::System::Action_1<T>* actionOnGet, ::System::Action_1<T>* actionOnRelease, ::System::Action_1<T>* actionOnDestroy, bool collectionCheck, int defaultCapacity, int maxSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectPool_1<T>*, creationType>(createFunc, actionOnGet, actionOnRelease, actionOnDestroy, collectionCheck, defaultCapacity, maxSize)));
    }
    // public T Get()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Get() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::Get");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // public UnityEngine.Pool.PooledObject`1<T> Get(out T v)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Pool::PooledObject_1<T> Get(ByRef<T> v) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::Get");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::Pool::PooledObject_1<T>, false>(this, ___internal__method, byref(v));
    }
    // public System.Void Release(T element)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Release(T element) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::Release");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, element);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::Clear");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Pool::ObjectPool_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::Pool::ObjectPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
  }; // UnityEngine.Pool.ObjectPool`1
  // Could not write size check! Type: UnityEngine.Pool.ObjectPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
