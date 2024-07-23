// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRVirtualKeyboard/HandInputSource
#include "GlobalNamespace/OVRVirtualKeyboard_HandInputSource.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRBone
  class OVRBone;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c*, "", "OVRVirtualKeyboard/HandInputSource/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OVRVirtualKeyboard/HandInputSource/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OVRVirtualKeyboard::HandInputSource::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly OVRVirtualKeyboard/HandInputSource/<>c <>9
    static ::GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c* _get_$$9();
    // Set static field: static public readonly OVRVirtualKeyboard/HandInputSource/<>c <>9
    static void _set_$$9(::GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c* value);
    // Get static field: static public System.Func`2<OVRBone,System.Boolean> <>9__6_0
    static ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* _get_$$9__6_0();
    // Set static field: static public System.Func`2<OVRBone,System.Boolean> <>9__6_0
    static void _set_$$9__6_0(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);
    // Get static field: static public System.Func`2<OVRBone,System.Boolean> <>9__6_1
    static ::System::Func_2<::GlobalNamespace::OVRBone*, bool>* _get_$$9__6_1();
    // Set static field: static public System.Func`2<OVRBone,System.Boolean> <>9__6_1
    static void _set_$$9__6_1(::System::Func_2<::GlobalNamespace::OVRBone*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x493BC34
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x493BC9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRVirtualKeyboard::HandInputSource::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRVirtualKeyboard::HandInputSource::$$c*, creationType>()));
    }
    // System.Boolean <UpdateInput>b__6_0(OVRBone b)
    // Offset: 0x493BCA4
    bool $UpdateInput$b__6_0(::GlobalNamespace::OVRBone* b);
    // System.Boolean <UpdateInput>b__6_1(OVRBone b)
    // Offset: 0x493BCC4
    bool $UpdateInput$b__6_1(::GlobalNamespace::OVRBone* b);
  }; // OVRVirtualKeyboard/HandInputSource/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::$UpdateInput$b__6_0
// Il2CppName: <UpdateInput>b__6_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::*)(::GlobalNamespace::OVRBone*)>(&GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::$UpdateInput$b__6_0)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("", "OVRBone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c*), "<UpdateInput>b__6_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::$UpdateInput$b__6_1
// Il2CppName: <UpdateInput>b__6_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::*)(::GlobalNamespace::OVRBone*)>(&GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c::$UpdateInput$b__6_1)> {
  static const MethodInfo* get() {
    static auto* b = &::il2cpp_utils::GetClassFromName("", "OVRBone")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRVirtualKeyboard::HandInputSource::$$c*), "<UpdateInput>b__6_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{b});
  }
};
