// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineBrain
#include "Cinemachine/CinemachineBrain.hpp"
// Including type: UnityEngine.Events.UnityEvent`2
#include "UnityEngine/Events/UnityEvent_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: ICinemachineCamera
  class ICinemachineCamera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineBrain::VcamActivatedEvent);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineBrain::VcamActivatedEvent*, "Cinemachine", "CinemachineBrain/VcamActivatedEvent");
// Type namespace: Cinemachine
namespace Cinemachine {
  // WARNING Size may be invalid!
  // Autogenerated type: Cinemachine.CinemachineBrain/VcamActivatedEvent
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineBrain::VcamActivatedEvent : public ::UnityEngine::Events::UnityEvent_2<::Cinemachine::ICinemachineCamera*, ::Cinemachine::ICinemachineCamera*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x2A83DD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineBrain::VcamActivatedEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineBrain::VcamActivatedEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineBrain::VcamActivatedEvent*, creationType>()));
    }
  }; // Cinemachine.CinemachineBrain/VcamActivatedEvent
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineBrain::VcamActivatedEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
