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
// Type namespace: System.Buffers
namespace System::Buffers {
  // Forward declaring type: ArrayPool`1<T>
  template<typename T>
  class ArrayPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Buffers::ArrayPool_1, "System.Buffers", "ArrayPool`1");
// Type namespace: System.Buffers
namespace System::Buffers {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Buffers.ArrayPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ArrayPool_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private readonly System.Buffers.ArrayPool`1<T> <Shared>k__BackingField
    static ::System::Buffers::ArrayPool_1<T>* _get_$Shared$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::_get_$Shared$k__BackingField");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Buffers::ArrayPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "<Shared>k__BackingField")));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly System.Buffers.ArrayPool`1<T> <Shared>k__BackingField
    static void _set_$Shared$k__BackingField(::System::Buffers::ArrayPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::_set_$Shared$k__BackingField");
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "<Shared>k__BackingField", value)));
    }
    // static public System.Buffers.ArrayPool`1<T> get_Shared()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::System::Buffers::ArrayPool_1<T>* get_Shared() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::get_Shared");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), "get_Shared", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Buffers::ArrayPool_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public T[] Rent(System.Int32 minimumLength)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> Rent(int minimumLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::Rent");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, minimumLength);
    }
    // public System.Void Return(T[] array, System.Boolean clearArray)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Return(::ArrayW<T> array, bool clearArray) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::Return");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::System::Buffers::ArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, array, clearArray);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ArrayPool_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Buffers::ArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayPool_1<T>*, creationType>()));
    }
  }; // System.Buffers.ArrayPool`1
  // Could not write size check! Type: System.Buffers.ArrayPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
