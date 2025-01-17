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
// Forward declaring namespace: UnityEngine::SpatialTracking
namespace UnityEngine::SpatialTracking {
  // Forward declaring type: PoseDataFlags
  struct PoseDataFlags;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Pose
  struct Pose;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.XR.Interaction
namespace UnityEngine::Experimental::XR::Interaction {
  // Forward declaring type: BasePoseProvider
  class BasePoseProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::XR::Interaction::BasePoseProvider*, "UnityEngine.Experimental.XR.Interaction", "BasePoseProvider");
// Type namespace: UnityEngine.Experimental.XR.Interaction
namespace UnityEngine::Experimental::XR::Interaction {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Experimental.XR.Interaction.BasePoseProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class BasePoseProvider : public ::UnityEngine::MonoBehaviour {
    public:
    // public UnityEngine.SpatialTracking.PoseDataFlags GetPoseFromProvider(out UnityEngine.Pose output)
    // Offset: 0x553CE70
    ::UnityEngine::SpatialTracking::PoseDataFlags GetPoseFromProvider(ByRef<::UnityEngine::Pose> output);
    // public System.Boolean TryGetPoseFromProvider(out UnityEngine.Pose output)
    // Offset: 0x553CE94
    bool TryGetPoseFromProvider(ByRef<::UnityEngine::Pose> output);
    // protected System.Void .ctor()
    // Offset: 0x553CF1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasePoseProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Experimental::XR::Interaction::BasePoseProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasePoseProvider*, creationType>()));
    }
  }; // UnityEngine.Experimental.XR.Interaction.BasePoseProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider
// Il2CppName: GetPoseFromProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::SpatialTracking::PoseDataFlags (UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(ByRef<::UnityEngine::Pose>)>(&UnityEngine::Experimental::XR::Interaction::BasePoseProvider::GetPoseFromProvider)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Interaction::BasePoseProvider*), "GetPoseFromProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider
// Il2CppName: TryGetPoseFromProvider
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Experimental::XR::Interaction::BasePoseProvider::*)(ByRef<::UnityEngine::Pose>)>(&UnityEngine::Experimental::XR::Interaction::BasePoseProvider::TryGetPoseFromProvider)> {
  static const MethodInfo* get() {
    static auto* output = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::XR::Interaction::BasePoseProvider*), "TryGetPoseFromProvider", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{output});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::XR::Interaction::BasePoseProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
