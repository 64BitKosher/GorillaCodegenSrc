// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: TransferrableObject
#include "GlobalNamespace/TransferrableObject.hpp"
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
NEED_NO_BOX(::GlobalNamespace::TransferrableObject::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TransferrableObject::$$c*, "", "TransferrableObject/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: TransferrableObject/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TransferrableObject::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly TransferrableObject/<>c <>9
    static ::GlobalNamespace::TransferrableObject::$$c* _get_$$9();
    // Set static field: static public readonly TransferrableObject/<>c <>9
    static void _set_$$9(::GlobalNamespace::TransferrableObject::$$c* value);
    // Get static field: static public System.Action <>9__72_0
    static ::System::Action* _get_$$9__72_0();
    // Set static field: static public System.Action <>9__72_0
    static void _set_$$9__72_0(::System::Action* value);
    // Get static field: static public System.Action <>9__118_0
    static ::System::Action* _get_$$9__118_0();
    // Set static field: static public System.Action <>9__118_0
    static void _set_$$9__118_0(::System::Action* value);
    // Get static field: static public System.Action <>9__157_0
    static ::System::Action* _get_$$9__157_0();
    // Set static field: static public System.Action <>9__157_0
    static void _set_$$9__157_0(::System::Action* value);
    // Get static field: static public System.Action <>9__158_0
    static ::System::Action* _get_$$9__158_0();
    // Set static field: static public System.Action <>9__158_0
    static void _set_$$9__158_0(::System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x26CB2B8
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x26CB320
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TransferrableObject::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TransferrableObject::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TransferrableObject::$$c*, creationType>()));
    }
    // System.Void <WorldShareableRequestOwnership>b__72_0()
    // Offset: 0x26CB328
    void $WorldShareableRequestOwnership$b__72_0();
    // System.Void <OnDisable>b__118_0()
    // Offset: 0x26CB32C
    void $OnDisable$b__118_0();
    // System.Void <ResetToDefaultState>b__157_0()
    // Offset: 0x26CB330
    void $ResetToDefaultState$b__157_0();
    // System.Void <OnGrab>b__158_0()
    // Offset: 0x26CB334
    void $OnGrab$b__158_0();
  }; // TransferrableObject/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::TransferrableObject::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableObject::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::$WorldShareableRequestOwnership$b__72_0
// Il2CppName: <WorldShareableRequestOwnership>b__72_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableObject::$$c::*)()>(&GlobalNamespace::TransferrableObject::$$c::$WorldShareableRequestOwnership$b__72_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableObject::$$c*), "<WorldShareableRequestOwnership>b__72_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::$OnDisable$b__118_0
// Il2CppName: <OnDisable>b__118_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableObject::$$c::*)()>(&GlobalNamespace::TransferrableObject::$$c::$OnDisable$b__118_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableObject::$$c*), "<OnDisable>b__118_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::$ResetToDefaultState$b__157_0
// Il2CppName: <ResetToDefaultState>b__157_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableObject::$$c::*)()>(&GlobalNamespace::TransferrableObject::$$c::$ResetToDefaultState$b__157_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableObject::$$c*), "<ResetToDefaultState>b__157_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TransferrableObject::$$c::$OnGrab$b__158_0
// Il2CppName: <OnGrab>b__158_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TransferrableObject::$$c::*)()>(&GlobalNamespace::TransferrableObject::$$c::$OnGrab$b__158_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TransferrableObject::$$c*), "<OnGrab>b__158_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
