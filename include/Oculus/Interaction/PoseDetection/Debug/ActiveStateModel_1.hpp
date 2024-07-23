// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PoseDetection.Debug.IActiveStateModel
#include "Oculus/Interaction/PoseDetection/Debug/IActiveStateModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: ActiveStateModel`1<TActiveState>
  template<typename TActiveState>
  class ActiveStateModel_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateModel`1");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // WARNING Size may be invalid!
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TActiveState>
  class ActiveStateModel_1 : public ::Il2CppObject/*, public ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*/ {
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel
    operator ::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::PoseDetection::Debug::IActiveStateModel*>(this);
    }
    // public System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IActiveState> GetChildren(Oculus.Interaction.IActiveState activeState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* GetChildren(::Oculus::Interaction::IActiveState* activeState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1::GetChildren");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*, false>(this, ___internal__method, activeState);
    }
    // protected System.Collections.Generic.IEnumerable`1<Oculus.Interaction.IActiveState> GetChildren(TActiveState activeState)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>* GetChildren(TActiveState activeState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1::GetChildren");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1<TActiveState>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::Oculus::Interaction::IActiveState*>*, false>(this, ___internal__method, activeState);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActiveStateModel_1<TActiveState>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::ActiveStateModel_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActiveStateModel_1<TActiveState>*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1
  // Could not write size check! Type: Oculus.Interaction.PoseDetection.Debug.ActiveStateModel`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
