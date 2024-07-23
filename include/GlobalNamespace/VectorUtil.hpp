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
  // Forward declaring type: Vector4
  struct Vector4;
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: VectorUtil
  class VectorUtil;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::VectorUtil);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VectorUtil*, "", "VectorUtil");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VectorUtil
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class VectorUtil : public ::Il2CppObject {
    public:
    // static public UnityEngine.Vector4 ToVector(UnityEngine.Rect rect)
    // Offset: 0x292A3B4
    static ::UnityEngine::Vector4 ToVector(::UnityEngine::Rect rect);
  }; // VectorUtil
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::VectorUtil::ToVector
// Il2CppName: ToVector
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (*)(::UnityEngine::Rect)>(&GlobalNamespace::VectorUtil::ToVector)> {
  static const MethodInfo* get() {
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::VectorUtil*), "ToVector", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rect});
  }
};
