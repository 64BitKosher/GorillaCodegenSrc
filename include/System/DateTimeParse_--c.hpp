// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTimeParse
#include "System/DateTimeParse.hpp"
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
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::DateTimeParse::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::DateTimeParse::$$c*, "System", "DateTimeParse/<>c");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.DateTimeParse/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DateTimeParse::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.DateTimeParse/<>c <>9
    static ::System::DateTimeParse::$$c* _get_$$9();
    // Set static field: static public readonly System.DateTimeParse/<>c <>9
    static void _set_$$9(::System::DateTimeParse::$$c* value);
    // Get static field: static public System.Func`1<System.DateTimeParse/MatchNumberDelegate> <>9__98_0
    static ::System::Func_1<::System::DateTimeParse::MatchNumberDelegate*>* _get_$$9__98_0();
    // Set static field: static public System.Func`1<System.DateTimeParse/MatchNumberDelegate> <>9__98_0
    static void _set_$$9__98_0(::System::Func_1<::System::DateTimeParse::MatchNumberDelegate*>* value);
    // static private System.Void .cctor()
    // Offset: 0x4651A18
    static void _cctor();
    // System.DateTimeParse/MatchNumberDelegate <DoStrictParse>b__98_0()
    // Offset: 0x4651A88
    ::System::DateTimeParse::MatchNumberDelegate* $DoStrictParse$b__98_0();
    // public System.Void .ctor()
    // Offset: 0x4651A80
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeParse::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::DateTimeParse::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeParse::$$c*, creationType>()));
    }
  }; // System.DateTimeParse/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::DateTimeParse::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::DateTimeParse::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeParse::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeParse::$$c::$DoStrictParse$b__98_0
// Il2CppName: <DoStrictParse>b__98_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeParse::MatchNumberDelegate* (System::DateTimeParse::$$c::*)()>(&System::DateTimeParse::$$c::$DoStrictParse$b__98_0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::DateTimeParse::$$c*), "<DoStrictParse>b__98_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::DateTimeParse::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
