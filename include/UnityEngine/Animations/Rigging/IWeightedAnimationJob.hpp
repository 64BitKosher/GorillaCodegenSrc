// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Animations.IAnimationJob
#include "UnityEngine/Animations/IAnimationJob.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: FloatProperty
  struct FloatProperty;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IWeightedAnimationJob
  class IWeightedAnimationJob;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IWeightedAnimationJob);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IWeightedAnimationJob*, "UnityEngine.Animations.Rigging", "IWeightedAnimationJob");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IWeightedAnimationJob
  // [TokenAttribute] Offset: FFFFFFFF
  class IWeightedAnimationJob/*, public ::UnityEngine::Animations::IAnimationJob*/ {
    public:
    // Creating interface conversion operator: operator ::UnityEngine::Animations::IAnimationJob
    operator ::UnityEngine::Animations::IAnimationJob() noexcept {
      return *reinterpret_cast<::UnityEngine::Animations::IAnimationJob*>(this);
    }
    // public UnityEngine.Animations.Rigging.FloatProperty get_jobWeight()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::FloatProperty get_jobWeight();
    // public System.Void set_jobWeight(UnityEngine.Animations.Rigging.FloatProperty value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_jobWeight(::UnityEngine::Animations::Rigging::FloatProperty value);
  }; // UnityEngine.Animations.Rigging.IWeightedAnimationJob
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IWeightedAnimationJob::get_jobWeight
// Il2CppName: get_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::FloatProperty (UnityEngine::Animations::Rigging::IWeightedAnimationJob::*)()>(&UnityEngine::Animations::Rigging::IWeightedAnimationJob::get_jobWeight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IWeightedAnimationJob*), "get_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IWeightedAnimationJob::set_jobWeight
// Il2CppName: set_jobWeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Animations::Rigging::IWeightedAnimationJob::*)(::UnityEngine::Animations::Rigging::FloatProperty)>(&UnityEngine::Animations::Rigging::IWeightedAnimationJob::set_jobWeight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Animations.Rigging", "FloatProperty")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IWeightedAnimationJob*), "set_jobWeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
