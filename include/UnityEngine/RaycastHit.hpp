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
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Collider
  class Collider;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RaycastHit
  struct RaycastHit;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RaycastHit, "UnityEngine", "RaycastHit");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x2C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.RaycastHit
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct RaycastHit/*, public ::System::ValueType*/ {
    public:
    public:
    // UnityEngine.Vector3 m_Point
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Point;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // System.UInt32 m_FaceID
    // Size: 0x4
    // Offset: 0x18
    uint m_FaceID;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // System.Single m_Distance
    // Size: 0x4
    // Offset: 0x1C
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // UnityEngine.Vector2 m_UV
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 m_UV;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // System.Int32 m_Collider
    // Size: 0x4
    // Offset: 0x28
    int m_Collider;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RaycastHit
    constexpr RaycastHit(::UnityEngine::Vector3 m_Point_ = {}, ::UnityEngine::Vector3 m_Normal_ = {}, uint m_FaceID_ = {}, float m_Distance_ = {}, ::UnityEngine::Vector2 m_UV_ = {}, int m_Collider_ = {}) noexcept : m_Point{m_Point_}, m_Normal{m_Normal_}, m_FaceID{m_FaceID_}, m_Distance{m_Distance_}, m_UV{m_UV_}, m_Collider{m_Collider_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: UnityEngine.Vector3 m_Point
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Point();
    // Get instance field reference: UnityEngine.Vector3 m_Normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: System.UInt32 m_FaceID
    [[deprecated("Use field access instead!")]] uint& dyn_m_FaceID();
    // Get instance field reference: System.Single m_Distance
    [[deprecated("Use field access instead!")]] float& dyn_m_Distance();
    // Get instance field reference: UnityEngine.Vector2 m_UV
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_m_UV();
    // Get instance field reference: System.Int32 m_Collider
    [[deprecated("Use field access instead!")]] int& dyn_m_Collider();
    // public UnityEngine.Collider get_collider()
    // Offset: 0x552DC18
    ::UnityEngine::Collider* get_collider();
    // public UnityEngine.Vector3 get_point()
    // Offset: 0x552DCC4
    ::UnityEngine::Vector3 get_point();
    // public System.Void set_point(UnityEngine.Vector3 value)
    // Offset: 0x552DCD0
    void set_point(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0x552DCDC
    ::UnityEngine::Vector3 get_normal();
    // public System.Void set_normal(UnityEngine.Vector3 value)
    // Offset: 0x552DCE8
    void set_normal(::UnityEngine::Vector3 value);
    // public System.Single get_distance()
    // Offset: 0x552DCF4
    float get_distance();
    // public System.Void set_distance(System.Single value)
    // Offset: 0x552DCFC
    void set_distance(float value);
    // public System.Int32 get_triangleIndex()
    // Offset: 0x552DD04
    int get_triangleIndex();
    // public UnityEngine.Transform get_transform()
    // Offset: 0x552DD0C
    ::UnityEngine::Transform* get_transform();
    // public UnityEngine.Rigidbody get_rigidbody()
    // Offset: 0x552DDE8
    ::UnityEngine::Rigidbody* get_rigidbody();
  }; // UnityEngine.RaycastHit
  #pragma pack(pop)
  static check_size<sizeof(RaycastHit), 40 + sizeof(int)> __UnityEngine_RaycastHitSizeCheck;
  static_assert(sizeof(RaycastHit) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_collider
// Il2CppName: get_collider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Collider* (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_collider)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_collider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_point
// Il2CppName: get_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_point)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_point
// Il2CppName: set_point
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(::UnityEngine::Vector3)>(&UnityEngine::RaycastHit::set_point)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_point", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_normal
// Il2CppName: set_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(::UnityEngine::Vector3)>(&UnityEngine::RaycastHit::set_normal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::set_distance
// Il2CppName: set_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RaycastHit::*)(float)>(&UnityEngine::RaycastHit::set_distance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "set_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_triangleIndex
// Il2CppName: get_triangleIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_triangleIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_triangleIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::RaycastHit::get_rigidbody
// Il2CppName: get_rigidbody
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rigidbody* (UnityEngine::RaycastHit::*)()>(&UnityEngine::RaycastHit::get_rigidbody)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::RaycastHit), "get_rigidbody", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
