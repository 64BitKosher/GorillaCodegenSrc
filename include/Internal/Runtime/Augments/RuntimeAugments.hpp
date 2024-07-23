// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Internal::Runtime::Augments
namespace Internal::Runtime::Augments {
  // Forward declaring type: ReflectionExecutionDomainCallbacks
  class ReflectionExecutionDomainCallbacks;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Internal.Runtime.Augments
namespace Internal::Runtime::Augments {
  // Forward declaring type: RuntimeAugments
  class RuntimeAugments;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Internal::Runtime::Augments::RuntimeAugments);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::RuntimeAugments*, "Internal.Runtime.Augments", "RuntimeAugments");
// Type namespace: Internal.Runtime.Augments
namespace Internal::Runtime::Augments {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Internal.Runtime.Augments.RuntimeAugments
  // [TokenAttribute] Offset: FFFFFFFF
  class RuntimeAugments : public ::Il2CppObject {
    public:
    // Get static field: static private Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks s_reflectionExecutionDomainCallbacks
    static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* _get_s_reflectionExecutionDomainCallbacks();
    // Set static field: static private Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks s_reflectionExecutionDomainCallbacks
    static void _set_s_reflectionExecutionDomainCallbacks(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* value);
    // static public System.Void ReportUnhandledException(System.Exception exception)
    // Offset: 0x44BF26C
    static void ReportUnhandledException(::System::Exception* exception);
    // static Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks get_Callbacks()
    // Offset: 0x44BF28C
    static ::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* get_Callbacks();
    // static private System.Void .cctor()
    // Offset: 0x44BF2E4
    static void _cctor();
  }; // Internal.Runtime.Augments.RuntimeAugments
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException
// Il2CppName: ReportUnhandledException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&Internal::Runtime::Augments::RuntimeAugments::ReportUnhandledException)> {
  static const MethodInfo* get() {
    static auto* exception = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Internal::Runtime::Augments::RuntimeAugments*), "ReportUnhandledException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exception});
  }
};
// Writing MetadataGetter for method: Internal::Runtime::Augments::RuntimeAugments::get_Callbacks
// Il2CppName: get_Callbacks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks* (*)()>(&Internal::Runtime::Augments::RuntimeAugments::get_Callbacks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Internal::Runtime::Augments::RuntimeAugments*), "get_Callbacks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Internal::Runtime::Augments::RuntimeAugments::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Internal::Runtime::Augments::RuntimeAugments::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Internal::Runtime::Augments::RuntimeAugments*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
