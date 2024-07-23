// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib
#include "Cinemachine/ClipperLib.hpp"
// Including type: Cinemachine.ClipperLib/IntPoint
#include "Cinemachine/ClipperLib_IntPoint.hpp"
// Including type: Cinemachine.ClipperLib/PolyType
#include "Cinemachine/ClipperLib_PolyType.hpp"
// Including type: Cinemachine.ClipperLib/EdgeSide
#include "Cinemachine/ClipperLib_EdgeSide.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::ClipperLib::TEdge);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::TEdge*, "Cinemachine", "ClipperLib/TEdge");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ClipperLib/TEdge
  // [TokenAttribute] Offset: FFFFFFFF
  class ClipperLib::TEdge : public ::Il2CppObject {
    public:
    public:
    // Cinemachine.ClipperLib/IntPoint Bot
    // Size: 0x10
    // Offset: 0x10
    ::Cinemachine::ClipperLib::IntPoint Bot;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::IntPoint) == 0x10);
    // Cinemachine.ClipperLib/IntPoint Curr
    // Size: 0x10
    // Offset: 0x20
    ::Cinemachine::ClipperLib::IntPoint Curr;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::IntPoint) == 0x10);
    // Cinemachine.ClipperLib/IntPoint Top
    // Size: 0x10
    // Offset: 0x30
    ::Cinemachine::ClipperLib::IntPoint Top;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::IntPoint) == 0x10);
    // Cinemachine.ClipperLib/IntPoint Delta
    // Size: 0x10
    // Offset: 0x40
    ::Cinemachine::ClipperLib::IntPoint Delta;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::IntPoint) == 0x10);
    // System.Double Dx
    // Size: 0x8
    // Offset: 0x50
    double Dx;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // Cinemachine.ClipperLib/PolyType PolyTyp
    // Size: 0x4
    // Offset: 0x58
    ::Cinemachine::ClipperLib::PolyType PolyTyp;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::PolyType) == 0x4);
    // Cinemachine.ClipperLib/EdgeSide Side
    // Size: 0x4
    // Offset: 0x5C
    ::Cinemachine::ClipperLib::EdgeSide Side;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::EdgeSide) == 0x4);
    // System.Int32 WindDelta
    // Size: 0x4
    // Offset: 0x60
    int WindDelta;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 WindCnt
    // Size: 0x4
    // Offset: 0x64
    int WindCnt;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 WindCnt2
    // Size: 0x4
    // Offset: 0x68
    int WindCnt2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 OutIdx
    // Size: 0x4
    // Offset: 0x6C
    int OutIdx;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Cinemachine.ClipperLib/TEdge Next
    // Size: 0x8
    // Offset: 0x70
    ::Cinemachine::ClipperLib::TEdge* Next;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge Prev
    // Size: 0x8
    // Offset: 0x78
    ::Cinemachine::ClipperLib::TEdge* Prev;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge NextInLML
    // Size: 0x8
    // Offset: 0x80
    ::Cinemachine::ClipperLib::TEdge* NextInLML;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge NextInAEL
    // Size: 0x8
    // Offset: 0x88
    ::Cinemachine::ClipperLib::TEdge* NextInAEL;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge PrevInAEL
    // Size: 0x8
    // Offset: 0x90
    ::Cinemachine::ClipperLib::TEdge* PrevInAEL;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge NextInSEL
    // Size: 0x8
    // Offset: 0x98
    ::Cinemachine::ClipperLib::TEdge* NextInSEL;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    // Cinemachine.ClipperLib/TEdge PrevInSEL
    // Size: 0x8
    // Offset: 0xA0
    ::Cinemachine::ClipperLib::TEdge* PrevInSEL;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::TEdge*) == 0x8);
    public:
    // Get instance field reference: Cinemachine.ClipperLib/IntPoint Bot
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::IntPoint& dyn_Bot();
    // Get instance field reference: Cinemachine.ClipperLib/IntPoint Curr
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::IntPoint& dyn_Curr();
    // Get instance field reference: Cinemachine.ClipperLib/IntPoint Top
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::IntPoint& dyn_Top();
    // Get instance field reference: Cinemachine.ClipperLib/IntPoint Delta
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::IntPoint& dyn_Delta();
    // Get instance field reference: System.Double Dx
    [[deprecated("Use field access instead!")]] double& dyn_Dx();
    // Get instance field reference: Cinemachine.ClipperLib/PolyType PolyTyp
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::PolyType& dyn_PolyTyp();
    // Get instance field reference: Cinemachine.ClipperLib/EdgeSide Side
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::EdgeSide& dyn_Side();
    // Get instance field reference: System.Int32 WindDelta
    [[deprecated("Use field access instead!")]] int& dyn_WindDelta();
    // Get instance field reference: System.Int32 WindCnt
    [[deprecated("Use field access instead!")]] int& dyn_WindCnt();
    // Get instance field reference: System.Int32 WindCnt2
    [[deprecated("Use field access instead!")]] int& dyn_WindCnt2();
    // Get instance field reference: System.Int32 OutIdx
    [[deprecated("Use field access instead!")]] int& dyn_OutIdx();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge Next
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_Next();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge Prev
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_Prev();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge NextInLML
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_NextInLML();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge NextInAEL
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_NextInAEL();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge PrevInAEL
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_PrevInAEL();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge NextInSEL
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_NextInSEL();
    // Get instance field reference: Cinemachine.ClipperLib/TEdge PrevInSEL
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::TEdge*& dyn_PrevInSEL();
    // public System.Void .ctor()
    // Offset: 0x2ABCB9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClipperLib::TEdge* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::ClipperLib::TEdge::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClipperLib::TEdge*, creationType>()));
    }
  }; // Cinemachine.ClipperLib/TEdge
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::TEdge), 160 + sizeof(::Cinemachine::ClipperLib::TEdge*)> __Cinemachine_ClipperLib_TEdgeSizeCheck;
  static_assert(sizeof(ClipperLib::TEdge) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ClipperLib::TEdge::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
