// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TrackingValidationObjectDictionary
#include "System/Net/TrackingValidationObjectDictionary.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*, "System.Net", "TrackingValidationObjectDictionary/ValidateAndParseValue");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackingValidationObjectDictionary::ValidateAndParseValue : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4FACE20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackingValidationObjectDictionary::ValidateAndParseValue* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackingValidationObjectDictionary::ValidateAndParseValue*, creationType>(object, method)));
    }
    // public System.Object Invoke(System.Object valueToValidate)
    // Offset: 0x4FACF28
    ::Il2CppObject* Invoke(::Il2CppObject* valueToValidate);
    // public System.IAsyncResult BeginInvoke(System.Object valueToValidate, System.AsyncCallback callback, System.Object object)
    // Offset: 0x4FACF3C
    ::System::IAsyncResult* BeginInvoke(::Il2CppObject* valueToValidate, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Object EndInvoke(System.IAsyncResult result)
    // Offset: 0x4FACF5C
    ::Il2CppObject* EndInvoke(::System::IAsyncResult* result);
  }; // System.Net.TrackingValidationObjectDictionary/ValidateAndParseValue
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::*)(::Il2CppObject*)>(&System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::Invoke)> {
  static const MethodInfo* get() {
    static auto* valueToValidate = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueToValidate});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::*)(::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* valueToValidate = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueToValidate, callback, object});
  }
};
// Writing MetadataGetter for method: System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::*)(::System::IAsyncResult*)>(&System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::TrackingValidationObjectDictionary::ValidateAndParseValue*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
