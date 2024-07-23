// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::PoseDetection
namespace Oculus::Interaction::PoseDetection {
  // Forward declaring type: JointVelocityActiveState
  class JointVelocityActiveState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: LineRenderer
  class LineRenderer;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: JointVelocityDebugVisual
  class JointVelocityDebugVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*, "Oculus.Interaction.PoseDetection.Debug", "JointVelocityDebugVisual");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Size: 0x45
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.JointVelocityDebugVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class JointVelocityDebugVisual : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private Oculus.Interaction.PoseDetection.JointVelocityActiveState _jointVelocity
    // Size: 0x8
    // Offset: 0x20
    ::Oculus::Interaction::PoseDetection::JointVelocityActiveState* jointVelocity;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::PoseDetection::JointVelocityActiveState*) == 0x8);
    // private UnityEngine.Material _lineRendererMaterial
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Material* lineRendererMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Single _rendererLineWidth
    // Size: 0x4
    // Offset: 0x30
    float rendererLineWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _rendererLineLength
    // Size: 0x4
    // Offset: 0x34
    float rendererLineLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<UnityEngine.LineRenderer> _lineRenderers
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>* lineRenderers;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>*) == 0x8);
    // private System.Int32 _enabledRendererCount
    // Size: 0x4
    // Offset: 0x40
    int enabledRendererCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x44
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private Oculus.Interaction.PoseDetection.JointVelocityActiveState _jointVelocity
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::PoseDetection::JointVelocityActiveState*& dyn__jointVelocity();
    // Get instance field reference: private UnityEngine.Material _lineRendererMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn__lineRendererMaterial();
    // Get instance field reference: private System.Single _rendererLineWidth
    [[deprecated("Use field access instead!")]] float& dyn__rendererLineWidth();
    // Get instance field reference: private System.Single _rendererLineLength
    [[deprecated("Use field access instead!")]] float& dyn__rendererLineLength();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.LineRenderer> _lineRenderers
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::LineRenderer*>*& dyn__lineRenderers();
    // Get instance field reference: private System.Int32 _enabledRendererCount
    [[deprecated("Use field access instead!")]] int& dyn__enabledRendererCount();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // protected System.Void Awake()
    // Offset: 0x47FCB4C
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47FCBC8
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0x47FCC00
    void OnDisable();
    // protected System.Void Update()
    // Offset: 0x47FCDB0
    void Update();
    // private System.Void DrawDebugLine(UnityEngine.Vector3 jointPos, UnityEngine.Vector3 direction, System.Single amount)
    // Offset: 0x47FD234
    void DrawDebugLine(::UnityEngine::Vector3 jointPos, ::UnityEngine::Vector3 direction, float amount);
    // private System.Void ResetLines()
    // Offset: 0x47FCC10
    void ResetLines();
    // private System.Void AddLine(UnityEngine.Vector3 start, UnityEngine.Vector3 end, UnityEngine.Color color)
    // Offset: 0x47FD414
    void AddLine(::UnityEngine::Vector3 start, ::UnityEngine::Vector3 end, ::UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x47FD658
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JointVelocityDebugVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JointVelocityDebugVisual*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.JointVelocityDebugVisual
  #pragma pack(pop)
  static check_size<sizeof(JointVelocityDebugVisual), 68 + sizeof(bool)> __Oculus_Interaction_PoseDetection_Debug_JointVelocityDebugVisualSizeCheck;
  static_assert(sizeof(JointVelocityDebugVisual) == 0x45);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::DrawDebugLine
// Il2CppName: DrawDebugLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float)>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::DrawDebugLine)> {
  static const MethodInfo* get() {
    static auto* jointPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* direction = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* amount = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "DrawDebugLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{jointPos, direction, amount});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::ResetLines
// Il2CppName: ResetLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)()>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::ResetLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "ResetLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::AddLine
// Il2CppName: AddLine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Color)>(&Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::AddLine)> {
  static const MethodInfo* get() {
    static auto* start = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual*), "AddLine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{start, end, color});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::JointVelocityDebugVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
