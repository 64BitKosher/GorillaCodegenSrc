// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaScoreBoard
#include "GlobalNamespace/GorillaScoreBoard.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Predicate`1<T>
  template<typename T>
  class Predicate_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaScoreBoard::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaScoreBoard::$$c*, "", "GorillaScoreBoard/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: GorillaScoreBoard/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class GorillaScoreBoard::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly GorillaScoreBoard/<>c <>9
    static ::GlobalNamespace::GorillaScoreBoard::$$c* _get_$$9();
    // Set static field: static public readonly GorillaScoreBoard/<>c <>9
    static void _set_$$9(::GlobalNamespace::GorillaScoreBoard::$$c* value);
    // Get static field: static public System.Predicate`1<System.Char> <>9__25_0
    static ::System::Predicate_1<::Il2CppChar>* _get_$$9__25_0();
    // Set static field: static public System.Predicate`1<System.Char> <>9__25_0
    static void _set_$$9__25_0(::System::Predicate_1<::Il2CppChar>* value);
    // static private System.Void .cctor()
    // Offset: 0x271849C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2718504
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaScoreBoard::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaScoreBoard::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaScoreBoard::$$c*, creationType>()));
    }
    // System.Boolean <NormalizeName>b__25_0(System.Char c)
    // Offset: 0x271850C
    bool $NormalizeName$b__25_0(::Il2CppChar c);
  }; // GorillaScoreBoard/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::GorillaScoreBoard::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreBoard::$$c::$NormalizeName$b__25_0
// Il2CppName: <NormalizeName>b__25_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GorillaScoreBoard::$$c::*)(::Il2CppChar)>(&GlobalNamespace::GorillaScoreBoard::$$c::$NormalizeName$b__25_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreBoard::$$c*), "<NormalizeName>b__25_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
