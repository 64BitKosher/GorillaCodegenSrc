// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DigitalOpus.MB.Core.MB_Utility
#include "DigitalOpus/MB/Core/MB_Utility.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_Utility::MeshAnalysisResult, "DigitalOpus.MB.Core", "MB_Utility/MeshAnalysisResult");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult
  // [TokenAttribute] Offset: FFFFFFFF
  struct MB_Utility::MeshAnalysisResult/*, public ::System::ValueType*/ {
    public:
    public:
    // public UnityEngine.Rect uvRect
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Rect uvRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // public System.Boolean hasOutOfBoundsUVs
    // Size: 0x1
    // Offset: 0x10
    bool hasOutOfBoundsUVs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasOverlappingSubmeshVerts
    // Size: 0x1
    // Offset: 0x11
    bool hasOverlappingSubmeshVerts;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasOverlappingSubmeshTris
    // Size: 0x1
    // Offset: 0x12
    bool hasOverlappingSubmeshTris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean hasUVs
    // Size: 0x1
    // Offset: 0x13
    bool hasUVs;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Single submeshArea
    // Size: 0x4
    // Offset: 0x14
    float submeshArea;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: MeshAnalysisResult
    constexpr MeshAnalysisResult(::UnityEngine::Rect uvRect_ = {}, bool hasOutOfBoundsUVs_ = {}, bool hasOverlappingSubmeshVerts_ = {}, bool hasOverlappingSubmeshTris_ = {}, bool hasUVs_ = {}, float submeshArea_ = {}) noexcept : uvRect{uvRect_}, hasOutOfBoundsUVs{hasOutOfBoundsUVs_}, hasOverlappingSubmeshVerts{hasOverlappingSubmeshVerts_}, hasOverlappingSubmeshTris{hasOverlappingSubmeshTris_}, hasUVs{hasUVs_}, submeshArea{submeshArea_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.Rect uvRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_uvRect();
    // Get instance field reference: public System.Boolean hasOutOfBoundsUVs
    [[deprecated("Use field access instead!")]] bool& dyn_hasOutOfBoundsUVs();
    // Get instance field reference: public System.Boolean hasOverlappingSubmeshVerts
    [[deprecated("Use field access instead!")]] bool& dyn_hasOverlappingSubmeshVerts();
    // Get instance field reference: public System.Boolean hasOverlappingSubmeshTris
    [[deprecated("Use field access instead!")]] bool& dyn_hasOverlappingSubmeshTris();
    // Get instance field reference: public System.Boolean hasUVs
    [[deprecated("Use field access instead!")]] bool& dyn_hasUVs();
    // Get instance field reference: public System.Single submeshArea
    [[deprecated("Use field access instead!")]] float& dyn_submeshArea();
  }; // DigitalOpus.MB.Core.MB_Utility/MeshAnalysisResult
  #pragma pack(pop)
  static check_size<sizeof(MB_Utility::MeshAnalysisResult), 20 + sizeof(float)> __DigitalOpus_MB_Core_MB_Utility_MeshAnalysisResultSizeCheck;
  static_assert(sizeof(MB_Utility::MeshAnalysisResult) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
