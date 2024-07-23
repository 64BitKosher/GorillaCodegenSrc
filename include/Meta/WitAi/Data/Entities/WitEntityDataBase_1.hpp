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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseNode
  class WitResponseNode;
  // Forward declaring type: WitResponseArray
  class WitResponseArray;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitEntityDataBase`1<T>
  template<typename T>
  class WitEntityDataBase_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Meta::WitAi::Data::Entities::WitEntityDataBase_1, "Meta.WitAi.Data.Entities", "WitEntityDataBase`1");
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // WARNING Size may be invalid!
  // Autogenerated type: Meta.WitAi.Data.Entities.WitEntityDataBase`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class WitEntityDataBase_1 : public ::Il2CppObject {
    public:
    public:
    // public Meta.WitAi.Json.WitResponseNode responseNode
    // Size: 0x8
    // Offset: 0x0
    ::Meta::WitAi::Json::WitResponseNode* responseNode;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseNode*) == 0x8);
    // public System.String id
    // Size: 0x8
    // Offset: 0x0
    ::StringW id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String name
    // Size: 0x8
    // Offset: 0x0
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String role
    // Size: 0x8
    // Offset: 0x0
    ::StringW role;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Int32 start
    // Size: 0x4
    // Offset: 0x0
    int start;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 end
    // Size: 0x4
    // Offset: 0x0
    int end;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.String type
    // Size: 0x8
    // Offset: 0x0
    ::StringW type;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String body
    // Size: 0x8
    // Offset: 0x0
    ::StringW body;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public T value
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T value;
    // public System.Single confidence
    // Size: 0x4
    // Offset: 0x0
    float confidence;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean hasData
    // Size: 0x1
    // Offset: 0x0
    bool hasData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public Meta.WitAi.Json.WitResponseArray entities
    // Size: 0x8
    // Offset: 0x0
    ::Meta::WitAi::Json::WitResponseArray* entities;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Json::WitResponseArray*) == 0x8);
    public:
    // Autogenerated instance field getter
    // Get instance field: public Meta.WitAi.Json.WitResponseNode responseNode
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseNode*& dyn_responseNode() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_responseNode");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "responseNode"))->offset;
      return *reinterpret_cast<::Meta::WitAi::Json::WitResponseNode**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_id() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_id");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "id"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_name");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "name"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String role
    [[deprecated("Use field access instead!")]] ::StringW& dyn_role() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_role");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "role"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 start
    [[deprecated("Use field access instead!")]] int& dyn_start() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_start");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "start"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Int32 end
    [[deprecated("Use field access instead!")]] int& dyn_end() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_end");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "end"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String type
    [[deprecated("Use field access instead!")]] ::StringW& dyn_type() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_type");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "type"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.String body
    [[deprecated("Use field access instead!")]] ::StringW& dyn_body() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_body");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "body"))->offset;
      return *reinterpret_cast<::StringW*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public T value
    [[deprecated("Use field access instead!")]] T& dyn_value() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_value");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "value"))->offset;
      return *reinterpret_cast<T*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Single confidence
    [[deprecated("Use field access instead!")]] float& dyn_confidence() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_confidence");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "confidence"))->offset;
      return *reinterpret_cast<float*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Boolean hasData
    [[deprecated("Use field access instead!")]] bool& dyn_hasData() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_hasData");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "hasData"))->offset;
      return *reinterpret_cast<bool*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: public Meta.WitAi.Json.WitResponseArray entities
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Json::WitResponseArray*& dyn_entities() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::dyn_entities");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "entities"))->offset;
      return *reinterpret_cast<::Meta::WitAi::Json::WitResponseArray**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public Meta.WitAi.Data.Entities.WitEntityDataBase`1<T> FromEntityWitResponseNode(Meta.WitAi.Json.WitResponseNode node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>* FromEntityWitResponseNode(::Meta::WitAi::Json::WitResponseNode* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::FromEntityWitResponseNode");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "FromEntityWitResponseNode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      return ::il2cpp_utils::RunMethodRethrow<::Meta::WitAi::Data::Entities::WitEntityDataBase_1<T>*, false>(this, ___internal__method, node);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitEntityDataBase_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitEntityDataBase_1<T>*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitEntityDataBase_1::ToString");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Il2CppObject*), -1));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(this, ___internal__method);
    }
  }; // Meta.WitAi.Data.Entities.WitEntityDataBase`1
  // Could not write size check! Type: Meta.WitAi.Data.Entities.WitEntityDataBase`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
