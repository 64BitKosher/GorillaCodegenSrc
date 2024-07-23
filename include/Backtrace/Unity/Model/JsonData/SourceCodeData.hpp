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
// Forward declaring namespace: Backtrace::Unity::Model::JsonData
namespace Backtrace::Unity::Model::JsonData {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: BacktraceStackFrame
  class BacktraceStackFrame;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.JsonData
namespace Backtrace::Unity::Model::JsonData {
  // Forward declaring type: SourceCodeData
  class SourceCodeData;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::JsonData::SourceCodeData);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::JsonData::SourceCodeData*, "Backtrace.Unity.Model.JsonData", "SourceCodeData");
// Type namespace: Backtrace.Unity.Model.JsonData
namespace Backtrace::Unity::Model::JsonData {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.JsonData.SourceCodeData
  // [TokenAttribute] Offset: FFFFFFFF
  class SourceCodeData : public ::Il2CppObject {
    public:
    // Nested type: ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode
    class SourceCode;
    public:
    // public System.Collections.Generic.Dictionary`2<System.String,Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode> data
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>* data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>*() const noexcept {
      return data;
    }
    // Get instance field reference: public System.Collections.Generic.Dictionary`2<System.String,Backtrace.Unity.Model.JsonData.SourceCodeData/SourceCode> data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>*& dyn_data();
    // System.Void .ctor(System.Collections.Generic.IEnumerable`1<Backtrace.Unity.Model.BacktraceStackFrame> exceptionStack)
    // Offset: 0x2A6C18C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SourceCodeData* New_ctor(::System::Collections::Generic::IEnumerable_1<::Backtrace::Unity::Model::BacktraceStackFrame*>* exceptionStack) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::JsonData::SourceCodeData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SourceCodeData*, creationType>(exceptionStack)));
    }
  }; // Backtrace.Unity.Model.JsonData.SourceCodeData
  #pragma pack(pop)
  static check_size<sizeof(SourceCodeData), 16 + sizeof(::System::Collections::Generic::Dictionary_2<::StringW, ::Backtrace::Unity::Model::JsonData::SourceCodeData::SourceCode*>*)> __Backtrace_Unity_Model_JsonData_SourceCodeDataSizeCheck;
  static_assert(sizeof(SourceCodeData) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::JsonData::SourceCodeData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
