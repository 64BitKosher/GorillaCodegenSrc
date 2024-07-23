// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Users.InputUser
#include "UnityEngine/InputSystem/Users/InputUser.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax, "UnityEngine.InputSystem.Users", "InputUser/ControlSchemeChangeSyntax");
// Type namespace: UnityEngine.InputSystem.Users
namespace UnityEngine::InputSystem::Users {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Users.InputUser/ControlSchemeChangeSyntax
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputUser::ControlSchemeChangeSyntax/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Int32 m_UserIndex
    // Size: 0x4
    // Offset: 0x0
    int m_UserIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ControlSchemeChangeSyntax
    constexpr ControlSchemeChangeSyntax(int m_UserIndex_ = {}) noexcept : m_UserIndex{m_UserIndex_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_UserIndex;
    }
    // Get instance field reference: System.Int32 m_UserIndex
    [[deprecated("Use field access instead!")]] int& dyn_m_UserIndex();
    // public UnityEngine.InputSystem.Users.InputUser/ControlSchemeChangeSyntax AndPairRemainingDevices()
    // Offset: 0x512FAC8
    ::UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax AndPairRemainingDevices();
  }; // UnityEngine.InputSystem.Users.InputUser/ControlSchemeChangeSyntax
  #pragma pack(pop)
  static check_size<sizeof(InputUser::ControlSchemeChangeSyntax), 0 + sizeof(int)> __UnityEngine_InputSystem_Users_InputUser_ControlSchemeChangeSyntaxSizeCheck;
  static_assert(sizeof(InputUser::ControlSchemeChangeSyntax) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax::AndPairRemainingDevices
// Il2CppName: AndPairRemainingDevices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax (UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax::*)()>(&UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax::AndPairRemainingDevices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Users::InputUser::ControlSchemeChangeSyntax), "AndPairRemainingDevices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
