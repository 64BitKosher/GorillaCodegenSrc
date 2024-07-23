// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ApplicationException
#include "System/ApplicationException.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: TargetInvocationException
  class TargetInvocationException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::TargetInvocationException);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::TargetInvocationException*, "System.Reflection", "TargetInvocationException");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x8C
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.TargetInvocationException
  // [TokenAttribute] Offset: FFFFFFFF
  class TargetInvocationException : public ::System::ApplicationException {
    public:
    // public System.Void .ctor(System.Exception inner)
    // Offset: 0x458CA38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetInvocationException* New_ctor(::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::TargetInvocationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetInvocationException*, creationType>(inner)));
    }
    // public System.Void .ctor(System.String message, System.Exception inner)
    // Offset: 0x458CAA4
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.String message, System.Exception inner)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception inner)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetInvocationException* New_ctor(::StringW message, ::System::Exception* inner) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::TargetInvocationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetInvocationException*, creationType>(message, inner)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x458CAC8
    // Implemented from: System.ApplicationException
    // Base method: System.Void ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TargetInvocationException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::TargetInvocationException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TargetInvocationException*, creationType>(info, context)));
    }
  }; // System.Reflection.TargetInvocationException
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::TargetInvocationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::TargetInvocationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::TargetInvocationException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
