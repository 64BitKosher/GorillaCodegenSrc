// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Unity.UnityTls/unitytls_interface_struct
#include "Mono/Unity/UnityTls_unitytls_interface_struct.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: Mono.Unity.UnityTls
#include "Mono/Unity/UnityTls.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*, "Mono.Unity", "UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t");
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4BF28A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*, creationType>(object, method)));
    }
    // public System.IntPtr Invoke(Mono.Unity.UnityTls/unitytls_tlsctx* ctx, System.Byte* buffer, System.IntPtr bufferLen, Mono.Unity.UnityTls/unitytls_errorstate* errorState)
    // Offset: 0x4BF2954
    ::System::IntPtr Invoke(::Mono::Unity::UnityTls::unitytls_tlsctx* ctx, uint8_t* buffer, ::System::IntPtr bufferLen, ::Mono::Unity::UnityTls::unitytls_errorstate* errorState);
  }; // Mono.Unity.UnityTls/unitytls_interface_struct/unitytls_tlsctx_read_t
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::*)(::Mono::Unity::UnityTls::unitytls_tlsctx*, uint8_t*, ::System::IntPtr, ::Mono::Unity::UnityTls::unitytls_errorstate*)>(&Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t::Invoke)> {
  static const MethodInfo* get() {
    static auto* ctx = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_tlsctx"))->byval_arg;
    static auto* buffer = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* bufferLen = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* errorState = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Mono.Unity", "UnityTls/unitytls_errorstate"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Unity::UnityTls::unitytls_interface_struct::unitytls_tlsctx_read_t*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx, buffer, bufferLen, errorState});
  }
};
