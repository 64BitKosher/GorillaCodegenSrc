// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Vector4
#include "UnityEngine/Vector4.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Plane
  struct Plane;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ShadowSplitData
  struct ShadowSplitData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowSplitData, "UnityEngine.Rendering", "ShadowSplitData");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0xFC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.ShadowSplitData
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct ShadowSplitData/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*/ {
    public:
    // Nested type: ::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer
    struct $m_CullingPlanes$e__FixedBuffer;
    // Size: 0x1
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer
    // [TokenAttribute] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: FFFFFFFF
    // [UnsafeValueTypeAttribute] Offset: FFFFFFFF
    struct $m_CullingPlanes$e__FixedBuffer/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Byte FixedElementField
      // Size: 0x1
      // Offset: 0x0
      uint8_t FixedElementField;
      // Field size check
      static_assert(sizeof(uint8_t) == 0x1);
      public:
      // Creating value type constructor for type: $m_CullingPlanes$e__FixedBuffer
      constexpr $m_CullingPlanes$e__FixedBuffer(uint8_t FixedElementField_ = {}) noexcept : FixedElementField{FixedElementField_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating conversion operator: operator uint8_t
      constexpr operator uint8_t() const noexcept {
        return FixedElementField;
      }
      // Get instance field reference: public System.Byte FixedElementField
      [[deprecated("Use field access instead!")]] uint8_t& dyn_FixedElementField();
    }; // UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer
    #pragma pack(pop)
    static check_size<sizeof(ShadowSplitData::$m_CullingPlanes$e__FixedBuffer), 0 + sizeof(uint8_t)> __UnityEngine_Rendering_ShadowSplitData_$m_CullingPlanes$e__FixedBufferSizeCheck;
    static_assert(sizeof(ShadowSplitData::$m_CullingPlanes$e__FixedBuffer) == 0x1);
    public:
    // private System.Int32 m_CullingPlaneCount
    // Size: 0x4
    // Offset: 0x0
    int m_CullingPlaneCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer m_CullingPlanes
    // Size: 0x1
    // Offset: 0x4
    ::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer m_CullingPlanes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer) == 0x1);
    // Padding between fields: m_CullingPlanes and: m_CullingSphere
    char __padding1[0x9F] = {};
    // private UnityEngine.Vector4 m_CullingSphere
    // Size: 0x10
    // Offset: 0xA4
    ::UnityEngine::Vector4 m_CullingSphere;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector4) == 0x10);
    // private System.Single m_ShadowCascadeBlendCullingFactor
    // Size: 0x4
    // Offset: 0xB4
    float m_ShadowCascadeBlendCullingFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_CullingNearPlane
    // Size: 0x4
    // Offset: 0xB8
    float m_CullingNearPlane;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Matrix4x4 m_CullingMatrix
    // Size: 0x40
    // Offset: 0xBC
    ::UnityEngine::Matrix4x4 m_CullingMatrix;
    // Field size check
    static_assert(sizeof(::UnityEngine::Matrix4x4) == 0x40);
    public:
    // Creating value type constructor for type: ShadowSplitData
    constexpr ShadowSplitData(int m_CullingPlaneCount_ = {}, ::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer m_CullingPlanes_ = {}, ::UnityEngine::Vector4 m_CullingSphere_ = {}, float m_ShadowCascadeBlendCullingFactor_ = {}, float m_CullingNearPlane_ = {}, ::UnityEngine::Matrix4x4 m_CullingMatrix_ = {}) noexcept : m_CullingPlaneCount{m_CullingPlaneCount_}, m_CullingPlanes{m_CullingPlanes_}, m_CullingSphere{m_CullingSphere_}, m_ShadowCascadeBlendCullingFactor{m_ShadowCascadeBlendCullingFactor_}, m_CullingNearPlane{m_CullingNearPlane_}, m_CullingMatrix{m_CullingMatrix_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::ShadowSplitData>*>(this);
    }
    // static field const value: static private System.Int32 k_MaximumCullingPlaneCount
    static constexpr const int k_MaximumCullingPlaneCount = 10;
    // Get static field: static private System.Int32 k_MaximumCullingPlaneCount
    static int _get_k_MaximumCullingPlaneCount();
    // Set static field: static private System.Int32 k_MaximumCullingPlaneCount
    static void _set_k_MaximumCullingPlaneCount(int value);
    // Get static field: static public readonly System.Int32 maximumCullingPlaneCount
    static int _get_maximumCullingPlaneCount();
    // Set static field: static public readonly System.Int32 maximumCullingPlaneCount
    static void _set_maximumCullingPlaneCount(int value);
    // Get instance field reference: private System.Int32 m_CullingPlaneCount
    [[deprecated("Use field access instead!")]] int& dyn_m_CullingPlaneCount();
    // Get instance field reference: UnityEngine.Rendering.ShadowSplitData/<m_CullingPlanes>e__FixedBuffer m_CullingPlanes
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer& dyn_m_CullingPlanes();
    // Get instance field reference: private UnityEngine.Vector4 m_CullingSphere
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector4& dyn_m_CullingSphere();
    // Get instance field reference: private System.Single m_ShadowCascadeBlendCullingFactor
    [[deprecated("Use field access instead!")]] float& dyn_m_ShadowCascadeBlendCullingFactor();
    // Get instance field reference: private System.Single m_CullingNearPlane
    [[deprecated("Use field access instead!")]] float& dyn_m_CullingNearPlane();
    // Get instance field reference: private UnityEngine.Matrix4x4 m_CullingMatrix
    [[deprecated("Use field access instead!")]] ::UnityEngine::Matrix4x4& dyn_m_CullingMatrix();
    // public System.Int32 get_cullingPlaneCount()
    // Offset: 0x54EDAEC
    int get_cullingPlaneCount();
    // public UnityEngine.Vector4 get_cullingSphere()
    // Offset: 0x54EDAF4
    ::UnityEngine::Vector4 get_cullingSphere();
    // public System.Void set_shadowCascadeBlendCullingFactor(System.Single value)
    // Offset: 0x54ED600
    void set_shadowCascadeBlendCullingFactor(float value);
    // public UnityEngine.Plane GetCullingPlane(System.Int32 index)
    // Offset: 0x54EDB00
    ::UnityEngine::Plane GetCullingPlane(int index);
    // public System.Boolean Equals(UnityEngine.Rendering.ShadowSplitData other)
    // Offset: 0x54ED828
    bool Equals(::UnityEngine::Rendering::ShadowSplitData other);
    // static private System.Void .cctor()
    // Offset: 0x54EDCC4
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54EDC0C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54EDA70
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.ShadowSplitData
  #pragma pack(pop)
  static check_size<sizeof(ShadowSplitData), 188 + sizeof(::UnityEngine::Matrix4x4)> __UnityEngine_Rendering_ShadowSplitDataSizeCheck;
  static_assert(sizeof(ShadowSplitData) == 0xFC);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowSplitData::$m_CullingPlanes$e__FixedBuffer, "UnityEngine.Rendering", "ShadowSplitData/<m_CullingPlanes>e__FixedBuffer");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount
