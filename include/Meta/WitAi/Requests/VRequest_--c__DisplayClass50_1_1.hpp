// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Requests.VRequest
#include "Meta/WitAi/Requests/VRequest.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1, "Meta.WitAi.Requests", "VRequest/<>c__DisplayClass50_1`1");
// Type namespace: Meta.WitAi.Requests
namespace Meta::WitAi::Requests {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_1`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TData>
  class VRequest::$$c__DisplayClass50_1_1 : public ::Il2CppObject {
    public:
    public:
    // public System.String error
    // Size: 0x8
    // Offset: 0x0
    ::StringW error;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String text
    // Size: 0x8
    // Offset: 0x0
    ::StringW text;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_0`1<TData> CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x0
    ::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_0_1<TData>* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_0_1<TData>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.String error
    [[deprecated("Use field access instead!")]] ::StringW& dyn_error() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1::dyn_error");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "error"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String text
    [[deprecated("Use field access instead!")]] ::StringW& dyn_text() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1::dyn_text");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "text"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_0`1<TData> CS$<>8__locals1
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_0_1<TData>*& dyn_CS$$$8__locals1() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1::dyn_CS$$$8__locals1");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "CS$<>8__locals1"))->offset;
      return *reinterpret_cast<::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_0_1<TData>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VRequest::$$c__DisplayClass50_1_1<TData>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VRequest::$$c__DisplayClass50_1_1<TData>*, creationType>()));
    }
    // System.Void <RequestJson>b__1(TData result, System.Boolean deserializeSuccess)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void $RequestJson$b__1(TData result, bool deserializeSuccess) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Requests::VRequest::$$c__DisplayClass50_1_1::<RequestJson>b__1");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<RequestJson>b__1", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result), ::il2cpp_utils::ExtractType(deserializeSuccess)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, result, deserializeSuccess);
    }
  }; // Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_1`1
  // Could not write size check! Type: Meta.WitAi.Requests.VRequest/<>c__DisplayClass50_1`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
