// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GameObjectScheduling.GameObjectSchedule
#include "GameObjectScheduling/GameObjectSchedule.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameObjectScheduling::GameObjectSchedule::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GameObjectScheduling::GameObjectSchedule::$$c*, "GameObjectScheduling", "GameObjectSchedule/<>c");
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GameObjectScheduling.GameObjectSchedule/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GameObjectSchedule::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GameObjectScheduling.GameObjectSchedule/<>c <>9
    static ::GameObjectScheduling::GameObjectSchedule::$$c* _get_$$9();
    // Set static field: static public readonly GameObjectScheduling.GameObjectSchedule/<>c <>9
    static void _set_$$9(::GameObjectScheduling::GameObjectSchedule::$$c* value);
    // Get static field: static public System.Comparison`1<GameObjectScheduling.GameObjectSchedule/GameObjectScheduleNode> <>9__11_0
    static ::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode*>* _get_$$9__11_0();
    // Set static field: static public System.Comparison`1<GameObjectScheduling.GameObjectSchedule/GameObjectScheduleNode> <>9__11_0
    static void _set_$$9__11_0(::System::Comparison_1<::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode*>* value);
    // static private System.Void .cctor()
    // Offset: 0x28CE82C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x28CE894
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameObjectSchedule::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameObjectScheduling::GameObjectSchedule::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameObjectSchedule::$$c*, creationType>()));
    }
    // System.Int32 <_validate>b__11_0(GameObjectScheduling.GameObjectSchedule/GameObjectScheduleNode e1, GameObjectScheduling.GameObjectSchedule/GameObjectScheduleNode e2)
    // Offset: 0x28CE89C
    int $_validate$b__11_0(::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode* e1, ::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode* e2);
  }; // GameObjectScheduling.GameObjectSchedule/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedule::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GameObjectScheduling::GameObjectSchedule::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameObjectScheduling::GameObjectSchedule::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedule::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GameObjectScheduling::GameObjectSchedule::$$c::$_validate$b__11_0
// Il2CppName: <_validate>b__11_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GameObjectScheduling::GameObjectSchedule::$$c::*)(::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode*, ::GameObjectScheduling::GameObjectSchedule::GameObjectScheduleNode*)>(&GameObjectScheduling::GameObjectSchedule::$$c::$_validate$b__11_0)> {
  static const MethodInfo* get() {
    static auto* e1 = &::il2cpp_utils::GetClassFromName("GameObjectScheduling", "GameObjectSchedule/GameObjectScheduleNode")->byval_arg;
    static auto* e2 = &::il2cpp_utils::GetClassFromName("GameObjectScheduling", "GameObjectSchedule/GameObjectScheduleNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GameObjectScheduling::GameObjectSchedule::$$c*), "<_validate>b__11_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e1, e2});
  }
};
