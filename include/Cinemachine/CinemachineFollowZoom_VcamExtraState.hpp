// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.CinemachineFollowZoom
#include "Cinemachine/CinemachineFollowZoom.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineFollowZoom::VcamExtraState);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineFollowZoom::VcamExtraState*, "Cinemachine", "CinemachineFollowZoom/VcamExtraState");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineFollowZoom/VcamExtraState
  // [TokenAttribute] Offset: FFFFFFFF
  class CinemachineFollowZoom::VcamExtraState : public ::Il2CppObject {
    public:
    public:
    // public System.Single m_previousFrameZoom
    // Size: 0x4
    // Offset: 0x10
    float m_previousFrameZoom;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return m_previousFrameZoom;
    }
    // Get instance field reference: public System.Single m_previousFrameZoom
    [[deprecated("Use field access instead!")]] float& dyn_m_previousFrameZoom();
    // public System.Void .ctor()
    // Offset: 0x2A8CE78
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineFollowZoom::VcamExtraState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineFollowZoom::VcamExtraState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineFollowZoom::VcamExtraState*, creationType>()));
    }
  }; // Cinemachine.CinemachineFollowZoom/VcamExtraState
  #pragma pack(pop)
  static check_size<sizeof(CinemachineFollowZoom::VcamExtraState), 16 + sizeof(float)> __Cinemachine_CinemachineFollowZoom_VcamExtraStateSizeCheck;
  static_assert(sizeof(CinemachineFollowZoom::VcamExtraState) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineFollowZoom::VcamExtraState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
