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
// Type namespace: System.Linq
namespace System::Linq {
  // Forward declaring type: EmptyEnumerable`1<TElement>
  template<typename TElement>
  class EmptyEnumerable_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::EmptyEnumerable_1, "System.Linq", "EmptyEnumerable`1");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.EmptyEnumerable`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class EmptyEnumerable_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly TElement[] Instance
    static ::ArrayW<TElement> _get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::EmptyEnumerable_1::_get_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::ArrayW<TElement>>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly TElement[] Instance
    static void _set_Instance(::ArrayW<TElement> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::EmptyEnumerable_1::_set_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), "Instance", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::EmptyEnumerable_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyEnumerable_1<TElement>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // System.Linq.EmptyEnumerable`1
  // Could not write size check! Type: System.Linq.EmptyEnumerable`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
