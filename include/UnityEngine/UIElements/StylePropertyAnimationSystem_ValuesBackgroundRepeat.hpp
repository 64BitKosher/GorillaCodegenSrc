// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.StylePropertyAnimationSystem
#include "UnityEngine/UIElements/StylePropertyAnimationSystem.hpp"
// Including type: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesDiscrete`1
#include "UnityEngine/UIElements/StylePropertyAnimationSystem_ValuesDiscrete_1.hpp"
// Including type: UnityEngine.UIElements.BackgroundRepeat
#include "UnityEngine/UIElements/BackgroundRepeat.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat*, "UnityEngine.UIElements", "StylePropertyAnimationSystem/ValuesBackgroundRepeat");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackgroundRepeat
  // [TokenAttribute] Offset: FFFFFFFF
  class StylePropertyAnimationSystem::ValuesBackgroundRepeat : public ::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesDiscrete_1<::UnityEngine::UIElements::BackgroundRepeat> {
    public:
    // protected override System.Void UpdateComputedStyle()
    // Offset: 0x56AF57C
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
    // Base method: System.Void Values::UpdateComputedStyle()
    void UpdateComputedStyle();
    // protected override System.Void UpdateComputedStyle(System.Int32 i)
    // Offset: 0x56AF648
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/Values
    // Base method: System.Void Values::UpdateComputedStyle(System.Int32 i)
    void UpdateComputedStyle(int i);
    // public System.Void .ctor()
    // Offset: 0x56AF6F0
    // Implemented from: UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesDiscrete`1
    // Base method: System.Void ValuesDiscrete_1::.ctor()
    // Base method: System.Void Values_1::.ctor()
    // Base method: System.Void Values::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StylePropertyAnimationSystem::ValuesBackgroundRepeat* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StylePropertyAnimationSystem::ValuesBackgroundRepeat*, creationType>()));
    }
  }; // UnityEngine.UIElements.StylePropertyAnimationSystem/ValuesBackgroundRepeat
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::UpdateComputedStyle
// Il2CppName: UpdateComputedStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::*)()>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::UpdateComputedStyle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat*), "UpdateComputedStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::UpdateComputedStyle
// Il2CppName: UpdateComputedStyle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::*)(int)>(&UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::UpdateComputedStyle)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat*), "UpdateComputedStyle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::StylePropertyAnimationSystem::ValuesBackgroundRepeat::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
