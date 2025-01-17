// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Plane, "UnityEngine", "Plane");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Plane
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct Plane/*, public ::System::ValueType, public ::System::IFormattable*/ {
    public:
    public:
    // private UnityEngine.Vector3 m_Normal
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 m_Normal;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single m_Distance
    // Size: 0x4
    // Offset: 0xC
    float m_Distance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Plane
    constexpr Plane(::UnityEngine::Vector3 m_Normal_ = {}, float m_Distance_ = {}) noexcept : m_Normal{m_Normal_}, m_Distance{m_Distance_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // static field const value: static System.Int32 size
    static constexpr const int size = 16;
    // Get static field: static System.Int32 size
    static int _get_size();
    // Set static field: static System.Int32 size
    static void _set_size(int value);
    // Get instance field reference: private UnityEngine.Vector3 m_Normal
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_m_Normal();
    // Get instance field reference: private System.Single m_Distance
    [[deprecated("Use field access instead!")]] float& dyn_m_Distance();
    // public UnityEngine.Vector3 get_normal()
    // Offset: 0x54861DC
    ::UnityEngine::Vector3 get_normal();
    // public System.Single get_distance()
    // Offset: 0x54861E8
    float get_distance();
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, UnityEngine.Vector3 inPoint)
    // Offset: 0x54861F0
    Plane(::UnityEngine::Vector3 inNormal, ::UnityEngine::Vector3 inPoint);
    // public System.Void .ctor(UnityEngine.Vector3 inNormal, System.Single d)
    // Offset: 0x5486300
    // ABORTED: conflicts with another method.  Plane(::UnityEngine::Vector3 inNormal, float d);
    // public System.Void .ctor(UnityEngine.Vector3 a, UnityEngine.Vector3 b, UnityEngine.Vector3 c)
    // Offset: 0x54863E8
    Plane(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c);
    // public UnityEngine.Vector3 ClosestPointOnPlane(UnityEngine.Vector3 point)
    // Offset: 0x5486560
    ::UnityEngine::Vector3 ClosestPointOnPlane(::UnityEngine::Vector3 point);
    // public System.Single GetDistanceToPoint(UnityEngine.Vector3 point)
    // Offset: 0x548659C
    float GetDistanceToPoint(::UnityEngine::Vector3 point);
    // public System.Boolean GetSide(UnityEngine.Vector3 point)
    // Offset: 0x54865C0
    bool GetSide(::UnityEngine::Vector3 point);
    // public System.Boolean Raycast(UnityEngine.Ray ray, out System.Single enter)
    // Offset: 0x54865EC
    bool Raycast(::UnityEngine::Ray ray, ByRef<float> enter);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x54866FC
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // public override System.String ToString()
    // Offset: 0x54866EC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Plane
  #pragma pack(pop)
  static check_size<sizeof(Plane), 12 + sizeof(float)> __UnityEngine_PlaneSizeCheck;
  static_assert(sizeof(Plane) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Plane::get_normal
// Il2CppName: get_normal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Plane::*)()>(&UnityEngine::Plane::get_normal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "get_normal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::get_distance
// Il2CppName: get_distance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Plane::*)()>(&UnityEngine::Plane::get_distance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "get_distance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::Plane
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Plane::ClosestPointOnPlane
// Il2CppName: ClosestPointOnPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Plane::*)(::UnityEngine::Vector3)>(&UnityEngine::Plane::ClosestPointOnPlane)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ClosestPointOnPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::GetDistanceToPoint
// Il2CppName: GetDistanceToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Plane::*)(::UnityEngine::Vector3)>(&UnityEngine::Plane::GetDistanceToPoint)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "GetDistanceToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::GetSide
// Il2CppName: GetSide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(::UnityEngine::Vector3)>(&UnityEngine::Plane::GetSide)> {
  static const MethodInfo* get() {
    static auto* point = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "GetSide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{point});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::Raycast
// Il2CppName: Raycast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Plane::*)(::UnityEngine::Ray, ByRef<float>)>(&UnityEngine::Plane::Raycast)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* enter = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "Raycast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, enter});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Plane::*)(::StringW, ::System::IFormatProvider*)>(&UnityEngine::Plane::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: UnityEngine::Plane::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Plane::*)()>(&UnityEngine::Plane::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Plane), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
