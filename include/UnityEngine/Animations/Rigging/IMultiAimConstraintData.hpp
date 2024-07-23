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
  // Forward declaring type: Vector3
  struct Vector3;
}
// Forward declaring namespace: UnityEngine::Animations::Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: WeightedTransformArray
  struct WeightedTransformArray;
}
// Completed forward declares
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Forward declaring type: IMultiAimConstraintData
  class IMultiAimConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IMultiAimConstraintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IMultiAimConstraintData*, "UnityEngine.Animations.Rigging", "IMultiAimConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IMultiAimConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  class IMultiAimConstraintData {
    public:
    // public UnityEngine.Transform get_constrainedObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_constrainedObject();
    // public UnityEngine.Animations.Rigging.WeightedTransformArray get_sourceObjects()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Animations::Rigging::WeightedTransformArray get_sourceObjects();
    // public System.Boolean get_maintainOffset()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_maintainOffset();
    // public UnityEngine.Vector3 get_aimAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 get_aimAxis();
    // public UnityEngine.Vector3 get_upAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 get_upAxis();
    // public System.Int32 get_worldUpType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_worldUpType();
    // public UnityEngine.Vector3 get_worldUpAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 get_worldUpAxis();
    // public UnityEngine.Transform get_worldUpObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_worldUpObject();
    // public System.Boolean get_constrainedXAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_constrainedXAxis();
    // public System.Boolean get_constrainedYAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_constrainedYAxis();
    // public System.Boolean get_constrainedZAxis()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_constrainedZAxis();
    // public System.String get_offsetVector3Property()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_offsetVector3Property();
    // public System.String get_minLimitFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_minLimitFloatProperty();
    // public System.String get_maxLimitFloatProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_maxLimitFloatProperty();
    // public System.String get_sourceObjectsProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_sourceObjectsProperty();
  }; // UnityEngine.Animations.Rigging.IMultiAimConstraintData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedObject
// Il2CppName: get_constrainedObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_constrainedObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_sourceObjects
// Il2CppName: get_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Animations::Rigging::WeightedTransformArray (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_sourceObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_maintainOffset
// Il2CppName: get_maintainOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_maintainOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_maintainOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_aimAxis
// Il2CppName: get_aimAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_aimAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_aimAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_upAxis
// Il2CppName: get_upAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_upAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_upAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpType
// Il2CppName: get_worldUpType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_worldUpType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpAxis
// Il2CppName: get_worldUpAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_worldUpAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpObject
// Il2CppName: get_worldUpObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_worldUpObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_worldUpObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedXAxis
// Il2CppName: get_constrainedXAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedXAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_constrainedXAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedYAxis
// Il2CppName: get_constrainedYAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedYAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_constrainedYAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedZAxis
// Il2CppName: get_constrainedZAxis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_constrainedZAxis)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_constrainedZAxis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_offsetVector3Property
// Il2CppName: get_offsetVector3Property
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_offsetVector3Property)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_offsetVector3Property", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_minLimitFloatProperty
// Il2CppName: get_minLimitFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_minLimitFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_minLimitFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_maxLimitFloatProperty
// Il2CppName: get_maxLimitFloatProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_maxLimitFloatProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_maxLimitFloatProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_sourceObjectsProperty
// Il2CppName: get_sourceObjectsProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IMultiAimConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiAimConstraintData::get_sourceObjectsProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiAimConstraintData*), "get_sourceObjectsProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
