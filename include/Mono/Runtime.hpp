// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Mono
namespace Mono {
  // Forward declaring type: Runtime
  class Runtime;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Runtime);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Runtime*, "Mono", "Runtime");
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Runtime
  // [TokenAttribute] Offset: FFFFFFFF
  class Runtime : public ::Il2CppObject {
    public:
    // Get static field: static private System.Object dump
    static ::Il2CppObject* _get_dump();
    // Set static field: static private System.Object dump
    static void _set_dump(::Il2CppObject* value);
    // static private System.Void .cctor()
    // Offset: 0x44A0D7C
    static void _cctor();
  }; // Mono.Runtime
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Runtime::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Runtime::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Runtime*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};