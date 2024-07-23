// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DebugUI
#include "UnityEngine/Rendering/DebugUI.hpp"
// Including type: UnityEngine.Rendering.DebugUI/Field`1
#include "UnityEngine/Rendering/DebugUI_Field_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::DebugUI::ColorField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::DebugUI::ColorField*, "UnityEngine.Rendering", "DebugUI/ColorField");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.DebugUI/ColorField
  // [TokenAttribute] Offset: FFFFFFFF
  class DebugUI::ColorField : public ::UnityEngine::Rendering::DebugUI::Field_1<::UnityEngine::Color> {
    public:
    public:
    // public System.Boolean hdr
    // Size: 0x1
    // Offset: 0x60
    bool hdr;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showAlpha
    // Size: 0x1
    // Offset: 0x61
    bool showAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean showPicker
    // Size: 0x1
    // Offset: 0x62
    bool showPicker;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single incStep
    // Size: 0x4
    // Offset: 0x64
    float incStep;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single incStepMult
    // Size: 0x4
    // Offset: 0x68
    float incStepMult;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 decimals
    // Size: 0x4
    // Offset: 0x6C
    int decimals;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public System.Boolean hdr
    [[deprecated("Use field access instead!")]] bool& dyn_hdr();
    // Get instance field reference: public System.Boolean showAlpha
    [[deprecated("Use field access instead!")]] bool& dyn_showAlpha();
    // Get instance field reference: public System.Boolean showPicker
    [[deprecated("Use field access instead!")]] bool& dyn_showPicker();
    // Get instance field reference: public System.Single incStep
    [[deprecated("Use field access instead!")]] float& dyn_incStep();
    // Get instance field reference: public System.Single incStepMult
    [[deprecated("Use field access instead!")]] float& dyn_incStepMult();
    // Get instance field reference: public System.Int32 decimals
    [[deprecated("Use field access instead!")]] int& dyn_decimals();
    // public UnityEngine.Color ValidateValue(UnityEngine.Color value)
    // Offset: 0x524AA70
    ::UnityEngine::Color ValidateValue(::UnityEngine::Color value);
    // public System.Void .ctor()
    // Offset: 0x524AAC0
    // Implemented from: UnityEngine.Rendering.DebugUI/Field`1
    // Base method: System.Void Field_1::.ctor()
    // Base method: System.Void Widget::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebugUI::ColorField* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::DebugUI::ColorField::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebugUI::ColorField*, creationType>()));
    }
  }; // UnityEngine.Rendering.DebugUI/ColorField
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ColorField::ValidateValue
// Il2CppName: ValidateValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (UnityEngine::Rendering::DebugUI::ColorField::*)(::UnityEngine::Color)>(&UnityEngine::Rendering::DebugUI::ColorField::ValidateValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::DebugUI::ColorField*), "ValidateValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::DebugUI::ColorField::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
