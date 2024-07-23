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
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Path
  class Path;
  // Forward declaring type: PathNode
  class PathNode;
}
// Completed forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: PathEndingCondition
  class PathEndingCondition;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::PathEndingCondition);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::PathEndingCondition*, "Pathfinding", "PathEndingCondition");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.PathEndingCondition
  // [TokenAttribute] Offset: FFFFFFFF
  class PathEndingCondition : public ::Il2CppObject {
    public:
    public:
    // protected Pathfinding.Path path
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Path* path;
    // Field size check
    static_assert(sizeof(::Pathfinding::Path*) == 0x8);
    public:
    // Creating conversion operator: operator ::Pathfinding::Path*
    constexpr operator ::Pathfinding::Path*() const noexcept {
      return path;
    }
    // Get instance field reference: protected Pathfinding.Path path
    [[deprecated("Use field access instead!")]] ::Pathfinding::Path*& dyn_path();
    // protected System.Void .ctor()
    // Offset: 0x2A03CE0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathEndingCondition* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PathEndingCondition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathEndingCondition*, creationType>()));
    }
    // public System.Void .ctor(Pathfinding.Path p)
    // Offset: 0x29FF860
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PathEndingCondition* New_ctor(::Pathfinding::Path* p) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::PathEndingCondition::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PathEndingCondition*, creationType>(p)));
    }
    // public System.Boolean TargetFound(Pathfinding.PathNode node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool TargetFound(::Pathfinding::PathNode* node);
  }; // Pathfinding.PathEndingCondition
  #pragma pack(pop)
  static check_size<sizeof(PathEndingCondition), 16 + sizeof(::Pathfinding::Path*)> __Pathfinding_PathEndingConditionSizeCheck;
  static_assert(sizeof(PathEndingCondition) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::PathEndingCondition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::PathEndingCondition::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::PathEndingCondition::TargetFound
// Il2CppName: TargetFound
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::PathEndingCondition::*)(::Pathfinding::PathNode*)>(&Pathfinding::PathEndingCondition::TargetFound)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Pathfinding", "PathNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::PathEndingCondition*), "TargetFound", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};