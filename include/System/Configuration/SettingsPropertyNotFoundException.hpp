// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Exception
#include "System/Exception.hpp"
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
// Type namespace: System.Configuration
namespace System::Configuration {
  // Forward declaring type: SettingsPropertyNotFoundException
  class SettingsPropertyNotFoundException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Configuration::SettingsPropertyNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::Configuration::SettingsPropertyNotFoundException*, "System.Configuration", "SettingsPropertyNotFoundException");
// Type namespace: System.Configuration
namespace System::Configuration {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Configuration.SettingsPropertyNotFoundException
  // [TokenAttribute] Offset: FFFFFFFF
  class SettingsPropertyNotFoundException : public ::System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x4F5CA68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsPropertyNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsPropertyNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsPropertyNotFoundException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4F5CAA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsPropertyNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsPropertyNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsPropertyNotFoundException*, creationType>(info, context)));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x4F5CAD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsPropertyNotFoundException* New_ctor(::StringW message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsPropertyNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsPropertyNotFoundException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x4F5CB10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SettingsPropertyNotFoundException* New_ctor(::StringW message, ::System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Configuration::SettingsPropertyNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SettingsPropertyNotFoundException*, creationType>(message, innerException)));
    }
  }; // System.Configuration.SettingsPropertyNotFoundException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Configuration::SettingsPropertyNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsPropertyNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsPropertyNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Configuration::SettingsPropertyNotFoundException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
