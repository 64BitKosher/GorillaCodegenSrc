// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
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
NEED_NO_BOX(::System::IO::TextWriter::$$c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::TextWriter::$$c*, "System.IO", "TextWriter/<>c");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.TextWriter/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TextWriter::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.IO.TextWriter/<>c <>9
    static ::System::IO::TextWriter::$$c* _get_$$9();
    // Set static field: static public readonly System.IO.TextWriter/<>c <>9
    static void _set_$$9(::System::IO::TextWriter::$$c* value);
    // Get static field: static public System.Action`1<System.Object> <>9__56_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__56_0();
    // Set static field: static public System.Action`1<System.Object> <>9__56_0
    static void _set_$$9__56_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__57_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__57_0();
    // Set static field: static public System.Action`1<System.Object> <>9__57_0
    static void _set_$$9__57_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__59_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__59_0();
    // Set static field: static public System.Action`1<System.Object> <>9__59_0
    static void _set_$$9__59_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__61_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__61_0();
    // Set static field: static public System.Action`1<System.Object> <>9__61_0
    static void _set_$$9__61_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__62_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__62_0();
    // Set static field: static public System.Action`1<System.Object> <>9__62_0
    static void _set_$$9__62_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__64_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__64_0();
    // Set static field: static public System.Action`1<System.Object> <>9__64_0
    static void _set_$$9__64_0(::System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Action`1<System.Object> <>9__67_0
    static ::System::Action_1<::Il2CppObject*>* _get_$$9__67_0();
    // Set static field: static public System.Action`1<System.Object> <>9__67_0
    static void _set_$$9__67_0(::System::Action_1<::Il2CppObject*>* value);
    // static private System.Void .cctor()
    // Offset: 0x45A9B2C
    static void _cctor();
    // System.Void <WriteAsync>b__56_0(System.Object state)
    // Offset: 0x45A9B9C
    void $WriteAsync$b__56_0(::Il2CppObject* state);
    // System.Void <WriteAsync>b__57_0(System.Object state)
    // Offset: 0x45A9C48
    void $WriteAsync$b__57_0(::Il2CppObject* state);
    // System.Void <WriteAsync>b__59_0(System.Object state)
    // Offset: 0x45A9CF4
    void $WriteAsync$b__59_0(::Il2CppObject* state);
    // System.Void <WriteLineAsync>b__61_0(System.Object state)
    // Offset: 0x45A9DBC
    void $WriteLineAsync$b__61_0(::Il2CppObject* state);
    // System.Void <WriteLineAsync>b__62_0(System.Object state)
    // Offset: 0x45A9E68
    void $WriteLineAsync$b__62_0(::Il2CppObject* state);
    // System.Void <WriteLineAsync>b__64_0(System.Object state)
    // Offset: 0x45A9F14
    void $WriteLineAsync$b__64_0(::Il2CppObject* state);
    // System.Void <FlushAsync>b__67_0(System.Object state)
    // Offset: 0x45A9FDC
    void $FlushAsync$b__67_0(::Il2CppObject* state);
    // public System.Void .ctor()
    // Offset: 0x45A9B94
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextWriter::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::TextWriter::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextWriter::$$c*, creationType>()));
    }
  }; // System.IO.TextWriter/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::IO::TextWriter::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteAsync$b__56_0
// Il2CppName: <WriteAsync>b__56_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteAsync$b__56_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteAsync>b__56_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteAsync$b__57_0
// Il2CppName: <WriteAsync>b__57_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteAsync$b__57_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteAsync>b__57_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteAsync$b__59_0
// Il2CppName: <WriteAsync>b__59_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteAsync$b__59_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteAsync>b__59_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteLineAsync$b__61_0
// Il2CppName: <WriteLineAsync>b__61_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteLineAsync$b__61_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteLineAsync>b__61_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteLineAsync$b__62_0
// Il2CppName: <WriteLineAsync>b__62_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteLineAsync$b__62_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteLineAsync>b__62_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$WriteLineAsync$b__64_0
// Il2CppName: <WriteLineAsync>b__64_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$WriteLineAsync$b__64_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<WriteLineAsync>b__64_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::$FlushAsync$b__67_0
// Il2CppName: <FlushAsync>b__67_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::IO::TextWriter::$$c::*)(::Il2CppObject*)>(&System::IO::TextWriter::$$c::$FlushAsync$b__67_0)> {
  static const MethodInfo* get() {
    static auto* state = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::TextWriter::$$c*), "<FlushAsync>b__67_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{state});
  }
};
// Writing MetadataGetter for method: System::IO::TextWriter::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
