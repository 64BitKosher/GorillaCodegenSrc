// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: ConfiguredTaskAwaiter because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConfiguredTaskAwaitable
  struct ConfiguredTaskAwaitable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ConfiguredTaskAwaitable/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter;
    // Size: 0x9
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct ConfiguredTaskAwaiter/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
      public:
      public:
      // readonly System.Threading.Tasks.Task m_task
      // Size: 0x8
      // Offset: 0x0
      ::System::Threading::Tasks::Task* m_task;
      // Field size check
      static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
      // readonly System.Boolean m_continueOnCapturedContext
      // Size: 0x1
      // Offset: 0x8
      bool m_continueOnCapturedContext;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      constexpr ConfiguredTaskAwaiter(::System::Threading::Tasks::Task* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) noexcept : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion
      operator ::System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
        return *reinterpret_cast<::System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
      }
      // Get instance field reference: readonly System.Threading.Tasks.Task m_task
      [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn_m_task();
      // Get instance field reference: readonly System.Boolean m_continueOnCapturedContext
      [[deprecated("Use field access instead!")]] bool& dyn_m_continueOnCapturedContext();
      // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
      // Offset: 0x4578498
      // ABORTED: conflicts with another method.  ConfiguredTaskAwaiter(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);
      // public System.Boolean get_IsCompleted()
      // Offset: 0x45784CC
      bool get_IsCompleted();
      // public System.Void OnCompleted(System.Action continuation)
      // Offset: 0x4577004
      void OnCompleted(::System::Action* continuation);
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0x45771C4
      void UnsafeOnCompleted(::System::Action* continuation);
      // public System.Void GetResult()
      // Offset: 0x45784E8
      void GetResult();
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    #pragma pack(pop)
    static check_size<sizeof(ConfiguredTaskAwaitable::ConfiguredTaskAwaiter), 8 + sizeof(bool)> __System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiterSizeCheck;
    static_assert(sizeof(ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter m_configuredTaskAwaiter
    // Size: 0x9
    // Offset: 0x0
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Field size check
    static_assert(sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    public:
    // Creating value type constructor for type: ConfiguredTaskAwaitable
    constexpr ConfiguredTaskAwaitable(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) noexcept : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    constexpr operator ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter() const noexcept {
      return m_configuredTaskAwaiter;
    }
    // Get instance field reference: private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter m_configuredTaskAwaiter
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter& dyn_m_configuredTaskAwaiter();
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
    // Offset: 0x4578450
    ConfiguredTaskAwaitable(::System::Threading::Tasks::Task* task, bool continueOnCapturedContext);
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter GetAwaiter()
    // Offset: 0x45784C0
    ::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable
  #pragma pack(pop)
  static check_size<sizeof(ConfiguredTaskAwaitable), 0 + sizeof(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter)> __System_Runtime_CompilerServices_ConfiguredTaskAwaitableSizeCheck;
  static_assert(sizeof(ConfiguredTaskAwaitable) == 0x9);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaitable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetAwaiter
// Il2CppName: GetAwaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter (System::Runtime::CompilerServices::ConfiguredTaskAwaitable::*)()>(&System::Runtime::CompilerServices::ConfiguredTaskAwaitable::GetAwaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable), "GetAwaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};