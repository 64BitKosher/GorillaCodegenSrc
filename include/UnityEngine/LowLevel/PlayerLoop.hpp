// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.LowLevel.PlayerLoopSystemInternal
#include "UnityEngine/LowLevel/PlayerLoopSystemInternal.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::LowLevel
namespace UnityEngine::LowLevel {
  // Skipping declaration: PlayerLoopSystem because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Forward declaring type: PlayerLoop
  class PlayerLoop;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::LowLevel::PlayerLoop);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LowLevel::PlayerLoop*, "UnityEngine.LowLevel", "PlayerLoop");
// Type namespace: UnityEngine.LowLevel
namespace UnityEngine::LowLevel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.LowLevel.PlayerLoop
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class PlayerLoop : public ::Il2CppObject {
    public:
    // static public UnityEngine.LowLevel.PlayerLoopSystem GetCurrentPlayerLoop()
    // Offset: 0x54DCECC
    static ::UnityEngine::LowLevel::PlayerLoopSystem GetCurrentPlayerLoop();
    // static public System.Void SetPlayerLoop(UnityEngine.LowLevel.PlayerLoopSystem loop)
    // Offset: 0x54DD210
    static void SetPlayerLoop(::UnityEngine::LowLevel::PlayerLoopSystem loop);
    // static private System.Int32 PlayerLoopSystemToInternal(UnityEngine.LowLevel.PlayerLoopSystem sys, ref System.Collections.Generic.List`1<UnityEngine.LowLevel.PlayerLoopSystemInternal> internalSys)
    // Offset: 0x54DD2F8
    static int PlayerLoopSystemToInternal(::UnityEngine::LowLevel::PlayerLoopSystem sys, ByRef<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*> internalSys);
    // static private UnityEngine.LowLevel.PlayerLoopSystem InternalToPlayerLoopSystem(UnityEngine.LowLevel.PlayerLoopSystemInternal[] internalSys, ref System.Int32 offset)
    // Offset: 0x54DCF64
    static ::UnityEngine::LowLevel::PlayerLoopSystem InternalToPlayerLoopSystem(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> internalSys, ByRef<int> offset);
    // static private UnityEngine.LowLevel.PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal()
    // Offset: 0x54DCF3C
    static ::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> GetCurrentPlayerLoopInternal();
    // static private System.Void SetPlayerLoopInternal(UnityEngine.LowLevel.PlayerLoopSystemInternal[] loop)
    // Offset: 0x54DD500
    static void SetPlayerLoopInternal(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> loop);
  }; // UnityEngine.LowLevel.PlayerLoop
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoop
// Il2CppName: GetCurrentPlayerLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LowLevel::PlayerLoopSystem (*)()>(&UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "GetCurrentPlayerLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::SetPlayerLoop
// Il2CppName: SetPlayerLoop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::LowLevel::PlayerLoopSystem)>(&UnityEngine::LowLevel::PlayerLoop::SetPlayerLoop)> {
  static const MethodInfo* get() {
    static auto* loop = &::il2cpp_utils::GetClassFromName("UnityEngine.LowLevel", "PlayerLoopSystem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "SetPlayerLoop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loop});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::PlayerLoopSystemToInternal
// Il2CppName: PlayerLoopSystemToInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::LowLevel::PlayerLoopSystem, ByRef<::System::Collections::Generic::List_1<::UnityEngine::LowLevel::PlayerLoopSystemInternal>*>)>(&UnityEngine::LowLevel::PlayerLoop::PlayerLoopSystemToInternal)> {
  static const MethodInfo* get() {
    static auto* sys = &::il2cpp_utils::GetClassFromName("UnityEngine.LowLevel", "PlayerLoopSystem")->byval_arg;
    static auto* internalSys = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.LowLevel", "PlayerLoopSystemInternal")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "PlayerLoopSystemToInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sys, internalSys});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::InternalToPlayerLoopSystem
// Il2CppName: InternalToPlayerLoopSystem
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::LowLevel::PlayerLoopSystem (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>, ByRef<int>)>(&UnityEngine::LowLevel::PlayerLoop::InternalToPlayerLoopSystem)> {
  static const MethodInfo* get() {
    static auto* internalSys = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.LowLevel", "PlayerLoopSystemInternal"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "InternalToPlayerLoopSystem", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{internalSys, offset});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoopInternal
// Il2CppName: GetCurrentPlayerLoopInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal> (*)()>(&UnityEngine::LowLevel::PlayerLoop::GetCurrentPlayerLoopInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "GetCurrentPlayerLoopInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LowLevel::PlayerLoop::SetPlayerLoopInternal
// Il2CppName: SetPlayerLoopInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::LowLevel::PlayerLoopSystemInternal>)>(&UnityEngine::LowLevel::PlayerLoop::SetPlayerLoopInternal)> {
  static const MethodInfo* get() {
    static auto* loop = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine.LowLevel", "PlayerLoopSystemInternal"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LowLevel::PlayerLoop*), "SetPlayerLoopInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{loop});
  }
};
