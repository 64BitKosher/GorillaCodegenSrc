// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlantableFlagManager
#include "GlobalNamespace/PlantableFlagManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlantableFlagManager::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlantableFlagManager::$$c*, "", "PlantableFlagManager/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: PlantableFlagManager/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PlantableFlagManager::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly PlantableFlagManager/<>c <>9
    static ::GlobalNamespace::PlantableFlagManager::$$c* _get_$$9();
    // Set static field: static public readonly PlantableFlagManager/<>c <>9
    static void _set_$$9(::GlobalNamespace::PlantableFlagManager::$$c* value);
    // Get static field: static public System.Action <>9__2_0
    static ::System::Action* _get_$$9__2_0();
    // Set static field: static public System.Action <>9__2_0
    static void _set_$$9__2_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x2890D54
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2890DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlantableFlagManager::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlantableFlagManager::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlantableFlagManager::$$c*, creationType>()));
    }
    // System.Void <ResetAllFlags>b__2_0()
    // Offset: 0x2890DC4
    void $ResetAllFlags$b__2_0();
  }; // PlantableFlagManager/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PlantableFlagManager::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlantableFlagManager::$$c::$ResetAllFlags$b__2_0
// Il2CppName: <ResetAllFlags>b__2_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlantableFlagManager::$$c::*)()>(&GlobalNamespace::PlantableFlagManager::$$c::$ResetAllFlags$b__2_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlantableFlagManager::$$c*), "<ResetAllFlags>b__2_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
