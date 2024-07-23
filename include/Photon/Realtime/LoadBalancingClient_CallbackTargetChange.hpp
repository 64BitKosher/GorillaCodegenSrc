// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Realtime.LoadBalancingClient
#include "Photon/Realtime/LoadBalancingClient.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Realtime::LoadBalancingClient::CallbackTargetChange);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Realtime::LoadBalancingClient::CallbackTargetChange*, "Photon.Realtime", "LoadBalancingClient/CallbackTargetChange");
// Type namespace: Photon.Realtime
namespace Photon::Realtime {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Realtime.LoadBalancingClient/CallbackTargetChange
  // [TokenAttribute] Offset: FFFFFFFF
  class LoadBalancingClient::CallbackTargetChange : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Object Target
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly System.Boolean AddTarget
    // Size: 0x1
    // Offset: 0x18
    bool AddTarget;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public readonly System.Object Target
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Target();
    // Get instance field reference: public readonly System.Boolean AddTarget
    [[deprecated("Use field access instead!")]] bool& dyn_AddTarget();
    // public System.Void .ctor(System.Object target, System.Boolean addTarget)
    // Offset: 0x4A200F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LoadBalancingClient::CallbackTargetChange* New_ctor(::Il2CppObject* target, bool addTarget) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Realtime::LoadBalancingClient::CallbackTargetChange::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LoadBalancingClient::CallbackTargetChange*, creationType>(target, addTarget)));
    }
  }; // Photon.Realtime.LoadBalancingClient/CallbackTargetChange
  #pragma pack(pop)
  static check_size<sizeof(LoadBalancingClient::CallbackTargetChange), 24 + sizeof(bool)> __Photon_Realtime_LoadBalancingClient_CallbackTargetChangeSizeCheck;
  static_assert(sizeof(LoadBalancingClient::CallbackTargetChange) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Realtime::LoadBalancingClient::CallbackTargetChange::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
