// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
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
  // Forward declaring type: AssemblyLoadEventArgs
  class AssemblyLoadEventArgs;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: AssemblyLoadEventHandler
  class AssemblyLoadEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::AssemblyLoadEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventHandler*, "System", "AssemblyLoadEventHandler");
// Type namespace: System
namespace System {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.AssemblyLoadEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class AssemblyLoadEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x45BA6B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AssemblyLoadEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::AssemblyLoadEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AssemblyLoadEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object sender, System.AssemblyLoadEventArgs args)
    // Offset: 0x45BA7C0
    void Invoke(::Il2CppObject* sender, ::System::AssemblyLoadEventArgs* args);
  }; // System.AssemblyLoadEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::AssemblyLoadEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::AssemblyLoadEventHandler::*)(::Il2CppObject*, ::System::AssemblyLoadEventArgs*)>(&System::AssemblyLoadEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* sender = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &::il2cpp_utils::GetClassFromName("System", "AssemblyLoadEventArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::AssemblyLoadEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sender, args});
  }
};
