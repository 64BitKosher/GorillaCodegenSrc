// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
#include "System/Runtime/Serialization/Formatters/Binary/MessageEnum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryMethodReturn
  class BinaryMethodReturn;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*, "System.Runtime.Serialization.Formatters.Binary", "BinaryMethodReturn");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryMethodReturn : public ::Il2CppObject {
    public:
    public:
    // private System.Object returnValue
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* returnValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Object[] args
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Il2CppObject*> args;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // private System.Object callContext
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppObject* callContext;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Type[] argTypes
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::System::Type*> argTypes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    // private System.Boolean bArgsPrimitive
    // Size: 0x1
    // Offset: 0x30
    bool bArgsPrimitive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bArgsPrimitive and: messageEnum
    char __padding4[0x3] = {};
    // private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    // Size: 0x4
    // Offset: 0x34
    ::System::Runtime::Serialization::Formatters::Binary::MessageEnum messageEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::MessageEnum) == 0x4);
    // private System.Type returnType
    // Size: 0x8
    // Offset: 0x38
    ::System::Type* returnType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get static field: static private System.Object instanceOfVoid
    static ::Il2CppObject* _get_instanceOfVoid();
    // Set static field: static private System.Object instanceOfVoid
    static void _set_instanceOfVoid(::Il2CppObject* value);
    // Get instance field reference: private System.Object returnValue
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_returnValue();
    // Get instance field reference: private System.Object[] args
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_args();
    // Get instance field reference: private System.Object callContext
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_callContext();
    // Get instance field reference: private System.Type[] argTypes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn_argTypes();
    // Get instance field reference: private System.Boolean bArgsPrimitive
    [[deprecated("Use field access instead!")]] bool& dyn_bArgsPrimitive();
    // Get instance field reference: private System.Runtime.Serialization.Formatters.Binary.MessageEnum messageEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::MessageEnum& dyn_messageEnum();
    // Get instance field reference: private System.Type returnType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_returnType();
    // static private System.Void .cctor()
    // Offset: 0x455E0A0
    static void _cctor();
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x455E164
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Dump()
    // Offset: 0x455E2AC
    void Dump();
    // System.Void .ctor()
    // Offset: 0x455E154
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryMethodReturn* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryMethodReturn*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryMethodReturn
  #pragma pack(pop)
  static check_size<sizeof(BinaryMethodReturn), 56 + sizeof(::System::Type*)> __System_Runtime_Serialization_Formatters_Binary_BinaryMethodReturnSizeCheck;
  static_assert(sizeof(BinaryMethodReturn) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump
// Il2CppName: Dump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::*)()>(&System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::Dump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn*), "Dump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryMethodReturn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
