// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryHeaderEnum.hpp"
// Including type: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum
#include "System/Runtime/Serialization/Formatters/Binary/BinaryTypeEnum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization::Formatters::Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: __BinaryWriter
  class __BinaryWriter;
  // Forward declaring type: __BinaryParser
  class __BinaryParser;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Forward declaring type: BinaryObjectWithMapTyped
  class BinaryObjectWithMapTyped;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*, "System.Runtime.Serialization.Formatters.Binary", "BinaryObjectWithMapTyped");
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
  // [TokenAttribute] Offset: FFFFFFFF
  class BinaryObjectWithMapTyped : public ::Il2CppObject {
    public:
    public:
    // System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    // Size: 0x4
    // Offset: 0x10
    ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum;
    // Field size check
    static_assert(sizeof(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum) == 0x4);
    // System.Int32 objectId
    // Size: 0x4
    // Offset: 0x14
    int objectId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 numMembers
    // Size: 0x4
    // Offset: 0x20
    int numMembers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: numMembers and: memberNames
    char __padding3[0x4] = {};
    // System.String[] memberNames
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<::StringW> memberNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    // Size: 0x8
    // Offset: 0x30
    ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>) == 0x8);
    // System.Object[] typeInformationA
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<::Il2CppObject*> typeInformationA;
    // Field size check
    static_assert(sizeof(::ArrayW<::Il2CppObject*>) == 0x8);
    // System.Int32[] memberAssemIds
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<int> memberAssemIds;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // System.Int32 assemId
    // Size: 0x4
    // Offset: 0x48
    int assemId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum
    [[deprecated("Use field access instead!")]] ::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum& dyn_binaryHeaderEnum();
    // Get instance field reference: System.Int32 objectId
    [[deprecated("Use field access instead!")]] int& dyn_objectId();
    // Get instance field reference: System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: System.Int32 numMembers
    [[deprecated("Use field access instead!")]] int& dyn_numMembers();
    // Get instance field reference: System.String[] memberNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_memberNames();
    // Get instance field reference: System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>& dyn_binaryTypeEnumA();
    // Get instance field reference: System.Object[] typeInformationA
    [[deprecated("Use field access instead!")]] ::ArrayW<::Il2CppObject*>& dyn_typeInformationA();
    // Get instance field reference: System.Int32[] memberAssemIds
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_memberAssemIds();
    // Get instance field reference: System.Int32 assemId
    [[deprecated("Use field access instead!")]] int& dyn_assemId();
    // System.Void .ctor(System.Runtime.Serialization.Formatters.Binary.BinaryHeaderEnum binaryHeaderEnum)
    // Offset: 0x455E7BC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMapTyped* New_ctor(::System::Runtime::Serialization::Formatters::Binary::BinaryHeaderEnum binaryHeaderEnum) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMapTyped*, creationType>(binaryHeaderEnum)));
    }
    // System.Void Set(System.Int32 objectId, System.String name, System.Int32 numMembers, System.String[] memberNames, System.Runtime.Serialization.Formatters.Binary.BinaryTypeEnum[] binaryTypeEnumA, System.Object[] typeInformationA, System.Int32[] memberAssemIds, System.Int32 assemId)
    // Offset: 0x455E7E4
    void Set(int objectId, ::StringW name, int numMembers, ::ArrayW<::StringW> memberNames, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum> binaryTypeEnumA, ::ArrayW<::Il2CppObject*> typeInformationA, ::ArrayW<int> memberAssemIds, int assemId);
    // public System.Void Write(System.Runtime.Serialization.Formatters.Binary.__BinaryWriter sout)
    // Offset: 0x455E894
    void Write(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter* sout);
    // public System.Void Read(System.Runtime.Serialization.Formatters.Binary.__BinaryParser input)
    // Offset: 0x455EA6C
    void Read(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser* input);
    // System.Void .ctor()
    // Offset: 0x455E7B4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BinaryObjectWithMapTyped* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BinaryObjectWithMapTyped*, creationType>()));
    }
  }; // System.Runtime.Serialization.Formatters.Binary.BinaryObjectWithMapTyped
  #pragma pack(pop)
  static check_size<sizeof(BinaryObjectWithMapTyped), 72 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_BinaryObjectWithMapTypedSizeCheck;
  static_assert(sizeof(BinaryObjectWithMapTyped) == 0x4C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(int, ::StringW, int, ::ArrayW<::StringW>, ::ArrayW<::System::Runtime::Serialization::Formatters::Binary::BinaryTypeEnum>, ::ArrayW<::Il2CppObject*>, ::ArrayW<int>, int)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Set)> {
  static const MethodInfo* get() {
    static auto* objectId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* numMembers = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* memberNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    static auto* binaryTypeEnumA = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "BinaryTypeEnum"), 1)->byval_arg;
    static auto* typeInformationA = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* memberAssemIds = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* assemId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objectId, name, numMembers, memberNames, binaryTypeEnumA, typeInformationA, memberAssemIds, assemId});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryWriter*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Write)> {
  static const MethodInfo* get() {
    static auto* sout = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sout});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Read
// Il2CppName: Read
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::*)(::System::Runtime::Serialization::Formatters::Binary::__BinaryParser*)>(&System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::Read)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization.Formatters.Binary", "__BinaryParser")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped*), "Read", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: System::Runtime::Serialization::Formatters::Binary::BinaryObjectWithMapTyped::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
