// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.LowLevel.InputUpdateType
#include "UnityEngine/InputSystem/LowLevel/InputUpdateType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::LowLevel
namespace UnityEngine::InputSystem::LowLevel {
}
// Completed forward declares
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Forward declaring type: InputUpdate
  class InputUpdate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::LowLevel::InputUpdate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate*, "UnityEngine.InputSystem.LowLevel", "InputUpdate");
// Type namespace: UnityEngine.InputSystem.LowLevel
namespace UnityEngine::InputSystem::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputUpdate
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class InputUpdate : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputUpdate::UpdateStepCount
    struct UpdateStepCount;
    // Nested type: ::UnityEngine::InputSystem::LowLevel::InputUpdate::SerializedState
    struct SerializedState;
    // Size: 0x8
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
    // [TokenAttribute] Offset: FFFFFFFF
    struct UpdateStepCount/*, public ::System::ValueType*/ {
      public:
      public:
      // private System.Boolean m_WasUpdated
      // Size: 0x1
      // Offset: 0x0
      bool m_WasUpdated;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Padding between fields: m_WasUpdated and: value
      char __padding0[0x3] = {};
      // private System.UInt32 <value>k__BackingField
      // Size: 0x4
      // Offset: 0x4
      uint value;
      // Field size check
      static_assert(sizeof(uint) == 0x4);
      public:
      // Creating value type constructor for type: UpdateStepCount
      constexpr UpdateStepCount(bool m_WasUpdated_ = {}, uint value_ = {}) noexcept : m_WasUpdated{m_WasUpdated_}, value{value_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private System.Boolean m_WasUpdated
      [[deprecated("Use field access instead!")]] bool& dyn_m_WasUpdated();
      // Get instance field reference: private System.UInt32 <value>k__BackingField
      [[deprecated("Use field access instead!")]] uint& dyn_$value$k__BackingField();
      // public System.UInt32 get_value()
      // Offset: 0x51535C0
      uint get_value();
      // private System.Void set_value(System.UInt32 value)
      // Offset: 0x51535C8
      void set_value(uint value);
      // public System.Void OnBeforeUpdate()
      // Offset: 0x51533E0
      void OnBeforeUpdate();
      // public System.Void OnUpdate()
      // Offset: 0x5153480
      void OnUpdate();
    }; // UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount
    #pragma pack(pop)
    static check_size<sizeof(InputUpdate::UpdateStepCount), 4 + sizeof(uint)> __UnityEngine_InputSystem_LowLevel_InputUpdate_UpdateStepCountSizeCheck;
    static_assert(sizeof(InputUpdate::UpdateStepCount) == 0x8);
    // Get static field: static public System.UInt32 s_UpdateStepCount
    static uint _get_s_UpdateStepCount();
    // Set static field: static public System.UInt32 s_UpdateStepCount
    static void _set_s_UpdateStepCount(uint value);
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType s_LatestUpdateType
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType _get_s_LatestUpdateType();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdateType s_LatestUpdateType
    static void _set_s_LatestUpdateType(::UnityEngine::InputSystem::LowLevel::InputUpdateType value);
    // Get static field: static public UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount s_PlayerUpdateStepCount
    static ::UnityEngine::InputSystem::LowLevel::InputUpdate::UpdateStepCount _get_s_PlayerUpdateStepCount();
    // Set static field: static public UnityEngine.InputSystem.LowLevel.InputUpdate/UpdateStepCount s_PlayerUpdateStepCount
    static void _set_s_PlayerUpdateStepCount(::UnityEngine::InputSystem::LowLevel::InputUpdate::UpdateStepCount value);
    // static System.Void OnBeforeUpdate(UnityEngine.InputSystem.LowLevel.InputUpdateType type)
    // Offset: 0x5153360
    static void OnBeforeUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);
    // static System.Void OnUpdate(UnityEngine.InputSystem.LowLevel.InputUpdateType type)
    // Offset: 0x51533F8
    static void OnUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType type);
    // static public UnityEngine.InputSystem.LowLevel.InputUpdate/SerializedState Save()
    // Offset: 0x515349C
    static ::UnityEngine::InputSystem::LowLevel::InputUpdate::SerializedState Save();
    // static public System.Void Restore(UnityEngine.InputSystem.LowLevel.InputUpdate/SerializedState state)
    // Offset: 0x5153500
    static void Restore(::UnityEngine::InputSystem::LowLevel::InputUpdate::SerializedState state);
    // static public UnityEngine.InputSystem.LowLevel.InputUpdateType GetUpdateTypeForPlayer(UnityEngine.InputSystem.LowLevel.InputUpdateType mask)
    // Offset: 0x5153594
    static ::UnityEngine::InputSystem::LowLevel::InputUpdateType GetUpdateTypeForPlayer(::UnityEngine::InputSystem::LowLevel::InputUpdateType mask);
    // static public System.Boolean IsPlayerUpdate(UnityEngine.InputSystem.LowLevel.InputUpdateType updateType)
    // Offset: 0x51535B4
    static bool IsPlayerUpdate(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType);
  }; // UnityEngine.InputSystem.LowLevel.InputUpdate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::LowLevel::InputUpdate::UpdateStepCount, "UnityEngine.InputSystem.LowLevel", "InputUpdate/UpdateStepCount");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate
// Il2CppName: OnBeforeUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputUpdate::OnBeforeUpdate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "OnBeforeUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate
// Il2CppName: OnUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputUpdate::OnUpdate)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "OnUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdate::SerializedState (*)()>(&UnityEngine::InputSystem::LowLevel::InputUpdate::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::Restore
// Il2CppName: Restore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdate::SerializedState)>(&UnityEngine::InputSystem::LowLevel::InputUpdate::Restore)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdate/SerializedState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "Restore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer
// Il2CppName: GetUpdateTypeForPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputUpdateType (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputUpdate::GetUpdateTypeForPlayer)> {
  static const MethodInfo* get() {
    static auto* mask = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "GetUpdateTypeForPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mask});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate
// Il2CppName: IsPlayerUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&UnityEngine::InputSystem::LowLevel::InputUpdate::IsPlayerUpdate)> {
  static const MethodInfo* get() {
    static auto* updateType = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.LowLevel", "InputUpdateType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::LowLevel::InputUpdate*), "IsPlayerUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{updateType});
  }
};