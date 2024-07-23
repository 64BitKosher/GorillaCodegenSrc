// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Threading.Tasks.ValueTask
#include "System/Threading/Tasks/ValueTask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: ConfiguredValueTaskAwaitable
  struct ConfiguredValueTaskAwaitable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredValueTaskAwaitable");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0xB
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct ConfiguredValueTaskAwaitable/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter
    struct ConfiguredValueTaskAwaiter;
    public:
    // private readonly System.Threading.Tasks.ValueTask _value
    // Size: 0xB
    // Offset: 0x0
    ::System::Threading::Tasks::ValueTask value;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::ValueTask) == 0xB);
    public:
    // Creating value type constructor for type: ConfiguredValueTaskAwaitable
    constexpr ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator ::System::Threading::Tasks::ValueTask
    constexpr operator ::System::Threading::Tasks::ValueTask() const noexcept {
      return value;
    }
    // Get instance field reference: private readonly System.Threading.Tasks.ValueTask _value
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::ValueTask& dyn__value();
    // System.Void .ctor(System.Threading.Tasks.ValueTask value)
    // Offset: 0x4576E00
    // ABORTED: conflicts with another method.  ConfiguredValueTaskAwaitable(::System::Threading::Tasks::ValueTask value);
    // public System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable/ConfiguredValueTaskAwaiter GetAwaiter()
    // Offset: 0x4576E0C
    ::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.ConfiguredValueTaskAwaitable
  #pragma pack(pop)
  static check_size<sizeof(ConfiguredValueTaskAwaitable), 0 + sizeof(::System::Threading::Tasks::ValueTask)> __System_Runtime_CompilerServices_ConfiguredValueTaskAwaitableSizeCheck;
  static_assert(sizeof(ConfiguredValueTaskAwaitable) == 0xB);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaitable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter
// Il2CppName: GetAwaiter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::ConfiguredValueTaskAwaiter (System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::*)()>(&System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable::GetAwaiter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::ConfiguredValueTaskAwaitable), "GetAwaiter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};