// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: LinkedListNode`1<T>
  template<typename T>
  class LinkedListNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Forward declaring type: FastAction`1<A>
  template<typename A>
  class FastAction_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::TMPro::FastAction_1, "TMPro", "FastAction`1");
// Type namespace: TMPro
namespace TMPro {
  // WARNING Size may be invalid!
  // Autogenerated type: TMPro.FastAction`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename A>
  class FastAction_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Collections.Generic.LinkedList`1<System.Action`1<A>> delegates
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>* delegates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> lookup
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>* lookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.LinkedList`1<System.Action`1<A>> delegates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>*& dyn_delegates() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::dyn_delegates");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "delegates"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::LinkedList_1<::System::Action_1<A>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> lookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>*& dyn_lookup() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::dyn_lookup");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "lookup"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::Dictionary_2<::System::Action_1<A>*, ::System::Collections::Generic::LinkedListNode_1<::System::Action_1<A>*>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void Add(System.Action`1<A> rhs)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::System::Action_1<A>* rhs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::Add");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Add", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rhs)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, rhs);
    }
    // public System.Void Remove(System.Action`1<A> rhs)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Remove(::System::Action_1<A>* rhs) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::Remove");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Remove", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rhs)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, rhs);
    }
    // public System.Void Call(A a)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Call(A a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::Call");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Call", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(a)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, a);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FastAction_1<A>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::TMPro::FastAction_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FastAction_1<A>*, creationType>()));
    }
  }; // TMPro.FastAction`1
  // Could not write size check! Type: TMPro.FastAction`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
