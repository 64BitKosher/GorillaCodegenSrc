// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: JSonHelper
#include "GlobalNamespace/JSonHelper.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::JSonHelper::Wrapper_1, "", "JSonHelper/Wrapper`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: JSonHelper/Wrapper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class JSonHelper::Wrapper_1 : public ::Il2CppObject {
    public:
    public:
    // public T[] Items
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> Items;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<T>
    constexpr operator ::ArrayW<T>() const noexcept {
      return Items;
    }
    // Autogenerated instance field getter
    // Get instance field: public T[] Items
    [[deprecated("Use field access instead!")]] ::ArrayW<T>& dyn_Items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JSonHelper::Wrapper_1::dyn_Items");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Items"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSonHelper::Wrapper_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::JSonHelper::Wrapper_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSonHelper::Wrapper_1<T>*, creationType>()));
    }
  }; // JSonHelper/Wrapper`1
  // Could not write size check! Type: JSonHelper/Wrapper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
