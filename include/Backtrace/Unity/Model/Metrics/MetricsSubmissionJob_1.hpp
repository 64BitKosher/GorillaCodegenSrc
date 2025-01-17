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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model.Metrics
namespace Backtrace::Unity::Model::Metrics {
  // Forward declaring type: MetricsSubmissionJob`1<T>
  template<typename T>
  class MetricsSubmissionJob_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1, "Backtrace.Unity.Model.Metrics", "MetricsSubmissionJob`1");
// Type namespace: Backtrace.Unity.Model.Metrics
namespace Backtrace::Unity::Model::Metrics {
  // WARNING Size may be invalid!
  // Autogenerated type: Backtrace.Unity.Model.Metrics.MetricsSubmissionJob`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class MetricsSubmissionJob_1 : public ::Il2CppObject {
    public:
    public:
    // private System.Double <NextInvokeTime>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    double NextInvokeTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Collections.Generic.ICollection`1<T> <Events>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::Generic::ICollection_1<T>* Events;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::ICollection_1<T>*) == 0x8);
    // private System.UInt32 <NumberOfAttempts>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    uint NumberOfAttempts;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Autogenerated instance field getter
    // Get instance field: private System.Double <NextInvokeTime>k__BackingField
    [[deprecated("Use field access instead!")]] double& dyn_$NextInvokeTime$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::dyn_$NextInvokeTime$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<NextInvokeTime>k__BackingField"))->offset;
      return *reinterpret_cast<double*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Collections.Generic.ICollection`1<T> <Events>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::ICollection_1<T>*& dyn_$Events$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::dyn_$Events$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<Events>k__BackingField"))->offset;
      return *reinterpret_cast<::System::Collections::Generic::ICollection_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.UInt32 <NumberOfAttempts>k__BackingField
    [[deprecated("Use field access instead!")]] uint& dyn_$NumberOfAttempts$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::dyn_$NumberOfAttempts$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<NumberOfAttempts>k__BackingField"))->offset;
      return *reinterpret_cast<uint*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Double get_NextInvokeTime()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_NextInvokeTime() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::get_NextInvokeTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NextInvokeTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<double, false>(this, ___internal__method);
    }
    // public System.Void set_NextInvokeTime(System.Double value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_NextInvokeTime(double value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::set_NextInvokeTime");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_NextInvokeTime", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Collections.Generic.ICollection`1<T> get_Events()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::ICollection_1<T>* get_Events() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::get_Events");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Events", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::ICollection_1<T>*, false>(this, ___internal__method);
    }
    // public System.Void set_Events(System.Collections.Generic.ICollection`1<T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_Events(::System::Collections::Generic::ICollection_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::set_Events");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_Events", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.UInt32 get_NumberOfAttempts()
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint get_NumberOfAttempts() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::get_NumberOfAttempts");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_NumberOfAttempts", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<uint, false>(this, ___internal__method);
    }
    // public System.Void set_NumberOfAttempts(System.UInt32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_NumberOfAttempts(uint value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::set_NumberOfAttempts");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_NumberOfAttempts", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MetricsSubmissionJob_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::Metrics::MetricsSubmissionJob_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MetricsSubmissionJob_1<T>*, creationType>()));
    }
  }; // Backtrace.Unity.Model.Metrics.MetricsSubmissionJob`1
  // Could not write size check! Type: Backtrace.Unity.Model.Metrics.MetricsSubmissionJob`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
