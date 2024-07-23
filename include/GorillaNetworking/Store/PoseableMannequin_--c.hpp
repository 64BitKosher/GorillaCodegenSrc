// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaNetworking.Store.PoseableMannequin
#include "GorillaNetworking/Store/PoseableMannequin.hpp"
// Including type: GorillaPosRotConstraint
#include "GlobalNamespace/GorillaPosRotConstraint.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaNetworking::Store::PoseableMannequin::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GorillaNetworking::Store::PoseableMannequin::$$c*, "GorillaNetworking.Store", "PoseableMannequin/<>c");
// Type namespace: GorillaNetworking.Store
namespace GorillaNetworking::Store {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaNetworking.Store.PoseableMannequin/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PoseableMannequin::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GorillaNetworking.Store.PoseableMannequin/<>c <>9
    static ::GorillaNetworking::Store::PoseableMannequin::$$c* _get_$$9();
    // Set static field: static public readonly GorillaNetworking.Store.PoseableMannequin/<>c <>9
    static void _set_$$9(::GorillaNetworking::Store::PoseableMannequin::$$c* value);
    // Get static field: static public System.Action`1<GorillaPosRotConstraint> <>9__17_0
    static ::System::Action_1<::GlobalNamespace::GorillaPosRotConstraint>* _get_$$9__17_0();
    // Set static field: static public System.Action`1<GorillaPosRotConstraint> <>9__17_0
    static void _set_$$9__17_0(::System::Action_1<::GlobalNamespace::GorillaPosRotConstraint>* value);
    // static private System.Void .cctor()
    // Offset: 0x28665C8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2866630
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoseableMannequin::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaNetworking::Store::PoseableMannequin::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoseableMannequin::$$c*, creationType>()));
    }
    // System.Void <UpdateGTPosRotConstraints>b__17_0(GorillaPosRotConstraint c)
    // Offset: 0x2866638
    void $UpdateGTPosRotConstraints$b__17_0(::GlobalNamespace::GorillaPosRotConstraint c);
  }; // GorillaNetworking.Store.PoseableMannequin/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaNetworking::Store::PoseableMannequin::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GorillaNetworking::Store::PoseableMannequin::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::PoseableMannequin::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaNetworking::Store::PoseableMannequin::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaNetworking::Store::PoseableMannequin::$$c::$UpdateGTPosRotConstraints$b__17_0
// Il2CppName: <UpdateGTPosRotConstraints>b__17_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaNetworking::Store::PoseableMannequin::$$c::*)(::GlobalNamespace::GorillaPosRotConstraint)>(&GorillaNetworking::Store::PoseableMannequin::$$c::$UpdateGTPosRotConstraints$b__17_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("", "GorillaPosRotConstraint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaNetworking::Store::PoseableMannequin::$$c*), "<UpdateGTPosRotConstraints>b__17_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
