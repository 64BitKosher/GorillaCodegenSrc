// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.ScriptableRenderContext
#include "UnityEngine/Rendering/ScriptableRenderContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineAsset
  class RenderPipelineAsset;
  // Forward declaring type: RenderPipeline
  class RenderPipeline;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action
  class Action;
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderPipelineManager
  class RenderPipelineManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::RenderPipelineManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderPipelineManager*, "UnityEngine.Rendering", "RenderPipelineManager");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.RenderPipelineManager
  // [TokenAttribute] Offset: FFFFFFFF
  class RenderPipelineManager : public ::Il2CppObject {
    public:
    // Get static field: static UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static ::UnityEngine::Rendering::RenderPipelineAsset* _get_s_CurrentPipelineAsset();
    // Set static field: static UnityEngine.Rendering.RenderPipelineAsset s_CurrentPipelineAsset
    static void _set_s_CurrentPipelineAsset(::UnityEngine::Rendering::RenderPipelineAsset* value);
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.Camera> s_Cameras
    static ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* _get_s_Cameras();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.Camera> s_Cameras
    static void _set_s_Cameras(::System::Collections::Generic::List_1<::UnityEngine::Camera*>* value);
    // Get static field: static private System.String s_CurrentPipelineType
    static ::StringW _get_s_CurrentPipelineType();
    // Set static field: static private System.String s_CurrentPipelineType
    static void _set_s_CurrentPipelineType(::StringW value);
    // Get static field: static private UnityEngine.Rendering.RenderPipeline s_CurrentPipeline
    static ::UnityEngine::Rendering::RenderPipeline* _get_s_CurrentPipeline();
    // Set static field: static private UnityEngine.Rendering.RenderPipeline s_CurrentPipeline
    static void _set_s_CurrentPipeline(::UnityEngine::Rendering::RenderPipeline* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>> beginContextRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>* _get_beginContextRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>> beginContextRendering
    static void _set_beginContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>> endContextRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>* _get_endContextRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,System.Collections.Generic.List`1<UnityEngine.Camera>> endContextRendering
    static void _set_endContextRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*>* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>>* _get_beginFrameRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> beginFrameRendering
    static void _set_beginFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>>* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> beginCameraRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* _get_beginCameraRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> beginCameraRendering
    static void _set_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> endFrameRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>>* _get_endFrameRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera[]> endFrameRendering
    static void _set_endFrameRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::ArrayW<::UnityEngine::Camera*>>* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> endCameraRendering
    static ::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* _get_endCameraRendering();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> endCameraRendering
    static void _set_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // Get static field: static private System.Action activeRenderPipelineTypeChanged
    static ::System::Action* _get_activeRenderPipelineTypeChanged();
    // Set static field: static private System.Action activeRenderPipelineTypeChanged
    static void _set_activeRenderPipelineTypeChanged(::System::Action* value);
    // Get static field: static private System.Action`2<UnityEngine.Rendering.RenderPipelineAsset,UnityEngine.Rendering.RenderPipelineAsset> activeRenderPipelineAssetChanged
    static ::System::Action_2<::UnityEngine::Rendering::RenderPipelineAsset*, ::UnityEngine::Rendering::RenderPipelineAsset*>* _get_activeRenderPipelineAssetChanged();
    // Set static field: static private System.Action`2<UnityEngine.Rendering.RenderPipelineAsset,UnityEngine.Rendering.RenderPipelineAsset> activeRenderPipelineAssetChanged
    static void _set_activeRenderPipelineAssetChanged(::System::Action_2<::UnityEngine::Rendering::RenderPipelineAsset*, ::UnityEngine::Rendering::RenderPipelineAsset*>* value);
    // static public UnityEngine.Rendering.RenderPipeline get_currentPipeline()
    // Offset: 0x54E90FC
    static ::UnityEngine::Rendering::RenderPipeline* get_currentPipeline();
    // static private System.Void set_currentPipeline(UnityEngine.Rendering.RenderPipeline value)
    // Offset: 0x54E9154
    static void set_currentPipeline(::UnityEngine::Rendering::RenderPipeline* value);
    // static public System.Void add_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x54E920C
    static void add_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // static public System.Void remove_beginCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x54E9300
    static void remove_beginCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // static public System.Void add_endCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x54E93F4
    static void add_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // static public System.Void remove_endCameraRendering(System.Action`2<UnityEngine.Rendering.ScriptableRenderContext,UnityEngine.Camera> value)
    // Offset: 0x54E94E8
    static void remove_endCameraRendering(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>* value);
    // static System.Void BeginContextRendering(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E8338
    static void BeginContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // static System.Void BeginCameraRendering(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera)
    // Offset: 0x54E8490
    static void BeginCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);
    // static System.Void EndContextRendering(UnityEngine.Rendering.ScriptableRenderContext context, System.Collections.Generic.List`1<UnityEngine.Camera> cameras)
    // Offset: 0x54E8584
    static void EndContextRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>* cameras);
    // static System.Void EndCameraRendering(UnityEngine.Rendering.ScriptableRenderContext context, UnityEngine.Camera camera)
    // Offset: 0x54E86DC
    static void EndCameraRendering(::UnityEngine::Rendering::ScriptableRenderContext context, ::UnityEngine::Camera* camera);
    // static System.Void OnActiveRenderPipelineTypeChanged()
    // Offset: 0x54E95DC
    static void OnActiveRenderPipelineTypeChanged();
    // static System.Void OnActiveRenderPipelineAssetChanged(UnityEngine.ScriptableObject from, UnityEngine.ScriptableObject to)
    // Offset: 0x54E9650
    static void OnActiveRenderPipelineAssetChanged(::UnityEngine::ScriptableObject* from, ::UnityEngine::ScriptableObject* to);
    // static System.Void HandleRenderPipelineChange(UnityEngine.Rendering.RenderPipelineAsset pipelineAsset)
    // Offset: 0x54E975C
    static void HandleRenderPipelineChange(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);
    // static System.Void CleanupRenderPipeline()
    // Offset: 0x54E8DA0
    static void CleanupRenderPipeline();
    // static private System.String GetCurrentPipelineAssetType()
    // Offset: 0x54E98E8
    static ::StringW GetCurrentPipelineAssetType();
    // static private System.Void DoRenderLoop_Internal(UnityEngine.Rendering.RenderPipelineAsset pipe, System.IntPtr loopPtr, UnityEngine.Object renderRequest)
    // Offset: 0x54E9940
    static void DoRenderLoop_Internal(::UnityEngine::Rendering::RenderPipelineAsset* pipe, ::System::IntPtr loopPtr, ::UnityEngine::Object* renderRequest);
    // static System.Void PrepareRenderPipeline(UnityEngine.Rendering.RenderPipelineAsset pipelineAsset)
    // Offset: 0x54E8F34
    static void PrepareRenderPipeline(::UnityEngine::Rendering::RenderPipelineAsset* pipelineAsset);
    // static private System.Void .cctor()
    // Offset: 0x54E9C30
    static void _cctor();
  }; // UnityEngine.Rendering.RenderPipelineManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline
