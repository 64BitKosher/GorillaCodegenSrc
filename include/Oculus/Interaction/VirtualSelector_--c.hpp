// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.VirtualSelector
#include "Oculus/Interaction/VirtualSelector.hpp"
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
NEED_NO_BOX(::Oculus::Interaction::VirtualSelector::$$c);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::VirtualSelector::$$c*, "Oculus.Interaction", "VirtualSelector/<>c");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.VirtualSelector/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VirtualSelector::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Oculus.Interaction.VirtualSelector/<>c <>9
    static ::Oculus::Interaction::VirtualSelector::$$c* _get_$$9();
    // Set static field: static public readonly Oculus.Interaction.VirtualSelector/<>c <>9
    static void _set_$$9(::Oculus::Interaction::VirtualSelector::$$c* value);
    // Get static field: static public System.Action <>9__12_0
    static ::System::Action* _get_$$9__12_0();
    // Set static field: static public System.Action <>9__12_0
    static void _set_$$9__12_0(::System::Action* value);
    // Get static field: static public System.Action <>9__12_1
    static ::System::Action* _get_$$9__12_1();
    // Set static field: static public System.Action <>9__12_1
    static void _set_$$9__12_1(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x47D5060
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x47D50C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VirtualSelector::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::VirtualSelector::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VirtualSelector::$$c*, creationType>()));
    }
    // System.Void <.ctor>b__12_0()
    // Offset: 0x47D50D0
    void $_ctor$b__12_0();
    // System.Void <.ctor>b__12_1()
    // Offset: 0x47D50D4
    void $_ctor$b__12_1();
  }; // Oculus.Interaction.VirtualSelector/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::VirtualSelector::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::$$c::$_ctor$b__12_0
// Il2CppName: <.ctor>b__12_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::$$c::*)()>(&Oculus::Interaction::VirtualSelector::$$c::$_ctor$b__12_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector::$$c*), "<.ctor>b__12_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::VirtualSelector::$$c::$_ctor$b__12_1
// Il2CppName: <.ctor>b__12_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::VirtualSelector::$$c::*)()>(&Oculus::Interaction::VirtualSelector::$$c::$_ctor$b__12_1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::VirtualSelector::$$c*), "<.ctor>b__12_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
