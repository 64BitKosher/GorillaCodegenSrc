// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TimeoutException
#include "System/TimeoutException.hpp"
// Including type: System.TimeSpan
#include "System/TimeSpan.hpp"
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
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexMatchTimeoutException
  class RegexMatchTimeoutException;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::RegexMatchTimeoutException);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexMatchTimeoutException*, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.RegexMatchTimeoutException
  // [TokenAttribute] Offset: FFFFFFFF
  class RegexMatchTimeoutException : public ::System::TimeoutException {
    public:
    // Writing base type padding for base size: 0x8C to desired offset: 0x90
    char ___base_padding[0x4] = {};
    public:
    // private readonly System.String <Input>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    ::StringW Input;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.String <Pattern>k__BackingField
    // Size: 0x8
    // Offset: 0x98
    ::StringW Pattern;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.TimeSpan <MatchTimeout>k__BackingField
    // Size: 0x8
    // Offset: 0xA0
    ::System::TimeSpan MatchTimeout;
    // Field size check
    static_assert(sizeof(::System::TimeSpan) == 0x8);
    public:
    // Get instance field reference: private readonly System.String <Input>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Input$k__BackingField();
    // Get instance field reference: private readonly System.String <Pattern>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Pattern$k__BackingField();
    // Get instance field reference: private readonly System.TimeSpan <MatchTimeout>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::TimeSpan& dyn_$MatchTimeout$k__BackingField();
    // public System.Void .ctor(System.String regexInput, System.String regexPattern, System.TimeSpan matchTimeout)
    // Offset: 0x4F7B9E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor(::StringW regexInput, ::StringW regexPattern, ::System::TimeSpan matchTimeout) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>(regexInput, regexPattern, matchTimeout)));
    }
    // public System.Void .ctor()
    // Offset: 0x4F7BB00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>()));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4F7BBB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RegexMatchTimeoutException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::RegexMatchTimeoutException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RegexMatchTimeoutException*, creationType>(info, context)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x4F7BD2C
    void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // public System.String get_Input()
    // Offset: 0x4F7BE00
    ::StringW get_Input();
    // public System.String get_Pattern()
    // Offset: 0x4F7BE08
    ::StringW get_Pattern();
    // public System.TimeSpan get_MatchTimeout()
    // Offset: 0x4F7BE10
    ::System::TimeSpan get_MatchTimeout();
  }; // System.Text.RegularExpressions.RegexMatchTimeoutException
  #pragma pack(pop)
  static check_size<sizeof(RegexMatchTimeoutException), 160 + sizeof(::System::TimeSpan)> __System_Text_RegularExpressions_RegexMatchTimeoutExceptionSizeCheck;
  static_assert(sizeof(RegexMatchTimeoutException) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::System_Runtime_Serialization_ISerializable_GetObjectData
// Il2CppName: System.Runtime.Serialization.ISerializable.GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::RegexMatchTimeoutException::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&System::Text::RegularExpressions::RegexMatchTimeoutException::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "System.Runtime.Serialization.ISerializable.GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::get_Input
// Il2CppName: get_Input
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::RegexMatchTimeoutException::*)()>(&System::Text::RegularExpressions::RegexMatchTimeoutException::get_Input)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "get_Input", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::get_Pattern
// Il2CppName: get_Pattern
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Text::RegularExpressions::RegexMatchTimeoutException::*)()>(&System::Text::RegularExpressions::RegexMatchTimeoutException::get_Pattern)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "get_Pattern", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::RegexMatchTimeoutException::get_MatchTimeout
// Il2CppName: get_MatchTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Text::RegularExpressions::RegexMatchTimeoutException::*)()>(&System::Text::RegularExpressions::RegexMatchTimeoutException::get_MatchTimeout)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::RegexMatchTimeoutException*), "get_MatchTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};