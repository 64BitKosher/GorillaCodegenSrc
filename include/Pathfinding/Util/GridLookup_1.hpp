// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Int2
#include "Pathfinding/Int2.hpp"
// Including type: Pathfinding.IntRect
#include "Pathfinding/IntRect.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Skipping declaration: Item because it is already included!
  // Skipping declaration: Root because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: Stack`1<T>
  template<typename T>
  class Stack_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Forward declaring type: GridLookup`1<T>
  template<typename T>
  class GridLookup_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Pathfinding::Util::GridLookup_1, "Pathfinding.Util", "GridLookup`1");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // WARNING Size may be invalid!
  // Autogenerated type: Pathfinding.Util.GridLookup`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class GridLookup_1 : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::Util::GridLookup_1::Item<T>
    class Item;
    // Nested type: ::Pathfinding::Util::GridLookup_1::Root<T>
    class Root;
    // WARNING Size may be invalid!
    // Autogenerated type: Pathfinding.Util.GridLookup`1/Item
    // [TokenAttribute] Offset: FFFFFFFF
    class Item : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = GridLookup_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Item";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public Pathfinding.Util.GridLookup`1/Root<T> root
      // Size: 0x8
      // Offset: 0x0
      typename ::Pathfinding::Util::GridLookup_1<T>::Root* root;
      // Field size check
      static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Root*) == 0x8);
      // public Pathfinding.Util.GridLookup`1/Item<T> prev
      // Size: 0x8
      // Offset: 0x0
      typename ::Pathfinding::Util::GridLookup_1<T>::Item* prev;
      // Field size check
      static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Item*) == 0x8);
      // public Pathfinding.Util.GridLookup`1/Item<T> next
      // Size: 0x8
      // Offset: 0x0
      typename ::Pathfinding::Util::GridLookup_1<T>::Item* next;
      // Field size check
      static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Item*) == 0x8);
      public:
      // Autogenerated instance field getter
      // Get instance field: public Pathfinding.Util.GridLookup`1/Root<T> root
      [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Root*& dyn_root() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Item::dyn_root");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "root"))->offset;
        return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Root**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Pathfinding.Util.GridLookup`1/Item<T> prev
      [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Item*& dyn_prev() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Item::dyn_prev");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prev"))->offset;
        return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Item**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Pathfinding.Util.GridLookup`1/Item<T> next
      [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Item*& dyn_next() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Item::dyn_next");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
        return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Item**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename GridLookup_1<T>::Item* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Item::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename GridLookup_1<T>::Item*, creationType>()));
      }
    }; // Pathfinding.Util.GridLookup`1/Item
    // Could not write size check! Type: Pathfinding.Util.GridLookup`1/Item is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Pathfinding.Util.GridLookup`1/Root
    // [TokenAttribute] Offset: FFFFFFFF
    class Root : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = GridLookup_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Root";
      static constexpr bool IS_VALUE_TYPE = false;
      public:
      // public T obj
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      T obj;
      // public Pathfinding.Util.GridLookup`1/Root<T> next
      // Size: 0x8
      // Offset: 0x0
      typename ::Pathfinding::Util::GridLookup_1<T>::Root* next;
      // Field size check
      static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Root*) == 0x8);
      // Pathfinding.Util.GridLookup`1/Root<T> prev
      // Size: 0x8
      // Offset: 0x0
      typename ::Pathfinding::Util::GridLookup_1<T>::Root* prev;
      // Field size check
      static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Root*) == 0x8);
      // Pathfinding.IntRect previousBounds
      // Size: 0x10
      // Offset: 0x0
      ::Pathfinding::IntRect previousBounds;
      // Field size check
      static_assert(sizeof(::Pathfinding::IntRect) == 0x10);
      // System.Collections.Generic.List`1<Pathfinding.Util.GridLookup`1/Item<T>> items
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>* items;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>*) == 0x8);
      // System.Boolean flag
      // Size: 0x1
      // Offset: 0x0
      bool flag;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Autogenerated instance field getter
      // Get instance field: public T obj
      [[deprecated("Use field access instead!")]] T& dyn_obj() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_obj");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "obj"))->offset;
        return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: public Pathfinding.Util.GridLookup`1/Root<T> next
      [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Root*& dyn_next() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_next");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "next"))->offset;
        return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Root**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: Pathfinding.Util.GridLookup`1/Root<T> prev
      [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Root*& dyn_prev() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_prev");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "prev"))->offset;
        return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Root**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: Pathfinding.IntRect previousBounds
      [[deprecated("Use field access instead!")]] ::Pathfinding::IntRect& dyn_previousBounds() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_previousBounds");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "previousBounds"))->offset;
        return *reinterpret_cast<::Pathfinding::IntRect*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: System.Collections.Generic.List`1<Pathfinding.Util.GridLookup`1/Item<T>> items
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>*& dyn_items() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_items");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "items"))->offset;
        return *reinterpret_cast<::System::Collections::Generic::List_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // Autogenerated instance field getter
      // Get instance field: System.Boolean flag
      [[deprecated("Use field access instead!")]] bool& dyn_flag() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::dyn_flag");
        auto ___internal__instance = this;
        static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "flag"))->offset;
        return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFFFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename GridLookup_1<T>::Root* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Root::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename GridLookup_1<T>::Root*, creationType>()));
      }
    }; // Pathfinding.Util.GridLookup`1/Root
    // Could not write size check! Type: Pathfinding.Util.GridLookup`1/Root is generic, or has no fields that are valid for size checks!
    public:
    // private Pathfinding.Int2 size
    // Size: 0x8
    // Offset: 0x0
    ::Pathfinding::Int2 size;
    // Field size check
    static_assert(sizeof(::Pathfinding::Int2) == 0x8);
    // private Pathfinding.Util.GridLookup`1/Item<T>[] cells
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<typename ::Pathfinding::Util::GridLookup_1<T>::Item*> cells;
    // Field size check
    static_assert(sizeof(::ArrayW<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>) == 0x8);
    // private Pathfinding.Util.GridLookup`1/Root<T> all
    // Size: 0x8
    // Offset: 0x0
    typename ::Pathfinding::Util::GridLookup_1<T>::Root* all;
    // Field size check
    static_assert(sizeof(typename ::Pathfinding::Util::GridLookup_1<T>::Root*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<T,Pathfinding.Util.GridLookup`1/Root<T>> rootLookup
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<T, typename ::Pathfinding::Util::GridLookup_1<T>::Root*>* rootLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<T, typename ::Pathfinding::Util::GridLookup_1<T>::Root*>*) == 0x8);
    // private System.Collections.Generic.Stack`1<Pathfinding.Util.GridLookup`1/Item<T>> itemPool
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Stack_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>* itemPool;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Stack_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private Pathfinding.Int2 size
    [[deprecated("Use field access instead!")]] ::Pathfinding::Int2& dyn_size() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::dyn_size");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "size"))->offset;
      return *reinterpret_cast<::Pathfinding::Int2*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Pathfinding.Util.GridLookup`1/Item<T>[] cells
    [[deprecated("Use field access instead!")]] ::ArrayW<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>& dyn_cells() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::dyn_cells");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cells"))->offset;
      return *reinterpret_cast<::ArrayW<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private Pathfinding.Util.GridLookup`1/Root<T> all
    [[deprecated("Use field access instead!")]] typename ::Pathfinding::Util::GridLookup_1<T>::Root*& dyn_all() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::dyn_all");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "all"))->offset;
      return *reinterpret_cast<typename ::Pathfinding::Util::GridLookup_1<T>::Root**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<T,Pathfinding.Util.GridLookup`1/Root<T>> rootLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<T, typename ::Pathfinding::Util::GridLookup_1<T>::Root*>*& dyn_rootLookup() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::dyn_rootLookup");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "rootLookup"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<T, typename ::Pathfinding::Util::GridLookup_1<T>::Root*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Stack`1<Pathfinding.Util.GridLookup`1/Item<T>> itemPool
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Stack_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>*& dyn_itemPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::dyn_itemPool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "itemPool"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Stack_1<typename ::Pathfinding::Util::GridLookup_1<T>::Item*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Pathfinding.Int2 size)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GridLookup_1<T>* New_ctor(::Pathfinding::Int2 size) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GridLookup_1<T>*, creationType>(size)));
    }
    // public Pathfinding.Util.GridLookup`1/Root<T> get_AllItems()
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Pathfinding::Util::GridLookup_1<T>::Root* get_AllItems() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::get_AllItems");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_AllItems", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Pathfinding::Util::GridLookup_1<T>::Root*, false>(this, ___internal__method);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public Pathfinding.Util.GridLookup`1/Root<T> GetRoot(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Pathfinding::Util::GridLookup_1<T>::Root* GetRoot(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::GetRoot");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetRoot", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Pathfinding::Util::GridLookup_1<T>::Root*, false>(this, ___internal__method, item);
    }
    // public Pathfinding.Util.GridLookup`1/Root<T> Add(T item, Pathfinding.IntRect bounds)
    // Offset: 0xFFFFFFFFFFFFFFFF
    typename ::Pathfinding::Util::GridLookup_1<T>::Root* Add(T item, ::Pathfinding::IntRect bounds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(bounds)})));
      return ::il2cpp_utils::RunMethodRethrow<typename ::Pathfinding::Util::GridLookup_1<T>::Root*, false>(this, ___internal__method, item, bounds);
    }
    // public System.Void Remove(T item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void Move(T item, Pathfinding.IntRect bounds)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Move(T item, ::Pathfinding::IntRect bounds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::Move");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Move", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(bounds)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item, bounds);
    }
    // public System.Collections.Generic.List`1<U> QueryRect(Pathfinding.IntRect r)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class U>
    ::System::Collections::Generic::List_1<U>* QueryRect(::Pathfinding::IntRect r) {
      static_assert(std::is_convertible_v<U, T>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::GridLookup_1::QueryRect");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "QueryRect", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(r)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<U>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<U>*, false>(this, ___generic__method, r);
    }
  }; // Pathfinding.Util.GridLookup`1
  // Could not write size check! Type: Pathfinding.Util.GridLookup`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"