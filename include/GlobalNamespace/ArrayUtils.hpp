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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ArrayUtils
  class ArrayUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ArrayUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ArrayUtils*, "", "ArrayUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ArrayUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ArrayUtils : public ::Il2CppObject {
    public:
    // static public T[] Copy(T[] source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> Copy(::ArrayW<T> source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ArrayUtils::Copy");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ArrayUtils", "Copy", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source);
    }
    // static public System.Int32 IndexOfRef(System.Collections.Generic.List`1<T> array, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int IndexOfRef(::System::Collections::Generic::List_1<T>* array, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ArrayUtils::IndexOfRef");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ArrayUtils", "IndexOfRef", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, value);
    }
    // static public System.Int32 IndexOfRef(T[] array, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static int IndexOfRef(::ArrayW<T> array, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ArrayUtils::IndexOfRef");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ArrayUtils", "IndexOfRef", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, value);
    }
  }; // ArrayUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ArrayUtils::Copy
// Il2CppName: Copy
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ArrayUtils::IndexOfRef
// Il2CppName: IndexOfRef
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ArrayUtils::IndexOfRef
// Il2CppName: IndexOfRef
// Cannot write MetadataGetter for generic methods!
