// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.IndexedCollectionPropertyBag`2
#include "Unity/Properties/IndexedCollectionPropertyBag_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: ListPropertyBag`1<TElement>
  template<typename TElement>
  class ListPropertyBag_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::ListPropertyBag_1, "Unity.Properties", "ListPropertyBag`1");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.ListPropertyBag`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TElement>
  class ListPropertyBag_1 : public ::Unity::Properties::IndexedCollectionPropertyBag_2<::System::Collections::Generic::List_1<TElement>*, TElement> {
    public:
    // protected System.Collections.Generic.List`1<TElement> InstantiateWithCount(System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<TElement>* InstantiateWithCount(int count) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::ListPropertyBag_1::InstantiateWithCount");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::ListPropertyBag_1<TElement>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*, false>(this, ___internal__method, count);
    }
    // protected System.Collections.Generic.List`1<TElement> Instantiate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::List_1<TElement>* Instantiate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::ListPropertyBag_1::Instantiate");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::ListPropertyBag_1<TElement>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::List_1<TElement>*, false>(this, ___internal__method);
    }
    // protected override Unity.Properties.InstantiationKind get_InstantiationKind()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.PropertyBag`1
    // Base method: Unity.Properties.InstantiationKind PropertyBag_1::get_InstantiationKind()
    ::Unity::Properties::InstantiationKind get_InstantiationKind() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::ListPropertyBag_1::get_InstantiationKind");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.IndexedCollectionPropertyBag`2
    // Base method: System.Void IndexedCollectionPropertyBag_2::.ctor()
    // Base method: System.Void PropertyBag_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListPropertyBag_1<TElement>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::ListPropertyBag_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListPropertyBag_1<TElement>*, creationType>()));
    }
  }; // Unity.Properties.ListPropertyBag`1
  // Could not write size check! Type: Unity.Properties.ListPropertyBag`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
