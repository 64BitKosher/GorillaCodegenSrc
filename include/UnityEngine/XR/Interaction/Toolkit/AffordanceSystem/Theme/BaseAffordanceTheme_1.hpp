// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Forward declaring namespace: Unity::XR::CoreUtils::Datums
namespace Unity::XR::CoreUtils::Datums {
  // Forward declaring type: AnimationCurveDatumProperty
  class AnimationCurveDatumProperty;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // Forward declaring type: AffordanceThemeData`1<T>
  template<typename T>
  class AffordanceThemeData_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // Forward declaring type: BaseAffordanceTheme`1<T>
  template<typename T>
  class BaseAffordanceTheme_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme", "BaseAffordanceTheme`1");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BaseAffordanceTheme_1 : public ::Il2CppObject/*, public ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>*/ {
    public:
    public:
    // private Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty m_StateAnimationCurve
    // Size: 0x8
    // Offset: 0x0
    ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty* m_StateAnimationCurve;
    // Field size check
    static_assert(sizeof(::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> m_List
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* m_List;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>
    operator ::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*>*>(this);
    }
    // Autogenerated instance field getter
    // Get instance field: private Unity.XR.CoreUtils.Datums.AnimationCurveDatumProperty m_StateAnimationCurve
    [[deprecated("Use field access instead!")]] ::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty*& dyn_m_StateAnimationCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::dyn_m_StateAnimationCurve");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_StateAnimationCurve"))->offset;
      return *reinterpret_cast<::Unity::XR::CoreUtils::Datums::AnimationCurveDatumProperty**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> m_List
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>*& dyn_m_List() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::dyn_m_List");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_List"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public UnityEngine.AnimationCurve get_animationCurve()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::AnimationCurve* get_animationCurve() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::get_animationCurve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_animationCurve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::AnimationCurve*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseAffordanceTheme_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseAffordanceTheme_1<T>*, creationType>()));
    }
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T> GetAffordanceThemeDataForIndex(System.Byte stateIndex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>* GetAffordanceThemeDataForIndex(uint8_t stateIndex) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::GetAffordanceThemeDataForIndex");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetAffordanceThemeDataForIndex", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(stateIndex)})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*, false>(this, ___internal__method, stateIndex);
    }
    // public System.Void SetAffordanceThemeDataList(System.Collections.Generic.List`1<UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.AffordanceThemeData`1<T>> newList)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAffordanceThemeDataList(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::AffordanceThemeData_1<T>*>* newList) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::SetAffordanceThemeDataList");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetAffordanceThemeDataList", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newList)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newList);
    }
    // public System.Void CopyFrom(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::CopyFrom");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, other);
    }
    // public System.Void SetAnimationCurve(UnityEngine.AnimationCurve newAnimationCurve)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetAnimationCurve(::UnityEngine::AnimationCurve* newAnimationCurve) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::SetAnimationCurve");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetAnimationCurve", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(newAnimationCurve)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, newAnimationCurve);
    }
    // public System.Boolean Equals(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1<T> other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Equals(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, other);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::Equals");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Theme::BaseAffordanceTheme_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(this, ___internal__method);
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1
  // Could not write size check! Type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.BaseAffordanceTheme`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
