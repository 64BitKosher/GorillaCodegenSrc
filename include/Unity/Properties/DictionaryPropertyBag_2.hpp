// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.KeyValueCollectionPropertyBag`3
#include "Unity/Properties/KeyValueCollectionPropertyBag_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: DictionaryPropertyBag`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class DictionaryPropertyBag_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::DictionaryPropertyBag_2, "Unity.Properties", "DictionaryPropertyBag`2");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.DictionaryPropertyBag`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TKey, typename TValue>
  class DictionaryPropertyBag_2 : public ::Unity::Properties::KeyValueCollectionPropertyBag_3<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, TKey, TValue> {
    public:
    // protected System.Collections.Generic.Dictionary`2<TKey,TValue> Instantiate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Collections::Generic::Dictionary_2<TKey, TValue>* Instantiate() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::DictionaryPropertyBag_2::Instantiate");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::DictionaryPropertyBag_2<TKey, TValue>*), -1)));
      return ::il2cpp_utils::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<TKey, TValue>*, false>(this, ___internal__method);
    }
    // protected override Unity.Properties.InstantiationKind get_InstantiationKind()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.PropertyBag`1
    // Base method: Unity.Properties.InstantiationKind PropertyBag_1::get_InstantiationKind()
    ::Unity::Properties::InstantiationKind get_InstantiationKind() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::DictionaryPropertyBag_2::get_InstantiationKind");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertyBag_1<TContainer>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::Unity::Properties::InstantiationKind, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Unity.Properties.KeyValueCollectionPropertyBag`3
    // Base method: System.Void KeyValueCollectionPropertyBag_3::.ctor()
    // Base method: System.Void PropertyBag_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DictionaryPropertyBag_2<TKey, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::DictionaryPropertyBag_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DictionaryPropertyBag_2<TKey, TValue>*, creationType>()));
    }
  }; // Unity.Properties.DictionaryPropertyBag`2
  // Could not write size check! Type: Unity.Properties.DictionaryPropertyBag`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
