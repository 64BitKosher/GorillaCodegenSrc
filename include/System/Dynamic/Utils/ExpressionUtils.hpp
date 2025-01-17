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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: ICollection`1<T>
  template<typename T>
  class ICollection_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: ExpressionType
  struct ExpressionType;
  // Forward declaring type: Expression
  class Expression;
  // Forward declaring type: LambdaExpression
  class LambdaExpression;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // Forward declaring type: ExpressionUtils
  class ExpressionUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::Utils::ExpressionUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::Utils::ExpressionUtils*, "System.Dynamic.Utils", "ExpressionUtils");
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.Utils.ExpressionUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ExpressionUtils : public ::Il2CppObject {
    public:
    // static public System.Collections.ObjectModel.ReadOnlyCollection`1<T> ReturnReadOnly(ref System.Collections.Generic.IReadOnlyList`1<T> collection)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* ReturnReadOnly(ByRef<::System::Collections::Generic::IReadOnlyList_1<T>*> collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ExpressionUtils::ReturnReadOnly");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ExpressionUtils", "ReturnReadOnly", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collection)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(collection));
    }
    // static public T ReturnObject(System.Object collectionOrT)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T ReturnObject(::Il2CppObject* collectionOrT) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ExpressionUtils::ReturnObject");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ExpressionUtils", "ReturnObject", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(collectionOrT)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, collectionOrT);
    }
    // static public System.Void ValidateArgumentTypes(System.Reflection.MethodBase method, System.Linq.Expressions.ExpressionType nodeKind, ref System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> arguments, System.String methodParamName)
    // Offset: 0x4BE8A14
    static void ValidateArgumentTypes(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*> arguments, ::StringW methodParamName);
    // static public System.Void ValidateArgumentCount(System.Reflection.MethodBase method, System.Linq.Expressions.ExpressionType nodeKind, System.Int32 count, System.Reflection.ParameterInfo[] pis)
    // Offset: 0x4BE8DAC
    static void ValidateArgumentCount(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, int count, ::ArrayW<::System::Reflection::ParameterInfo*> pis);
    // static public System.Linq.Expressions.Expression ValidateOneArgument(System.Reflection.MethodBase method, System.Linq.Expressions.ExpressionType nodeKind, System.Linq.Expressions.Expression arguments, System.Reflection.ParameterInfo pi, System.String methodParamName, System.String argumentParamName, System.Int32 index)
    // Offset: 0x4BE8E58
    static ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind, ::System::Linq::Expressions::Expression* arguments, ::System::Reflection::ParameterInfo* pi, ::StringW methodParamName, ::StringW argumentParamName, int index);
    // static public System.Void RequiresCanRead(System.Linq.Expressions.Expression expression, System.String paramName)
    // Offset: 0x4BE9504
    static void RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName);
    // static public System.Void RequiresCanRead(System.Linq.Expressions.Expression expression, System.String paramName, System.Int32 idx)
    // Offset: 0x4BE9068
    static void RequiresCanRead(::System::Linq::Expressions::Expression* expression, ::StringW paramName, int idx);
    // static public System.Boolean TryQuote(System.Type parameterType, ref System.Linq.Expressions.Expression argument)
    // Offset: 0x4BE93D4
    static bool TryQuote(::System::Type* parameterType, ByRef<::System::Linq::Expressions::Expression*> argument);
    // static System.Reflection.ParameterInfo[] GetParametersForValidation(System.Reflection.MethodBase method, System.Linq.Expressions.ExpressionType nodeKind)
    // Offset: 0x4BE8D18
    static ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersForValidation(::System::Reflection::MethodBase* method, ::System::Linq::Expressions::ExpressionType nodeKind);
    // static System.Boolean SameElements(ref System.Collections.Generic.IEnumerable`1<T> replacement, System.Collections.Generic.IReadOnlyList`1<T> current)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool SameElements(ByRef<::System::Collections::Generic::IEnumerable_1<T>*> replacement, ::System::Collections::Generic::IReadOnlyList_1<T>* current) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ExpressionUtils::SameElements");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ExpressionUtils", "SameElements", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(replacement), ::il2cpp_utils::ExtractType(current)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(replacement), current);
    }
    // static private System.Boolean SameElementsInCollection(System.Collections.Generic.ICollection`1<T> replacement, System.Collections.Generic.IReadOnlyList`1<T> current)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool SameElementsInCollection(::System::Collections::Generic::ICollection_1<T>* replacement, ::System::Collections::Generic::IReadOnlyList_1<T>* current) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::ExpressionUtils::SameElementsInCollection");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Dynamic.Utils", "ExpressionUtils", "SameElementsInCollection", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(replacement), ::il2cpp_utils::ExtractType(current)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, replacement, current);
    }
    // static public System.Void ValidateArgumentCount(System.Linq.Expressions.LambdaExpression lambda)
    // Offset: 0x4BE96B4
    static void ValidateArgumentCount(::System::Linq::Expressions::LambdaExpression* lambda);
  }; // System.Dynamic.Utils.ExpressionUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ReturnReadOnly
// Il2CppName: ReturnReadOnly
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ReturnObject
// Il2CppName: ReturnObject
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ValidateArgumentTypes
// Il2CppName: ValidateArgumentTypes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>, ::StringW)>(&System::Dynamic::Utils::ExpressionUtils::ValidateArgumentTypes)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* nodeKind = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    static auto* arguments = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")})->this_arg;
    static auto* methodParamName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "ValidateArgumentTypes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, nodeKind, arguments, methodParamName});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount
// Il2CppName: ValidateArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, int, ::ArrayW<::System::Reflection::ParameterInfo*>)>(&System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* nodeKind = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pis = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "ValidateArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, nodeKind, count, pis});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ValidateOneArgument
// Il2CppName: ValidateOneArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Reflection::ParameterInfo*, ::StringW, ::StringW, int)>(&System::Dynamic::Utils::ExpressionUtils::ValidateOneArgument)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* nodeKind = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    static auto* arguments = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* pi = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    static auto* methodParamName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* argumentParamName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "ValidateOneArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, nodeKind, arguments, pi, methodParamName, argumentParamName, index});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::RequiresCanRead
// Il2CppName: RequiresCanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Linq::Expressions::Expression*, ::StringW)>(&System::Dynamic::Utils::ExpressionUtils::RequiresCanRead)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "RequiresCanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression, paramName});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::RequiresCanRead
// Il2CppName: RequiresCanRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Linq::Expressions::Expression*, ::StringW, int)>(&System::Dynamic::Utils::ExpressionUtils::RequiresCanRead)> {
  static const MethodInfo* get() {
    static auto* expression = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* paramName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* idx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "RequiresCanRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{expression, paramName, idx});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::TryQuote
// Il2CppName: TryQuote
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ByRef<::System::Linq::Expressions::Expression*>)>(&System::Dynamic::Utils::ExpressionUtils::TryQuote)> {
  static const MethodInfo* get() {
    static auto* parameterType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* argument = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "TryQuote", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterType, argument});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::GetParametersForValidation
// Il2CppName: GetParametersForValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::Reflection::MethodBase*, ::System::Linq::Expressions::ExpressionType)>(&System::Dynamic::Utils::ExpressionUtils::GetParametersForValidation)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    static auto* nodeKind = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ExpressionType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "GetParametersForValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, nodeKind});
  }
};
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::SameElements
// Il2CppName: SameElements
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::SameElementsInCollection
// Il2CppName: SameElementsInCollection
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount
// Il2CppName: ValidateArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Linq::Expressions::LambdaExpression*)>(&System::Dynamic::Utils::ExpressionUtils::ValidateArgumentCount)> {
  static const MethodInfo* get() {
    static auto* lambda = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LambdaExpression")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::Utils::ExpressionUtils*), "ValidateArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lambda});
  }
};
