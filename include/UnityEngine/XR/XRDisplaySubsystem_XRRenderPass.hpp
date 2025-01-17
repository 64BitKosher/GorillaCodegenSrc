// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.RenderTextureDescriptor
#include "UnityEngine/RenderTextureDescriptor.hpp"
// Including type: UnityEngine.XR.XRDisplaySubsystem
#include "UnityEngine/XR/XRDisplaySubsystem.hpp"
// Including type: UnityEngine.Rendering.RenderTargetIdentifier
#include "UnityEngine/Rendering/RenderTargetIdentifier.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass, "UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass");
// Type namespace: UnityEngine.XR
namespace UnityEngine::XR {
  // Size: 0xE0
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct XRDisplaySubsystem::XRRenderPass/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.IntPtr displaySubsystemInstance
    // Size: 0x8
    // Offset: 0x0
    ::System::IntPtr displaySubsystemInstance;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // public System.Int32 renderPassIndex
    // Size: 0x4
    // Offset: 0x8
    int renderPassIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: renderPassIndex and: renderTarget
    char __padding1[0x4] = {};
    // public UnityEngine.Rendering.RenderTargetIdentifier renderTarget
    // Size: 0x24
    // Offset: 0x10
    ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RenderTargetIdentifier) == 0x24);
    // Padding between fields: renderTarget and: renderTargetDesc
    char __padding2[0x4] = {};
    // public UnityEngine.RenderTextureDescriptor renderTargetDesc
    // Size: 0x34
    // Offset: 0x38
    ::UnityEngine::RenderTextureDescriptor renderTargetDesc;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTextureDescriptor) == 0x34);
    // public System.Boolean hasMotionVectorPass
    // Size: 0x1
    // Offset: 0x6C
    bool hasMotionVectorPass;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: hasMotionVectorPass and: motionVectorRenderTarget
    char __padding4[0x3] = {};
    // public UnityEngine.Rendering.RenderTargetIdentifier motionVectorRenderTarget
    // Size: 0x24
    // Offset: 0x70
    ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::RenderTargetIdentifier) == 0x24);
    // Padding between fields: motionVectorRenderTarget and: motionVectorRenderTargetDesc
    char __padding5[0x4] = {};
    // public UnityEngine.RenderTextureDescriptor motionVectorRenderTargetDesc
    // Size: 0x34
    // Offset: 0x98
    ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc;
    // Field size check
    static_assert(sizeof(::UnityEngine::RenderTextureDescriptor) == 0x34);
    // public System.Boolean shouldFillOutDepth
    // Size: 0x1
    // Offset: 0xCC
    bool shouldFillOutDepth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shouldFillOutDepth and: cullingPassIndex
    char __padding7[0x3] = {};
    // public System.Int32 cullingPassIndex
    // Size: 0x4
    // Offset: 0xD0
    int cullingPassIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: cullingPassIndex and: foveatedRenderingInfo
    char __padding8[0x4] = {};
    // public System.IntPtr foveatedRenderingInfo
    // Size: 0x8
    // Offset: 0xD8
    ::System::IntPtr foveatedRenderingInfo;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating value type constructor for type: XRRenderPass
    constexpr XRRenderPass(::System::IntPtr displaySubsystemInstance_ = {}, int renderPassIndex_ = {}, ::UnityEngine::Rendering::RenderTargetIdentifier renderTarget_ = {}, ::UnityEngine::RenderTextureDescriptor renderTargetDesc_ = {}, bool hasMotionVectorPass_ = {}, ::UnityEngine::Rendering::RenderTargetIdentifier motionVectorRenderTarget_ = {}, ::UnityEngine::RenderTextureDescriptor motionVectorRenderTargetDesc_ = {}, bool shouldFillOutDepth_ = {}, int cullingPassIndex_ = {}, ::System::IntPtr foveatedRenderingInfo_ = {}) noexcept : displaySubsystemInstance{displaySubsystemInstance_}, renderPassIndex{renderPassIndex_}, renderTarget{renderTarget_}, renderTargetDesc{renderTargetDesc_}, hasMotionVectorPass{hasMotionVectorPass_}, motionVectorRenderTarget{motionVectorRenderTarget_}, motionVectorRenderTargetDesc{motionVectorRenderTargetDesc_}, shouldFillOutDepth{shouldFillOutDepth_}, cullingPassIndex{cullingPassIndex_}, foveatedRenderingInfo{foveatedRenderingInfo_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.IntPtr displaySubsystemInstance
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_displaySubsystemInstance();
    // Get instance field reference: public System.Int32 renderPassIndex
    [[deprecated("Use field access instead!")]] int& dyn_renderPassIndex();
    // Get instance field reference: public UnityEngine.Rendering.RenderTargetIdentifier renderTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RenderTargetIdentifier& dyn_renderTarget();
    // Get instance field reference: public UnityEngine.RenderTextureDescriptor renderTargetDesc
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTextureDescriptor& dyn_renderTargetDesc();
    // Get instance field reference: public System.Boolean hasMotionVectorPass
    [[deprecated("Use field access instead!")]] bool& dyn_hasMotionVectorPass();
    // Get instance field reference: public UnityEngine.Rendering.RenderTargetIdentifier motionVectorRenderTarget
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::RenderTargetIdentifier& dyn_motionVectorRenderTarget();
    // Get instance field reference: public UnityEngine.RenderTextureDescriptor motionVectorRenderTargetDesc
    [[deprecated("Use field access instead!")]] ::UnityEngine::RenderTextureDescriptor& dyn_motionVectorRenderTargetDesc();
    // Get instance field reference: public System.Boolean shouldFillOutDepth
    [[deprecated("Use field access instead!")]] bool& dyn_shouldFillOutDepth();
    // Get instance field reference: public System.Int32 cullingPassIndex
    [[deprecated("Use field access instead!")]] int& dyn_cullingPassIndex();
    // Get instance field reference: public System.IntPtr foveatedRenderingInfo
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_foveatedRenderingInfo();
    // public System.Void GetRenderParameter(UnityEngine.Camera camera, System.Int32 renderParameterIndex, out UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter renderParameter)
    // Offset: 0x5715988
    void GetRenderParameter(::UnityEngine::Camera* camera, int renderParameterIndex, ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderParameter> renderParameter);
    // public System.Int32 GetRenderParameterCount()
    // Offset: 0x5715A40
    int GetRenderParameterCount();
    // static private System.Void GetRenderParameter_Injected(ref UnityEngine.XR.XRDisplaySubsystem/XRRenderPass _unity_self, UnityEngine.Camera camera, System.Int32 renderParameterIndex, out UnityEngine.XR.XRDisplaySubsystem/XRRenderParameter renderParameter)
    // Offset: 0x57159E4
    static void GetRenderParameter_Injected(ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass> _unity_self, ::UnityEngine::Camera* camera, int renderParameterIndex, ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderParameter> renderParameter);
    // static private System.Int32 GetRenderParameterCount_Injected(ref UnityEngine.XR.XRDisplaySubsystem/XRRenderPass _unity_self)
    // Offset: 0x5715A7C
    static int GetRenderParameterCount_Injected(ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass> _unity_self);
  }; // UnityEngine.XR.XRDisplaySubsystem/XRRenderPass
  #pragma pack(pop)
  static check_size<sizeof(XRDisplaySubsystem::XRRenderPass), 216 + sizeof(::System::IntPtr)> __UnityEngine_XR_XRDisplaySubsystem_XRRenderPassSizeCheck;
  static_assert(sizeof(XRDisplaySubsystem::XRRenderPass) == 0xE0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameter
// Il2CppName: GetRenderParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::*)(::UnityEngine::Camera*, int, ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderParameter>)>(&UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameter)> {
  static const MethodInfo* get() {
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* renderParameterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* renderParameter = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass), "GetRenderParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{camera, renderParameterIndex, renderParameter});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameterCount
// Il2CppName: GetRenderParameterCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::*)()>(&UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameterCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass), "GetRenderParameterCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameter_Injected
// Il2CppName: GetRenderParameter_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass>, ::UnityEngine::Camera*, int, ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderParameter>)>(&UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameter_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass")->this_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    static auto* renderParameterIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* renderParameter = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRDisplaySubsystem/XRRenderParameter")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass), "GetRenderParameter_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self, camera, renderParameterIndex, renderParameter});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameterCount_Injected
// Il2CppName: GetRenderParameterCount_Injected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(ByRef<::UnityEngine::XR::XRDisplaySubsystem::XRRenderPass>)>(&UnityEngine::XR::XRDisplaySubsystem::XRRenderPass::GetRenderParameterCount_Injected)> {
  static const MethodInfo* get() {
    static auto* _unity_self = &::il2cpp_utils::GetClassFromName("UnityEngine.XR", "XRDisplaySubsystem/XRRenderPass")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::XRDisplaySubsystem::XRRenderPass), "GetRenderParameterCount_Injected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_unity_self});
  }
};
