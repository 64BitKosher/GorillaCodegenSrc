// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.TouchHandGrabInteractor
#include "Oculus/Interaction/TouchHandGrabInteractor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::TouchHandGrabInteractor::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::TouchHandGrabInteractor::$$c*, "Oculus.Interaction", "TouchHandGrabInteractor/<>c");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.TouchHandGrabInteractor/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TouchHandGrabInteractor::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.TouchHandGrabInteractor/<>c <>9
    static ::Oculus::Interaction::TouchHandGrabInteractor::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.TouchHandGrabInteractor/<>c <>9
    static void _set_$$9(::Oculus::Interaction::TouchHandGrabInteractor::$$c* value);
    // Get static field: static public System.Func`1<System.Single> <>9__39_0
    static ::System::Func_1<float>* _get_$$9__39_0();
    // Set static field: static public System.Func`1<System.Single> <>9__39_0
    static void _set_$$9__39_0(::System::Func_1<float>* value);
    // Get static field: static public System.Action <>9__69_0
    static ::System::Action* _get_$$9__69_0();
    // Set static field: static public System.Action <>9__69_0
    static void _set_$$9__69_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x47C03CC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x47C0434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TouchHandGrabInteractor::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::TouchHandGrabInteractor::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TouchHandGrabInteractor::$$c*, creationType>()));
    }
    // System.Single <Awake>b__39_0()
    // Offset: 0x47C043C
    float $Awake$b__39_0();
    // System.Void <.ctor>b__69_0()
    // Offset: 0x47C0444
    void $_ctor$b__69_0();
  }; // Oculus.Interaction.TouchHandGrabInteractor/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractor::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::TouchHandGrabInteractor::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractor::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractor::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractor::$$c::$Awake$b__39_0
// Il2CppName: <Awake>b__39_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::TouchHandGrabInteractor::$$c::*)()>(&Oculus::Interaction::TouchHandGrabInteractor::$$c::$Awake$b__39_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractor::$$c*), "<Awake>b__39_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::TouchHandGrabInteractor::$$c::$_ctor$b__69_0
// Il2CppName: <.ctor>b__69_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::TouchHandGrabInteractor::$$c::*)()>(&Oculus::Interaction::TouchHandGrabInteractor::$$c::$_ctor$b__69_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::TouchHandGrabInteractor::$$c*), "<.ctor>b__69_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
