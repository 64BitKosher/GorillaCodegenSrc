// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Id128
  struct Id128;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Hash128
  struct Hash128;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: Id128Ext
  class Id128Ext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Id128Ext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Id128Ext*, "", "Id128Ext");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Id128Ext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Id128Ext : public ::Il2CppObject {
    public:
    // static public Id128 ToId128(UnityEngine.Hash128 h)
    // Offset: 0x274E7B4
    static ::GlobalNamespace::Id128 ToId128(::UnityEngine::Hash128 h);
  }; // Id128Ext
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Id128Ext::ToId128
// Il2CppName: ToId128
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::Id128 (*)(::UnityEngine::Hash128)>(&GlobalNamespace::Id128Ext::ToId128)> {
  static const MethodInfo* get() {
    static auto* h = &::il2cpp_utils::GetClassFromName("UnityEngine", "Hash128")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Id128Ext*), "ToId128", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{h});
  }
};
