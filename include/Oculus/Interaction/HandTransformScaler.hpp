// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandTransformScaler
  class HandTransformScaler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandTransformScaler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandTransformScaler*, "Oculus.Interaction", "HandTransformScaler");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandTransformScaler
  // [TokenAttribute] Offset: FFFFFFFF
  class HandTransformScaler : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: originalScale
    char __padding2[0x3] = {};
    // private UnityEngine.Vector3 _originalScale
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 originalScale;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // Get instance field reference: private UnityEngine.Vector3 _originalScale
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__originalScale();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47D2178
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47D2180
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // protected System.Void Awake()
    // Offset: 0x47D2188
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D21E0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D223C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D233C
    void OnDisable();
    // private System.Void HandleHandUpdated()
    // Offset: 0x47D243C
    void HandleHandUpdated();
    // public System.Void .ctor()
    // Offset: 0x47D25B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandTransformScaler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandTransformScaler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandTransformScaler*, creationType>()));
    }
  }; // Oculus.Interaction.HandTransformScaler
  #pragma pack(pop)
  static check_size<sizeof(HandTransformScaler), 52 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_HandTransformScalerSizeCheck;
  static_assert(sizeof(HandTransformScaler) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandTransformScaler::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::HandleHandUpdated
// Il2CppName: HandleHandUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandTransformScaler::*)()>(&Oculus::Interaction::HandTransformScaler::HandleHandUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandTransformScaler*), "HandleHandUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandTransformScaler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
