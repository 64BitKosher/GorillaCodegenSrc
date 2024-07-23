// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IBlendConstraintData
  class IBlendConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IBlendConstraintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IBlendConstraintData*, "UnityEngine.Animations.Rigging", "IBlendConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IBlendConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  class IBlendConstraintData {
    public:
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_constrainedObject();
    // public UnityEngine.Transform get_sourceObjectA()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_sourceObjectA();
    // public UnityEngine.Transform get_sourceObjectB()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_sourceObjectB();
    // public System.Boolean get_maintainPositionOffsets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_maintainPositionOffsets();
    // public System.Boolean get_maintainRotationOffsets()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_maintainRotationOffsets();
    // public System.String get_blendPositionBoolProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_blendPositionBoolProperty();
    // public System.String get_blendRotationBoolProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_blendRotationBoolProperty();
    // public System.String get_positionWeightFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_positionWeightFloatProperty();
    // public System.String get_rotationWeightFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_rotationWeightFloatProperty();
  }; // UnityEngine.Animations.Rigging.IBlendConstraintData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_sourceObjectA
// Il2CppName: get_sourceObjectA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_sourceObjectA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_sourceObjectA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_sourceObjectB
// Il2CppName: get_sourceObjectB
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_sourceObjectB)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_sourceObjectB", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_maintainPositionOffsets
// Il2CppName: get_maintainPositionOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_maintainPositionOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_maintainPositionOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_maintainRotationOffsets
// Il2CppName: get_maintainRotationOffsets
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_maintainRotationOffsets)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_maintainRotationOffsets", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_blendPositionBoolProperty
// Il2CppName: get_blendPositionBoolProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_blendPositionBoolProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_blendPositionBoolProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_blendRotationBoolProperty
// Il2CppName: get_blendRotationBoolProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_blendRotationBoolProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_blendRotationBoolProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_positionWeightFloatProperty
// Il2CppName: get_positionWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_positionWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_positionWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IBlendConstraintData::get_rotationWeightFloatProperty
// Il2CppName: get_rotationWeightFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IBlendConstraintData::*)()>(&UnityEngine::Animations::Rigging::IBlendConstraintData::get_rotationWeightFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IBlendConstraintData*), "get_rotationWeightFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};