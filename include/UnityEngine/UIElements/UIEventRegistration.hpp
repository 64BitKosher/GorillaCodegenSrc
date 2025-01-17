// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IUIElementsUtility
  class IUIElementsUtility;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UIEventRegistration
  class UIEventRegistration;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UIEventRegistration);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIEventRegistration*, "UnityEngine.UIElements", "UIEventRegistration");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UIEventRegistration
  // [TokenAttribute] Offset: FFFFFFFF
  class UIEventRegistration : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::UIElements::UIEventRegistration::$$c
    class $$c;
    // Get static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.IUIElementsUtility> s_Utilities
    static ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* _get_s_Utilities();
    // Set static field: static private System.Collections.Generic.List`1<UnityEngine.UIElements.IUIElementsUtility> s_Utilities
    static void _set_s_Utilities(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IUIElementsUtility*>* value);
    // static private System.Void .cctor()
    // Offset: 0x56C117C
    static void _cctor();
    // static System.Void RegisterUIElementSystem(UnityEngine.UIElements.IUIElementsUtility utility)
    // Offset: 0x56C168C
    static void RegisterUIElementSystem(::UnityEngine::UIElements::IUIElementsUtility* utility);
    // static private System.Void TakeCapture()
    // Offset: 0x56C1710
    static void TakeCapture();
    // static private System.Void ReleaseCapture()
    // Offset: 0x56C18E8
    static void ReleaseCapture();
    // static private System.Boolean EndContainerGUIFromException(System.Exception exception)
    // Offset: 0x56C1AC4
    static bool EndContainerGUIFromException(::System::Exception* exception);
    // static private System.Boolean ProcessEvent(System.Int32 instanceID, System.IntPtr nativeEventPtr)
    // Offset: 0x56C1CDC
    static bool ProcessEvent(int instanceID, ::System::IntPtr nativeEventPtr);
    // static private System.Void CleanupRoots()
    // Offset: 0x56C1EF0
    static void CleanupRoots();
    // static System.Void MakeCurrentIMGUIContainerDirty()
    // Offset: 0x56C20CC
    static void MakeCurrentIMGUIContainerDirty();
  }; // UnityEngine.UIElements.UIEventRegistration
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIEventRegistration::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::RegisterUIElementSystem
// Il2CppName: RegisterUIElementSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IUIElementsUtility*)>(&UnityEngine::UIElements::UIEventRegistration::RegisterUIElementSystem)> {
  static const MethodInfo* get() {
    static auto* utility = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IUIElementsUtility")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "RegisterUIElementSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{utility});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::TakeCapture
// Il2CppName: TakeCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIEventRegistration::TakeCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "TakeCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::ReleaseCapture
// Il2CppName: ReleaseCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIEventRegistration::ReleaseCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "ReleaseCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::EndContainerGUIFromException
// Il2CppName: EndContainerGUIFromException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Exception*)>(&UnityEngine::UIElements::UIEventRegistration::EndContainerGUIFromException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "EndContainerGUIFromException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::ProcessEvent
// Il2CppName: ProcessEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, ::System::IntPtr)>(&UnityEngine::UIElements::UIEventRegistration::ProcessEvent)> {
  static const MethodInfo* get() {
    static auto* instanceID = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* nativeEventPtr = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "ProcessEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{instanceID, nativeEventPtr});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::CleanupRoots
// Il2CppName: CleanupRoots
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIEventRegistration::CleanupRoots)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "CleanupRoots", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIEventRegistration::MakeCurrentIMGUIContainerDirty
// Il2CppName: MakeCurrentIMGUIContainerDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UIEventRegistration::MakeCurrentIMGUIContainerDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIEventRegistration*), "MakeCurrentIMGUIContainerDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
