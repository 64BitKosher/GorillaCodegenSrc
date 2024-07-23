// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ITickSystemTick
  class ITickSystemTick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ITickSystemTick);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITickSystemTick*, "", "ITickSystemTick");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ITickSystemTick
  // [TokenAttribute] Offset: FFFFFFFF
  class ITickSystemTick {
    public:
    // public System.Boolean get_TickRunning()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_TickRunning();
    // public System.Void set_TickRunning(System.Boolean value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_TickRunning(bool value);
    // public System.Void Tick()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Tick();
  }; // ITickSystemTick
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemTick::get_TickRunning
// Il2CppName: get_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::ITickSystemTick::*)()>(&GlobalNamespace::ITickSystemTick::get_TickRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemTick*), "get_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemTick::set_TickRunning
// Il2CppName: set_TickRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ITickSystemTick::*)(bool)>(&GlobalNamespace::ITickSystemTick::set_TickRunning)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemTick*), "set_TickRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ITickSystemTick::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ITickSystemTick::*)()>(&GlobalNamespace::ITickSystemTick::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITickSystemTick*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};