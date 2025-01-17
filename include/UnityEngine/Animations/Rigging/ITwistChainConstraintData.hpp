// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: ITwistChainConstraintData
  class ITwistChainConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::ITwistChainConstraintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::ITwistChainConstraintData*, "UnityEngine.Animations.Rigging", "ITwistChainConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.ITwistChainConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  class ITwistChainConstraintData {
    public:
    // public UnityEngine.Transform get_root()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_root();
    // public UnityEngine.Transform get_tip()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_tip();
    // public UnityEngine.Transform get_rootTarget()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_rootTarget();
    // public UnityEngine.Transform get_tipTarget()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_tipTarget();
    // public UnityEngine.AnimationCurve get_curve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::AnimationCurve* get_curve();
  }; // UnityEngine.Animations.Rigging.ITwistChainConstraintData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_root
// Il2CppName: get_root
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITwistChainConstraintData::*)()>(&UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_root)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistChainConstraintData*), "get_root", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_tip
// Il2CppName: get_tip
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITwistChainConstraintData::*)()>(&UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_tip)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistChainConstraintData*), "get_tip", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_rootTarget
// Il2CppName: get_rootTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITwistChainConstraintData::*)()>(&UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_rootTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistChainConstraintData*), "get_rootTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_tipTarget
// Il2CppName: get_tipTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::ITwistChainConstraintData::*)()>(&UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_tipTarget)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistChainConstraintData*), "get_tipTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_curve
// Il2CppName: get_curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationCurve* (UnityEngine::Animations::Rigging::ITwistChainConstraintData::*)()>(&UnityEngine::Animations::Rigging::ITwistChainConstraintData::get_curve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::ITwistChainConstraintData*), "get_curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
