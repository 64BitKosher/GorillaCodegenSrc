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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipError
  class MothershipError;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CallbackPair`1<T>
  template<typename T>
  class CallbackPair_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::CallbackPair_1, "", "CallbackPair`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: CallbackPair`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CallbackPair_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<T> successCallback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<T>* successCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<T>*) == 0x8);
    // public System.Action`1<MothershipError> errorCallback
    // Size: 0x8
    // Offset: 0x0
    ::System::Action_1<::GlobalNamespace::MothershipError*>* errorCallback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::MothershipError*>*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<T> successCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<T>*& dyn_successCallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallbackPair_1::dyn_successCallback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "successCallback"))->offset;
      return *reinterpret_cast<::System::Action_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Action`1<MothershipError> errorCallback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::MothershipError*>*& dyn_errorCallback() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallbackPair_1::dyn_errorCallback");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "errorCallback"))->offset;
      return *reinterpret_cast<::System::Action_1<::GlobalNamespace::MothershipError*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackPair_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CallbackPair_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackPair_1<T>*, creationType>()));
    }
  }; // CallbackPair`1
  // Could not write size check! Type: CallbackPair`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
