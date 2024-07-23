// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MemberAccessException
#include "System/MemberAccessException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: MissingMemberException
  class MissingMemberException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::MissingMemberException);
DEFINE_IL2CPP_ARG_TYPE(::System::MissingMemberException*, "System", "MissingMemberException");
// Type namespace: System
namespace System {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.MissingMemberException
  // [TokenAttribute] Offset: FFFFFFFF
  class MissingMemberException : public ::System::MemberAccessException {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    public:
    // protected System.String ClassName
    // Size: 0x8
    // Offset: 0x90
    ::StringW ClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.String MemberName
    // Size: 0x8
    // Offset: 0x98
    ::StringW MemberName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // protected System.Byte[] Signature
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<uint8_t> Signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: protected System.String ClassName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ClassName();
    // Get instance field reference: protected System.String MemberName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_MemberName();
    // Get instance field reference: protected System.Byte[] Signature
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Signature();
    // static System.String FormatSignature(System.Byte[] signature)
    // Offset: 0x467F178
    static ::StringW FormatSignature(::ArrayW<uint8_t> signature);
    // public System.Void .ctor()
    // Offset: 0x467EBE0
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x467EB58
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x467EC40
    // Implemented from: System.MemberAccessException
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MissingMemberException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::MissingMemberException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MissingMemberException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x467F01C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public override System.String get_Message()
    // Offset: 0x467EEF4
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::StringW get_Message();
  }; // System.MissingMemberException
  #pragma pack(pop)
  static check_size<sizeof(MissingMemberException), 160 + sizeof(::ArrayW<uint8_t>)> __System_MissingMemberExceptionSizeCheck;
  static_assert(sizeof(MissingMemberException) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::MissingMemberException::FormatSignature
// Il2CppName: FormatSignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::ArrayW<uint8_t>)>(&System::MissingMemberException::FormatSignature)> {
  static const MethodInfo* get() {
    static auto* signature = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "FormatSignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signature});
  }
};
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::MissingMemberException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::MissingMemberException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::MissingMemberException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::MissingMemberException::get_Message
// Il2CppName: get_Message
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::MissingMemberException::*)()>(&System::MissingMemberException::get_Message)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::MissingMemberException*), "get_Message", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
