// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IBeforeTick
  class IBeforeTick;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IBeforeTick);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IBeforeTick*, "Fusion", "IBeforeTick");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IBeforeTick
  // [TokenAttribute] Offset: FFFFFFFF
  class IBeforeTick {
    public:
    // public System.Void BeforeTick()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void BeforeTick();
  }; // Fusion.IBeforeTick
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IBeforeTick::BeforeTick
// Il2CppName: BeforeTick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IBeforeTick::*)()>(&Fusion::IBeforeTick::BeforeTick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IBeforeTick*), "BeforeTick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};