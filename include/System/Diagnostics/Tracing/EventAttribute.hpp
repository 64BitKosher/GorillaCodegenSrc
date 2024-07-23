// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Including type: System.Diagnostics.Tracing.EventLevel
#include "System/Diagnostics/Tracing/EventLevel.hpp"
// Including type: System.Diagnostics.Tracing.EventKeywords
#include "System/Diagnostics/Tracing/EventKeywords.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventAttribute
  class EventAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Tracing::EventAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventAttribute*, "System.Diagnostics.Tracing", "EventAttribute");
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Tracing.EventAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class EventAttribute : public ::System::Attribute {
    public:
    public:
    // private System.Int32 <EventId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    int EventId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Diagnostics.Tracing.EventLevel <Level>k__BackingField
    // Size: 0x4
    // Offset: 0x14
    ::System::Diagnostics::Tracing::EventLevel Level;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventLevel) == 0x4);
    // private System.Diagnostics.Tracing.EventKeywords <Keywords>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::System::Diagnostics::Tracing::EventKeywords Keywords;
    // Field size check
    static_assert(sizeof(::System::Diagnostics::Tracing::EventKeywords) == 0x8);
    // private System.String <Message>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Message;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.Int32 <EventId>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$EventId$k__BackingField();
    // Get instance field reference: private System.Diagnostics.Tracing.EventLevel <Level>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventLevel& dyn_$Level$k__BackingField();
    // Get instance field reference: private System.Diagnostics.Tracing.EventKeywords <Keywords>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Diagnostics::Tracing::EventKeywords& dyn_$Keywords$k__BackingField();
    // Get instance field reference: private System.String <Message>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Message$k__BackingField();
    // public System.Void .ctor(System.Int32 eventId)
    // Offset: 0x461B624
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventAttribute* New_ctor(int eventId) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Tracing::EventAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventAttribute*, creationType>(eventId)));
    }
    // private System.Void set_EventId(System.Int32 value)
    // Offset: 0x461B64C
    void set_EventId(int value);
    // public System.Void set_Level(System.Diagnostics.Tracing.EventLevel value)
    // Offset: 0x461B654
    void set_Level(::System::Diagnostics::Tracing::EventLevel value);
    // public System.Void set_Keywords(System.Diagnostics.Tracing.EventKeywords value)
    // Offset: 0x461B65C
    void set_Keywords(::System::Diagnostics::Tracing::EventKeywords value);
    // public System.Void set_Message(System.String value)
    // Offset: 0x461B664
    void set_Message(::StringW value);
  }; // System.Diagnostics.Tracing.EventAttribute
  #pragma pack(pop)
  static check_size<sizeof(EventAttribute), 32 + sizeof(::StringW)> __System_Diagnostics_Tracing_EventAttributeSizeCheck;
  static_assert(sizeof(EventAttribute) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventAttribute::set_EventId
// Il2CppName: set_EventId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventAttribute::*)(int)>(&System::Diagnostics::Tracing::EventAttribute::set_EventId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventAttribute*), "set_EventId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventAttribute::set_Level
// Il2CppName: set_Level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventLevel)>(&System::Diagnostics::Tracing::EventAttribute::set_Level)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventLevel")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventAttribute*), "set_Level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventAttribute::set_Keywords
// Il2CppName: set_Keywords
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventAttribute::*)(::System::Diagnostics::Tracing::EventKeywords)>(&System::Diagnostics::Tracing::EventAttribute::set_Keywords)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Diagnostics.Tracing", "EventKeywords")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventAttribute*), "set_Keywords", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Tracing::EventAttribute::set_Message
// Il2CppName: set_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Tracing::EventAttribute::*)(::StringW)>(&System::Diagnostics::Tracing::EventAttribute::set_Message)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Tracing::EventAttribute*), "set_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};