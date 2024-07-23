// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRFaceExpressions
#include "GlobalNamespace/OVRFaceExpressions.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRFaceExpressions::FaceExpression, "", "OVRFaceExpressions/FaceExpression");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: OVRFaceExpressions/FaceExpression
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRFaceExpressions::FaceExpression/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FaceExpression
    constexpr FaceExpression(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public OVRFaceExpressions/FaceExpression Invalid
    static constexpr const int Invalid = -1;
    // Get static field: static public OVRFaceExpressions/FaceExpression Invalid
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_Invalid();
    // Set static field: static public OVRFaceExpressions/FaceExpression Invalid
    static void _set_Invalid(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression BrowLowererL
    static constexpr const int BrowLowererL = 0;
    // Get static field: static public OVRFaceExpressions/FaceExpression BrowLowererL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_BrowLowererL();
    // Set static field: static public OVRFaceExpressions/FaceExpression BrowLowererL
    static void _set_BrowLowererL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression BrowLowererR
    static constexpr const int BrowLowererR = 1;
    // Get static field: static public OVRFaceExpressions/FaceExpression BrowLowererR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_BrowLowererR();
    // Set static field: static public OVRFaceExpressions/FaceExpression BrowLowererR
    static void _set_BrowLowererR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekPuffL
    static constexpr const int CheekPuffL = 2;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekPuffL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekPuffL();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekPuffL
    static void _set_CheekPuffL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekPuffR
    static constexpr const int CheekPuffR = 3;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekPuffR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekPuffR();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekPuffR
    static void _set_CheekPuffR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekRaiserL
    static constexpr const int CheekRaiserL = 4;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekRaiserL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekRaiserL();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekRaiserL
    static void _set_CheekRaiserL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekRaiserR
    static constexpr const int CheekRaiserR = 5;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekRaiserR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekRaiserR();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekRaiserR
    static void _set_CheekRaiserR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekSuckL
    static constexpr const int CheekSuckL = 6;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekSuckL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekSuckL();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekSuckL
    static void _set_CheekSuckL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression CheekSuckR
    static constexpr const int CheekSuckR = 7;
    // Get static field: static public OVRFaceExpressions/FaceExpression CheekSuckR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_CheekSuckR();
    // Set static field: static public OVRFaceExpressions/FaceExpression CheekSuckR
    static void _set_CheekSuckR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression ChinRaiserB
    static constexpr const int ChinRaiserB = 8;
    // Get static field: static public OVRFaceExpressions/FaceExpression ChinRaiserB
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_ChinRaiserB();
    // Set static field: static public OVRFaceExpressions/FaceExpression ChinRaiserB
    static void _set_ChinRaiserB(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression ChinRaiserT
    static constexpr const int ChinRaiserT = 9;
    // Get static field: static public OVRFaceExpressions/FaceExpression ChinRaiserT
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_ChinRaiserT();
    // Set static field: static public OVRFaceExpressions/FaceExpression ChinRaiserT
    static void _set_ChinRaiserT(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression DimplerL
    static constexpr const int DimplerL = 10;
    // Get static field: static public OVRFaceExpressions/FaceExpression DimplerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_DimplerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression DimplerL
    static void _set_DimplerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression DimplerR
    static constexpr const int DimplerR = 11;
    // Get static field: static public OVRFaceExpressions/FaceExpression DimplerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_DimplerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression DimplerR
    static void _set_DimplerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesClosedL
    static constexpr const int EyesClosedL = 12;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesClosedL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesClosedL();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesClosedL
    static void _set_EyesClosedL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesClosedR
    static constexpr const int EyesClosedR = 13;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesClosedR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesClosedR();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesClosedR
    static void _set_EyesClosedR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookDownL
    static constexpr const int EyesLookDownL = 14;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookDownL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookDownL();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookDownL
    static void _set_EyesLookDownL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookDownR
    static constexpr const int EyesLookDownR = 15;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookDownR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookDownR();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookDownR
    static void _set_EyesLookDownR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookLeftL
    static constexpr const int EyesLookLeftL = 16;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookLeftL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookLeftL();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookLeftL
    static void _set_EyesLookLeftL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookLeftR
    static constexpr const int EyesLookLeftR = 17;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookLeftR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookLeftR();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookLeftR
    static void _set_EyesLookLeftR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookRightL
    static constexpr const int EyesLookRightL = 18;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookRightL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookRightL();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookRightL
    static void _set_EyesLookRightL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookRightR
    static constexpr const int EyesLookRightR = 19;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookRightR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookRightR();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookRightR
    static void _set_EyesLookRightR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookUpL
    static constexpr const int EyesLookUpL = 20;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookUpL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookUpL();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookUpL
    static void _set_EyesLookUpL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression EyesLookUpR
    static constexpr const int EyesLookUpR = 21;
    // Get static field: static public OVRFaceExpressions/FaceExpression EyesLookUpR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_EyesLookUpR();
    // Set static field: static public OVRFaceExpressions/FaceExpression EyesLookUpR
    static void _set_EyesLookUpR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserL
    static constexpr const int InnerBrowRaiserL = 22;
    // Get static field: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_InnerBrowRaiserL();
    // Set static field: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserL
    static void _set_InnerBrowRaiserL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserR
    static constexpr const int InnerBrowRaiserR = 23;
    // Get static field: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_InnerBrowRaiserR();
    // Set static field: static public OVRFaceExpressions/FaceExpression InnerBrowRaiserR
    static void _set_InnerBrowRaiserR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression JawDrop
    static constexpr const int JawDrop = 24;
    // Get static field: static public OVRFaceExpressions/FaceExpression JawDrop
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_JawDrop();
    // Set static field: static public OVRFaceExpressions/FaceExpression JawDrop
    static void _set_JawDrop(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression JawSidewaysLeft
    static constexpr const int JawSidewaysLeft = 25;
    // Get static field: static public OVRFaceExpressions/FaceExpression JawSidewaysLeft
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_JawSidewaysLeft();
    // Set static field: static public OVRFaceExpressions/FaceExpression JawSidewaysLeft
    static void _set_JawSidewaysLeft(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression JawSidewaysRight
    static constexpr const int JawSidewaysRight = 26;
    // Get static field: static public OVRFaceExpressions/FaceExpression JawSidewaysRight
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_JawSidewaysRight();
    // Set static field: static public OVRFaceExpressions/FaceExpression JawSidewaysRight
    static void _set_JawSidewaysRight(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression JawThrust
    static constexpr const int JawThrust = 27;
    // Get static field: static public OVRFaceExpressions/FaceExpression JawThrust
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_JawThrust();
    // Set static field: static public OVRFaceExpressions/FaceExpression JawThrust
    static void _set_JawThrust(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LidTightenerL
    static constexpr const int LidTightenerL = 28;
    // Get static field: static public OVRFaceExpressions/FaceExpression LidTightenerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LidTightenerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LidTightenerL
    static void _set_LidTightenerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LidTightenerR
    static constexpr const int LidTightenerR = 29;
    // Get static field: static public OVRFaceExpressions/FaceExpression LidTightenerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LidTightenerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LidTightenerR
    static void _set_LidTightenerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipCornerDepressorL
    static constexpr const int LipCornerDepressorL = 30;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipCornerDepressorL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipCornerDepressorL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipCornerDepressorL
    static void _set_LipCornerDepressorL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipCornerDepressorR
    static constexpr const int LipCornerDepressorR = 31;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipCornerDepressorR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipCornerDepressorR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipCornerDepressorR
    static void _set_LipCornerDepressorR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipCornerPullerL
    static constexpr const int LipCornerPullerL = 32;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipCornerPullerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipCornerPullerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipCornerPullerL
    static void _set_LipCornerPullerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipCornerPullerR
    static constexpr const int LipCornerPullerR = 33;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipCornerPullerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipCornerPullerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipCornerPullerR
    static void _set_LipCornerPullerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipFunnelerLB
    static constexpr const int LipFunnelerLB = 34;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipFunnelerLB
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipFunnelerLB();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipFunnelerLB
    static void _set_LipFunnelerLB(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipFunnelerLT
    static constexpr const int LipFunnelerLT = 35;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipFunnelerLT
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipFunnelerLT();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipFunnelerLT
    static void _set_LipFunnelerLT(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipFunnelerRB
    static constexpr const int LipFunnelerRB = 36;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipFunnelerRB
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipFunnelerRB();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipFunnelerRB
    static void _set_LipFunnelerRB(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipFunnelerRT
    static constexpr const int LipFunnelerRT = 37;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipFunnelerRT
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipFunnelerRT();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipFunnelerRT
    static void _set_LipFunnelerRT(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipPressorL
    static constexpr const int LipPressorL = 38;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipPressorL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipPressorL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipPressorL
    static void _set_LipPressorL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipPressorR
    static constexpr const int LipPressorR = 39;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipPressorR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipPressorR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipPressorR
    static void _set_LipPressorR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipPuckerL
    static constexpr const int LipPuckerL = 40;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipPuckerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipPuckerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipPuckerL
    static void _set_LipPuckerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipPuckerR
    static constexpr const int LipPuckerR = 41;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipPuckerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipPuckerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipPuckerR
    static void _set_LipPuckerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipStretcherL
    static constexpr const int LipStretcherL = 42;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipStretcherL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipStretcherL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipStretcherL
    static void _set_LipStretcherL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipStretcherR
    static constexpr const int LipStretcherR = 43;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipStretcherR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipStretcherR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipStretcherR
    static void _set_LipStretcherR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipSuckLB
    static constexpr const int LipSuckLB = 44;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipSuckLB
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipSuckLB();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipSuckLB
    static void _set_LipSuckLB(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipSuckLT
    static constexpr const int LipSuckLT = 45;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipSuckLT
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipSuckLT();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipSuckLT
    static void _set_LipSuckLT(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipSuckRB
    static constexpr const int LipSuckRB = 46;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipSuckRB
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipSuckRB();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipSuckRB
    static void _set_LipSuckRB(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipSuckRT
    static constexpr const int LipSuckRT = 47;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipSuckRT
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipSuckRT();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipSuckRT
    static void _set_LipSuckRT(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipTightenerL
    static constexpr const int LipTightenerL = 48;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipTightenerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipTightenerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipTightenerL
    static void _set_LipTightenerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipTightenerR
    static constexpr const int LipTightenerR = 49;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipTightenerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipTightenerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipTightenerR
    static void _set_LipTightenerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LipsToward
    static constexpr const int LipsToward = 50;
    // Get static field: static public OVRFaceExpressions/FaceExpression LipsToward
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LipsToward();
    // Set static field: static public OVRFaceExpressions/FaceExpression LipsToward
    static void _set_LipsToward(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LowerLipDepressorL
    static constexpr const int LowerLipDepressorL = 51;
    // Get static field: static public OVRFaceExpressions/FaceExpression LowerLipDepressorL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LowerLipDepressorL();
    // Set static field: static public OVRFaceExpressions/FaceExpression LowerLipDepressorL
    static void _set_LowerLipDepressorL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression LowerLipDepressorR
    static constexpr const int LowerLipDepressorR = 52;
    // Get static field: static public OVRFaceExpressions/FaceExpression LowerLipDepressorR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_LowerLipDepressorR();
    // Set static field: static public OVRFaceExpressions/FaceExpression LowerLipDepressorR
    static void _set_LowerLipDepressorR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression MouthLeft
    static constexpr const int MouthLeft = 53;
    // Get static field: static public OVRFaceExpressions/FaceExpression MouthLeft
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_MouthLeft();
    // Set static field: static public OVRFaceExpressions/FaceExpression MouthLeft
    static void _set_MouthLeft(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression MouthRight
    static constexpr const int MouthRight = 54;
    // Get static field: static public OVRFaceExpressions/FaceExpression MouthRight
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_MouthRight();
    // Set static field: static public OVRFaceExpressions/FaceExpression MouthRight
    static void _set_MouthRight(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression NoseWrinklerL
    static constexpr const int NoseWrinklerL = 55;
    // Get static field: static public OVRFaceExpressions/FaceExpression NoseWrinklerL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_NoseWrinklerL();
    // Set static field: static public OVRFaceExpressions/FaceExpression NoseWrinklerL
    static void _set_NoseWrinklerL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression NoseWrinklerR
    static constexpr const int NoseWrinklerR = 56;
    // Get static field: static public OVRFaceExpressions/FaceExpression NoseWrinklerR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_NoseWrinklerR();
    // Set static field: static public OVRFaceExpressions/FaceExpression NoseWrinklerR
    static void _set_NoseWrinklerR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserL
    static constexpr const int OuterBrowRaiserL = 57;
    // Get static field: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_OuterBrowRaiserL();
    // Set static field: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserL
    static void _set_OuterBrowRaiserL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserR
    static constexpr const int OuterBrowRaiserR = 58;
    // Get static field: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_OuterBrowRaiserR();
    // Set static field: static public OVRFaceExpressions/FaceExpression OuterBrowRaiserR
    static void _set_OuterBrowRaiserR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression UpperLidRaiserL
    static constexpr const int UpperLidRaiserL = 59;
    // Get static field: static public OVRFaceExpressions/FaceExpression UpperLidRaiserL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_UpperLidRaiserL();
    // Set static field: static public OVRFaceExpressions/FaceExpression UpperLidRaiserL
    static void _set_UpperLidRaiserL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression UpperLidRaiserR
    static constexpr const int UpperLidRaiserR = 60;
    // Get static field: static public OVRFaceExpressions/FaceExpression UpperLidRaiserR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_UpperLidRaiserR();
    // Set static field: static public OVRFaceExpressions/FaceExpression UpperLidRaiserR
    static void _set_UpperLidRaiserR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression UpperLipRaiserL
    static constexpr const int UpperLipRaiserL = 61;
    // Get static field: static public OVRFaceExpressions/FaceExpression UpperLipRaiserL
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_UpperLipRaiserL();
    // Set static field: static public OVRFaceExpressions/FaceExpression UpperLipRaiserL
    static void _set_UpperLipRaiserL(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression UpperLipRaiserR
    static constexpr const int UpperLipRaiserR = 62;
    // Get static field: static public OVRFaceExpressions/FaceExpression UpperLipRaiserR
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_UpperLipRaiserR();
    // Set static field: static public OVRFaceExpressions/FaceExpression UpperLipRaiserR
    static void _set_UpperLipRaiserR(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // static field const value: static public OVRFaceExpressions/FaceExpression Max
    static constexpr const int Max = 63;
    // Get static field: static public OVRFaceExpressions/FaceExpression Max
    static ::GlobalNamespace::OVRFaceExpressions::FaceExpression _get_Max();
    // Set static field: static public OVRFaceExpressions/FaceExpression Max
    static void _set_Max(::GlobalNamespace::OVRFaceExpressions::FaceExpression value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // OVRFaceExpressions/FaceExpression
  #pragma pack(pop)
  static check_size<sizeof(OVRFaceExpressions::FaceExpression), 0 + sizeof(int)> __GlobalNamespace_OVRFaceExpressions_FaceExpressionSizeCheck;
  static_assert(sizeof(OVRFaceExpressions::FaceExpression) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
