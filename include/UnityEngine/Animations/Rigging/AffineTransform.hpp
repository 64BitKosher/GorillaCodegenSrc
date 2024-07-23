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
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: AffineTransform
  struct AffineTransform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::AffineTransform, "UnityEngine.Animations.Rigging", "AffineTransform");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Animations.Rigging.AffineTransform
  // [TokenAttribute] Offset: FFFFFFFF
  struct AffineTransform/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 translation
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 translation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: AffineTransform
    constexpr AffineTransform(::UnityEngine::Vector3 translation_ = {}, ::UnityEngine::Quaternion rotation_ = {}) noexcept : translation{translation_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly UnityEngine.Animations.Rigging.AffineTransform <identity>k__BackingField
    static ::UnityEngine::Animations::Rigging::AffineTransform _get_$identity$k__BackingField();
    // Set static field: static private readonly UnityEngine.Animations.Rigging.AffineTransform <identity>k__BackingField
    static void _set_$identity$k__BackingField(::UnityEngine::Animations::Rigging::AffineTransform value);
    // Get instance field reference: public UnityEngine.Vector3 translation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_translation();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // public System.Void .ctor(UnityEngine.Vector3 t, UnityEngine.Quaternion r)
    // Offset: 0x506B740
    // ABORTED: conflicts with another method.  AffineTransform(::UnityEngine::Vector3 t, ::UnityEngine::Quaternion r);
    // public System.Void Set(UnityEngine.Vector3 t, UnityEngine.Quaternion r)
    // Offset: 0x506B854
    void Set(::UnityEngine::Vector3 t, ::UnityEngine::Quaternion r);
    // public UnityEngine.Vector3 Transform(UnityEngine.Vector3 p)
    // Offset: 0x507F6A8
    ::UnityEngine::Vector3 Transform(::UnityEngine::Vector3 p);
    // public UnityEngine.Vector3 InverseTransform(UnityEngine.Vector3 p)
    // Offset: 0x506F434
    ::UnityEngine::Vector3 InverseTransform(::UnityEngine::Vector3 p);
    // public UnityEngine.Animations.Rigging.AffineTransform Inverse()
    // Offset: 0x506FAB0
    ::UnityEngine::Animations::Rigging::AffineTransform Inverse();
    // public UnityEngine.Animations.Rigging.AffineTransform InverseMul(UnityEngine.Animations.Rigging.AffineTransform transform)
    // Offset: 0x506ED0C
    ::UnityEngine::Animations::Rigging::AffineTransform InverseMul(::UnityEngine::Animations::Rigging::AffineTransform transform);
    // static public UnityEngine.Animations.Rigging.AffineTransform get_identity()
    // Offset: 0x507F6F0
    static ::UnityEngine::Animations::Rigging::AffineTransform get_identity();
    // static private System.Void .cctor()
    // Offset: 0x507F758
    static void _cctor();
  }; // UnityEngine.Animations.Rigging.AffineTransform
  #pragma pack(pop)
  static check_size<sizeof(AffineTransform), 12 + sizeof(::UnityEngine::Quaternion)> __UnityEngine_Animations_Rigging_AffineTransformSizeCheck;
  static_assert(sizeof(AffineTransform) == 0x1C);
  // static public UnityEngine.Vector3 op_Multiply(UnityEngine.Animations.Rigging.AffineTransform lhs, UnityEngine.Vector3 rhs)
  // Offset: 0x506F48C
  ::UnityEngine::Vector3 operator*(const ::UnityEngine::Animations::Rigging::AffineTransform& lhs, const ::UnityEngine::Vector3& rhs);
  // static public UnityEngine.Animations.Rigging.AffineTransform op_Multiply(UnityEngine.Animations.Rigging.AffineTransform lhs, UnityEngine.Animations.Rigging.AffineTransform rhs)
  // Offset: 0x506B754
  ::UnityEngine::Animations::Rigging::AffineTransform operator*(const ::UnityEngine::Animations::Rigging::AffineTransform& lhs, const ::UnityEngine::Animations::Rigging::AffineTransform& rhs);
  // static public UnityEngine.Animations.Rigging.AffineTransform op_Multiply(UnityEngine.Quaternion lhs, UnityEngine.Animations.Rigging.AffineTransform rhs)
  // Offset: 0x5070A94
  ::UnityEngine::Animations::Rigging::AffineTransform operator*(const ::UnityEngine::Quaternion& lhs, const ::UnityEngine::Animations::Rigging::AffineTransform& rhs);
  // static public UnityEngine.Animations.Rigging.AffineTransform op_Multiply(UnityEngine.Animations.Rigging.AffineTransform lhs, UnityEngine.Quaternion rhs)
  // Offset: 0x5070B68
  ::UnityEngine::Animations::Rigging::AffineTransform operator*(const ::UnityEngine::Animations::Rigging::AffineTransform& lhs, const ::UnityEngine::Quaternion& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::AffineTransform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::AffineTransform::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&UnityEngine::Animations::Rigging::AffineTransform::Set)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* r = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, r});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::Transform
// Il2CppName: Transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::AffineTransform::*)(::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::AffineTransform::Transform)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "Transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::InverseTransform
// Il2CppName: InverseTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::AffineTransform::*)(::UnityEngine::Vector3)>(&UnityEngine::Animations::Rigging::AffineTransform::InverseTransform)> {
  static const MethodInfo* get() {
    static auto* p = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "InverseTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{p});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::Inverse
// Il2CppName: Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::AffineTransform (UnityEngine::Animations::Rigging::AffineTransform::*)()>(&UnityEngine::Animations::Rigging::AffineTransform::Inverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::InverseMul
// Il2CppName: InverseMul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::AffineTransform (UnityEngine::Animations::Rigging::AffineTransform::*)(::UnityEngine::Animations::Rigging::AffineTransform)>(&UnityEngine::Animations::Rigging::AffineTransform::InverseMul)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "AffineTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "InverseMul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::get_identity
// Il2CppName: get_identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::AffineTransform (*)()>(&UnityEngine::Animations::Rigging::AffineTransform::get_identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), "get_identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Animations::Rigging::AffineTransform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::AffineTransform), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::AffineTransform::operator*
// Il2CppName: op_Multiply
// Cannot perform method pointer template specialization from operators!
