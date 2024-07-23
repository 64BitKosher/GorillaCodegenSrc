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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OrientedBounds
  struct OrientedBounds;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OrientedBounds, "", "OrientedBounds");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OrientedBounds
  // [TokenAttribute] Offset: FFFFFFFF
  struct OrientedBounds/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 size
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 center
    // Size: 0xC
    // Offset: 0xC
    ::UnityEngine::Vector3 center;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion rotation
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: OrientedBounds
    constexpr OrientedBounds(::UnityEngine::Vector3 size_ = {}, ::UnityEngine::Vector3 center_ = {}, ::UnityEngine::Quaternion rotation_ = {}) noexcept : size{size_}, center{center_}, rotation{rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get static field: static private readonly OrientedBounds <Empty>k__BackingField
    static ::GlobalNamespace::OrientedBounds _get_$Empty$k__BackingField();
    // Set static field: static private readonly OrientedBounds <Empty>k__BackingField
    static void _set_$Empty$k__BackingField(::GlobalNamespace::OrientedBounds value);
    // Get static field: static private readonly OrientedBounds <Identity>k__BackingField
    static ::GlobalNamespace::OrientedBounds _get_$Identity$k__BackingField();
    // Set static field: static private readonly OrientedBounds <Identity>k__BackingField
    static void _set_$Identity$k__BackingField(::GlobalNamespace::OrientedBounds value);
    // Get instance field reference: public UnityEngine.Vector3 size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_size();
    // Get instance field reference: public UnityEngine.Vector3 center
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_center();
    // Get instance field reference: public UnityEngine.Quaternion rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_rotation();
    // static public OrientedBounds get_Empty()
    // Offset: 0x274FDC4
    static ::GlobalNamespace::OrientedBounds get_Empty();
    // static public OrientedBounds get_Identity()
    // Offset: 0x274FE2C
    static ::GlobalNamespace::OrientedBounds get_Identity();
    // public UnityEngine.Matrix4x4 TRS()
    // Offset: 0x274FE98
    ::UnityEngine::Matrix4x4 TRS();
    // static private System.Void .cctor()
    // Offset: 0x274FEE8
    static void _cctor();
  }; // OrientedBounds
  #pragma pack(pop)
  static check_size<sizeof(OrientedBounds), 24 + sizeof(::UnityEngine::Quaternion)> __GlobalNamespace_OrientedBoundsSizeCheck;
  static_assert(sizeof(OrientedBounds) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OrientedBounds::get_Empty
// Il2CppName: get_Empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OrientedBounds (*)()>(&GlobalNamespace::OrientedBounds::get_Empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrientedBounds), "get_Empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrientedBounds::get_Identity
// Il2CppName: get_Identity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OrientedBounds (*)()>(&GlobalNamespace::OrientedBounds::get_Identity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrientedBounds), "get_Identity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrientedBounds::TRS
// Il2CppName: TRS
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (GlobalNamespace::OrientedBounds::*)()>(&GlobalNamespace::OrientedBounds::TRS)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrientedBounds), "TRS", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OrientedBounds::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OrientedBounds::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OrientedBounds), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};