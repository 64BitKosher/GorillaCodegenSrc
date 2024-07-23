// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceReport
  class BacktraceReport;
}
// Forward declaring namespace: Backtrace::Unity::Json
namespace Backtrace::Unity::Json {
  // Forward declaring type: BacktraceJObject
  class BacktraceJObject;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.JsonData
namespace Backtrace::Unity::Model::JsonData {
  // Forward declaring type: BacktraceAttributes
  class BacktraceAttributes;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::JsonData::BacktraceAttributes);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::JsonData::BacktraceAttributes*, "Backtrace.Unity.Model.JsonData", "BacktraceAttributes");
// Type namespace: Backtrace.Unity.Model.JsonData
namespace Backtrace::Unity::Model::JsonData {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.JsonData.BacktraceAttributes
  // [TokenAttribute] Offset: FFFFFFFF
  class BacktraceAttributes : public ::Il2CppObject {
    public:
    public:
    // public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> Attributes
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* Attributes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*() const noexcept {
      return Attributes;
    }
    // Get instance field reference: public readonly System.Collections.Generic.Dictionary`2<System.String,System.String> Attributes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& dyn_Attributes();
    // public System.Void .ctor(Backtrace.Unity.Model.BacktraceReport report, System.Collections.Generic.Dictionary`2<System.String,System.String> clientAttributes)
    // Offset: 0x2A6BF10
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BacktraceAttributes* New_ctor(::Backtrace::Unity::Model::BacktraceReport* report, ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* clientAttributes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::JsonData::BacktraceAttributes::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BacktraceAttributes*, creationType>(report, clientAttributes)));
    }
    // public Backtrace.Unity.Json.BacktraceJObject ToJson()
    // Offset: 0x2A6C130
    ::Backtrace::Unity::Json::BacktraceJObject* ToJson();
  }; // Backtrace.Unity.Model.JsonData.BacktraceAttributes
  #pragma pack(pop)
  static check_size<sizeof(BacktraceAttributes), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*)> __Backtrace_Unity_Model_JsonData_BacktraceAttributesSizeCheck;
  static_assert(sizeof(BacktraceAttributes) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::BacktraceAttributes::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::BacktraceAttributes::ToJson
// Il2CppName: ToJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Backtrace::Unity::Json::BacktraceJObject* (Backtrace::Unity::Model::JsonData::BacktraceAttributes::*)()>(&Backtrace::Unity::Model::JsonData::BacktraceAttributes::ToJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::JsonData::BacktraceAttributes*), "ToJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
