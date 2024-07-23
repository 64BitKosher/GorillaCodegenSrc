// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystemPUN
#include "GlobalNamespace/NetworkSystemPUN.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51, "", "NetworkSystemPUN/<TryJoinRoomInRegion>d__51");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: NetworkSystemPUN/<TryJoinRoomInRegion>d__51
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  struct NetworkSystemPUN::$TryJoinRoomInRegion$d__51/*, public ::System::ValueType, public ::System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public NetworkSystemPUN <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::NetworkSystemPUN* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetworkSystemPUN*) == 0x8);
    // public System.Int32 regionIndex
    // Size: 0x4
    // Offset: 0x28
    int regionIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String roomName
    // Size: 0x8
    // Offset: 0x30
    ::StringW roomName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <foundRoom>5__2
    // Size: 0x1
    // Offset: 0x38
    bool $foundRoom$5__2;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x40
    ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    public:
    // Creating value type constructor for type: $TryJoinRoomInRegion$d__51
    constexpr $TryJoinRoomInRegion$d__51(int $$1__state_ = {}, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, ::GlobalNamespace::NetworkSystemPUN* $$4__this_ = {}, int regionIndex_ = {}, ::StringW roomName_ = {}, bool $foundRoom$5__2_ = {}, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, regionIndex{regionIndex_}, roomName{roomName_}, $foundRoom$5__2{$foundRoom$5__2_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Runtime::CompilerServices::IAsyncStateMachine
    operator ::System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // Get instance field reference: public System.Int32 <>1__state
    [[deprecated("Use field access instead!")]] int& dyn_$$1__state();
    // Get instance field reference: public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>& dyn_$$t__builder();
    // Get instance field reference: public NetworkSystemPUN <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::NetworkSystemPUN*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 regionIndex
    [[deprecated("Use field access instead!")]] int& dyn_regionIndex();
    // Get instance field reference: public System.String roomName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_roomName();
    // Get instance field reference: private System.Boolean <foundRoom>5__2
    [[deprecated("Use field access instead!")]] bool& dyn_$foundRoom$5__2();
    // Get instance field reference: private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    [[deprecated("Use field access instead!")]] ::System::Runtime::CompilerServices::TaskAwaiter_1<bool>& dyn_$$u__1();
    // private System.Void MoveNext()
    // Offset: 0x291A5FC
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0x291AB9C
    void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkSystemPUN/<TryJoinRoomInRegion>d__51
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::*)()>(&GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::SetStateMachine
// Il2CppName: SetStateMachine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51::SetStateMachine)> {
  static const MethodInfo* get() {
    static auto* stateMachine = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "IAsyncStateMachine")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$TryJoinRoomInRegion$d__51), "SetStateMachine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stateMachine});
  }
};
