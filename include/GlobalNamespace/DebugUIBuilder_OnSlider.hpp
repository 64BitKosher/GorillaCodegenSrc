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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::DebugUIBuilder::OnSlider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DebugUIBuilder::OnSlider*, "", "DebugUIBuilder/OnSlider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: DebugUIBuilder/OnSlider
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUIBuilder::OnSlider : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x291E260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUIBuilder::OnSlider* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DebugUIBuilder::OnSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUIBuilder::OnSlider*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Single f)
    // Offset: 0x291E300
    void Invoke(float f);
    // public System.IAsyncResult BeginInvoke(System.Single f, System.AsyncCallback callback, System.Object object)
    // Offset: 0x291E314
    ::System::IAsyncResult* BeginInvoke(float f, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x291E398
    void EndInvoke(::System::IAsyncResult* result);
  }; // DebugUIBuilder/OnSlider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnSlider::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::OnSlider::*)(float)>(&GlobalNamespace::DebugUIBuilder::OnSlider::Invoke)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnSlider*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnSlider::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (GlobalNamespace::DebugUIBuilder::OnSlider::*)(float, ::System::AsyncCallback*, ::Il2CppObject*)>(&GlobalNamespace::DebugUIBuilder::OnSlider::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnSlider*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f, callback, object});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::DebugUIBuilder::OnSlider::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::DebugUIBuilder::OnSlider::*)(::System::IAsyncResult*)>(&GlobalNamespace::DebugUIBuilder::OnSlider::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::DebugUIBuilder::OnSlider*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
