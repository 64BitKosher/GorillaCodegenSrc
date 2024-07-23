// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.IntPoint
#include "UnityEngine/Rendering/Universal/IntPoint.hpp"
// Including type: UnityEngine.Rendering.Universal.PolyType
#include "UnityEngine/Rendering/Universal/PolyType.hpp"
// Including type: UnityEngine.Rendering.Universal.EdgeSide
#include "UnityEngine/Rendering/Universal/EdgeSide.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: TEdge
  class TEdge;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::TEdge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::TEdge*, "UnityEngine.Rendering.Universal", "TEdge");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x128
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.TEdge
  // [TokenAttribute] Offset: FFFFFFFF
  class TEdge : public ::Il2CppObject {
    public:
    public:
    // UnityEngine.Rendering.Universal.IntPoint Bot
    // Size: 0x30
    // Offset: 0x10
    ::UnityEngine::Rendering::Universal::IntPoint Bot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::IntPoint) == 0x30);
    // UnityEngine.Rendering.Universal.IntPoint Curr
    // Size: 0x30
    // Offset: 0x40
    ::UnityEngine::Rendering::Universal::IntPoint Curr;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::IntPoint) == 0x30);
    // UnityEngine.Rendering.Universal.IntPoint Top
    // Size: 0x30
    // Offset: 0x70
    ::UnityEngine::Rendering::Universal::IntPoint Top;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::IntPoint) == 0x30);
    // UnityEngine.Rendering.Universal.IntPoint Delta
    // Size: 0x30
    // Offset: 0xA0
    ::UnityEngine::Rendering::Universal::IntPoint Delta;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::IntPoint) == 0x30);
    // System.Double Dx
    // Size: 0x8
    // Offset: 0xD0
    double Dx;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // UnityEngine.Rendering.Universal.PolyType PolyTyp
    // Size: 0x4
    // Offset: 0xD8
    ::UnityEngine::Rendering::Universal::PolyType PolyTyp;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::PolyType) == 0x4);
    // UnityEngine.Rendering.Universal.EdgeSide Side
    // Size: 0x4
    // Offset: 0xDC
    ::UnityEngine::Rendering::Universal::EdgeSide Side;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::EdgeSide) == 0x4);
    // System.Int32 WindDelta
    // Size: 0x4
    // Offset: 0xE0
    int WindDelta;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 WindCnt
    // Size: 0x4
    // Offset: 0xE4
    int WindCnt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 WindCnt2
    // Size: 0x4
    // Offset: 0xE8
    int WindCnt2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 OutIdx
    // Size: 0x4
    // Offset: 0xEC
    int OutIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // UnityEngine.Rendering.Universal.TEdge Next
    // Size: 0x8
    // Offset: 0xF0
    ::UnityEngine::Rendering::Universal::TEdge* Next;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge Prev
    // Size: 0x8
    // Offset: 0xF8
    ::UnityEngine::Rendering::Universal::TEdge* Prev;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge NextInLML
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::Rendering::Universal::TEdge* NextInLML;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge NextInAEL
    // Size: 0x8
    // Offset: 0x108
    ::UnityEngine::Rendering::Universal::TEdge* NextInAEL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge PrevInAEL
    // Size: 0x8
    // Offset: 0x110
    ::UnityEngine::Rendering::Universal::TEdge* PrevInAEL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge NextInSEL
    // Size: 0x8
    // Offset: 0x118
    ::UnityEngine::Rendering::Universal::TEdge* NextInSEL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    // UnityEngine.Rendering.Universal.TEdge PrevInSEL
    // Size: 0x8
    // Offset: 0x120
    ::UnityEngine::Rendering::Universal::TEdge* PrevInSEL;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::Universal::TEdge*) == 0x8);
    public:
    // Get instance field reference: UnityEngine.Rendering.Universal.IntPoint Bot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::IntPoint& dyn_Bot();
    // Get instance field reference: UnityEngine.Rendering.Universal.IntPoint Curr
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::IntPoint& dyn_Curr();
    // Get instance field reference: UnityEngine.Rendering.Universal.IntPoint Top
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::IntPoint& dyn_Top();
    // Get instance field reference: UnityEngine.Rendering.Universal.IntPoint Delta
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::IntPoint& dyn_Delta();
    // Get instance field reference: System.Double Dx
    [[deprecated("Use field access instead!")]] double& dyn_Dx();
    // Get instance field reference: UnityEngine.Rendering.Universal.PolyType PolyTyp
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::PolyType& dyn_PolyTyp();
    // Get instance field reference: UnityEngine.Rendering.Universal.EdgeSide Side
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::EdgeSide& dyn_Side();
    // Get instance field reference: System.Int32 WindDelta
    [[deprecated("Use field access instead!")]] int& dyn_WindDelta();
    // Get instance field reference: System.Int32 WindCnt
    [[deprecated("Use field access instead!")]] int& dyn_WindCnt();
    // Get instance field reference: System.Int32 WindCnt2
    [[deprecated("Use field access instead!")]] int& dyn_WindCnt2();
    // Get instance field reference: System.Int32 OutIdx
    [[deprecated("Use field access instead!")]] int& dyn_OutIdx();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge Next
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_Next();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge Prev
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_Prev();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge NextInLML
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_NextInLML();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge NextInAEL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_NextInAEL();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge PrevInAEL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_PrevInAEL();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge NextInSEL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_NextInSEL();
    // Get instance field reference: UnityEngine.Rendering.Universal.TEdge PrevInSEL
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::TEdge*& dyn_PrevInSEL();
    // public System.Void .ctor()
    // Offset: 0x526CDCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TEdge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::TEdge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TEdge*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.TEdge
  #pragma pack(pop)
  static check_size<sizeof(TEdge), 288 + sizeof(::UnityEngine::Rendering::Universal::TEdge*)> __UnityEngine_Rendering_Universal_TEdgeSizeCheck;
  static_assert(sizeof(TEdge) == 0x128);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::TEdge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
