// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: OVRInput/Controller
#include "GlobalNamespace/OVRInput.hpp"
// Including type: OVRVirtualKeyboard
#include "GlobalNamespace/OVRVirtualKeyboard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRRaycaster
  class OVRRaycaster;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: OVRInputModule
  class OVRInputModule;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Skipping declaration: Vector3 because it is already included!
  // Skipping declaration: Quaternion because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRVirtualKeyboardSampleInputHandler
  class OVRVirtualKeyboardSampleInputHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*, "", "OVRVirtualKeyboardSampleInputHandler");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRVirtualKeyboardSampleInputHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboardSampleInputHandler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public OVRVirtualKeyboard OVRVirtualKeyboard
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRVirtualKeyboard* OVRVirtualKeyboard;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRVirtualKeyboard*) == 0x8);
    // private OVRRaycaster raycaster
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::OVRRaycaster* raycaster;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRRaycaster*) == 0x8);
    // private UnityEngine.EventSystems.OVRInputModule inputModule
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::EventSystems::OVRInputModule* inputModule;
    // Field size check
    static_assert(sizeof(::UnityEngine::EventSystems::OVRInputModule*) == 0x8);
    // private UnityEngine.LineRenderer leftLinePointer
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::LineRenderer* leftLinePointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private UnityEngine.LineRenderer rightLinePointer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::LineRenderer* rightLinePointer;
    // Field size check
    static_assert(sizeof(::UnityEngine::LineRenderer*) == 0x8);
    // private System.Nullable`1<OVRInput/Controller> interactionDevice_
    // Size: 0xFFFFFFFF
    // Offset: 0x48
    ::System::Nullable_1<::GlobalNamespace::OVRInput::Controller> interactionDevice;
    // private System.Single linePointerInitialWidth_
    // Size: 0x4
    // Offset: 0x50
    float linePointerInitialWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // static field const value: static private System.Single RAY_MAX_DISTANCE
    static constexpr const float RAY_MAX_DISTANCE = 100;
    // Get static field: static private System.Single RAY_MAX_DISTANCE
    static float _get_RAY_MAX_DISTANCE();
    // Set static field: static private System.Single RAY_MAX_DISTANCE
    static void _set_RAY_MAX_DISTANCE(float value);
    // static field const value: static private System.Single THUMBSTICK_DEADZONE
    static constexpr const float THUMBSTICK_DEADZONE = 0.2;
    // Get static field: static private System.Single THUMBSTICK_DEADZONE
    static float _get_THUMBSTICK_DEADZONE();
    // Set static field: static private System.Single THUMBSTICK_DEADZONE
    static void _set_THUMBSTICK_DEADZONE(float value);
    // static field const value: static private System.Single COLLISION_BOUNDS_ADDED_BLEED_PERCENT
    static constexpr const float COLLISION_BOUNDS_ADDED_BLEED_PERCENT = 0.1;
    // Get static field: static private System.Single COLLISION_BOUNDS_ADDED_BLEED_PERCENT
    static float _get_COLLISION_BOUNDS_ADDED_BLEED_PERCENT();
    // Set static field: static private System.Single COLLISION_BOUNDS_ADDED_BLEED_PERCENT
    static void _set_COLLISION_BOUNDS_ADDED_BLEED_PERCENT(float value);
    // static field const value: static private System.Single LINEPOINTER_THINNING_THRESHOLD
    static constexpr const float LINEPOINTER_THINNING_THRESHOLD = 0.015;
    // Get static field: static private System.Single LINEPOINTER_THINNING_THRESHOLD
    static float _get_LINEPOINTER_THINNING_THRESHOLD();
    // Set static field: static private System.Single LINEPOINTER_THINNING_THRESHOLD
    static void _set_LINEPOINTER_THINNING_THRESHOLD(float value);
    // Get instance field reference: public OVRVirtualKeyboard OVRVirtualKeyboard
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRVirtualKeyboard*& dyn_OVRVirtualKeyboard();
    // Get instance field reference: private OVRRaycaster raycaster
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRRaycaster*& dyn_raycaster();
    // Get instance field reference: private UnityEngine.EventSystems.OVRInputModule inputModule
    [[deprecated("Use field access instead!")]] ::UnityEngine::EventSystems::OVRInputModule*& dyn_inputModule();
    // Get instance field reference: private UnityEngine.LineRenderer leftLinePointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_leftLinePointer();
    // Get instance field reference: private UnityEngine.LineRenderer rightLinePointer
    [[deprecated("Use field access instead!")]] ::UnityEngine::LineRenderer*& dyn_rightLinePointer();
    // Get instance field reference: private System.Nullable`1<OVRInput/Controller> interactionDevice_
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::GlobalNamespace::OVRInput::Controller>& dyn_interactionDevice_();
    // Get instance field reference: private System.Single linePointerInitialWidth_
    [[deprecated("Use field access instead!")]] float& dyn_linePointerInitialWidth_();
    // static private System.Single ApplyDeadzone(System.Single value)
    // Offset: 0x493D238
    static float ApplyDeadzone(float value);
    // public System.Single get_AnalogStickX()
    // Offset: 0x493CFCC
    float get_AnalogStickX();
    // public System.Single get_AnalogStickY()
    // Offset: 0x493CF08
    float get_AnalogStickY();
    // public UnityEngine.Vector3 get_InputRayPosition()
    // Offset: 0x493C968
    ::UnityEngine::Vector3 get_InputRayPosition();
    // public UnityEngine.Quaternion get_InputRayRotation()
    // Offset: 0x493D090
    ::UnityEngine::Quaternion get_InputRayRotation();
    // private System.Void Start()
    // Offset: 0x493D288
    void Start();
    // private System.Void Update()
    // Offset: 0x493D34C
    void Update();
    // private System.Void UpdateLineRenderer()
    // Offset: 0x493D62C
    void UpdateLineRenderer();
    // private System.Void UpdateLineRendererFromSource(OVRVirtualKeyboard/InputSource source)
    // Offset: 0x493D694
    void UpdateLineRendererFromSource(::GlobalNamespace::OVRVirtualKeyboard::InputSource source);
    // private System.Void UpdateInteractionAnchor()
    // Offset: 0x493D364
    void UpdateInteractionAnchor();
    // public System.Void .ctor()
    // Offset: 0x493DDF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboardSampleInputHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboardSampleInputHandler*, creationType>()));
    }
  }; // OVRVirtualKeyboardSampleInputHandler
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::ApplyDeadzone
// Il2CppName: ApplyDeadzone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float)>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::ApplyDeadzone)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "ApplyDeadzone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickX
// Il2CppName: get_AnalogStickX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "get_AnalogStickX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickY
// Il2CppName: get_AnalogStickY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_AnalogStickY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "get_AnalogStickY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayPosition
// Il2CppName: get_InputRayPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "get_InputRayPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayRotation
// Il2CppName: get_InputRayRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::get_InputRayRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "get_InputRayRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRenderer
// Il2CppName: UpdateLineRenderer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRenderer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "UpdateLineRenderer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRendererFromSource
// Il2CppName: UpdateLineRendererFromSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)(::GlobalNamespace::OVRVirtualKeyboard::InputSource)>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateLineRendererFromSource)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("", "OVRVirtualKeyboard/InputSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "UpdateLineRendererFromSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateInteractionAnchor
// Il2CppName: UpdateInteractionAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::*)()>(&GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::UpdateInteractionAnchor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboardSampleInputHandler*), "UpdateInteractionAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboardSampleInputHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
