// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GlobalDeactivatedSpawnRoot
  class GlobalDeactivatedSpawnRoot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GlobalDeactivatedSpawnRoot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GlobalDeactivatedSpawnRoot*, "", "GlobalDeactivatedSpawnRoot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GlobalDeactivatedSpawnRoot
  // [TokenAttribute] Offset: FFFFFFFF
  class GlobalDeactivatedSpawnRoot : public ::Il2CppObject {
    public:
    // Get static field: static private UnityEngine.Transform _xform
    static ::UnityEngine::Transform* _get__xform();
    // Set static field: static private UnityEngine.Transform _xform
    static void _set__xform(::UnityEngine::Transform* value);
    // static public UnityEngine.Transform GetOrCreate()
    // Offset: 0x2796DEC
    static ::UnityEngine::Transform* GetOrCreate();
  }; // GlobalDeactivatedSpawnRoot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GlobalDeactivatedSpawnRoot::GetOrCreate
// Il2CppName: GetOrCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (*)()>(&GlobalNamespace::GlobalDeactivatedSpawnRoot::GetOrCreate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GlobalDeactivatedSpawnRoot*), "GetOrCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
