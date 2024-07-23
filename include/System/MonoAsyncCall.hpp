// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: MonoAsyncCall
  class MonoAsyncCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MonoAsyncCall);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoAsyncCall*, "System", "MonoAsyncCall");
// Type namespace: System
namespace System {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.MonoAsyncCall
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoAsyncCall : public ::Il2CppObject {
    public:
    public:
    // private System.Object msg
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* msg;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.IntPtr cb_method
    // Size: 0x8
    // Offset: 0x18
    ::System::IntPtr cb_method;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.Object cb_target
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* cb_target;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object state
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* state;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object res
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppObject* res;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object out_args
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* out_args;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: private System.Object msg
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_msg();
    // Get instance field reference: private System.IntPtr cb_method
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_cb_method();
    // Get instance field reference: private System.Object cb_target
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_cb_target();
    // Get instance field reference: private System.Object state
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_state();
    // Get instance field reference: private System.Object res
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_res();
    // Get instance field reference: private System.Object out_args
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_out_args();
    // public System.Void .ctor()
    // Offset: 0x46A9564
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoAsyncCall* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MonoAsyncCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoAsyncCall*, creationType>()));
    }
  }; // System.MonoAsyncCall
  #pragma pack(pop)
  static check_size<sizeof(MonoAsyncCall), 56 + sizeof(::Il2CppObject*)> __System_MonoAsyncCallSizeCheck;
  static_assert(sizeof(MonoAsyncCall) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MonoAsyncCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!