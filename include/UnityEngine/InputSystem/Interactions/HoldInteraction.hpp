// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.IInputInteraction
#include "UnityEngine/InputSystem/IInputInteraction.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem
namespace UnityEngine::InputSystem {
  // Forward declaring type: InputInteractionContext
  struct InputInteractionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Forward declaring type: HoldInteraction
  class HoldInteraction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::HoldInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::HoldInteraction*, "UnityEngine.InputSystem.Interactions", "HoldInteraction");
// Type namespace: UnityEngine.InputSystem.Interactions
namespace UnityEngine::InputSystem::Interactions {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Interactions.HoldInteraction
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: FFFFFFFF
  class HoldInteraction : public ::Il2CppObject/*, public ::UnityEngine::InputSystem::IInputInteraction*/ {
    public:
    public:
    // public System.Single duration
    // Size: 0x4
    // Offset: 0x10
    float duration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single pressPoint
    // Size: 0x4
    // Offset: 0x14
    float pressPoint;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Double m_TimePressed
    // Size: 0x8
    // Offset: 0x18
    double m_TimePressed;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::InputSystem::IInputInteraction
    operator ::UnityEngine::InputSystem::IInputInteraction() noexcept {
      return *reinterpret_cast<::UnityEngine::InputSystem::IInputInteraction*>(this);
    }
    // Get instance field reference: public System.Single duration
    [[deprecated("Use field access instead!")]] float& dyn_duration();
    // Get instance field reference: public System.Single pressPoint
    [[deprecated("Use field access instead!")]] float& dyn_pressPoint();
    // Get instance field reference: private System.Double m_TimePressed
    [[deprecated("Use field access instead!")]] double& dyn_m_TimePressed();
    // private System.Single get_durationOrDefault()
    // Offset: 0x516F040
    float get_durationOrDefault();
    // private System.Single get_pressPointOrDefault()
    // Offset: 0x516F0B0
    float get_pressPointOrDefault();
    // public System.Void Process(ref UnityEngine.InputSystem.InputInteractionContext context)
    // Offset: 0x516F108
    void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context);
    // public System.Void Reset()
    // Offset: 0x516F2AC
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x516F2B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HoldInteraction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Interactions::HoldInteraction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HoldInteraction*, creationType>()));
    }
  }; // UnityEngine.InputSystem.Interactions.HoldInteraction
  #pragma pack(pop)
  static check_size<sizeof(HoldInteraction), 24 + sizeof(double)> __UnityEngine_InputSystem_Interactions_HoldInteractionSizeCheck;
  static_assert(sizeof(HoldInteraction) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::HoldInteraction::get_durationOrDefault
// Il2CppName: get_durationOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Interactions::HoldInteraction::*)()>(&UnityEngine::InputSystem::Interactions::HoldInteraction::get_durationOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::HoldInteraction*), "get_durationOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::HoldInteraction::get_pressPointOrDefault
// Il2CppName: get_pressPointOrDefault
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Interactions::HoldInteraction::*)()>(&UnityEngine::InputSystem::Interactions::HoldInteraction::get_pressPointOrDefault)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::HoldInteraction*), "get_pressPointOrDefault", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::HoldInteraction::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::HoldInteraction::*)(ByRef<::UnityEngine::InputSystem::InputInteractionContext>)>(&UnityEngine::InputSystem::Interactions::HoldInteraction::Process)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem", "InputInteractionContext")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::HoldInteraction*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::HoldInteraction::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::Interactions::HoldInteraction::*)()>(&UnityEngine::InputSystem::Interactions::HoldInteraction::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Interactions::HoldInteraction*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Interactions::HoldInteraction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
