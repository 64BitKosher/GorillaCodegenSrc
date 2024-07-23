// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.PathEndingCondition
#include "Pathfinding/PathEndingCondition.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: ABPath
  class ABPath;
  // Forward declaring type: PathNode
  class PathNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: ABPathEndingCondition
  class ABPathEndingCondition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::ABPathEndingCondition);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::ABPathEndingCondition*, "Pathfinding", "ABPathEndingCondition");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.ABPathEndingCondition
  // [TokenAttribute] Offset: FFFFFFFF
  class ABPathEndingCondition : public ::Pathfinding::PathEndingCondition {
    public:
    public:
    // protected Pathfinding.ABPath abPath
    // Size: 0x8
    // Offset: 0x18
    ::Pathfinding::ABPath* abPath;
    // Field size check
    static_assert(sizeof(::Pathfinding::ABPath*) == 0x8);
    public:
    // Deleting conversion operator: operator ::Pathfinding::Path*
    constexpr operator ::Pathfinding::Path*() const noexcept = delete;
    // Get instance field reference: protected Pathfinding.ABPath abPath
    [[deprecated("Use field access instead!")]] ::Pathfinding::ABPath*& dyn_abPath();
    // public System.Void .ctor(Pathfinding.ABPath p)
    // Offset: 0x2A038D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ABPathEndingCondition* New_ctor(::Pathfinding::ABPath* p) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::ABPathEndingCondition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ABPathEndingCondition*, creationType>(p)));
    }
    // public override System.Boolean TargetFound(Pathfinding.PathNode node)
    // Offset: 0x2A03CE8
    // Implemented from: Pathfinding.PathEndingCondition
    // Base method: System.Boolean PathEndingCondition::TargetFound(Pathfinding.PathNode node)
    bool TargetFound(::Pathfinding::PathNode* node);
  }; // Pathfinding.ABPathEndingCondition
  #pragma pack(pop)
  static check_size<sizeof(ABPathEndingCondition), 24 + sizeof(::Pathfinding::ABPath*)> __Pathfinding_ABPathEndingConditionSizeCheck;
  static_assert(sizeof(ABPathEndingCondition) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::ABPathEndingCondition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::ABPathEndingCondition::TargetFound
// Il2CppName: TargetFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::ABPathEndingCondition::*)(::Pathfinding::PathNode*)>(&Pathfinding::ABPathEndingCondition::TargetFound)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::ABPathEndingCondition*), "TargetFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};