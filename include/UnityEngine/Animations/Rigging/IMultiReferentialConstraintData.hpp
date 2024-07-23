// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // Forward declaring type: IMultiReferentialConstraintData
  class IMultiReferentialConstraintData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Animations::Rigging::IMultiReferentialConstraintData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Animations::Rigging::IMultiReferentialConstraintData*, "UnityEngine.Animations.Rigging", "IMultiReferentialConstraintData");
// Type namespace: UnityEngine.Animations.Rigging
namespace UnityEngine::Animations::Rigging {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Animations.Rigging.IMultiReferentialConstraintData
  // [TokenAttribute] Offset: FFFFFFFF
  class IMultiReferentialConstraintData {
    public:
    // public System.Int32 get_driverValue()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_driverValue();
    // public System.String get_driverIntProperty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_driverIntProperty();
    // public UnityEngine.Transform[] get_sourceObjects()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<::UnityEngine::Transform*> get_sourceObjects();
  }; // UnityEngine.Animations.Rigging.IMultiReferentialConstraintData
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_driverValue
// Il2CppName: get_driverValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_driverValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiReferentialConstraintData*), "get_driverValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_driverIntProperty
// Il2CppName: get_driverIntProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_driverIntProperty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiReferentialConstraintData*), "get_driverIntProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_sourceObjects
// Il2CppName: get_sourceObjects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Transform*> (UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::*)()>(&UnityEngine::Animations::Rigging::IMultiReferentialConstraintData::get_sourceObjects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Animations::Rigging::IMultiReferentialConstraintData*), "get_sourceObjects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
