// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVirtualKeyboard
#include "GlobalNamespace/OVRVirtualKeyboard.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: OVRPose
#include "GlobalNamespace/OVRPose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: InteractorRootOverrideData because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Queue`1<T>
  template<typename T>
  class Queue_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*, "", "OVRVirtualKeyboard/InteractorRootTransformOverride");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OVRVirtualKeyboard/InteractorRootTransformOverride
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboard::InteractorRootTransformOverride : public ::Il2CppObject {
    public:
    // Nested type: ::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData
    struct InteractorRootOverrideData;
    // Nested type: ::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::$RevertInteractorOverrides$d__6
    class $RevertInteractorOverrides$d__6;
    // Size: 0x40
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData
    // [TokenAttribute] Offset: FFFFFFFF
    struct InteractorRootOverrideData/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Transform root
      // Size: 0x8
      // Offset: 0x0
      ::UnityEngine::Transform* root;
      // Field size check
      static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
      // public OVRPose originalPose
      // Size: 0x1C
      // Offset: 0x8
      ::GlobalNamespace::OVRPose originalPose;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OVRPose) == 0x1C);
      // public OVRPose targetPose
      // Size: 0x1C
      // Offset: 0x24
      ::GlobalNamespace::OVRPose targetPose;
      // Field size check
      static_assert(sizeof(::GlobalNamespace::OVRPose) == 0x1C);
      public:
      // Creating value type constructor for type: InteractorRootOverrideData
      constexpr InteractorRootOverrideData(::UnityEngine::Transform* root_ = {}, ::GlobalNamespace::OVRPose originalPose_ = {}, ::GlobalNamespace::OVRPose targetPose_ = {}) noexcept : root{root_}, originalPose{originalPose_}, targetPose{targetPose_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Transform root
      [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_root();
      // Get instance field reference: public OVRPose originalPose
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPose& dyn_originalPose();
      // Get instance field reference: public OVRPose targetPose
      [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPose& dyn_targetPose();
    }; // OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData
    #pragma pack(pop)
    static check_size<sizeof(OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData), 36 + sizeof(::GlobalNamespace::OVRPose)> __GlobalNamespace_OVRVirtualKeyboard_InteractorRootTransformOverride_InteractorRootOverrideDataSizeCheck;
    static_assert(sizeof(OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData) == 0x40);
    public:
    // private System.Collections.Generic.Queue`1<OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData> applyQueue
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>* applyQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>*) == 0x8);
    // private System.Collections.Generic.Queue`1<OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData> revertQueue
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>* revertQueue;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>*) == 0x8);
    public:
    // Get instance field reference: private System.Collections.Generic.Queue`1<OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData> applyQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>*& dyn_applyQueue();
    // Get instance field reference: private System.Collections.Generic.Queue`1<OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData> revertQueue
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>*& dyn_revertQueue();
    // public System.Void Enqueue(UnityEngine.Transform interactorRootTransform, OVRPlugin/Posef interactorRootPose)
    // Offset: 0x493A3EC
    void Enqueue(::UnityEngine::Transform* interactorRootTransform, ::GlobalNamespace::OVRPlugin::Posef interactorRootPose);
    // public System.Void LateApply(UnityEngine.MonoBehaviour coroutineRunner)
    // Offset: 0x493A1CC
    void LateApply(::UnityEngine::MonoBehaviour* coroutineRunner);
    // public System.Void Reset()
    // Offset: 0x493B354
    void Reset();
    // private System.Collections.IEnumerator RevertInteractorOverrides()
    // Offset: 0x493B2E8
    ::System::Collections::IEnumerator* RevertInteractorOverrides();
    // static private System.Boolean ApplyOverride(OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData interactorOverride)
    // Offset: 0x493B20C
    static bool ApplyOverride(::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData interactorOverride);
    // public System.Void .ctor()
    // Offset: 0x493AF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboard::InteractorRootTransformOverride* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboard::InteractorRootTransformOverride*, creationType>()));
    }
  }; // OVRVirtualKeyboard/InteractorRootTransformOverride
  #pragma pack(pop)
  static check_size<sizeof(OVRVirtualKeyboard::InteractorRootTransformOverride), 24 + sizeof(::System::Collections::Generic::Queue_1<::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData>*)> __GlobalNamespace_OVRVirtualKeyboard_InteractorRootTransformOverrideSizeCheck;
  static_assert(sizeof(OVRVirtualKeyboard::InteractorRootTransformOverride) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData, "", "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::Enqueue
// Il2CppName: Enqueue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::*)(::UnityEngine::Transform*, ::GlobalNamespace::OVRPlugin::Posef)>(&GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::Enqueue)> {
  static const MethodInfo* get() {
    static auto* interactorRootTransform = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* interactorRootPose = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/Posef")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*), "Enqueue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactorRootTransform, interactorRootPose});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::LateApply
// Il2CppName: LateApply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::*)(::UnityEngine::MonoBehaviour*)>(&GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::LateApply)> {
  static const MethodInfo* get() {
    static auto* coroutineRunner = &::il2cpp_utils::GetClassFromName("UnityEngine", "MonoBehaviour")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*), "LateApply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{coroutineRunner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::*)()>(&GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::RevertInteractorOverrides
// Il2CppName: RevertInteractorOverrides
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::*)()>(&GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::RevertInteractorOverrides)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*), "RevertInteractorOverrides", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::ApplyOverride
// Il2CppName: ApplyOverride
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::InteractorRootOverrideData)>(&GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::ApplyOverride)> {
  static const MethodInfo* get() {
    static auto* interactorOverride = &::il2cpp_utils::GetClassFromName("", "OVRVirtualKeyboard/InteractorRootTransformOverride/InteractorRootOverrideData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride*), "ApplyOverride", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactorOverride});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::InteractorRootTransformOverride::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
