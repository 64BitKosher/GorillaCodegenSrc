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
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Forward declaring type: HashtableExtensions
  class HashtableExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Collections::HashtableExtensions);
DEFINE_IL2CPP_ARG_TYPE(::System::Collections::HashtableExtensions*, "System.Collections", "HashtableExtensions");
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.HashtableExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class HashtableExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean TryGetValue(System.Collections.Hashtable table, System.Object key, out T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool TryGetValue(::System::Collections::Hashtable* table, ::Il2CppObject* key, ByRef<T> value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Collections::HashtableExtensions::TryGetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Collections", "HashtableExtensions", "TryGetValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(table), ::il2cpp_utils::ExtractType(key), ::il2cpp_utils::ExtractIndependentType<T&>()})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, table, key, byref(value));
    }
  }; // System.Collections.HashtableExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Collections::HashtableExtensions::TryGetValue
// Il2CppName: TryGetValue
// Cannot write MetadataGetter for generic methods!
