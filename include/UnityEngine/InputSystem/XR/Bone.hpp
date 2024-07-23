// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Forward declaring type: Bone
  struct Bone;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::XR::Bone, "UnityEngine.InputSystem.XR", "Bone");
// Type namespace: UnityEngine.InputSystem.XR
namespace UnityEngine::InputSystem::XR {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.XR.Bone
  // [TokenAttribute] Offset: FFFFFFFF
  struct Bone/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 m_ParentBoneIndex
    // Size: 0x4
    // Offset: 0x0
    uint m_ParentBoneIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public UnityEngine.Vector3 m_Position
    // Size: 0xC
    // Offset: 0x4
    ::UnityEngine::Vector3 m_Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion m_Rotation
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Quaternion m_Rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: Bone
    constexpr Bone(uint m_ParentBoneIndex_ = {}, ::UnityEngine::Vector3 m_Position_ = {}, ::UnityEngine::Quaternion m_Rotation_ = {}) noexcept : m_ParentBoneIndex{m_ParentBoneIndex_}, m_Position{m_Position_}, m_Rotation{m_Rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.UInt32 m_ParentBoneIndex
    [[deprecated("Use field access instead!")]] uint& dyn_m_ParentBoneIndex();
    // Get instance field reference: public UnityEngine.Vector3 m_Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Position();
    // Get instance field reference: public UnityEngine.Quaternion m_Rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_m_Rotation();
    // public System.UInt32 get_parentBoneIndex()
    // Offset: 0x51299CC
    uint get_parentBoneIndex();
    // public System.Void set_parentBoneIndex(System.UInt32 value)
    // Offset: 0x51299D4
    void set_parentBoneIndex(uint value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x51299DC
    ::UnityEngine::Vector3 get_position();
    // public System.Void set_position(UnityEngine.Vector3 value)
    // Offset: 0x51299E8
    void set_position(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_rotation()
    // Offset: 0x51299F4
    ::UnityEngine::Quaternion get_rotation();
    // public System.Void set_rotation(UnityEngine.Quaternion value)
    // Offset: 0x5129A00
    void set_rotation(::UnityEngine::Quaternion value);
  }; // UnityEngine.InputSystem.XR.Bone
  #pragma pack(pop)
  static check_size<sizeof(Bone), 16 + sizeof(::UnityEngine::Quaternion)> __UnityEngine_InputSystem_XR_BoneSizeCheck;
  static_assert(sizeof(Bone) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::get_parentBoneIndex
// Il2CppName: get_parentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_parentBoneIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "get_parentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::set_parentBoneIndex
// Il2CppName: set_parentBoneIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(uint)>(&UnityEngine::InputSystem::XR::Bone::set_parentBoneIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "set_parentBoneIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::set_position
// Il2CppName: set_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(::UnityEngine::Vector3)>(&UnityEngine::InputSystem::XR::Bone::set_position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "set_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::get_rotation
// Il2CppName: get_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (UnityEngine::InputSystem::XR::Bone::*)()>(&UnityEngine::InputSystem::XR::Bone::get_rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "get_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::XR::Bone::set_rotation
// Il2CppName: set_rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Bone::*)(::UnityEngine::Quaternion)>(&UnityEngine::InputSystem::XR::Bone::set_rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::XR::Bone), "set_rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
