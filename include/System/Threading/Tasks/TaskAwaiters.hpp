// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: ForceAsyncAwaiter
  struct ForceAsyncAwaiter;
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskAwaiters
  class TaskAwaiters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::TaskAwaiters);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::TaskAwaiters*, "System.Threading.Tasks", "TaskAwaiters");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.TaskAwaiters
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class TaskAwaiters : public ::Il2CppObject {
    public:
    // static public System.Threading.Tasks.ForceAsyncAwaiter ForceAsync(System.Threading.Tasks.Task task)
    // Offset: 0x46D2B3C
    static ::System::Threading::Tasks::ForceAsyncAwaiter ForceAsync(::System::Threading::Tasks::Task* task);
  }; // System.Threading.Tasks.TaskAwaiters
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::TaskAwaiters::ForceAsync
// Il2CppName: ForceAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::ForceAsyncAwaiter (*)(::System::Threading::Tasks::Task*)>(&System::Threading::Tasks::TaskAwaiters::ForceAsync)> {
  static const MethodInfo* get() {
    static auto* task = &::il2cpp_utils::GetClassFromName("System.Threading.Tasks", "Task")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::TaskAwaiters*), "ForceAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{task});
  }
};
