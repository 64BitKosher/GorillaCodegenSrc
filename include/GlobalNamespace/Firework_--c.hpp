// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Firework
#include "GlobalNamespace/Firework.hpp"
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
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::Firework::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Firework::$$c*, "", "Firework/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Firework/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Firework::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly Firework/<>c <>9
    static ::GlobalNamespace::Firework::$$c* _get_$$9();
    // Set static field: static public readonly Firework/<>c <>9
    static void _set_$$9(::GlobalNamespace::Firework::$$c* value);
    // Get static field: static public System.Func`2<Firework,System.Boolean> <>9__13_0
    static ::System::Func_2<::GlobalNamespace::Firework*, bool>* _get_$$9__13_0();
    // Set static field: static public System.Func`2<Firework,System.Boolean> <>9__13_0
    static void _set_$$9__13_0(::System::Func_2<::GlobalNamespace::Firework*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x279F29C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x279F304
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Firework::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::Firework::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Firework::$$c*, creationType>()));
    }
    // System.Boolean <OnValidate>b__13_0(Firework x)
    // Offset: 0x279F30C
    bool $OnValidate$b__13_0(::GlobalNamespace::Firework* x);
  }; // Firework/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::Firework::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::Firework::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Firework::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::Firework::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::Firework::$$c::$OnValidate$b__13_0
// Il2CppName: <OnValidate>b__13_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::Firework::$$c::*)(::GlobalNamespace::Firework*)>(&GlobalNamespace::Firework::$$c::$OnValidate$b__13_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "Firework")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::Firework::$$c*), "<OnValidate>b__13_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};