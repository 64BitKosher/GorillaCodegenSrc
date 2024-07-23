// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Util.TileHandler
#include "Pathfinding/Util/TileHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IWorkItemContext
  class IWorkItemContext;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Util::TileHandler::$$c__DisplayClass37_0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Util::TileHandler::$$c__DisplayClass37_0*, "Pathfinding.Util", "TileHandler/<>c__DisplayClass37_0");
// Type namespace: Pathfinding.Util
namespace Pathfinding::Util {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Util.TileHandler/<>c__DisplayClass37_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class TileHandler::$$c__DisplayClass37_0 : public ::Il2CppObject {
    public:
    public:
    // public Pathfinding.Util.TileHandler <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Pathfinding::Util::TileHandler* $$4__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::Util::TileHandler*) == 0x8);
    // public System.Int32 x
    // Size: 0x4
    // Offset: 0x18
    int x;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 z
    // Size: 0x4
    // Offset: 0x1C
    int z;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public Pathfinding.Util.TileHandler <>4__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::Util::TileHandler*& dyn_$$4__this();
    // Get instance field reference: public System.Int32 x
    [[deprecated("Use field access instead!")]] int& dyn_x();
    // Get instance field reference: public System.Int32 z
    [[deprecated("Use field access instead!")]] int& dyn_z();
    // public System.Void .ctor()
    // Offset: 0x2A30CB4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TileHandler::$$c__DisplayClass37_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Util::TileHandler::$$c__DisplayClass37_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TileHandler::$$c__DisplayClass37_0*, creationType>()));
    }
    // System.Boolean <ClearTile>b__0(Pathfinding.IWorkItemContext context, System.Boolean force)
    // Offset: 0x2A30CBC
    bool $ClearTile$b__0(::Pathfinding::IWorkItemContext* context, bool force);
  }; // Pathfinding.Util.TileHandler/<>c__DisplayClass37_0
  #pragma pack(pop)
  static check_size<sizeof(TileHandler::$$c__DisplayClass37_0), 28 + sizeof(int)> __Pathfinding_Util_TileHandler_$$c__DisplayClass37_0SizeCheck;
  static_assert(sizeof(TileHandler::$$c__DisplayClass37_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Util::TileHandler::$$c__DisplayClass37_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Util::TileHandler::$$c__DisplayClass37_0::$ClearTile$b__0
// Il2CppName: <ClearTile>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Util::TileHandler::$$c__DisplayClass37_0::*)(::Pathfinding::IWorkItemContext*, bool)>(&Pathfinding::Util::TileHandler::$$c__DisplayClass37_0::$ClearTile$b__0)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("Pathfinding", "IWorkItemContext")->byval_arg;
    static auto* force = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Util::TileHandler::$$c__DisplayClass37_0*), "<ClearTile>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, force});
  }
};
