// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IAxis1D
  class IAxis1D;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Input::IAxis1D);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Input::IAxis1D*, "Oculus.Interaction.Input", "IAxis1D");
// Type namespace: Oculus.Interaction.Input
namespace Oculus::Interaction::Input {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Input.IAxis1D
  // [TokenAttribute] Offset: FFFFFFFF
  class IAxis1D {
    public:
    // public System.Single Value()
    // Offset: 0xFFFFFFFFFFFFFFFF
    float Value();
  }; // Oculus.Interaction.Input.IAxis1D
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Input::IAxis1D::Value
// Il2CppName: Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::Input::IAxis1D::*)()>(&Oculus::Interaction::Input::IAxis1D::Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Input::IAxis1D*), "Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
