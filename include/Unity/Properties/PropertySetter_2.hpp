// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // Forward declaring type: PropertySetter`2<TContainer, TValue>
  template<typename TContainer, typename TValue>
  class PropertySetter_2;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::PropertySetter_2, "Unity.Properties", "PropertySetter`2");
// Type namespace: Unity.Properties
namespace Unity::Properties {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.PropertySetter`2
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TContainer, typename TValue>
  class PropertySetter_2 : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PropertySetter_2<TContainer, TValue>* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertySetter_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PropertySetter_2<TContainer, TValue>*, creationType>(object, method)));
    }
    // public System.Void Invoke(ref TContainer container, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Invoke(ByRef<TContainer> container, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::PropertySetter_2::Invoke");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(this, classof(::Unity::Properties::PropertySetter_2<TContainer, TValue>*), -1)));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, byref(container), value);
    }
  }; // Unity.Properties.PropertySetter`2
  // Could not write size check! Type: Unity.Properties.PropertySetter`2 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
