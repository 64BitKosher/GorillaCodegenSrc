// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Forward declaring type: YogaConstants
  class YogaConstants;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Yoga::YogaConstants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaConstants*, "UnityEngine.Yoga", "YogaConstants");
// Type namespace: UnityEngine.Yoga
namespace UnityEngine::Yoga {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Yoga.YogaConstants
  // [TokenAttribute] Offset: FFFFFFFF
  class YogaConstants : public ::Il2CppObject {
    public:
    // static public System.Boolean IsUndefined(System.Single value)
    // Offset: 0x558EA34
    static bool IsUndefined(float value);
  }; // UnityEngine.Yoga.YogaConstants
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Yoga::YogaConstants::IsUndefined
// Il2CppName: IsUndefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&UnityEngine::Yoga::YogaConstants::IsUndefined)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Yoga::YogaConstants*), "IsUndefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
