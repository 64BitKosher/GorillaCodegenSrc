// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.DataException
#include "System/Data/DataException.hpp"
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
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: InvalidConstraintException
  class InvalidConstraintException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::InvalidConstraintException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::InvalidConstraintException*, "System.Data", "InvalidConstraintException");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.InvalidConstraintException
  // [TokenAttribute] Offset: FFFFFFFF
  class InvalidConstraintException : public ::System::Data::DataException {
    public:
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4C15C98
    // Implemented from: System.Data.DataException
    // Base method: System.Void DataException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidConstraintException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::InvalidConstraintException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidConstraintException*, creationType>(info, context)));
    }
    // public System.Void .ctor()
    // Offset: 0x4C15CA0
    // Implemented from: System.Data.DataException
    // Base method: System.Void DataException::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidConstraintException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::InvalidConstraintException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidConstraintException*, creationType>()));
    }
    // public System.Void .ctor(System.String s)
    // Offset: 0x4C15CFC
    // Implemented from: System.Data.DataException
    // Base method: System.Void DataException::.ctor(System.String s)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidConstraintException* New_ctor(::StringW s) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::InvalidConstraintException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidConstraintException*, creationType>(s)));
    }
  }; // System.Data.InvalidConstraintException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::InvalidConstraintException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::InvalidConstraintException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::InvalidConstraintException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!