// Il2CppName: get_cullingPlaneCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ShadowSplitData::*)()>(&UnityEngine::Rendering::ShadowSplitData::get_cullingPlaneCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "get_cullingPlaneCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::get_cullingSphere
// Il2CppName: get_cullingSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (UnityEngine::Rendering::ShadowSplitData::*)()>(&UnityEngine::Rendering::ShadowSplitData::get_cullingSphere)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "get_cullingSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor
// Il2CppName: set_shadowCascadeBlendCullingFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::ShadowSplitData::*)(float)>(&UnityEngine::Rendering::ShadowSplitData::set_shadowCascadeBlendCullingFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "set_shadowCascadeBlendCullingFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::GetCullingPlane
// Il2CppName: GetCullingPlane
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Plane (UnityEngine::Rendering::ShadowSplitData::*)(int)>(&UnityEngine::Rendering::ShadowSplitData::GetCullingPlane)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "GetCullingPlane", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ShadowSplitData::*)(::UnityEngine::Rendering::ShadowSplitData)>(&UnityEngine::Rendering::ShadowSplitData::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ShadowSplitData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::ShadowSplitData::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::ShadowSplitData::*)(::Il2CppObject*)>(&UnityEngine::Rendering::ShadowSplitData::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::ShadowSplitData::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::ShadowSplitData::*)()>(&UnityEngine::Rendering::ShadowSplitData::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::ShadowSplitData), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
