// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Unity::Jobs
namespace Unity::Jobs {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Forward declaring type: EarlyInitHelpers
  class EarlyInitHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Jobs::EarlyInitHelpers);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::EarlyInitHelpers*, "Unity.Jobs", "EarlyInitHelpers");
// Type namespace: Unity.Jobs
namespace Unity::Jobs {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Jobs.EarlyInitHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class EarlyInitHelpers : public ::Il2CppObject {
    public:
    // Nested type: ::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction
    class EarlyInitFunction;
    // Get static field: static private System.Collections.Generic.List`1<Unity.Jobs.EarlyInitHelpers/EarlyInitFunction> s_PendingDelegates
    static ::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction*>* _get_s_PendingDelegates();
    // Set static field: static private System.Collections.Generic.List`1<Unity.Jobs.EarlyInitHelpers/EarlyInitFunction> s_PendingDelegates
    static void _set_s_PendingDelegates(::System::Collections::Generic::List_1<::Unity::Jobs::EarlyInitHelpers::EarlyInitFunction*>* value);
    // static private System.Void .cctor()
    // Offset: 0x5085B5C
    static void _cctor();
    // static public System.Void FlushEarlyInits()
    // Offset: 0x5085B60
    static void FlushEarlyInits();
    // static public System.Void JobReflectionDataCreationFailed(System.Exception ex)
    // Offset: 0x5085D18
    static void JobReflectionDataCreationFailed(::System::Exception* ex);
  }; // Unity.Jobs.EarlyInitHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Jobs::EarlyInitHelpers::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Jobs::EarlyInitHelpers::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::EarlyInitHelpers*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Jobs::EarlyInitHelpers::FlushEarlyInits
// Il2CppName: FlushEarlyInits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Jobs::EarlyInitHelpers::FlushEarlyInits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::EarlyInitHelpers*), "FlushEarlyInits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed
// Il2CppName: JobReflectionDataCreationFailed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*)>(&Unity::Jobs::EarlyInitHelpers::JobReflectionDataCreationFailed)> {
  static const MethodInfo* get() {
    static auto* ex = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Jobs::EarlyInitHelpers*), "JobReflectionDataCreationFailed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ex});
  }
};