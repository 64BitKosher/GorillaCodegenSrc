// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleValueKeyword
  struct StyleValueKeyword;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: StyleValueKeywordExtension
  class StyleValueKeywordExtension;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StyleValueKeywordExtension);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleValueKeywordExtension*, "UnityEngine.UIElements", "StyleValueKeywordExtension");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.StyleValueKeywordExtension
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StyleValueKeywordExtension : public ::Il2CppObject {
    public:
    // static public System.String ToUssString(UnityEngine.UIElements.StyleValueKeyword svk)
    // Offset: 0x56B26B0
    static ::StringW ToUssString(::UnityEngine::UIElements::StyleValueKeyword svk);
  }; // UnityEngine.UIElements.StyleValueKeywordExtension
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString
// Il2CppName: ToUssString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::UIElements::StyleValueKeyword)>(&UnityEngine::UIElements::StyleValueKeywordExtension::ToUssString)> {
  static const MethodInfo* get() {
    static auto* svk = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "StyleValueKeyword")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StyleValueKeywordExtension*), "ToUssString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{svk});
  }
};
