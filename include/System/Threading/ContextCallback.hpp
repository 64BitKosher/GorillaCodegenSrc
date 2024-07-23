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
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: ContextCallback
  class ContextCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::ContextCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::ContextCallback*, "System.Threading", "ContextCallback");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.ContextCallback
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class ContextCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x46C43B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ContextCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::ContextCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ContextCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Object state)
    // Offset: 0x46C71E4
    void Invoke(::Il2CppObject* state);
  }; // System.Threading.ContextCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::ContextCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::ContextCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::ContextCallback::*)(::Il2CppObject*)>(&System::Threading::ContextCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::ContextCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
