// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUIElementsUtility
  class IUIElementsUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::IUIElementsUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IUIElementsUtility*, "UnityEngine.UIElements", "IUIElementsUtility");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.IUIElementsUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class IUIElementsUtility {
    public:
    // public System.Boolean TakeCapture()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TakeCapture();
    // public System.Boolean ReleaseCapture()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ReleaseCapture();
    // public System.Boolean ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr, ref System.Boolean eventHandled)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ProcessEvent(int instanceID, ::System::IntPtr nativeEventPtr, ByRef<bool> eventHandled);
    // public System.Boolean CleanupRoots()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool CleanupRoots();
    // public System.Boolean EndContainerGUIFromException(System.Exception exception)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool EndContainerGUIFromException(::System::Exception* exception);
    // public System.Boolean MakeCurrentIMGUIContainerDirty()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool MakeCurrentIMGUIContainerDirty();
  }; // UnityEngine.UIElements.IUIElementsUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::TakeCapture
// Il2CppName: TakeCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)()>(&UnityEngine::UIElements::IUIElementsUtility::TakeCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "TakeCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::ReleaseCapture
// Il2CppName: ReleaseCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)()>(&UnityEngine::UIElements::IUIElementsUtility::ReleaseCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "ReleaseCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::ProcessEvent
// Il2CppName: ProcessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)(int, ::System::IntPtr, ByRef<bool>)>(&UnityEngine::UIElements::IUIElementsUtility::ProcessEvent)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nativeEventPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* eventHandled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "ProcessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID, nativeEventPtr, eventHandled});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::CleanupRoots
// Il2CppName: CleanupRoots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)()>(&UnityEngine::UIElements::IUIElementsUtility::CleanupRoots)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "CleanupRoots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::EndContainerGUIFromException
// Il2CppName: EndContainerGUIFromException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)(::System::Exception*)>(&UnityEngine::UIElements::IUIElementsUtility::EndContainerGUIFromException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "EndContainerGUIFromException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::IUIElementsUtility::MakeCurrentIMGUIContainerDirty
// Il2CppName: MakeCurrentIMGUIContainerDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::IUIElementsUtility::*)()>(&UnityEngine::UIElements::IUIElementsUtility::MakeCurrentIMGUIContainerDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::IUIElementsUtility*), "MakeCurrentIMGUIContainerDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
