// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::IAsyncStateMachine);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IAsyncStateMachine*, "System.Runtime.CompilerServices", "IAsyncStateMachine");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.IAsyncStateMachine
  // [TokenAttribute] Offset: FFFFFFFF
  class IAsyncStateMachine {
    public:
    // public System.Void MoveNext()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void MoveNext();
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // System.Runtime.CompilerServices.IAsyncStateMachine
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::IAsyncStateMachine::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::IAsyncStateMachine::*)()>(&System::Runtime::CompilerServices::IAsyncStateMachine::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::IAsyncStateMachine*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::IAsyncStateMachine::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::CompilerServices::IAsyncStateMachine::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&System::Runtime::CompilerServices::IAsyncStateMachine::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::IAsyncStateMachine*), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
