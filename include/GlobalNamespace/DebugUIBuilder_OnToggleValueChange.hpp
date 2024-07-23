// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DebugUIBuilder
#include "GlobalNamespace/DebugUIBuilder.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugUIBuilder::OnToggleValueChange);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugUIBuilder::OnToggleValueChange*, "", "DebugUIBuilder/OnToggleValueChange");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: DebugUIBuilder/OnToggleValueChange
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUIBuilder::OnToggleValueChange : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x291E118
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUIBuilder::OnToggleValueChange* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugUIBuilder::OnToggleValueChange::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUIBuilder::OnToggleValueChange*, creationType>(object, method)));
    }
    // public System.Void Invoke(UnityEngine.UI.Toggle t)
    // Offset: 0x291E220
    void Invoke(::UnityEngine::UI::Toggle* t);
    // public System.IAsyncResult BeginInvoke(UnityEngine.UI.Toggle t, System.AsyncCallback callback, System.Object object)
    // Offset: 0x291E234
    ::System::IAsyncResult* BeginInvoke(::UnityEngine::UI::Toggle* t, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x291E254
    void EndInvoke(::System::IAsyncResult* result);
  }; // DebugUIBuilder/OnToggleValueChange
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnToggleValueChange::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnToggleValueChange::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::OnToggleValueChange::*)(::UnityEngine::UI::Toggle*)>(&GlobalNamespace::DebugUIBuilder::OnToggleValueChange::Invoke)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnToggleValueChange*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnToggleValueChange::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::DebugUIBuilder::OnToggleValueChange::*)(::UnityEngine::UI::Toggle*, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::DebugUIBuilder::OnToggleValueChange::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "Toggle")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnToggleValueChange*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnToggleValueChange::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::OnToggleValueChange::*)(::System::IAsyncResult*)>(&GlobalNamespace::DebugUIBuilder::OnToggleValueChange::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnToggleValueChange*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
