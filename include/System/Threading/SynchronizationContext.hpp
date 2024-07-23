// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.SynchronizationContextProperties
#include "System/Threading/SynchronizationContextProperties.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: SynchronizationContext
  class SynchronizationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::SynchronizationContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SynchronizationContext*, "System.Threading", "SynchronizationContext");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.SynchronizationContext
  // [TokenAttribute] Offset: FFFFFFFF
  class SynchronizationContext : public ::Il2CppObject {
    public:
    public:
    // private System.Threading.SynchronizationContextProperties _props
    // Size: 0x4
    // Offset: 0x10
    ::System::Threading::SynchronizationContextProperties props;
    // Field size check
    static_assert(sizeof(::System::Threading::SynchronizationContextProperties) == 0x4);
    public:
    // Creating conversion operator: operator ::System::Threading::SynchronizationContextProperties
    constexpr operator ::System::Threading::SynchronizationContextProperties() const noexcept {
      return props;
    }
    // Get static field: static private System.Type s_cachedPreparedType1
    static ::System::Type* _get_s_cachedPreparedType1();
    // Set static field: static private System.Type s_cachedPreparedType1
    static void _set_s_cachedPreparedType1(::System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType2
    static ::System::Type* _get_s_cachedPreparedType2();
    // Set static field: static private System.Type s_cachedPreparedType2
    static void _set_s_cachedPreparedType2(::System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType3
    static ::System::Type* _get_s_cachedPreparedType3();
    // Set static field: static private System.Type s_cachedPreparedType3
    static void _set_s_cachedPreparedType3(::System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType4
    static ::System::Type* _get_s_cachedPreparedType4();
    // Set static field: static private System.Type s_cachedPreparedType4
    static void _set_s_cachedPreparedType4(::System::Type* value);
    // Get static field: static private System.Type s_cachedPreparedType5
    static ::System::Type* _get_s_cachedPreparedType5();
    // Set static field: static private System.Type s_cachedPreparedType5
    static void _set_s_cachedPreparedType5(::System::Type* value);
    // Get instance field reference: private System.Threading.SynchronizationContextProperties _props
    [[deprecated("Use field access instead!")]] ::System::Threading::SynchronizationContextProperties& dyn__props();
    // public System.Boolean IsWaitNotificationRequired()
    // Offset: 0x46C8C9C
    bool IsWaitNotificationRequired();
    // public System.Void Send(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x46C8CA8
    void Send(::System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public System.Void Post(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x46C8CD0
    void Post(::System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public System.Void OperationStarted()
    // Offset: 0x46C8D58
    void OperationStarted();
    // public System.Void OperationCompleted()
    // Offset: 0x46C8D5C
    void OperationCompleted();
    // public System.Int32 Wait(System.IntPtr[] waitHandles, System.Boolean waitAll, System.Int32 millisecondsTimeout)
    // Offset: 0x46C8D60
    int Wait(::ArrayW<::System::IntPtr> waitHandles, bool waitAll, int millisecondsTimeout);
    // static protected System.Int32 WaitHelper(System.IntPtr[] waitHandles, System.Boolean waitAll, System.Int32 millisecondsTimeout)
    // Offset: 0x46C8DC4
    static int WaitHelper(::ArrayW<::System::IntPtr> waitHandles, bool waitAll, int millisecondsTimeout);
    // static public System.Void SetSynchronizationContext(System.Threading.SynchronizationContext syncContext)
    // Offset: 0x46C8E4C
    static void SetSynchronizationContext(::System::Threading::SynchronizationContext* syncContext);
    // static public System.Threading.SynchronizationContext get_Current()
    // Offset: 0x46C0B10
    static ::System::Threading::SynchronizationContext* get_Current();
    // static System.Threading.SynchronizationContext get_CurrentNoFlow()
    // Offset: 0x46C8F74
    static ::System::Threading::SynchronizationContext* get_CurrentNoFlow();
    // static private System.Threading.SynchronizationContext GetThreadLocalContext()
    // Offset: 0x46C8F28
    static ::System::Threading::SynchronizationContext* GetThreadLocalContext();
    // public System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0x46C9110
    ::System::Threading::SynchronizationContext* CreateCopy();
    // static System.Threading.SynchronizationContext get_CurrentExplicit()
    // Offset: 0x46C9164
    static ::System::Threading::SynchronizationContext* get_CurrentExplicit();
    // public System.Void .ctor()
    // Offset: 0x46C8C94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SynchronizationContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::SynchronizationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SynchronizationContext*, creationType>()));
    }
  }; // System.Threading.SynchronizationContext
  #pragma pack(pop)
  static check_size<sizeof(SynchronizationContext), 16 + sizeof(::System::Threading::SynchronizationContextProperties)> __System_Threading_SynchronizationContextSizeCheck;
  static_assert(sizeof(SynchronizationContext) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::IsWaitNotificationRequired
// Il2CppName: IsWaitNotificationRequired
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::SynchronizationContext::*)()>(&System::Threading::SynchronizationContext::IsWaitNotificationRequired)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "IsWaitNotificationRequired", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::Send
// Il2CppName: Send
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&System::Threading::SynchronizationContext::Send)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "Send", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d, state});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::Post
// Il2CppName: Post
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SynchronizationContext::*)(::System::Threading::SendOrPostCallback*, ::Il2CppObject*)>(&System::Threading::SynchronizationContext::Post)> {
  static const MethodInfo* get() {
    static auto* d = &::il2cpp_utils::GetClassFromName("System.Threading", "SendOrPostCallback")->byval_arg;
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "Post", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{d, state});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::OperationStarted
// Il2CppName: OperationStarted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SynchronizationContext::*)()>(&System::Threading::SynchronizationContext::OperationStarted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "OperationStarted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::OperationCompleted
// Il2CppName: OperationCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::SynchronizationContext::*)()>(&System::Threading::SynchronizationContext::OperationCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "OperationCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::SynchronizationContext::*)(::ArrayW<::System::IntPtr>, bool, int)>(&System::Threading::SynchronizationContext::Wait)> {
  static const MethodInfo* get() {
    static auto* waitHandles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    static auto* waitAll = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandles, waitAll, millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::WaitHelper
// Il2CppName: WaitHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::System::IntPtr>, bool, int)>(&System::Threading::SynchronizationContext::WaitHelper)> {
  static const MethodInfo* get() {
    static auto* waitHandles = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "IntPtr"), 1)->byval_arg;
    static auto* waitAll = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "WaitHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{waitHandles, waitAll, millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::SetSynchronizationContext
// Il2CppName: SetSynchronizationContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Threading::SynchronizationContext*)>(&System::Threading::SynchronizationContext::SetSynchronizationContext)> {
  static const MethodInfo* get() {
    static auto* syncContext = &::il2cpp_utils::GetClassFromName("System.Threading", "SynchronizationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "SetSynchronizationContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{syncContext});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&System::Threading::SynchronizationContext::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::get_CurrentNoFlow
// Il2CppName: get_CurrentNoFlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&System::Threading::SynchronizationContext::get_CurrentNoFlow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "get_CurrentNoFlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::GetThreadLocalContext
// Il2CppName: GetThreadLocalContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&System::Threading::SynchronizationContext::GetThreadLocalContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "GetThreadLocalContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::CreateCopy
// Il2CppName: CreateCopy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (System::Threading::SynchronizationContext::*)()>(&System::Threading::SynchronizationContext::CreateCopy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "CreateCopy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::get_CurrentExplicit
// Il2CppName: get_CurrentExplicit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::SynchronizationContext* (*)()>(&System::Threading::SynchronizationContext::get_CurrentExplicit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::SynchronizationContext*), "get_CurrentExplicit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::SynchronizationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!