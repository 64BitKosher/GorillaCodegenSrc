// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Collections.IIndexable`1
#include "Unity/Collections/IIndexable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ValueType
  class ValueType;
}
// Completed forward declares
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // Forward declaring type: INativeList`1<T>
  template<typename T>
  class INativeList_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Collections::INativeList_1, "Unity.Collections", "INativeList`1");
// Type namespace: Unity.Collections
namespace Unity::Collections {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Collections.INativeList`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  template<typename T>
  class INativeList_1/*, public ::Unity::Collections::IIndexable_1<T>*/ {
    public:
    // Creating interface conversion operator: operator ::Unity::Collections::IIndexable_1<T>
    operator ::Unity::Collections::IIndexable_1<T>() noexcept {
      return *reinterpret_cast<::Unity::Collections::IIndexable_1<T>*>(this);
    }
  }; // Unity.Collections.INativeList`1
  // Could not write size check! Type: Unity.Collections.INativeList`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
