// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask
#include "System/Threading/Tasks/ValueTask_ValueTaskSourceAsTask.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c*, "System.Threading.Tasks", "ValueTask/ValueTaskSourceAsTask/<>c");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ValueTask::ValueTaskSourceAsTask::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c <>9
    static ::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c <>9
    static void _set_$$9(::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x46D24FC
    static void _cctor();
    // System.Void <.cctor>b__4_0(System.Object state)
    // Offset: 0x46D256C
    void $_cctor$b__4_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x46D2564
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ValueTask::ValueTaskSourceAsTask::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ValueTask::ValueTaskSourceAsTask::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.ValueTask/ValueTaskSourceAsTask/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::$_cctor$b__4_0
// Il2CppName: <.cctor>b__4_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::*)(::Il2CppObject*)>(&System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::$_cctor$b__4_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c*), "<.cctor>b__4_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::ValueTask::ValueTaskSourceAsTask::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
