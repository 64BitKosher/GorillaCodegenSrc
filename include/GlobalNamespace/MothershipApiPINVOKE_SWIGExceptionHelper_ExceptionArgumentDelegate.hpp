// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: MothershipApiPINVOKE/SWIGExceptionHelper
#include "GlobalNamespace/MothershipApiPINVOKE_SWIGExceptionHelper.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*, "", "MothershipApiPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: MothershipApiPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x267A750
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.String message, System.String paramName)
    // Offset: 0x267A818
    void Invoke(::StringW message, ::StringW paramName);
  }; // MothershipApiPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::*)(::StringW, ::StringW)>(&GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate::Invoke)> {
  static const MethodInfo* get() {
    static auto* message = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MothershipApiPINVOKE::SWIGExceptionHelper::ExceptionArgumentDelegate*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message, paramName});
  }
};
