// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AuthRefreshRequiredDelegateWrapper
#include "GlobalNamespace/AuthRefreshRequiredDelegateWrapper.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0*, "", "AuthRefreshRequiredDelegateWrapper/SwigDelegateAuthRefreshRequiredDelegateWrapper_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: AuthRefreshRequiredDelegateWrapper/SwigDelegateAuthRefreshRequiredDelegateWrapper_0
  // [TokenAttribute] Offset: FFFFFFFF
  class AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x2675890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String arg0)
    // Offset: 0x2675ADC
    void Invoke(::StringW arg0);
  }; // AuthRefreshRequiredDelegateWrapper/SwigDelegateAuthRefreshRequiredDelegateWrapper_0
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0::*)(::StringW)>(&GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0::Invoke)> {
  static const MethodInfo* get() {
    static auto* arg0 = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AuthRefreshRequiredDelegateWrapper::SwigDelegateAuthRefreshRequiredDelegateWrapper_0*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{arg0});
  }
};
