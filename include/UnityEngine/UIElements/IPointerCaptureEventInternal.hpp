// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IPointerCaptureEventInternal
  class IPointerCaptureEventInternal;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IPointerCaptureEventInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IPointerCaptureEventInternal*, "UnityEngine.UIElements", "IPointerCaptureEventInternal");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IPointerCaptureEventInternal
  // [TokenAttribute] Offset: FFFFFFFF
  class IPointerCaptureEventInternal {
    public:
    // public System.Int32 get_pointerId()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_pointerId();
  }; // UnityEngine.UIElements.IPointerCaptureEventInternal
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId
// Il2CppName: get_pointerId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::IPointerCaptureEventInternal::*)()>(&UnityEngine::UIElements::IPointerCaptureEventInternal::get_pointerId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IPointerCaptureEventInternal*), "get_pointerId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
