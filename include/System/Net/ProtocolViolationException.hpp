// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: ProtocolViolationException
  class ProtocolViolationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::ProtocolViolationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ProtocolViolationException*, "System.Net", "ProtocolViolationException");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ProtocolViolationException
  // [TokenAttribute] Offset: FFFFFFFF
  class ProtocolViolationException : public ::System::InvalidOperationException {
    public:
    // public System.Void .ctor()
    // Offset: 0x4FD768C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProtocolViolationException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ProtocolViolationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProtocolViolationException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x4FD6E48
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProtocolViolationException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ProtocolViolationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProtocolViolationException*, creationType>(message)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4FD7694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ProtocolViolationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::ProtocolViolationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ProtocolViolationException*, creationType>(serializationInfo, streamingContext)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4FD769C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x4FD76A4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext);
  }; // System.Net.ProtocolViolationException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::ProtocolViolationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ProtocolViolationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ProtocolViolationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::ProtocolViolationException::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ProtocolViolationException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::ProtocolViolationException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProtocolViolationException*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
// Writing MetadataGetter for method: System::Net::ProtocolViolationException::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::ProtocolViolationException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Net::ProtocolViolationException::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* serializationInfo = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* streamingContext = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::ProtocolViolationException*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serializationInfo, streamingContext});
  }
};
