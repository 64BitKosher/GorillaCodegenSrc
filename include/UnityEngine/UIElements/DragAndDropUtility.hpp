// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IDragAndDrop
  class IDragAndDrop;
  // Forward declaring type: IPanel
  class IPanel;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DragAndDropUtility
  class DragAndDropUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DragAndDropUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DragAndDropUtility*, "UnityEngine.UIElements", "DragAndDropUtility");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DragAndDropUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class DragAndDropUtility : public ::Il2CppObject {
    public:
    // Get static field: static private System.Func`1<UnityEngine.UIElements.IDragAndDrop> s_MakeDragAndDropClientFunc
    static ::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* _get_s_MakeDragAndDropClientFunc();
    // Set static field: static private System.Func`1<UnityEngine.UIElements.IDragAndDrop> s_MakeDragAndDropClientFunc
    static void _set_s_MakeDragAndDropClientFunc(::System::Func_1<::UnityEngine::UIElements::IDragAndDrop*>* value);
    // Get static field: static private UnityEngine.UIElements.IDragAndDrop s_DragAndDropEditor
    static ::UnityEngine::UIElements::IDragAndDrop* _get_s_DragAndDropEditor();
    // Set static field: static private UnityEngine.UIElements.IDragAndDrop s_DragAndDropEditor
    static void _set_s_DragAndDropEditor(::UnityEngine::UIElements::IDragAndDrop* value);
    // Get static field: static private UnityEngine.UIElements.IDragAndDrop s_DragAndDropPlayMode
    static ::UnityEngine::UIElements::IDragAndDrop* _get_s_DragAndDropPlayMode();
    // Set static field: static private UnityEngine.UIElements.IDragAndDrop s_DragAndDropPlayMode
    static void _set_s_DragAndDropPlayMode(::UnityEngine::UIElements::IDragAndDrop* value);
    // static UnityEngine.UIElements.IDragAndDrop GetDragAndDrop(UnityEngine.UIElements.IPanel panel)
    // Offset: 0x563AB78
    static ::UnityEngine::UIElements::IDragAndDrop* GetDragAndDrop(::UnityEngine::UIElements::IPanel* panel);
  }; // UnityEngine.UIElements.DragAndDropUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop
// Il2CppName: GetDragAndDrop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IDragAndDrop* (*)(::UnityEngine::UIElements::IPanel*)>(&UnityEngine::UIElements::DragAndDropUtility::GetDragAndDrop)> {
  static const MethodInfo* get() {
    static auto* panel = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IPanel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::DragAndDropUtility*), "GetDragAndDrop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{panel});
  }
};