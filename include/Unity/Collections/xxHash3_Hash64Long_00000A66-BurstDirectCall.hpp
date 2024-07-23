// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.xxHash3
#include "Unity/Collections/xxHash3.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*, "Unity.Collections", "xxHash3/Hash64Long_00000A66$BurstDirectCall");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000A66$BurstDirectCall
  // [TokenAttribute] Offset: FFFFFFFF
  class xxHash3::Hash64Long_00000A66$BurstDirectCall : public ::Il2CppObject {
    public:
    // Get static field: static private System.IntPtr Pointer
    static ::System::IntPtr _get_Pointer();
    // Set static field: static private System.IntPtr Pointer
    static void _set_Pointer(::System::IntPtr value);
    // Get static field: static private System.IntPtr DeferredCompilation
    static ::System::IntPtr _get_DeferredCompilation();
    // Set static field: static private System.IntPtr DeferredCompilation
    static void _set_DeferredCompilation(::System::IntPtr value);
    // static private System.Void GetFunctionPointerDiscard(ref System.IntPtr )
    // Offset: 0x508A934
    static void GetFunctionPointerDiscard(ByRef<::System::IntPtr> param_0);
    // static private System.IntPtr GetFunctionPointer()
    // Offset: 0x508AA50
    static ::System::IntPtr GetFunctionPointer();
    // static public System.Void Constructor()
    // Offset: 0x508AAAC
    static void Constructor();
    // static public System.Void Initialize()
    // Offset: 0x508AB54
    static void Initialize();
    // static private System.Void .cctor()
    // Offset: 0x508AB58
    static void _cctor();
    // static public System.UInt64 Invoke(System.Byte* input, System.Byte* dest, System.Int64 length, System.Byte* secret)
    // Offset: 0x5089E64
    static uint64_t Invoke(uint8_t* input, uint8_t* dest, int64_t length, uint8_t* secret);
  }; // Unity.Collections.xxHash3/Unity.Collections.Hash64Long_00000A66$BurstDirectCall
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::GetFunctionPointerDiscard
// Il2CppName: GetFunctionPointerDiscard
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::IntPtr>)>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::GetFunctionPointerDiscard)> {
  static const MethodInfo* get() {
    static auto* param_0 = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), "GetFunctionPointerDiscard", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{param_0});
  }
};
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::GetFunctionPointer
// Il2CppName: GetFunctionPointer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (*)()>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::GetFunctionPointer)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), "GetFunctionPointer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Constructor
// Il2CppName: Constructor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Constructor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), "Constructor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint8_t*, uint8_t*, int64_t, uint8_t*)>(&Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall::Invoke)> {
  static const MethodInfo* get() {
    static auto* input = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* dest = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    static auto* secret = &il2cpp_functions::Class_GetPtrClass(::il2cpp_utils::GetClassFromName("System", "Byte"))->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Unity::Collections::xxHash3::Hash64Long_00000A66$BurstDirectCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, dest, length, secret});
  }
};
