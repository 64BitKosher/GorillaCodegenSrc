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
// Including type: UnityEngine.Rendering.CullMode
#include "UnityEngine/Rendering/CullMode.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RasterState
  struct RasterState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RasterState, "UnityEngine.Rendering", "RasterState");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.RasterState
  // [TokenAttribute] Offset: FFFFFFFF
  struct RasterState/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*/ {
    public:
    public:
    // private UnityEngine.Rendering.CullMode m_CullingMode
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::Rendering::CullMode m_CullingMode;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::CullMode) == 0x4);
    // private System.Int32 m_OffsetUnits
    // Size: 0x4
    // Offset: 0x4
    int m_OffsetUnits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single m_OffsetFactor
    // Size: 0x4
    // Offset: 0x8
    float m_OffsetFactor;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Byte m_DepthClip
    // Size: 0x1
    // Offset: 0xC
    uint8_t m_DepthClip;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_Conservative
    // Size: 0x1
    // Offset: 0xD
    uint8_t m_Conservative;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_Padding1
    // Size: 0x1
    // Offset: 0xE
    uint8_t m_Padding1;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // private System.Byte m_Padding2
    // Size: 0x1
    // Offset: 0xF
    uint8_t m_Padding2;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    public:
    // Creating value type constructor for type: RasterState
    constexpr RasterState(::UnityEngine::Rendering::CullMode m_CullingMode_ = {}, int m_OffsetUnits_ = {}, float m_OffsetFactor_ = {}, uint8_t m_DepthClip_ = {}, uint8_t m_Conservative_ = {}, uint8_t m_Padding1_ = {}, uint8_t m_Padding2_ = {}) noexcept : m_CullingMode{m_CullingMode_}, m_OffsetUnits{m_OffsetUnits_}, m_OffsetFactor{m_OffsetFactor_}, m_DepthClip{m_DepthClip_}, m_Conservative{m_Conservative_}, m_Padding1{m_Padding1_}, m_Padding2{m_Padding2_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::RasterState>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::RasterState>*>(this);
    }
    // Get static field: static public readonly UnityEngine.Rendering.RasterState defaultValue
    static ::UnityEngine::Rendering::RasterState _get_defaultValue();
    // Set static field: static public readonly UnityEngine.Rendering.RasterState defaultValue
    static void _set_defaultValue(::UnityEngine::Rendering::RasterState value);
    // Get instance field reference: private UnityEngine.Rendering.CullMode m_CullingMode
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::CullMode& dyn_m_CullingMode();
    // Get instance field reference: private System.Int32 m_OffsetUnits
    [[deprecated("Use field access instead!")]] int& dyn_m_OffsetUnits();
    // Get instance field reference: private System.Single m_OffsetFactor
    [[deprecated("Use field access instead!")]] float& dyn_m_OffsetFactor();
    // Get instance field reference: private System.Byte m_DepthClip
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_DepthClip();
    // Get instance field reference: private System.Byte m_Conservative
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_Conservative();
    // Get instance field reference: private System.Byte m_Padding1
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_Padding1();
    // Get instance field reference: private System.Byte m_Padding2
    [[deprecated("Use field access instead!")]] uint8_t& dyn_m_Padding2();
    // public System.Void .ctor(UnityEngine.Rendering.CullMode cullingMode, System.Int32 offsetUnits, System.Single offsetFactor, System.Boolean depthClip)
    // Offset: 0x54E8074
    RasterState(::UnityEngine::Rendering::CullMode cullingMode, int offsetUnits, float offsetFactor, bool depthClip);
    // public System.Boolean Equals(UnityEngine.Rendering.RasterState other)
    // Offset: 0x54E8118
    bool Equals(::UnityEngine::Rendering::RasterState other);
    // static private System.Void .cctor()
    // Offset: 0x54E8264
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54E818C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54E8204
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.RasterState
  #pragma pack(pop)
  static check_size<sizeof(RasterState), 15 + sizeof(uint8_t)> __UnityEngine_Rendering_RasterStateSizeCheck;
  static_assert(sizeof(RasterState) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RasterState::RasterState
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RasterState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RasterState::*)(::UnityEngine::Rendering::RasterState)>(&UnityEngine::Rendering::RasterState::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RasterState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RasterState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RasterState::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RasterState::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RasterState), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RasterState::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RasterState::*)(::Il2CppObject*)>(&UnityEngine::Rendering::RasterState::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RasterState), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RasterState::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RasterState::*)()>(&UnityEngine::Rendering::RasterState::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RasterState), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
