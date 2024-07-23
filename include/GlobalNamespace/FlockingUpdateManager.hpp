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
  // Forward declaring type: Flocking
  class Flocking;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FlockingUpdateManager
  class FlockingUpdateManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FlockingUpdateManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlockingUpdateManager*, "", "FlockingUpdateManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FlockingUpdateManager
  // [TokenAttribute] Offset: FFFFFFFF
  class FlockingUpdateManager : public ::UnityEngine::MonoBehaviour {
    public:
    // Get static field: static public FlockingUpdateManager instance
    static ::GlobalNamespace::FlockingUpdateManager* _get_instance();
    // Set static field: static public FlockingUpdateManager instance
    static void _set_instance(::GlobalNamespace::FlockingUpdateManager* value);
    // Get static field: static public System.Boolean hasInstance
    static bool _get_hasInstance();
    // Set static field: static public System.Boolean hasInstance
    static void _set_hasInstance(bool value);
    // Get static field: static public System.Collections.Generic.List`1<Flocking> allFlockings
    static ::System::Collections::Generic::List_1<::GlobalNamespace::Flocking*>* _get_allFlockings();
    // Set static field: static public System.Collections.Generic.List`1<Flocking> allFlockings
    static void _set_allFlockings(::System::Collections::Generic::List_1<::GlobalNamespace::Flocking*>* value);
    // protected System.Void Awake()
    // Offset: 0x26F5174
    void Awake();
    // static public System.Void CreateManager()
    // Offset: 0x26F5394
    static void CreateManager();
    // static private System.Void SetInstance(FlockingUpdateManager manager)
    // Offset: 0x26F52B0
    static void SetInstance(::GlobalNamespace::FlockingUpdateManager* manager);
    // static public System.Void RegisterFlocking(Flocking flocking)
    // Offset: 0x26F4FE4
    static void RegisterFlocking(::GlobalNamespace::Flocking* flocking);
    // static public System.Void UnregisterFlocking(Flocking flocking)
    // Offset: 0x26F34F4
    static void UnregisterFlocking(::GlobalNamespace::Flocking* flocking);
    // public System.Void Update()
    // Offset: 0x26F5454
    void Update();
    // public System.Void .ctor()
    // Offset: 0x26F5520
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlockingUpdateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FlockingUpdateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlockingUpdateManager*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x26F5528
    static void _cctor();
  }; // FlockingUpdateManager
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlockingUpdateManager::*)()>(&GlobalNamespace::FlockingUpdateManager::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::CreateManager
// Il2CppName: CreateManager
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FlockingUpdateManager::CreateManager)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "CreateManager", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::SetInstance
// Il2CppName: SetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::FlockingUpdateManager*)>(&GlobalNamespace::FlockingUpdateManager::SetInstance)> {
  static const MethodInfo* get() {
    static auto* manager = &::il2cpp_utils::GetClassFromName("", "FlockingUpdateManager")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "SetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{manager});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::RegisterFlocking
// Il2CppName: RegisterFlocking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Flocking*)>(&GlobalNamespace::FlockingUpdateManager::RegisterFlocking)> {
  static const MethodInfo* get() {
    static auto* flocking = &::il2cpp_utils::GetClassFromName("", "Flocking")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "RegisterFlocking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flocking});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::UnregisterFlocking
// Il2CppName: UnregisterFlocking
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Flocking*)>(&GlobalNamespace::FlockingUpdateManager::UnregisterFlocking)> {
  static const MethodInfo* get() {
    static auto* flocking = &::il2cpp_utils::GetClassFromName("", "Flocking")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "UnregisterFlocking", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flocking});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FlockingUpdateManager::*)()>(&GlobalNamespace::FlockingUpdateManager::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FlockingUpdateManager::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FlockingUpdateManager::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FlockingUpdateManager*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
