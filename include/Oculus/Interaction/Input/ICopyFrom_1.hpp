// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: ICopyFrom`1<TSelfType>
  template<typename TSelfType>
  class ICopyFrom_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::Input::ICopyFrom_1, "Oculus.Interaction.Input", "ICopyFrom`1");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.Input.ICopyFrom`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TSelfType>
  class ICopyFrom_1 {
    public:
    // public System.Void CopyFrom(TSelfType source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(TSelfType source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Input::ICopyFrom_1::CopyFrom");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::Input::ICopyFrom_1<TSelfType>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, source);
    }
  }; // Oculus.Interaction.Input.ICopyFrom`1
  // Could not write size check! Type: Oculus.Interaction.Input.ICopyFrom`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
