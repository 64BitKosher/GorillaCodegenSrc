// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Photon.Voice.ObjectPool`2
#include "Photon/Voice/ObjectPool_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // Forward declaring type: PrimitiveArrayPool`1<T>
  template<typename T>
  class PrimitiveArrayPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Photon::Voice::PrimitiveArrayPool_1, "Photon.Voice", "PrimitiveArrayPool`1");
// Type namespace: Photon.Voice
namespace Photon::Voice {
  // WARNING Size may be invalid!
  // Autogenerated type: Photon.Voice.PrimitiveArrayPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class PrimitiveArrayPool_1 : public ::Photon::Voice::ObjectPool_2<::ArrayW<T>, int> {
    public:
    // public System.Void .ctor(System.Int32 capacity, System.String name, System.Int32 info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimitiveArrayPool_1<T>* New_ctor(int capacity, ::StringW name, int info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PrimitiveArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimitiveArrayPool_1<T>*, creationType>(capacity, name, info)));
    }
    // protected T[] createObject(System.Int32 info)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> createObject(int info) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PrimitiveArrayPool_1::createObject");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::PrimitiveArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method, info);
    }
    // protected System.Void destroyObject(T[] obj)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void destroyObject(::ArrayW<T> obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PrimitiveArrayPool_1::destroyObject");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::PrimitiveArrayPool_1<T>*), -1));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, obj);
    }
    // protected System.Boolean infosMatch(System.Int32 i0, System.Int32 i1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool infosMatch(int i0, int i1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PrimitiveArrayPool_1::infosMatch");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Photon::Voice::PrimitiveArrayPool_1<T>*), -1));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(this, ___internal__method, i0, i1);
    }
    // public System.Void .ctor(System.Int32 capacity, System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Photon.Voice.ObjectPool`2
    // Base method: System.Void ObjectPool_2::.ctor(System.Int32 capacity, System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrimitiveArrayPool_1<T>* New_ctor(int capacity, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Voice::PrimitiveArrayPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrimitiveArrayPool_1<T>*, creationType>(capacity, name)));
    }
  }; // Photon.Voice.PrimitiveArrayPool`1
  // Could not write size check! Type: Photon.Voice.PrimitiveArrayPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
