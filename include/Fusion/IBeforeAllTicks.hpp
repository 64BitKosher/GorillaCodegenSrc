// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IBeforeAllTicks
  class IBeforeAllTicks;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IBeforeAllTicks);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IBeforeAllTicks*, "Fusion", "IBeforeAllTicks");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IBeforeAllTicks
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeforeAllTicks {
    public:
    // public System.Void BeforeAllTicks(System.Boolean resimulation, System.Int32 tickCount)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeforeAllTicks(bool resimulation, int tickCount);
  }; // Fusion.IBeforeAllTicks
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IBeforeAllTicks::BeforeAllTicks
// Il2CppName: BeforeAllTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IBeforeAllTicks::*)(bool, int)>(&Fusion::IBeforeAllTicks::BeforeAllTicks)> {
  static const MethodInfo* get() {
    static auto* resimulation = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* tickCount = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::IBeforeAllTicks*), "BeforeAllTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{resimulation, tickCount});
  }
};
