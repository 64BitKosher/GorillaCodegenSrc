// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: AsyncTaskCache
  class AsyncTaskCache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncTaskCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskCache*, "System.Runtime.CompilerServices", "AsyncTaskCache");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskCache
  // [TokenAttribute] Offset: FFFFFFFF
  class AsyncTaskCache : public ::Il2CppObject {
    public:
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> TrueTask
    static ::System::Threading::Tasks::Task_1<bool>* _get_TrueTask();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> TrueTask
    static void _set_TrueTask(::System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> FalseTask
    static ::System::Threading::Tasks::Task_1<bool>* _get_FalseTask();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Boolean> FalseTask
    static void _set_FalseTask(::System::Threading::Tasks::Task_1<bool>* value);
    // Get static field: static readonly System.Threading.Tasks.Task`1<System.Int32>[] Int32Tasks
    static ::ArrayW<::System::Threading::Tasks::Task_1<int>*> _get_Int32Tasks();
    // Set static field: static readonly System.Threading.Tasks.Task`1<System.Int32>[] Int32Tasks
    static void _set_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int>*> value);
    // static private System.Threading.Tasks.Task`1<System.Int32>[] CreateInt32Tasks()
    // Offset: 0x4578C18
    static ::ArrayW<::System::Threading::Tasks::Task_1<int>*> CreateInt32Tasks();
    // static System.Threading.Tasks.Task`1<TResult> CreateCacheableTask(TResult result)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TResult>
    static ::System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::AsyncTaskCache::CreateCacheableTask");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "AsyncTaskCache", "CreateCacheableTask", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(result)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, result);
    }
    // static private System.Void .cctor()
    // Offset: 0x4578D38
    static void _cctor();
  }; // System.Runtime.CompilerServices.AsyncTaskCache
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks
// Il2CppName: CreateInt32Tasks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Threading::Tasks::Task_1<int>*> (*)()>(&System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskCache*), "CreateInt32Tasks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskCache::CreateCacheableTask
// Il2CppName: CreateCacheableTask
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::AsyncTaskCache::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::CompilerServices::AsyncTaskCache::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::AsyncTaskCache*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
