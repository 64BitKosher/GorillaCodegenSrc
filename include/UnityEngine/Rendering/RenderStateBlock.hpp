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
// Including type: UnityEngine.Rendering.BlendState
#include "UnityEngine/Rendering/BlendState.hpp"
// Including type: UnityEngine.Rendering.RasterState
#include "UnityEngine/Rendering/RasterState.hpp"
// Including type: UnityEngine.Rendering.DepthState
#include "UnityEngine/Rendering/DepthState.hpp"
// Including type: UnityEngine.Rendering.StencilState
#include "UnityEngine/Rendering/StencilState.hpp"
// Including type: UnityEngine.Rendering.RenderStateMask
#include "UnityEngine/Rendering/RenderStateMask.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderStateBlock
  struct RenderStateBlock;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderStateBlock, "UnityEngine.Rendering", "RenderStateBlock");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x6C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.RenderStateBlock
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderStateBlock/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*/ {
    public:
    public:
    // private UnityEngine.Rendering.BlendState m_BlendState
    // Size: 0x44
    // Offset: 0x0
    ::UnityEngine::Rendering::BlendState m_BlendState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::BlendState) == 0x44);
    // private UnityEngine.Rendering.RasterState m_RasterState
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Rendering::RasterState m_RasterState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RasterState) == 0x10);
    // private UnityEngine.Rendering.DepthState m_DepthState
    // Size: 0x2
    // Offset: 0x54
    ::UnityEngine::Rendering::DepthState m_DepthState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::DepthState) == 0x2);
    // private UnityEngine.Rendering.StencilState m_StencilState
    // Size: 0xC
    // Offset: 0x56
    ::UnityEngine::Rendering::StencilState m_StencilState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::StencilState) == 0xC);
    // Padding between fields: m_StencilState and: m_StencilReference
    char __padding3[0x2] = {};
    // private System.Int32 m_StencilReference
    // Size: 0x4
    // Offset: 0x64
    int m_StencilReference;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Rendering.RenderStateMask m_Mask
    // Size: 0x4
    // Offset: 0x68
    ::UnityEngine::Rendering::RenderStateMask m_Mask;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RenderStateMask) == 0x4);
    public:
    // Creating value type constructor for type: RenderStateBlock
    constexpr RenderStateBlock(::UnityEngine::Rendering::BlendState m_BlendState_ = {}, ::UnityEngine::Rendering::RasterState m_RasterState_ = {}, ::UnityEngine::Rendering::DepthState m_DepthState_ = {}, ::UnityEngine::Rendering::StencilState m_StencilState_ = {}, int m_StencilReference_ = {}, ::UnityEngine::Rendering::RenderStateMask m_Mask_ = {}) noexcept : m_BlendState{m_BlendState_}, m_RasterState{m_RasterState_}, m_DepthState{m_DepthState_}, m_StencilState{m_StencilState_}, m_StencilReference{m_StencilReference_}, m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderStateBlock>*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.BlendState m_BlendState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::BlendState& dyn_m_BlendState();
    // Get instance field reference: private UnityEngine.Rendering.RasterState m_RasterState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RasterState& dyn_m_RasterState();
    // Get instance field reference: private UnityEngine.Rendering.DepthState m_DepthState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::DepthState& dyn_m_DepthState();
    // Get instance field reference: private UnityEngine.Rendering.StencilState m_StencilState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::StencilState& dyn_m_StencilState();
    // Get instance field reference: private System.Int32 m_StencilReference
    [[deprecated("Use field access instead!")]] int& dyn_m_StencilReference();
    // Get instance field reference: private UnityEngine.Rendering.RenderStateMask m_Mask
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RenderStateMask& dyn_m_Mask();
    // public System.Void .ctor(UnityEngine.Rendering.RenderStateMask mask)
    // Offset: 0x54E9DE0
    RenderStateBlock(::UnityEngine::Rendering::RenderStateMask mask);
    // public System.Void set_blendState(UnityEngine.Rendering.BlendState value)
    // Offset: 0x54E9EF8
    void set_blendState(::UnityEngine::Rendering::BlendState value);
    // public System.Void set_rasterState(UnityEngine.Rendering.RasterState value)
    // Offset: 0x54E9F0C
    void set_rasterState(::UnityEngine::Rendering::RasterState value);
    // public UnityEngine.Rendering.DepthState get_depthState()
    // Offset: 0x54E9F18
    ::UnityEngine::Rendering::DepthState get_depthState();
    // public System.Void set_depthState(UnityEngine.Rendering.DepthState value)
    // Offset: 0x54E9F20
    void set_depthState(::UnityEngine::Rendering::DepthState value);
    // public UnityEngine.Rendering.StencilState get_stencilState()
    // Offset: 0x54E9F28
    ::UnityEngine::Rendering::StencilState get_stencilState();
    // public System.Void set_stencilState(UnityEngine.Rendering.StencilState value)
    // Offset: 0x54E9F38
    void set_stencilState(::UnityEngine::Rendering::StencilState value);
    // public System.Int32 get_stencilReference()
    // Offset: 0x54E9F44
    int get_stencilReference();
    // public System.Void set_stencilReference(System.Int32 value)
    // Offset: 0x54E9F4C
    void set_stencilReference(int value);
    // public UnityEngine.Rendering.RenderStateMask get_mask()
    // Offset: 0x54E9F54
    ::UnityEngine::Rendering::RenderStateMask get_mask();
    // public System.Void set_mask(UnityEngine.Rendering.RenderStateMask value)
    // Offset: 0x54E9F5C
    void set_mask(::UnityEngine::Rendering::RenderStateMask value);
    // public System.Boolean Equals(UnityEngine.Rendering.RenderStateBlock other)
    // Offset: 0x54E9F64
    bool Equals(::UnityEngine::Rendering::RenderStateBlock other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54EA0BC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54EA14C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.RenderStateBlock
  #pragma pack(pop)
  static check_size<sizeof(RenderStateBlock), 104 + sizeof(::UnityEngine::Rendering::RenderStateMask)> __UnityEngine_Rendering_RenderStateBlockSizeCheck;
  static_assert(sizeof(RenderStateBlock) == 0x6C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::RenderStateBlock
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_blendState
// Il2CppName: set_blendState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::BlendState)>(&UnityEngine::Rendering::RenderStateBlock::set_blendState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BlendState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_blendState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_rasterState
// Il2CppName: set_rasterState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RasterState)>(&UnityEngine::Rendering::RenderStateBlock::set_rasterState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RasterState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_rasterState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::get_depthState
// Il2CppName: get_depthState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::DepthState (UnityEngine::Rendering::RenderStateBlock::*)()>(&UnityEngine::Rendering::RenderStateBlock::get_depthState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "get_depthState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_depthState
// Il2CppName: set_depthState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::DepthState)>(&UnityEngine::Rendering::RenderStateBlock::set_depthState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "DepthState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_depthState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::get_stencilState
// Il2CppName: get_stencilState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::StencilState (UnityEngine::Rendering::RenderStateBlock::*)()>(&UnityEngine::Rendering::RenderStateBlock::get_stencilState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "get_stencilState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_stencilState
// Il2CppName: set_stencilState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::StencilState)>(&UnityEngine::Rendering::RenderStateBlock::set_stencilState)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "StencilState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_stencilState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::get_stencilReference
// Il2CppName: get_stencilReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RenderStateBlock::*)()>(&UnityEngine::Rendering::RenderStateBlock::get_stencilReference)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "get_stencilReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_stencilReference
// Il2CppName: set_stencilReference
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(int)>(&UnityEngine::Rendering::RenderStateBlock::set_stencilReference)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_stencilReference", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::get_mask
// Il2CppName: get_mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderStateMask (UnityEngine::Rendering::RenderStateBlock::*)()>(&UnityEngine::Rendering::RenderStateBlock::get_mask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "get_mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::set_mask
// Il2CppName: set_mask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RenderStateMask)>(&UnityEngine::Rendering::RenderStateBlock::set_mask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderStateMask")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "set_mask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderStateBlock::*)(::UnityEngine::Rendering::RenderStateBlock)>(&UnityEngine::Rendering::RenderStateBlock::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderStateBlock")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderStateBlock::*)(::Il2CppObject*)>(&UnityEngine::Rendering::RenderStateBlock::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderStateBlock::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RenderStateBlock::*)()>(&UnityEngine::Rendering::RenderStateBlock::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderStateBlock), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
