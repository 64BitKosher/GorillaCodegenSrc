// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.Tasks.BeginEndAwaitableAdapter
#include "System/Threading/Tasks/BeginEndAwaitableAdapter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Tasks::BeginEndAwaitableAdapter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::BeginEndAwaitableAdapter::$$c*, "System.Threading.Tasks", "BeginEndAwaitableAdapter/<>c");
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.BeginEndAwaitableAdapter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BeginEndAwaitableAdapter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.BeginEndAwaitableAdapter/<>c <>9
    static ::System::Threading::Tasks::BeginEndAwaitableAdapter::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.BeginEndAwaitableAdapter/<>c <>9
    static void _set_$$9(::System::Threading::Tasks::BeginEndAwaitableAdapter::$$c* value);
    // static private System.Void .cctor()
    // Offset: 0x46D29E0
    static void _cctor();
    // System.Void <.cctor>b__2_0(System.IAsyncResult asyncResult)
    // Offset: 0x46D2A50
    void $_cctor$b__2_0(::System::IAsyncResult* asyncResult);
    // public System.Void .ctor()
    // Offset: 0x46D2A48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeginEndAwaitableAdapter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeginEndAwaitableAdapter::$$c*, creationType>()));
    }
  }; // System.Threading.Tasks.BeginEndAwaitableAdapter/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::BeginEndAwaitableAdapter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::$_cctor$b__2_0
// Il2CppName: <.cctor>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::*)(::System::IAsyncResult*)>(&System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::$_cctor$b__2_0)> {
  static const MethodInfo* get() {
    static auto* asyncResult = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Tasks::BeginEndAwaitableAdapter::$$c*), "<.cctor>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{asyncResult});
  }
};
// Writing MetadataGetter for method: System::Threading::Tasks::BeginEndAwaitableAdapter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
