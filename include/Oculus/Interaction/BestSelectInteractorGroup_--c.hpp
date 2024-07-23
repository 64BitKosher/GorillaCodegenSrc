// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.BestSelectInteractorGroup
#include "Oculus/Interaction/BestSelectInteractorGroup.hpp"
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
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractor
  class IInteractor;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::BestSelectInteractorGroup::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::BestSelectInteractorGroup::$$c*, "Oculus.Interaction", "BestSelectInteractorGroup/<>c");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.BestSelectInteractorGroup/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BestSelectInteractorGroup::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.BestSelectInteractorGroup/<>c <>9
    static ::Oculus::Interaction::BestSelectInteractorGroup::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.BestSelectInteractorGroup/<>c <>9
    static void _set_$$9(::Oculus::Interaction::BestSelectInteractorGroup::$$c* value);
    // Get static field: static public System.Action`1<Oculus.Interaction.IInteractor> <>9__18_0
    static ::System::Action_1<::Oculus::Interaction::IInteractor*>* _get_$$9__18_0();
    // Set static field: static public System.Action`1<Oculus.Interaction.IInteractor> <>9__18_0
    static void _set_$$9__18_0(::System::Action_1<::Oculus::Interaction::IInteractor*>* value);
    // Get static field: static public System.Action`1<Oculus.Interaction.IInteractor> <>9__19_0
    static ::System::Action_1<::Oculus::Interaction::IInteractor*>* _get_$$9__19_0();
    // Set static field: static public System.Action`1<Oculus.Interaction.IInteractor> <>9__19_0
    static void _set_$$9__19_0(::System::Action_1<::Oculus::Interaction::IInteractor*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4780F18
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x4780F80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BestSelectInteractorGroup::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::BestSelectInteractorGroup::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BestSelectInteractorGroup::$$c*, creationType>()));
    }
    // System.Void <Preprocess>b__18_0(Oculus.Interaction.IInteractor interactor)
    // Offset: 0x4780F88
    void $Preprocess$b__18_0(::Oculus::Interaction::IInteractor* interactor);
    // System.Void <Process>b__19_0(Oculus.Interaction.IInteractor interactor)
    // Offset: 0x4781028
    void $Process$b__19_0(::Oculus::Interaction::IInteractor* interactor);
    // System.Boolean <.cctor>b__34_0(Oculus.Interaction.IInteractor interactor, System.Int32 index)
    // Offset: 0x47810C8
    bool $_cctor$b__34_0(::Oculus::Interaction::IInteractor* interactor, int index);
    // System.Boolean <.cctor>b__34_1(Oculus.Interaction.IInteractor interactor, System.Int32 index)
    // Offset: 0x47811EC
    bool $_cctor$b__34_1(::Oculus::Interaction::IInteractor* interactor, int index);
    // System.Boolean <.cctor>b__34_2(Oculus.Interaction.IInteractor interactor, System.Int32 index)
    // Offset: 0x4781314
    bool $_cctor$b__34_2(::Oculus::Interaction::IInteractor* interactor, int index);
    // System.Boolean <.cctor>b__34_3(Oculus.Interaction.IInteractor interactor, System.Int32 index)
    // Offset: 0x478143C
    bool $_cctor$b__34_3(::Oculus::Interaction::IInteractor* interactor, int index);
  }; // Oculus.Interaction.BestSelectInteractorGroup/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$Preprocess$b__18_0
// Il2CppName: <Preprocess>b__18_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$Preprocess$b__18_0)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<Preprocess>b__18_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$Process$b__19_0
// Il2CppName: <Process>b__19_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$Process$b__19_0)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<Process>b__19_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_0
// Il2CppName: <.cctor>b__34_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*, int)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_0)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<.cctor>b__34_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_1
// Il2CppName: <.cctor>b__34_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*, int)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_1)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<.cctor>b__34_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_2
// Il2CppName: <.cctor>b__34_2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*, int)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_2)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<.cctor>b__34_2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, index});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_3
// Il2CppName: <.cctor>b__34_3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::BestSelectInteractorGroup::$$c::*)(::Oculus::Interaction::IInteractor*, int)>(&Oculus::Interaction::BestSelectInteractorGroup::$$c::$_cctor$b__34_3)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IInteractor")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::BestSelectInteractorGroup::$$c*), "<.cctor>b__34_3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, index});
  }
};
