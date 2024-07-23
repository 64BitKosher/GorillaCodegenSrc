// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.CompilerServices.CallSiteBinder
#include "System/Runtime/CompilerServices/CallSiteBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Forward declaring type: LabelTarget
  class LabelTarget;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1, "System.Runtime.CompilerServices", "CallSiteBinder/LambdaSignature`1");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class CallSiteBinder::LambdaSignature_1 : public ::Il2CppObject {
    public:
    public:
    // readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> Parameters
    // Size: 0x8
    // Offset: 0x0
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* Parameters;
    // Field size check
    static_assert(sizeof(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*) == 0x8);
    // readonly System.Linq.Expressions.LabelTarget ReturnLabel
    // Size: 0x8
    // Offset: 0x0
    ::System::Linq::Expressions::LabelTarget* ReturnLabel;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::LabelTarget*) == 0x8);
    public:
    // Autogenerated static field getter
    // Get static field: static private System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1<T> s_instance
    static ::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>* _get_s_instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::_get_s_instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CallSiteBinder::LambdaSignature_1<T>*>::get(), "s_instance"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1<T> s_instance
    static void _set_s_instance(::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::_set_s_instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CallSiteBinder::LambdaSignature_1<T>*>::get(), "s_instance", value));
    }
    // Autogenerated instance field getter
    // Get instance field: readonly System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> Parameters
    [[deprecated("Use field access instead!")]] ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*& dyn_Parameters() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::dyn_Parameters");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "Parameters"))->offset;
      return *reinterpret_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: readonly System.Linq.Expressions.LabelTarget ReturnLabel
    [[deprecated("Use field access instead!")]] ::System::Linq::Expressions::LabelTarget*& dyn_ReturnLabel() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::dyn_ReturnLabel");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "ReturnLabel"))->offset;
      return *reinterpret_cast<::System::Linq::Expressions::LabelTarget**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // static System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1<T> get_Instance()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>* get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::get_Instance");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<CallSiteBinder::LambdaSignature_1<T>*>::get(), "get_Instance", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // private System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallSiteBinder::LambdaSignature_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteBinder::LambdaSignature_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallSiteBinder::LambdaSignature_1<T>*, creationType>()));
    }
  }; // System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1
  // Could not write size check! Type: System.Runtime.CompilerServices.CallSiteBinder/LambdaSignature`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
