// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.AstarData
#include "Pathfinding/AstarData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: GraphNode
  class GraphNode;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AstarData::$$c__DisplayClass53_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AstarData::$$c__DisplayClass53_0*, "Pathfinding", "AstarData/<>c__DisplayClass53_0");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AstarData/<>c__DisplayClass53_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class AstarData::$$c__DisplayClass53_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 i
    // Size: 0x4
    // Offset: 0x10
    int i;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return i;
    }
    // Get instance field reference: public System.Int32 i
    [[deprecated("Use field access instead!")]] int& dyn_i();
    // public System.Void .ctor()
    // Offset: 0x299C554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AstarData::$$c__DisplayClass53_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::AstarData::$$c__DisplayClass53_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AstarData::$$c__DisplayClass53_0*, creationType>()));
    }
    // System.Void <DeserializeGraphsPartAdditive>b__0(Pathfinding.GraphNode node)
    // Offset: 0x299D5D8
    void $DeserializeGraphsPartAdditive$b__0(::Pathfinding::GraphNode* node);
  }; // Pathfinding.AstarData/<>c__DisplayClass53_0
  #pragma pack(pop)
  static check_size<sizeof(AstarData::$$c__DisplayClass53_0), 16 + sizeof(int)> __Pathfinding_AstarData_$$c__DisplayClass53_0SizeCheck;
  static_assert(sizeof(AstarData::$$c__DisplayClass53_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AstarData::$$c__DisplayClass53_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::AstarData::$$c__DisplayClass53_0::$DeserializeGraphsPartAdditive$b__0
// Il2CppName: <DeserializeGraphsPartAdditive>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AstarData::$$c__DisplayClass53_0::*)(::Pathfinding::GraphNode*)>(&Pathfinding::AstarData::$$c__DisplayClass53_0::$DeserializeGraphsPartAdditive$b__0)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "GraphNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AstarData::$$c__DisplayClass53_0*), "<DeserializeGraphsPartAdditive>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
