// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Linq
namespace System::Linq {
  // Forward declaring type: IGrouping`2<TKey, TElement>
  template<typename TKey, typename TElement>
  class IGrouping_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::IGrouping_2, "System.Linq", "IGrouping`2");
// Type namespace: System.Linq
namespace System::Linq {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.IGrouping`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TElement>
  class IGrouping_2/*, public ::System::Collections::Generic::IEnumerable_1<TElement>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<TElement>
    operator ::System::Collections::Generic::IEnumerable_1<TElement>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<TElement>*>(this);
    }
    // public TKey get_Key()
    // Offset: 0xFFFFFFFFFFFFFFFF
    TKey get_Key() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::IGrouping_2::get_Key");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Linq::IGrouping_2<TKey, TElement>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<TKey, false>(this, ___internal__method);
    }
  }; // System.Linq.IGrouping`2
  // Could not write size check! Type: System.Linq.IGrouping`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
