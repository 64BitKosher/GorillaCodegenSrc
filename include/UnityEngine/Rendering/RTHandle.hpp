// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Including type: UnityEngine.Rendering.RTHandleProperties
#include "UnityEngine/Rendering/RTHandleProperties.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandleSystem
  class RTHandleSystem;
  // Forward declaring type: ScaleFunc
  class ScaleFunc;
  // Forward declaring type: CommandBuffer
  class CommandBuffer;
  // Forward declaring type: FastMemoryFlags
  struct FastMemoryFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RenderTexture
  class RenderTexture;
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RTHandle
  class RTHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::RTHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RTHandle*, "UnityEngine.Rendering", "RTHandle");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0xB4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RTHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class RTHandle : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.RTHandleSystem m_Owner
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Rendering::RTHandleSystem* m_Owner;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandleSystem*) == 0x8);
    // UnityEngine.RenderTexture m_RT
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RenderTexture* m_RT;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTexture*) == 0x8);
    // UnityEngine.Texture m_ExternalTexture
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Texture* m_ExternalTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture*) == 0x8);
    // UnityEngine.Rendering.RenderTargetIdentifier m_NameID
    // Size: 0x24
    // Offset: 0x28
    ::UnityEngine::Rendering::RenderTargetIdentifier m_NameID;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RenderTargetIdentifier) == 0x24);
    // Padding between fields: m_NameID and: m_EnableMSAA
    char __padding3[0x4] = {};
    // System.Boolean m_EnableMSAA
    // Size: 0x1
    // Offset: 0x50
    bool m_EnableMSAA;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_EnableRandomWrite
    // Size: 0x1
    // Offset: 0x51
    bool m_EnableRandomWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean m_EnableHWDynamicScale
    // Size: 0x1
    // Offset: 0x52
    bool m_EnableHWDynamicScale;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_EnableHWDynamicScale and: m_Name
    char __padding6[0x5] = {};
    // System.String m_Name
    // Size: 0x8
    // Offset: 0x58
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Boolean m_UseCustomHandleScales
    // Size: 0x1
    // Offset: 0x60
    bool m_UseCustomHandleScales;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_UseCustomHandleScales and: m_CustomHandleProperties
    char __padding8[0x3] = {};
    // UnityEngine.Rendering.RTHandleProperties m_CustomHandleProperties
    // Size: 0x30
    // Offset: 0x64
    ::UnityEngine::Rendering::RTHandleProperties m_CustomHandleProperties;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RTHandleProperties) == 0x30);
    // private UnityEngine.Vector2 <scaleFactor>k__BackingField
    // Size: 0x8
    // Offset: 0x94
    ::UnityEngine::Vector2 scaleFactor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: scaleFactor and: scaleFunc
    char __padding10[0x4] = {};
    // UnityEngine.Rendering.ScaleFunc scaleFunc
    // Size: 0x8
    // Offset: 0xA0
    ::UnityEngine::Rendering::ScaleFunc* scaleFunc;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ScaleFunc*) == 0x8);
    // private System.Boolean <useScaling>k__BackingField
    // Size: 0x1
    // Offset: 0xA8
    bool useScaling;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useScaling and: referenceSize
    char __padding12[0x3] = {};
    // private UnityEngine.Vector2Int <referenceSize>k__BackingField
    // Size: 0x8
    // Offset: 0xAC
    ::UnityEngine::Vector2Int referenceSize;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2Int) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Rendering.RTHandleSystem m_Owner
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandleSystem*& dyn_m_Owner();
    // Get instance field reference: UnityEngine.RenderTexture m_RT
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTexture*& dyn_m_RT();
    // Get instance field reference: UnityEngine.Texture m_ExternalTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture*& dyn_m_ExternalTexture();
    // Get instance field reference: UnityEngine.Rendering.RenderTargetIdentifier m_NameID
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RenderTargetIdentifier& dyn_m_NameID();
    // Get instance field reference: System.Boolean m_EnableMSAA
    [[deprecated("Use field access instead!")]] bool& dyn_m_EnableMSAA();
    // Get instance field reference: System.Boolean m_EnableRandomWrite
    [[deprecated("Use field access instead!")]] bool& dyn_m_EnableRandomWrite();
    // Get instance field reference: System.Boolean m_EnableHWDynamicScale
    [[deprecated("Use field access instead!")]] bool& dyn_m_EnableHWDynamicScale();
    // Get instance field reference: System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // Get instance field reference: System.Boolean m_UseCustomHandleScales
    [[deprecated("Use field access instead!")]] bool& dyn_m_UseCustomHandleScales();
    // Get instance field reference: UnityEngine.Rendering.RTHandleProperties m_CustomHandleProperties
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RTHandleProperties& dyn_m_CustomHandleProperties();
    // Get instance field reference: private UnityEngine.Vector2 <scaleFactor>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$scaleFactor$k__BackingField();
    // Get instance field reference: UnityEngine.Rendering.ScaleFunc scaleFunc
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ScaleFunc*& dyn_scaleFunc();
    // Get instance field reference: private System.Boolean <useScaling>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$useScaling$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2Int <referenceSize>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2Int& dyn_$referenceSize$k__BackingField();
    // public UnityEngine.Vector2 get_scaleFactor()
    // Offset: 0x5253270
    ::UnityEngine::Vector2 get_scaleFactor();
    // System.Void set_scaleFactor(UnityEngine.Vector2 value)
    // Offset: 0x5253278
    void set_scaleFactor(::UnityEngine::Vector2 value);
    // public System.Boolean get_useScaling()
    // Offset: 0x5253280
    bool get_useScaling();
    // System.Void set_useScaling(System.Boolean value)
    // Offset: 0x5253288
    void set_useScaling(bool value);
    // public UnityEngine.Vector2Int get_referenceSize()
    // Offset: 0x5253294
    ::UnityEngine::Vector2Int get_referenceSize();
    // System.Void set_referenceSize(UnityEngine.Vector2Int value)
    // Offset: 0x525329C
    void set_referenceSize(::UnityEngine::Vector2Int value);
    // public UnityEngine.Rendering.RTHandleProperties get_rtHandleProperties()
    // Offset: 0x52532A4
    ::UnityEngine::Rendering::RTHandleProperties get_rtHandleProperties();
    // public UnityEngine.RenderTexture get_rt()
    // Offset: 0x52532E4
    ::UnityEngine::RenderTexture* get_rt();
    // public UnityEngine.Rendering.RenderTargetIdentifier get_nameID()
    // Offset: 0x52532EC
    ::UnityEngine::Rendering::RenderTargetIdentifier get_nameID();
    // public System.String get_name()
    // Offset: 0x5253304
    ::StringW get_name();
    // System.Void .ctor(UnityEngine.Rendering.RTHandleSystem owner)
    // Offset: 0x525330C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RTHandle* New_ctor(::UnityEngine::Rendering::RTHandleSystem* owner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::RTHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RTHandle*, creationType>(owner)));
    }
    // System.Void SetRenderTexture(UnityEngine.RenderTexture rt)
    // Offset: 0x52533C8
    void SetRenderTexture(::UnityEngine::RenderTexture* rt);
    // System.Void SetTexture(UnityEngine.Texture tex)
    // Offset: 0x5253434
    void SetTexture(::UnityEngine::Texture* tex);
    // System.Void SetTexture(UnityEngine.Rendering.RenderTargetIdentifier tex)
    // Offset: 0x52534A4
    void SetTexture(::UnityEngine::Rendering::RenderTargetIdentifier tex);
    // public System.Int32 GetInstanceID()
    // Offset: 0x52534F0
    int GetInstanceID();
    // public System.Void Release()
    // Offset: 0x52535AC
    void Release();
    // public UnityEngine.Vector2Int GetScaledSize(UnityEngine.Vector2Int refSize)
    // Offset: 0x52536DC
    ::UnityEngine::Vector2Int GetScaledSize(::UnityEngine::Vector2Int refSize);
    // public System.Void SwitchToFastMemory(UnityEngine.Rendering.CommandBuffer cmd, System.Single residencyFraction, UnityEngine.Rendering.FastMemoryFlags flags, System.Boolean copyContents)
    // Offset: 0x52538D0
    void SwitchToFastMemory(::UnityEngine::Rendering::CommandBuffer* cmd, float residencyFraction, ::UnityEngine::Rendering::FastMemoryFlags flags, bool copyContents);
  }; // UnityEngine.Rendering.RTHandle
  #pragma pack(pop)
  static check_size<sizeof(RTHandle), 172 + sizeof(::UnityEngine::Vector2Int)> __UnityEngine_Rendering_RTHandleSizeCheck;
  static_assert(sizeof(RTHandle) == 0xB4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_scaleFactor
// Il2CppName: get_scaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_scaleFactor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_scaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::set_scaleFactor
// Il2CppName: set_scaleFactor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2)>(&UnityEngine::Rendering::RTHandle::set_scaleFactor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "set_scaleFactor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_useScaling
// Il2CppName: get_useScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_useScaling)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_useScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::set_useScaling
// Il2CppName: set_useScaling
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(bool)>(&UnityEngine::Rendering::RTHandle::set_useScaling)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "set_useScaling", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_referenceSize
// Il2CppName: get_referenceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_referenceSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_referenceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::set_referenceSize
// Il2CppName: set_referenceSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2Int)>(&UnityEngine::Rendering::RTHandle::set_referenceSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "set_referenceSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_rtHandleProperties
// Il2CppName: get_rtHandleProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RTHandleProperties (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_rtHandleProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_rtHandleProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_rt
// Il2CppName: get_rt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RenderTexture* (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_rt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_rt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_nameID
// Il2CppName: get_nameID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_nameID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_nameID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::SetRenderTexture
// Il2CppName: SetRenderTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::RenderTexture*)>(&UnityEngine::Rendering::RTHandle::SetRenderTexture)> {
  static const MethodInfo* get() {
    static auto* rt = &::il2cpp_utils::GetClassFromName("UnityEngine", "RenderTexture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "SetRenderTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rt});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::SetTexture
// Il2CppName: SetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Texture*)>(&UnityEngine::Rendering::RTHandle::SetTexture)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "SetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::SetTexture
// Il2CppName: SetTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::RenderTargetIdentifier)>(&UnityEngine::Rendering::RTHandle::SetTexture)> {
  static const MethodInfo* get() {
    static auto* tex = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderTargetIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "SetTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tex});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::GetInstanceID
// Il2CppName: GetInstanceID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::GetInstanceID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "GetInstanceID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)()>(&UnityEngine::Rendering::RTHandle::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::GetScaledSize
// Il2CppName: GetScaledSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2Int (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Vector2Int)>(&UnityEngine::Rendering::RTHandle::GetScaledSize)> {
  static const MethodInfo* get() {
    static auto* refSize = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2Int")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "GetScaledSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{refSize});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RTHandle::SwitchToFastMemory
// Il2CppName: SwitchToFastMemory
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::RTHandle::*)(::UnityEngine::Rendering::CommandBuffer*, float, ::UnityEngine::Rendering::FastMemoryFlags, bool)>(&UnityEngine::Rendering::RTHandle::SwitchToFastMemory)> {
  static const MethodInfo* get() {
    static auto* cmd = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "CommandBuffer")->byval_arg;
    static auto* residencyFraction = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* flags = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "FastMemoryFlags")->byval_arg;
    static auto* copyContents = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RTHandle*), "SwitchToFastMemory", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cmd, residencyFraction, flags, copyContents});
  }
};
