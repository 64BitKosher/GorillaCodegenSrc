// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.IButton
#include "Oculus/Interaction/Input/IButton.hpp"
// Including type: UnityEngine.KeyCode
#include "UnityEngine/KeyCode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Oculus.Interaction.Unity.Input
namespace Oculus::Interaction::Unity::Input {
  // Forward declaring type: InputKey
  class InputKey;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Unity::Input::InputKey);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Unity::Input::InputKey*, "Oculus.Interaction.Unity.Input", "InputKey");
// Type namespace: Oculus.Interaction.Unity.Input
namespace Oculus::Interaction::Unity::Input {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Unity.Input.InputKey
  // [TokenAttribute] Offset: FFFFFFFF
  class InputKey : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Input::IButton*/ {
    public:
    public:
    // private UnityEngine.KeyCode _key
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::KeyCode key;
    // Field size check
    static_assert(sizeof(::UnityEngine::KeyCode) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Input::IButton
    operator ::Oculus::Interaction::Input::IButton() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Input::IButton*>(this);
    }
    // Get instance field reference: private UnityEngine.KeyCode _key
    [[deprecated("Use field access instead!")]] ::UnityEngine::KeyCode& dyn__key();
    // public System.Boolean Value()
    // Offset: 0x47E1664
    bool Value();
    // public System.Void .ctor()
    // Offset: 0x47E1670
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InputKey* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Unity::Input::InputKey::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InputKey*, creationType>()));
    }
  }; // Oculus.Interaction.Unity.Input.InputKey
  #pragma pack(pop)
  static check_size<sizeof(InputKey), 32 + sizeof(::UnityEngine::KeyCode)> __Oculus_Interaction_Unity_Input_InputKeySizeCheck;
  static_assert(sizeof(InputKey) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Unity::Input::InputKey::Value
// Il2CppName: Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Unity::Input::InputKey::*)()>(&Oculus::Interaction::Unity::Input::InputKey::Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Unity::Input::InputKey*), "Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Unity::Input::InputKey::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