// Il2CppName: get_currentPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderPipeline* (*)()>(&UnityEngine::Rendering::RenderPipelineManager::get_currentPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "get_currentPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline
// Il2CppName: set_currentPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipeline*)>(&UnityEngine::Rendering::RenderPipelineManager::set_currentPipeline)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipeline")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "set_currentPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering
// Il2CppName: add_beginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::add_beginCameraRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "add_beginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering
// Il2CppName: remove_beginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::remove_beginCameraRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "remove_beginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::add_endCameraRendering
// Il2CppName: add_endCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::add_endCameraRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "add_endCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::remove_endCameraRendering
// Il2CppName: remove_endCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::remove_endCameraRendering)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext"), ::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "remove_endCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::BeginContextRendering
// Il2CppName: BeginContextRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::BeginContextRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "BeginContextRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::BeginCameraRendering
// Il2CppName: BeginCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&UnityEngine::Rendering::RenderPipelineManager::BeginCameraRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "BeginCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::EndContextRendering
// Il2CppName: EndContextRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::System::Collections::Generic::List_1<::UnityEngine::Camera*>*)>(&UnityEngine::Rendering::RenderPipelineManager::EndContextRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* cameras = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "EndContextRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, cameras});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::EndCameraRendering
// Il2CppName: EndCameraRendering
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&UnityEngine::Rendering::RenderPipelineManager::EndCameraRendering)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "ScriptableRenderContext")->byval_arg;
    static auto* camera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "EndCameraRendering", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, camera});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineTypeChanged
// Il2CppName: OnActiveRenderPipelineTypeChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineTypeChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "OnActiveRenderPipelineTypeChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineAssetChanged
// Il2CppName: OnActiveRenderPipelineAssetChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ScriptableObject*, ::UnityEngine::ScriptableObject*)>(&UnityEngine::Rendering::RenderPipelineManager::OnActiveRenderPipelineAssetChanged)> {
  static const MethodInfo* get() {
    static auto* from = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    static auto* to = &::il2cpp_utils::GetClassFromName("UnityEngine", "ScriptableObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "OnActiveRenderPipelineAssetChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{from, to});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange
// Il2CppName: HandleRenderPipelineChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&UnityEngine::Rendering::RenderPipelineManager::HandleRenderPipelineChange)> {
  static const MethodInfo* get() {
    static auto* pipelineAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipelineAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "HandleRenderPipelineChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline
// Il2CppName: CleanupRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderPipelineManager::CleanupRenderPipeline)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "CleanupRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::GetCurrentPipelineAssetType
// Il2CppName: GetCurrentPipelineAssetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&UnityEngine::Rendering::RenderPipelineManager::GetCurrentPipelineAssetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "GetCurrentPipelineAssetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal
// Il2CppName: DoRenderLoop_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*, ::System::IntPtr, ::UnityEngine::Object*)>(&UnityEngine::Rendering::RenderPipelineManager::DoRenderLoop_Internal)> {
  static const MethodInfo* get() {
    static auto* pipe = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipelineAsset")->byval_arg;
    static auto* loopPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* renderRequest = &::il2cpp_utils::GetClassFromName("UnityEngine", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "DoRenderLoop_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipe, loopPtr, renderRequest});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline
// Il2CppName: PrepareRenderPipeline
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Rendering::RenderPipelineAsset*)>(&UnityEngine::Rendering::RenderPipelineManager::PrepareRenderPipeline)> {
  static const MethodInfo* get() {
    static auto* pipelineAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderPipelineAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), "PrepareRenderPipeline", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pipelineAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderPipelineManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderPipelineManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderPipelineManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
