// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: IAfterPhysicsStep
  class IAfterPhysicsStep;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::IAfterPhysicsStep);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::IAfterPhysicsStep*, "Fusion", "IAfterPhysicsStep");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.IAfterPhysicsStep
  // [TokenAttribute] Offset: FFFFFFFF
  class IAfterPhysicsStep {
    public:
    // public System.Void AfterPhysicsStep()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void AfterPhysicsStep();
  }; // Fusion.IAfterPhysicsStep
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::IAfterPhysicsStep::AfterPhysicsStep
// Il2CppName: AfterPhysicsStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::IAfterPhysicsStep::*)()>(&Fusion::IAfterPhysicsStep::AfterPhysicsStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::IAfterPhysicsStep*), "AfterPhysicsStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};