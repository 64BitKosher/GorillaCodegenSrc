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
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: IExposedPropertyTable
  class IExposedPropertyTable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::IExposedPropertyTable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IExposedPropertyTable*, "UnityEngine", "IExposedPropertyTable");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.IExposedPropertyTable
  // [TokenAttribute] Offset: FFFFFFFF
  class IExposedPropertyTable {
    public:
    // public UnityEngine.Object GetReferenceValue(UnityEngine.PropertyName id, out System.Boolean idValid)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Object* GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid);
  }; // UnityEngine.IExposedPropertyTable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::IExposedPropertyTable::GetReferenceValue
// Il2CppName: GetReferenceValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (UnityEngine::IExposedPropertyTable::*)(::UnityEngine::PropertyName, ByRef<bool>)>(&UnityEngine::IExposedPropertyTable::GetReferenceValue)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("UnityEngine", "PropertyName")->byval_arg;
    static auto* idValid = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::IExposedPropertyTable*), "GetReferenceValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, idValid});
  }
};