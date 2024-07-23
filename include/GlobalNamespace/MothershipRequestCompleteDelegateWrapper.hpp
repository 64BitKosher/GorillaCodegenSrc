// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Runtime.InteropServices.HandleRef
#include "System/Runtime/InteropServices/HandleRef.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MothershipResponse
  class MothershipResponse;
  // Forward declaring type: MothershipError
  class MothershipError;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MothershipRequestCompleteDelegateWrapper
  class MothershipRequestCompleteDelegateWrapper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipRequestCompleteDelegateWrapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipRequestCompleteDelegateWrapper*, "", "MothershipRequestCompleteDelegateWrapper");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: MothershipRequestCompleteDelegateWrapper
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipRequestCompleteDelegateWrapper : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Runtime.InteropServices.HandleRef swigCPtr
    // Size: 0x10
    // Offset: 0x10
    ::System::Runtime::InteropServices::HandleRef swigCPtr;
    // Field size check
    static_assert(sizeof(::System::Runtime::InteropServices::HandleRef) == 0x10);
    // protected System.Boolean swigCMemOwn
    // Size: 0x1
    // Offset: 0x20
    bool swigCMemOwn;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Runtime.InteropServices.HandleRef swigCPtr
    [[deprecated("Use field access instead!")]] ::System::Runtime::InteropServices::HandleRef& dyn_swigCPtr();
    // Get instance field reference: protected System.Boolean swigCMemOwn
    [[deprecated("Use field access instead!")]] bool& dyn_swigCMemOwn();
    // System.Void .ctor(System.IntPtr cPtr, System.Boolean cMemoryOwn)
    // Offset: 0x2676728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipRequestCompleteDelegateWrapper* New_ctor(::System::IntPtr cPtr, bool cMemoryOwn) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipRequestCompleteDelegateWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipRequestCompleteDelegateWrapper*, creationType>(cPtr, cMemoryOwn)));
    }
    // public System.Void Dispose()
    // Offset: 0x267C760
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x26769A4
    void Dispose(bool disposing);
    // public System.Void OnCompleteCallback(MothershipResponse response, System.Boolean wasSuccess, MothershipError error, System.IntPtr userData)
    // Offset: 0x267C7CC
    void OnCompleteCallback(::GlobalNamespace::MothershipResponse* response, bool wasSuccess, ::GlobalNamespace::MothershipError* error, ::System::IntPtr userData);
    // protected override System.Void Finalize()
    // Offset: 0x267C6C0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // MothershipRequestCompleteDelegateWrapper
  #pragma pack(pop)
  static check_size<sizeof(MothershipRequestCompleteDelegateWrapper), 32 + sizeof(bool)> __GlobalNamespace_MothershipRequestCompleteDelegateWrapperSizeCheck;
  static_assert(sizeof(MothershipRequestCompleteDelegateWrapper) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipRequestCompleteDelegateWrapper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipRequestCompleteDelegateWrapper::*)()>(&GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipRequestCompleteDelegateWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipRequestCompleteDelegateWrapper::*)(bool)>(&GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipRequestCompleteDelegateWrapper*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipRequestCompleteDelegateWrapper::OnCompleteCallback
// Il2CppName: OnCompleteCallback
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipRequestCompleteDelegateWrapper::*)(::GlobalNamespace::MothershipResponse*, bool, ::GlobalNamespace::MothershipError*, ::System::IntPtr)>(&GlobalNamespace::MothershipRequestCompleteDelegateWrapper::OnCompleteCallback)> {
  static const MethodInfo* get() {
    static auto* response = &::il2cpp_utils::GetClassFromName("", "MothershipResponse")->byval_arg;
    static auto* wasSuccess = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* error = &::il2cpp_utils::GetClassFromName("", "MothershipError")->byval_arg;
    static auto* userData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipRequestCompleteDelegateWrapper*), "OnCompleteCallback", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{response, wasSuccess, error, userData});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipRequestCompleteDelegateWrapper::*)()>(&GlobalNamespace::MothershipRequestCompleteDelegateWrapper::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipRequestCompleteDelegateWrapper*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
