// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.GorillaServer
#include "GorillaNetworking/GorillaServer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1, "GorillaNetworking", "GorillaServer/<>c__DisplayClass21_0`1");
// Type namespace: GorillaNetworking
namespace GorillaNetworking {
  // WARNING Size may be invalid!
  // Autogenerated type: GorillaNetworking.GorillaServer/<>c__DisplayClass21_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class GorillaServer::$$c__DisplayClass21_0_1 : public ::Il2CppObject {
    public:
    public:
    // public GorillaNetworking.GorillaServer <>4__this
    // Size: 0x8
    // Offset: 0x0
    ::GorillaNetworking::GorillaServer* $$4__this;
    // Field size check
    static_assert(sizeof(::GorillaNetworking::GorillaServer*) == 0x8);
    // public System.String label
    // Size: 0x8
    // Offset: 0x0
    ::StringW label;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Action`1<T> cb
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* cb;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public GorillaNetworking.GorillaServer <>4__this
    [[deprecated("Use field access instead!")]] ::GorillaNetworking::GorillaServer*& dyn_$$4__this() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1::dyn_$$4__this");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<>4__this"))->offset;
      return *reinterpret_cast<::GorillaNetworking::GorillaServer**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String label
    [[deprecated("Use field access instead!")]] ::StringW& dyn_label() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1::dyn_label");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "label"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> cb
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_cb() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1::dyn_cb");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "cb"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaServer::$$c__DisplayClass21_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaServer::$$c__DisplayClass21_0_1<T>*, creationType>()));
    }
    // System.Void <DebugWrapCb>b__0(T arg)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $DebugWrapCb$b__0(T arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::GorillaServer::$$c__DisplayClass21_0_1::<DebugWrapCb>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<DebugWrapCb>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(arg)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, arg);
    }
  }; // GorillaNetworking.GorillaServer/<>c__DisplayClass21_0`1
  // Could not write size check! Type: GorillaNetworking.GorillaServer/<>c__DisplayClass21_0`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
