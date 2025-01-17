// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Forward declaring type: TerrainTileCoord
  struct TerrainTileCoord;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainTileCoord, "UnityEngine.TerrainUtils", "TerrainTileCoord");
// Type namespace: UnityEngine.TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TerrainUtils.TerrainTileCoord
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct TerrainTileCoord/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Int32 tileX
    // Size: 0x4
    // Offset: 0x0
    int tileX;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly System.Int32 tileZ
    // Size: 0x4
    // Offset: 0x4
    int tileZ;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: TerrainTileCoord
    constexpr TerrainTileCoord(int tileX_ = {}, int tileZ_ = {}) noexcept : tileX{tileX_}, tileZ{tileZ_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Int32 tileX
    [[deprecated("Use field access instead!")]] int& dyn_tileX();
    // Get instance field reference: public readonly System.Int32 tileZ
    [[deprecated("Use field access instead!")]] int& dyn_tileZ();
    // public System.Void .ctor(System.Int32 tileX, System.Int32 tileZ)
    // Offset: 0x553F354
    // ABORTED: conflicts with another method.  TerrainTileCoord(int tileX, int tileZ);
  }; // UnityEngine.TerrainUtils.TerrainTileCoord
  #pragma pack(pop)
  static check_size<sizeof(TerrainTileCoord), 4 + sizeof(int)> __UnityEngine_TerrainUtils_TerrainTileCoordSizeCheck;
  static_assert(sizeof(TerrainTileCoord) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainTileCoord::TerrainTileCoord
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
