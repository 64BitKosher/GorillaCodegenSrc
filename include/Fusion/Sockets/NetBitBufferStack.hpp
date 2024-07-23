// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion::Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetBitBuffer
  struct NetBitBuffer;
}
// Completed forward declares
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Forward declaring type: NetBitBufferStack
  struct NetBitBufferStack;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Sockets::NetBitBufferStack, "Fusion.Sockets", "NetBitBufferStack");
// Type namespace: Fusion.Sockets
namespace Fusion::Sockets {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Sockets.NetBitBufferStack
  // [TokenAttribute] Offset: FFFFFFFF
  struct NetBitBufferStack/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 _capacity
    // Size: 0x4
    // Offset: 0x0
    int capacity;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: capacity and: Stack
    char __padding0[0x4] = {};
    // public Fusion.Sockets.NetBitBuffer** Stack
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::Sockets::NetBitBuffer** Stack;
    // Field size check
    static_assert(sizeof(::Fusion::Sockets::NetBitBuffer**) == 0x8);
    // public System.Int32 Count
    // Size: 0x4
    // Offset: 0x10
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: NetBitBufferStack
    constexpr NetBitBufferStack(int capacity_ = {}, ::Fusion::Sockets::NetBitBuffer** Stack_ = {}, int Count_ = {}) noexcept : capacity{capacity_}, Stack{Stack_}, Count{Count_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Int32 _capacity
    [[deprecated("Use field access instead!")]] int& dyn__capacity();
    // Get instance field reference: public Fusion.Sockets.NetBitBuffer** Stack
    [[deprecated("Use field access instead!")]] ::Fusion::Sockets::NetBitBuffer**& dyn_Stack();
    // Get instance field reference: public System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // public System.Boolean TryPop(Fusion.Sockets.NetBitBuffer** result)
    // Offset: 0x2B90C90
    bool TryPop(::Fusion::Sockets::NetBitBuffer** result);
    // static public Fusion.Sockets.NetBitBufferStack Create(System.Int32 capacity)
    // Offset: 0x2B90CB8
    static ::Fusion::Sockets::NetBitBufferStack Create(int capacity);
    // static public System.Void Free(Fusion.Sockets.NetBitBufferStack stack)
    // Offset: 0x2B90D18
    static void Free(::Fusion::Sockets::NetBitBufferStack stack);
    // public System.Void PushFromHead(Fusion.Sockets.NetBitBuffer* head)
    // Offset: 0x2B90D2C
    void PushFromHead(::Fusion::Sockets::NetBitBuffer* head);
  }; // Fusion.Sockets.NetBitBufferStack
  #pragma pack(pop)
  static check_size<sizeof(NetBitBufferStack), 16 + sizeof(int)> __Fusion_Sockets_NetBitBufferStackSizeCheck;
  static_assert(sizeof(NetBitBufferStack) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Sockets::NetBitBufferStack::TryPop
// Il2CppName: TryPop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Sockets::NetBitBufferStack::*)(::Fusion::Sockets::NetBitBuffer**)>(&Fusion::Sockets::NetBitBufferStack::TryPop)> {
  static const MethodInfo* get() {
    static auto* result = &il2cpp_functions::Class_GetPtrClass(il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer")))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetBitBufferStack), "TryPop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetBitBufferStack::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Sockets::NetBitBufferStack (*)(int)>(&Fusion::Sockets::NetBitBufferStack::Create)> {
  static const MethodInfo* get() {
    static auto* capacity = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetBitBufferStack), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{capacity});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetBitBufferStack::Free
// Il2CppName: Free
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Fusion::Sockets::NetBitBufferStack)>(&Fusion::Sockets::NetBitBufferStack::Free)> {
  static const MethodInfo* get() {
    static auto* stack = &::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBufferStack")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetBitBufferStack), "Free", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{stack});
  }
};
// Writing MetadataGetter for method: Fusion::Sockets::NetBitBufferStack::PushFromHead
// Il2CppName: PushFromHead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Sockets::NetBitBufferStack::*)(::Fusion::Sockets::NetBitBuffer*)>(&Fusion::Sockets::NetBitBufferStack::PushFromHead)> {
  static const MethodInfo* get() {
    static auto* head = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("Fusion.Sockets", "NetBitBuffer"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Sockets::NetBitBufferStack), "PushFromHead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{head});
  }
};
