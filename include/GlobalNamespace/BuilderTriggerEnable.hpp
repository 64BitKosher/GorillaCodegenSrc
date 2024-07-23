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
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: Collider
  class Collider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BuilderTriggerEnable
  class BuilderTriggerEnable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BuilderTriggerEnable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BuilderTriggerEnable*, "", "BuilderTriggerEnable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: BuilderTriggerEnable
  // [TokenAttribute] Offset: FFFFFFFF
  class BuilderTriggerEnable : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> activateOnEnter
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* activateOnEnter;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> deactivateOnEnter
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* deactivateOnEnter;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> activateOnExit
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* activateOnExit;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    // public System.Collections.Generic.List`1<UnityEngine.GameObject> deactivateOnExit
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* deactivateOnExit;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> activateOnEnter
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_activateOnEnter();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> deactivateOnEnter
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_deactivateOnEnter();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> activateOnExit
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_activateOnExit();
    // Get instance field reference: public System.Collections.Generic.List`1<UnityEngine.GameObject> deactivateOnExit
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& dyn_deactivateOnExit();
    // private System.Void OnTriggerEnter(UnityEngine.Collider other)
    // Offset: 0x26EEC64
    void OnTriggerEnter(::UnityEngine::Collider* other);
    // private System.Void OnTriggerExit(UnityEngine.Collider other)
    // Offset: 0x26EEE9C
    void OnTriggerExit(::UnityEngine::Collider* other);
    // public System.Void .ctor()
    // Offset: 0x26EF0D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BuilderTriggerEnable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BuilderTriggerEnable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BuilderTriggerEnable*, creationType>()));
    }
  }; // BuilderTriggerEnable
  #pragma pack(pop)
  static check_size<sizeof(BuilderTriggerEnable), 56 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*)> __GlobalNamespace_BuilderTriggerEnableSizeCheck;
  static_assert(sizeof(BuilderTriggerEnable) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BuilderTriggerEnable::OnTriggerEnter
// Il2CppName: OnTriggerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderTriggerEnable::*)(::UnityEngine::Collider*)>(&GlobalNamespace::BuilderTriggerEnable::OnTriggerEnter)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderTriggerEnable*), "OnTriggerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderTriggerEnable::OnTriggerExit
// Il2CppName: OnTriggerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BuilderTriggerEnable::*)(::UnityEngine::Collider*)>(&GlobalNamespace::BuilderTriggerEnable::OnTriggerExit)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Collider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BuilderTriggerEnable*), "OnTriggerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BuilderTriggerEnable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!