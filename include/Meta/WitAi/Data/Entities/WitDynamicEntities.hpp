// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.WitAi.Interfaces.IDynamicEntitiesProvider
#include "Meta/WitAi/Interfaces/IDynamicEntitiesProvider.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Data::Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntity
  class WitDynamicEntity;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: Meta::WitAi::Json
namespace Meta::WitAi::Json {
  // Forward declaring type: WitResponseClass
  class WitResponseClass;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: Meta::WitAi::Data::Info
namespace Meta::WitAi::Data::Info {
  // Forward declaring type: WitEntityKeywordInfo
  struct WitEntityKeywordInfo;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Forward declaring type: WitDynamicEntities
  class WitDynamicEntities;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Data::Entities::WitDynamicEntities);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Data::Entities::WitDynamicEntities*, "Meta.WitAi.Data.Entities", "WitDynamicEntities");
// Type namespace: Meta.WitAi.Data.Entities
namespace Meta::WitAi::Data::Entities {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Data.Entities.WitDynamicEntities
  // [TokenAttribute] Offset: FFFFFFFF
  class WitDynamicEntities : public ::Il2CppObject/*, public ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider, public ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*/ {
    public:
    // Nested type: ::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass12_0
    class $$c__DisplayClass12_0;
    // Nested type: ::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass14_0
    class $$c__DisplayClass14_0;
    // Nested type: ::Meta::WitAi::Data::Entities::WitDynamicEntities::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    public:
    // public System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity> entities
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* entities;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider
    operator ::Meta::WitAi::Interfaces::IDynamicEntitiesProvider() noexcept {
      return *reinterpret_cast<::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>
    operator ::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*>(this);
    }
    // Creating conversion operator: operator ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*
    constexpr operator ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*() const noexcept {
      return entities;
    }
    // Get instance field reference: public System.Collections.Generic.List`1<Meta.WitAi.Data.Entities.WitDynamicEntity> entities
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*& dyn_entities();
    // public System.Void .ctor()
    // Offset: 0x44660D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntities* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntities*, creationType>()));
    }
    // public System.Void .ctor(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity> entity)
    // Offset: 0x4466A70
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntities* New_ctor(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* entity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntities*, creationType>(entity)));
    }
    // public System.Void .ctor(params Meta.WitAi.Data.Entities.WitDynamicEntity[] entity)
    // Offset: 0x4466B2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WitDynamicEntities* New_ctor(::ArrayW<::Meta::WitAi::Data::Entities::WitDynamicEntity*> entity) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Data::Entities::WitDynamicEntities::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WitDynamicEntities*, creationType>(entity)));
    }
    // public Meta.WitAi.Json.WitResponseClass get_AsJson()
    // Offset: 0x4466BE8
    ::Meta::WitAi::Json::WitResponseClass* get_AsJson();
    // public System.Collections.Generic.IEnumerator`1<Meta.WitAi.Data.Entities.WitDynamicEntity> GetEnumerator()
    // Offset: 0x4466E28
    ::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x4466EB8
    ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public Meta.WitAi.Data.Entities.WitDynamicEntities GetDynamicEntities()
    // Offset: 0x4466EBC
    ::Meta::WitAi::Data::Entities::WitDynamicEntities* GetDynamicEntities();
    // public System.Void Merge(Meta.WitAi.Interfaces.IDynamicEntitiesProvider provider)
    // Offset: 0x446615C
    void Merge(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider* provider);
    // public System.Void Merge(System.Collections.Generic.IEnumerable`1<Meta.WitAi.Data.Entities.WitDynamicEntity> mergeEntities)
    // Offset: 0x4466EC0
    void Merge(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* mergeEntities);
    // public System.Void Add(Meta.WitAi.Data.Entities.WitDynamicEntity dynamicEntity)
    // Offset: 0x4466F28
    void Add(::Meta::WitAi::Data::Entities::WitDynamicEntity* dynamicEntity);
    // public System.Void Remove(Meta.WitAi.Data.Entities.WitDynamicEntity dynamicEntity)
    // Offset: 0x44670E8
    void Remove(::Meta::WitAi::Data::Entities::WitDynamicEntity* dynamicEntity);
    // public System.Void AddKeyword(System.String entityName, Meta.WitAi.Data.Info.WitEntityKeywordInfo keyword)
    // Offset: 0x4466440
    void AddKeyword(::StringW entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo keyword);
    // public System.Void RemoveKeyword(System.String entityName, Meta.WitAi.Data.Info.WitEntityKeywordInfo keyword)
    // Offset: 0x4466700
    void RemoveKeyword(::StringW entityName, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo keyword);
    // public override System.String ToString()
    // Offset: 0x4466E08
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Meta.WitAi.Data.Entities.WitDynamicEntities
  #pragma pack(pop)
  static check_size<sizeof(WitDynamicEntities), 16 + sizeof(::System::Collections::Generic::List_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*)> __Meta_WitAi_Data_Entities_WitDynamicEntitiesSizeCheck;
  static_assert(sizeof(WitDynamicEntities) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::get_AsJson
// Il2CppName: get_AsJson
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Json::WitResponseClass* (Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntities::get_AsJson)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "get_AsJson", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::GetEnumerator
// Il2CppName: GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>* (Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntities::GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::System_Collections_IEnumerable_GetEnumerator
// Il2CppName: System.Collections.IEnumerable.GetEnumerator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntities::System_Collections_IEnumerable_GetEnumerator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::GetDynamicEntities
// Il2CppName: GetDynamicEntities
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Data::Entities::WitDynamicEntities* (Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntities::GetDynamicEntities)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "GetDynamicEntities", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::Merge
// Il2CppName: Merge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::Meta::WitAi::Interfaces::IDynamicEntitiesProvider*)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::Merge)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Interfaces", "IDynamicEntitiesProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "Merge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::Merge
// Il2CppName: Merge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::System::Collections::Generic::IEnumerable_1<::Meta::WitAi::Data::Entities::WitDynamicEntity*>*)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::Merge)> {
  static const MethodInfo* get() {
    static auto* mergeEntities = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IEnumerable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Entities", "WitDynamicEntity")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "Merge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mergeEntities});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::Add)> {
  static const MethodInfo* get() {
    static auto* dynamicEntity = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Entities", "WitDynamicEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dynamicEntity});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::Meta::WitAi::Data::Entities::WitDynamicEntity*)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::Remove)> {
  static const MethodInfo* get() {
    static auto* dynamicEntity = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Entities", "WitDynamicEntity")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dynamicEntity});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::AddKeyword
// Il2CppName: AddKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::AddKeyword)> {
  static const MethodInfo* get() {
    static auto* entityName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyword = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Info", "WitEntityKeywordInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "AddKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityName, keyword});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::RemoveKeyword
// Il2CppName: RemoveKeyword
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Data::Entities::WitDynamicEntities::*)(::StringW, ::Meta::WitAi::Data::Info::WitEntityKeywordInfo)>(&Meta::WitAi::Data::Entities::WitDynamicEntities::RemoveKeyword)> {
  static const MethodInfo* get() {
    static auto* entityName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* keyword = &::il2cpp_utils::GetClassFromName("Meta.WitAi.Data.Info", "WitEntityKeywordInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "RemoveKeyword", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{entityName, keyword});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Data::Entities::WitDynamicEntities::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::WitAi::Data::Entities::WitDynamicEntities::*)()>(&Meta::WitAi::Data::Entities::WitDynamicEntities::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Data::Entities::WitDynamicEntities*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
