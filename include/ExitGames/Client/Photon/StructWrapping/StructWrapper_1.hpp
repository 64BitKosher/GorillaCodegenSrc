// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: ExitGames.Client.Photon.StructWrapping.StructWrapper
#include "ExitGames/Client/Photon/StructWrapping/StructWrapper.hpp"
// Including type: ExitGames.Client.Photon.StructWrapping.Pooling
#include "ExitGames/Client/Photon/StructWrapping/Pooling.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: ExitGames::Client::Photon::StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapperPool`1<T>
  template<typename T>
  class StructWrapperPool_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // Forward declaring type: StructWrapper`1<T>
  template<typename T>
  class StructWrapper_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::ExitGames::Client::Photon::StructWrapping::StructWrapper_1, "ExitGames.Client.Photon.StructWrapping", "StructWrapper`1");
// Type namespace: ExitGames.Client.Photon.StructWrapping
namespace ExitGames::Client::Photon::StructWrapping {
  // WARNING Size may be invalid!
  // Autogenerated type: ExitGames.Client.Photon.StructWrapping.StructWrapper`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class StructWrapper_1 : public ::ExitGames::Client::Photon::StructWrapping::StructWrapper {
    public:
    public:
    // private ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> <ReturnPool>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* ReturnPool;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*) == 0x8);
    // ExitGames.Client.Photon.StructWrapping.Pooling pooling
    // Size: 0x4
    // Offset: 0x0
    ::ExitGames::Client::Photon::StructWrapping::Pooling pooling;
    // Field size check
    static_assert(sizeof(::ExitGames::Client::Photon::StructWrapping::Pooling) == 0x4);
    // T value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    public:
    // Autogenerated static field getter
    // Get static field: static ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> staticPool
    static ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* _get_staticPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::_get_staticPool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StructWrapper_1<T>*>::get(), "staticPool"));
    }
    // Autogenerated static field setter
    // Set static field: static ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> staticPool
    static void _set_staticPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::_set_staticPool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StructWrapper_1<T>*>::get(), "staticPool", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> <ReturnPool>k__BackingField
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*& dyn_$ReturnPool$k__BackingField() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::dyn_$ReturnPool$k__BackingField");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "<ReturnPool>k__BackingField"))->offset;
      return *reinterpret_cast<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: ExitGames.Client.Photon.StructWrapping.Pooling pooling
    [[deprecated("Use field access instead!")]] ::ExitGames::Client::Photon::StructWrapping::Pooling& dyn_pooling() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::dyn_pooling");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "pooling"))->offset;
      return *reinterpret_cast<::ExitGames::Client::Photon::StructWrapping::Pooling*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: T value
    [[deprecated("Use field access instead!")]] T& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::dyn_value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> get_ReturnPool()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* get_ReturnPool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::get_ReturnPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_ReturnPool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>*, false>(this, ___internal__method);
    }
    // System.Void set_ReturnPool(ExitGames.Client.Photon.StructWrapping.StructWrapperPool`1<T> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_ReturnPool(::ExitGames::Client::Photon::StructWrapping::StructWrapperPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::set_ReturnPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "set_ReturnPool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, value);
    }
    // public System.Void .ctor(ExitGames.Client.Photon.StructWrapping.Pooling releasing)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StructWrapper_1<T>* New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StructWrapper_1<T>*, creationType>(releasing)));
    }
    // public System.Void .ctor(ExitGames.Client.Photon.StructWrapping.Pooling releasing, System.Type tType, ExitGames.Client.Photon.StructWrapping.WrappedType wType)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StructWrapper_1<T>* New_ctor(::ExitGames::Client::Photon::StructWrapping::Pooling releasing, ::System::Type* tType, ::ExitGames::Client::Photon::StructWrapping::WrappedType wType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StructWrapper_1<T>*, creationType>(releasing, tType, wType)));
    }
    // public T Unwrap()
    // Offset: 0xFFFFFFFFFFFFFFFF
    T Unwrap() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::Unwrap");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Unwrap", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<StructWrapper_1<T>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public override System.Void Dispose()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: ExitGames.Client.Photon.StructWrapping.StructWrapper
    // Base method: System.Void StructWrapper::Dispose()
    void Dispose() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::Dispose");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::ExitGames::Client::Photon::StructWrapping::StructWrapper*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
    // public override System.String ToString(System.Boolean writeTypeInfo)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: ExitGames.Client.Photon.StructWrapping.StructWrapper
    // Base method: System.String StructWrapper::ToString(System.Boolean writeTypeInfo)
    ::StringW ToString(bool writeTypeInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::ExitGames::Client::Photon::StructWrapping::StructWrapper_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::ExitGames::Client::Photon::StructWrapping::StructWrapper*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method, writeTypeInfo);
    }
  }; // ExitGames.Client.Photon.StructWrapping.StructWrapper`1
  // Could not write size check! Type: ExitGames.Client.Photon.StructWrapping.StructWrapper`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
