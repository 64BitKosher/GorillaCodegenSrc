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
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // Forward declaring type: EmptyReadOnlyCollection`1<T>
  template<typename T>
  class EmptyReadOnlyCollection_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Dynamic::Utils::EmptyReadOnlyCollection_1, "System.Dynamic.Utils", "EmptyReadOnlyCollection`1");
// Type namespace: System.Dynamic.Utils
namespace System::Dynamic::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Dynamic.Utils.EmptyReadOnlyCollection`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class EmptyReadOnlyCollection_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly System.Collections.ObjectModel.ReadOnlyCollection`1<T> Instance
    static ::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* _get_Instance() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::EmptyReadOnlyCollection_1::_get_Instance");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::System::Collections::ObjectModel::ReadOnlyCollection_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyReadOnlyCollection_1<T>*>::get(), "Instance"));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly System.Collections.ObjectModel.ReadOnlyCollection`1<T> Instance
    static void _set_Instance(::System::Collections::ObjectModel::ReadOnlyCollection_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::EmptyReadOnlyCollection_1::_set_Instance");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyReadOnlyCollection_1<T>*>::get(), "Instance", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::Utils::EmptyReadOnlyCollection_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EmptyReadOnlyCollection_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // System.Dynamic.Utils.EmptyReadOnlyCollection`1
  // Could not write size check! Type: System.Dynamic.Utils.EmptyReadOnlyCollection`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
