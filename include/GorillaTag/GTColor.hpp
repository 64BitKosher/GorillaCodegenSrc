// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag
namespace GorillaTag {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: GTColor
  class GTColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GTColor);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GTColor*, "GorillaTag", "GTColor");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GTColor
  // [TokenAttribute] Offset: FFFFFFFF
  class GTColor : public ::Il2CppObject {
    public:
    // Nested type: ::GorillaTag::GTColor::HSVRanges
    struct HSVRanges;
    // static public UnityEngine.Color RandomHSV(GorillaTag.GTColor/HSVRanges ranges)
    // Offset: 0x2879644
    static ::UnityEngine::Color RandomHSV(::GorillaTag::GTColor::HSVRanges ranges);
  }; // GorillaTag.GTColor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GTColor::RandomHSV
// Il2CppName: RandomHSV
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (*)(::GorillaTag::GTColor::HSVRanges)>(&GorillaTag::GTColor::RandomHSV)> {
  static const MethodInfo* get() {
    static auto* ranges = &::il2cpp_utils::GetClassFromName("GorillaTag", "GTColor/HSVRanges")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GTColor*), "RandomHSV", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ranges});
  }
};
