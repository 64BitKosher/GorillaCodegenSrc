// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.NetworkTransform
#include "Fusion/NetworkTransform.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkTransform::PositionRotationValues, "Fusion", "NetworkTransform/PositionRotationValues");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkTransform/PositionRotationValues
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetworkTransform::PositionRotationValues/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Vector3 Position
    // Size: 0xC
    // Offset: 0x0
    ::UnityEngine::Vector3 Position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion Rotation
    // Size: 0x10
    // Offset: 0xC
    ::UnityEngine::Quaternion Rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    public:
    // Creating value type constructor for type: PositionRotationValues
    constexpr PositionRotationValues(::UnityEngine::Vector3 Position_ = {}, ::UnityEngine::Quaternion Rotation_ = {}) noexcept : Position{Position_}, Rotation{Rotation_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Vector3 Position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Position();
    // Get instance field reference: public UnityEngine.Quaternion Rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_Rotation();
    // static public Fusion.NetworkTransform/PositionRotationValues Default()
    // Offset: 0x2B25514
    static ::Fusion::NetworkTransform::PositionRotationValues Default();
  }; // Fusion.NetworkTransform/PositionRotationValues
  #pragma pack(pop)
  static check_size<sizeof(NetworkTransform::PositionRotationValues), 12 + sizeof(::UnityEngine::Quaternion)> __Fusion_NetworkTransform_PositionRotationValuesSizeCheck;
  static_assert(sizeof(NetworkTransform::PositionRotationValues) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkTransform::PositionRotationValues::Default
// Il2CppName: Default
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::NetworkTransform::PositionRotationValues (*)()>(&Fusion::NetworkTransform::PositionRotationValues::Default)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkTransform::PositionRotationValues), "Default", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
