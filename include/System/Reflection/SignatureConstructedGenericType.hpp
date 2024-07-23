// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.SignatureType
#include "System/Reflection/SignatureType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: SignatureConstructedGenericType
  class SignatureConstructedGenericType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::SignatureConstructedGenericType);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::SignatureConstructedGenericType*, "System.Reflection", "SignatureConstructedGenericType");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.SignatureConstructedGenericType
  // [TokenAttribute] Offset: FFFFFFFF
  class SignatureConstructedGenericType : public ::System::Reflection::SignatureType {
    public:
    public:
    // private readonly System.Type _genericTypeDefinition
    // Size: 0x8
    // Offset: 0x18
    ::System::Type* genericTypeDefinition;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private readonly System.Type[] _genericTypeArguments
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Type*> genericTypeArguments;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Type*>) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::RuntimeTypeHandle
    constexpr operator ::System::RuntimeTypeHandle() const noexcept = delete;
    // Get instance field reference: private readonly System.Type _genericTypeDefinition
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn__genericTypeDefinition();
    // Get instance field reference: private readonly System.Type[] _genericTypeArguments
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Type*>& dyn__genericTypeArguments();
    // System.Void .ctor(System.Type genericTypeDefinition, System.Type[] typeArguments)
    // Offset: 0x458A2A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignatureConstructedGenericType* New_ctor(::System::Type* genericTypeDefinition, ::ArrayW<::System::Type*> typeArguments) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::SignatureConstructedGenericType::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignatureConstructedGenericType*, creationType>(genericTypeDefinition, typeArguments)));
    }
    // public override System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x458A4B4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsGenericTypeDefinition()
    bool get_IsGenericTypeDefinition();
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x458A4BC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::HasElementTypeImpl()
    bool HasElementTypeImpl();
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x458A4C4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::IsArrayImpl()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x458A4CC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::IsByRefImpl()
    bool IsByRefImpl();
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x458A4D4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::IsPointerImpl()
    bool IsPointerImpl();
    // public override System.Boolean get_IsSZArray()
    // Offset: 0x458A4DC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsSZArray()
    bool get_IsSZArray();
    // public override System.Boolean get_IsVariableBoundArray()
    // Offset: 0x458A4E4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsVariableBoundArray()
    bool get_IsVariableBoundArray();
    // public override System.Boolean get_IsConstructedGenericType()
    // Offset: 0x458A4EC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsConstructedGenericType()
    bool get_IsConstructedGenericType();
    // public override System.Boolean get_IsGenericParameter()
    // Offset: 0x458A4F4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsGenericParameter()
    bool get_IsGenericParameter();
    // public override System.Boolean get_IsGenericMethodParameter()
    // Offset: 0x458A4FC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_IsGenericMethodParameter()
    bool get_IsGenericMethodParameter();
    // public override System.Boolean get_ContainsGenericParameters()
    // Offset: 0x458A504
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Boolean SignatureType::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // override System.Reflection.SignatureType get_ElementType()
    // Offset: 0x458A578
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Reflection.SignatureType SignatureType::get_ElementType()
    ::System::Reflection::SignatureType* get_ElementType();
    // public override System.Int32 GetArrayRank()
    // Offset: 0x458A580
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Int32 SignatureType::GetArrayRank()
    int GetArrayRank();
    // public override System.Type GetGenericTypeDefinition()
    // Offset: 0x458A5CC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Type SignatureType::GetGenericTypeDefinition()
    ::System::Type* GetGenericTypeDefinition();
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x458A5D4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Type[] SignatureType::GetGenericArguments()
    ::ArrayW<::System::Type*> GetGenericArguments();
    // public override System.Type[] get_GenericTypeArguments()
    // Offset: 0x458A5E4
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Type[] SignatureType::get_GenericTypeArguments()
    ::ArrayW<::System::Type*> get_GenericTypeArguments();
    // public override System.Int32 get_GenericParameterPosition()
    // Offset: 0x458A65C
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.Int32 SignatureType::get_GenericParameterPosition()
    int get_GenericParameterPosition();
    // public override System.String get_Name()
    // Offset: 0x458A6A8
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.String SignatureType::get_Name()
    ::StringW get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x458A6C8
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.String SignatureType::get_Namespace()
    ::StringW get_Namespace();
    // public override System.String ToString()
    // Offset: 0x458A6EC
    // Implemented from: System.Reflection.SignatureType
    // Base method: System.String SignatureType::ToString()
    ::StringW ToString();
  }; // System.Reflection.SignatureConstructedGenericType
  #pragma pack(pop)
  static check_size<sizeof(SignatureConstructedGenericType), 32 + sizeof(::ArrayW<::System::Type*>)> __System_Reflection_SignatureConstructedGenericTypeSizeCheck;
  static_assert(sizeof(SignatureConstructedGenericType) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsGenericTypeDefinition
// Il2CppName: get_IsGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::HasElementTypeImpl
// Il2CppName: HasElementTypeImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::HasElementTypeImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "HasElementTypeImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::IsArrayImpl
// Il2CppName: IsArrayImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::IsArrayImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "IsArrayImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::IsByRefImpl
// Il2CppName: IsByRefImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::IsByRefImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "IsByRefImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::IsPointerImpl
// Il2CppName: IsPointerImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::IsPointerImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "IsPointerImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsSZArray
// Il2CppName: get_IsSZArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsSZArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsSZArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsVariableBoundArray
// Il2CppName: get_IsVariableBoundArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsVariableBoundArray)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsVariableBoundArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsConstructedGenericType
// Il2CppName: get_IsConstructedGenericType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsConstructedGenericType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsConstructedGenericType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsGenericParameter
// Il2CppName: get_IsGenericParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsGenericParameter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsGenericParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_IsGenericMethodParameter
// Il2CppName: get_IsGenericMethodParameter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_IsGenericMethodParameter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_IsGenericMethodParameter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_ElementType
// Il2CppName: get_ElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::SignatureType* (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_ElementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_ElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::GetArrayRank
// Il2CppName: GetArrayRank
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::GetArrayRank)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "GetArrayRank", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::GetGenericTypeDefinition
// Il2CppName: GetGenericTypeDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::GetGenericTypeDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "GetGenericTypeDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::GetGenericArguments
// Il2CppName: GetGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::GetGenericArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "GetGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_GenericTypeArguments
// Il2CppName: get_GenericTypeArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_GenericTypeArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_GenericTypeArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_GenericParameterPosition
// Il2CppName: get_GenericParameterPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_GenericParameterPosition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_GenericParameterPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::SignatureConstructedGenericType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::SignatureConstructedGenericType::*)()>(&System::Reflection::SignatureConstructedGenericType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::SignatureConstructedGenericType*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};