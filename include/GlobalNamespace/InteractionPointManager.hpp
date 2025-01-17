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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: InteractionPoint
  class InteractionPoint;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InteractionPointManager
  class InteractionPointManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InteractionPointManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InteractionPointManager*, "", "InteractionPointManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: InteractionPointManager
  // [TokenAttribute] Offset: FFFFFFFF
  class InteractionPointManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static public InteractionPointManager instance
    static ::GlobalNamespace::InteractionPointManager* _get_instance();
    // Set static field: static public InteractionPointManager instance
    static void _set_instance(::GlobalNamespace::InteractionPointManager* value);
    // Get static field: static public System.Boolean hasInstance
    static bool _get_hasInstance();
    // Set static field: static public System.Boolean hasInstance
    static void _set_hasInstance(bool value);
    // Get static field: static public readonly System.Collections.Generic.List`1<InteractionPoint> interactionPoints
    static ::System::Collections::Generic::List_1<::GlobalNamespace::InteractionPoint*>* _get_interactionPoints();
    // Set static field: static public readonly System.Collections.Generic.List`1<InteractionPoint> interactionPoints
    static void _set_interactionPoints(::System::Collections::Generic::List_1<::GlobalNamespace::InteractionPoint*>* value);
    // protected System.Void Awake()
    // Offset: 0x2969C7C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x2969E58
    void OnDestroy();
    // protected System.Void LateUpdate()
    // Offset: 0x2969F28
    void LateUpdate();
    // static public System.Void CreateManager()
    // Offset: 0x2969FA8
    static void CreateManager();
    // static private System.Void SetInstance(InteractionPointManager manager)
    // Offset: 0x2969D74
    static void SetInstance(::GlobalNamespace::InteractionPointManager* manager);
    // static public System.Void Register(InteractionPoint interactionPoint)
    // Offset: 0x296A068
    static void Register(::GlobalNamespace::InteractionPoint* interactionPoint);
    // static public System.Void Unregister(InteractionPoint interactionPoint)
    // Offset: 0x296A1BC
    static void Unregister(::GlobalNamespace::InteractionPoint* interactionPoint);
    // public System.Void .ctor()
    // Offset: 0x296A2BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionPointManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InteractionPointManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionPointManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x296A2C4
    static void _cctor();
  }; // InteractionPointManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InteractionPointManager::*)()>(&GlobalNamespace::InteractionPointManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InteractionPointManager::*)()>(&GlobalNamespace::InteractionPointManager::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InteractionPointManager::*)()>(&GlobalNamespace::InteractionPointManager::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::CreateManager
// Il2CppName: CreateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::InteractionPointManager::CreateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "CreateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::SetInstance
// Il2CppName: SetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::InteractionPointManager*)>(&GlobalNamespace::InteractionPointManager::SetInstance)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "InteractionPointManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "SetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::Register
// Il2CppName: Register
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::InteractionPoint*)>(&GlobalNamespace::InteractionPointManager::Register)> {
  static const MethodInfo* get() {
    static auto* interactionPoint = &::il2cpp_utils::GetClassFromName("", "InteractionPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "Register", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactionPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::Unregister
// Il2CppName: Unregister
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::InteractionPoint*)>(&GlobalNamespace::InteractionPointManager::Unregister)> {
  static const MethodInfo* get() {
    static auto* interactionPoint = &::il2cpp_utils::GetClassFromName("", "InteractionPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), "Unregister", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactionPoint});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::InteractionPointManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::InteractionPointManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InteractionPointManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
