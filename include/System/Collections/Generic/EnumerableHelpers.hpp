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
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Forward declaring type: EnumerableHelpers
  class EnumerableHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::Generic::EnumerableHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::Generic::EnumerableHelpers*, "System.Collections.Generic", "EnumerableHelpers");
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Generic.EnumerableHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class EnumerableHelpers : public ::Il2CppObject {
    public:
    // static T[] ToArray(System.Collections.Generic.IEnumerable`1<T> source)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> ToArray(::System::Collections::Generic::IEnumerable_1<T>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::Generic::EnumerableHelpers::ToArray");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Collections.Generic", "EnumerableHelpers", "ToArray", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(source)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, source);
    }
  }; // System.Collections.Generic.EnumerableHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::Generic::EnumerableHelpers::ToArray
// Il2CppName: ToArray
// Cannot write MetadataGetter for generic methods!
