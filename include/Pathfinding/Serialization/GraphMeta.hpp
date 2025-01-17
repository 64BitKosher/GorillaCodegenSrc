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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Forward declaring type: GraphMeta
  class GraphMeta;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Serialization::GraphMeta);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Serialization::GraphMeta*, "Pathfinding.Serialization", "GraphMeta");
// Type namespace: Pathfinding.Serialization
namespace Pathfinding::Serialization {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Serialization.GraphMeta
  // [TokenAttribute] Offset: FFFFFFFF
  class GraphMeta : public ::Il2CppObject {
    public:
    public:
    // public System.Version version
    // Size: 0x8
    // Offset: 0x10
    ::System::Version* version;
    // Field size check
    static_assert(sizeof(::System::Version*) == 0x8);
    // public System.Int32 graphs
    // Size: 0x4
    // Offset: 0x18
    int graphs;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: graphs and: guids
    char __padding1[0x4] = {};
    // public System.Collections.Generic.List`1<System.String> guids
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::StringW>* guids;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // public System.Collections.Generic.List`1<System.String> typeNames
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::StringW>* typeNames;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Get instance field reference: public System.Version version
    [[deprecated("Use field access instead!")]] ::System::Version*& dyn_version();
    // Get instance field reference: public System.Int32 graphs
    [[deprecated("Use field access instead!")]] int& dyn_graphs();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> guids
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_guids();
    // Get instance field reference: public System.Collections.Generic.List`1<System.String> typeNames
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_typeNames();
    // public System.Type GetGraphType(System.Int32 index, System.Type[] availableGraphTypes)
    // Offset: 0x2A21EBC
    ::System::Type* GetGraphType(int index, ::ArrayW<::System::Type*> availableGraphTypes);
    // public System.Void .ctor()
    // Offset: 0x2A1F7F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GraphMeta* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Serialization::GraphMeta::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GraphMeta*, creationType>()));
    }
  }; // Pathfinding.Serialization.GraphMeta
  #pragma pack(pop)
  static check_size<sizeof(GraphMeta), 40 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __Pathfinding_Serialization_GraphMetaSizeCheck;
  static_assert(sizeof(GraphMeta) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphMeta::GetGraphType
// Il2CppName: GetGraphType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Pathfinding::Serialization::GraphMeta::*)(int, ::ArrayW<::System::Type*>)>(&Pathfinding::Serialization::GraphMeta::GetGraphType)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* availableGraphTypes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Serialization::GraphMeta*), "GetGraphType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, availableGraphTypes});
  }
};
// Writing MetadataGetter for method: Pathfinding::Serialization::GraphMeta::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
