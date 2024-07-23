// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: CallContextRemotingData
  class CallContextRemotingData;
  // Forward declaring type: CallContextSecurityData
  class CallContextSecurityData;
  // Forward declaring type: Header
  class Header;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: LogicalCallContext
  class LogicalCallContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::LogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext*, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Messaging.LogicalCallContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class LogicalCallContext : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable, public ::System::ICloneable*/ {
    public:
    // Nested type: ::System::Runtime::Remoting::Messaging::LogicalCallContext::Reader
    struct Reader;
    public:
    // private System.Collections.Hashtable m_Datastore
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Hashtable* m_Datastore;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData
    // Size: 0x8
    // Offset: 0x18
    ::System::Runtime::Remoting::Messaging::CallContextRemotingData* m_RemotingData;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::CallContextRemotingData*) == 0x8);
    // private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData
    // Size: 0x8
    // Offset: 0x20
    ::System::Runtime::Remoting::Messaging::CallContextSecurityData* m_SecurityData;
    // Field size check
    static_assert(sizeof(::System::Runtime::Remoting::Messaging::CallContextSecurityData*) == 0x8);
    // private System.Object m_HostContext
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* m_HostContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Boolean m_IsCorrelationMgr
    // Size: 0x1
    // Offset: 0x30
    bool m_IsCorrelationMgr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_IsCorrelationMgr and: sendHeaders
    char __padding4[0x7] = {};
    // private System.Runtime.Remoting.Messaging.Header[] _sendHeaders
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*> sendHeaders;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>) == 0x8);
    // private System.Runtime.Remoting.Messaging.Header[] _recvHeaders
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<::System::Runtime::Remoting::Messaging::Header*> recvHeaders;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: operator ::System::ICloneable
    operator ::System::ICloneable() noexcept {
      return *reinterpret_cast<::System::ICloneable*>(this);
    }
    // Get static field: static private System.Type s_callContextType
    static ::System::Type* _get_s_callContextType();
    // Set static field: static private System.Type s_callContextType
    static void _set_s_callContextType(::System::Type* value);
    // static field const value: static private System.String s_CorrelationMgrSlotName
    static constexpr const char* s_CorrelationMgrSlotName = "System.Diagnostics.Trace.CorrelationManagerSlot";
    // Get static field: static private System.String s_CorrelationMgrSlotName
    static ::StringW _get_s_CorrelationMgrSlotName();
    // Set static field: static private System.String s_CorrelationMgrSlotName
    static void _set_s_CorrelationMgrSlotName(::StringW value);
    // Get instance field reference: private System.Collections.Hashtable m_Datastore
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_m_Datastore();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.CallContextRemotingData m_RemotingData
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::CallContextRemotingData*& dyn_m_RemotingData();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.CallContextSecurityData m_SecurityData
    [[deprecated("Use field access instead!")]] ::System::Runtime::Remoting::Messaging::CallContextSecurityData*& dyn_m_SecurityData();
    // Get instance field reference: private System.Object m_HostContext
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_m_HostContext();
    // Get instance field reference: private System.Boolean m_IsCorrelationMgr
    [[deprecated("Use field access instead!")]] bool& dyn_m_IsCorrelationMgr();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.Header[] _sendHeaders
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Runtime::Remoting::Messaging::Header*>& dyn__sendHeaders();
    // Get instance field reference: private System.Runtime.Remoting.Messaging.Header[] _recvHeaders
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Runtime::Remoting::Messaging::Header*>& dyn__recvHeaders();
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x45431CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogicalCallContext* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::LogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogicalCallContext*, creationType>(info, context)));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x45435DC
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.Object Clone()
    // Offset: 0x4543958
    ::Il2CppObject* Clone();
    // System.Void Merge(System.Runtime.Remoting.Messaging.LogicalCallContext lc)
    // Offset: 0x45343CC
    void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext* lc);
    // public System.Boolean get_HasInfo()
    // Offset: 0x453436C
    bool get_HasInfo();
    // private System.Boolean get_HasUserData()
    // Offset: 0x454392C
    bool get_HasUserData();
    // private System.Collections.Hashtable get_Datastore()
    // Offset: 0x454356C
    ::System::Collections::Hashtable* get_Datastore();
    // static private System.Void .cctor()
    // Offset: 0x4544094
    static void _cctor();
    // System.Void .ctor()
    // Offset: 0x45431C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LogicalCallContext* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::Messaging::LogicalCallContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LogicalCallContext*, creationType>()));
    }
  }; // System.Runtime.Remoting.Messaging.LogicalCallContext
  #pragma pack(pop)
  static check_size<sizeof(LogicalCallContext), 64 + sizeof(::ArrayW<::System::Runtime::Remoting::Messaging::Header*>)> __System_Runtime_Remoting_Messaging_LogicalCallContextSizeCheck;
  static_assert(sizeof(LogicalCallContext) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Runtime::Remoting::Messaging::LogicalCallContext::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Clone
// Il2CppName: Clone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Clone)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "Clone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::Merge
// Il2CppName: Merge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Remoting::Messaging::LogicalCallContext::*)(::System::Runtime::Remoting::Messaging::LogicalCallContext*)>(&System::Runtime::Remoting::Messaging::LogicalCallContext::Merge)> {
  static const MethodInfo* get() {
    static auto* lc = &::il2cpp_utils::GetClassFromName("System.Runtime.Remoting.Messaging", "LogicalCallContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "Merge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lc});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo
// Il2CppName: get_HasInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "get_HasInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData
// Il2CppName: get_HasUserData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::get_HasUserData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "get_HasUserData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore
// Il2CppName: get_Datastore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Hashtable* (System::Runtime::Remoting::Messaging::LogicalCallContext::*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::get_Datastore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), "get_Datastore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Remoting::Messaging::LogicalCallContext::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::Messaging::LogicalCallContext*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::Messaging::LogicalCallContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
