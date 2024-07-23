// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib/IntPoint
#include "Cinemachine/ClipperLib_IntPoint.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Including type: System.Int64
#include "System/Int64.hpp"
// Including type: System.Single
#include "System/Single.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Skipping declaration: BakingState because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: ConfinerOven
  class ConfinerOven;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::ConfinerOven);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ConfinerOven*, "Cinemachine", "ConfinerOven");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.ConfinerOven
  // [TokenAttribute] Offset: FFFFFFFF
  class ConfinerOven : public ::Il2CppObject {
    public:
    // Nested type: ::Cinemachine::ConfinerOven::BakedSolution
    class BakedSolution;
    // Nested type: ::Cinemachine::ConfinerOven::AspectStretcher
    struct AspectStretcher;
    // Nested type: ::Cinemachine::ConfinerOven::PolygonSolution
    struct PolygonSolution;
    // Nested type: ::Cinemachine::ConfinerOven::BakingState
    struct BakingState;
    // Nested type: ::Cinemachine::ConfinerOven::BakingStateCache
    struct BakingStateCache;
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.ConfinerOven/AspectStretcher
    // [TokenAttribute] Offset: FFFFFFFF
    // [IsReadOnlyAttribute] Offset: FFFFFFFF
    struct AspectStretcher/*, public ::System::ValueType*/ {
      public:
      public:
      // private readonly System.Single <Aspect>k__BackingField
      // Size: 0x4
      // Offset: 0x0
      float Aspect;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private readonly System.Single m_InverseAspect
      // Size: 0x4
      // Offset: 0x4
      float m_InverseAspect;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // private readonly System.Single m_CenterX
      // Size: 0x4
      // Offset: 0x8
      float m_CenterX;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: AspectStretcher
      constexpr AspectStretcher(float Aspect_ = {}, float m_InverseAspect_ = {}, float m_CenterX_ = {}) noexcept : Aspect{Aspect_}, m_InverseAspect{m_InverseAspect_}, m_CenterX{m_CenterX_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private readonly System.Single <Aspect>k__BackingField
      [[deprecated("Use field access instead!")]] float& dyn_$Aspect$k__BackingField();
      // Get instance field reference: private readonly System.Single m_InverseAspect
      [[deprecated("Use field access instead!")]] float& dyn_m_InverseAspect();
      // Get instance field reference: private readonly System.Single m_CenterX
      [[deprecated("Use field access instead!")]] float& dyn_m_CenterX();
      // public System.Single get_Aspect()
      // Offset: 0x2AB3518
      float get_Aspect();
      // public System.Void .ctor(System.Single aspect, System.Single centerX)
      // Offset: 0x2AB158C
      AspectStretcher(float aspect, float centerX);
      // public UnityEngine.Vector2 Stretch(UnityEngine.Vector2 p)
      // Offset: 0x2AB21AC
      ::UnityEngine::Vector2 Stretch(::UnityEngine::Vector2 p);
      // public UnityEngine.Vector2 Unstretch(UnityEngine.Vector2 p)
      // Offset: 0x2AB334C
      ::UnityEngine::Vector2 Unstretch(::UnityEngine::Vector2 p);
    }; // Cinemachine.ConfinerOven/AspectStretcher
    #pragma pack(pop)
    static check_size<sizeof(ConfinerOven::AspectStretcher), 8 + sizeof(float)> __Cinemachine_ConfinerOven_AspectStretcherSizeCheck;
    static_assert(sizeof(ConfinerOven::AspectStretcher) == 0xC);
    // Size: 0xC
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.ConfinerOven/PolygonSolution
    // [TokenAttribute] Offset: FFFFFFFF
    struct PolygonSolution/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> polygons
      // Size: 0x8
      // Offset: 0x0
      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* polygons;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*) == 0x8);
      // public System.Single frustumHeight
      // Size: 0x4
      // Offset: 0x8
      float frustumHeight;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: PolygonSolution
      constexpr PolygonSolution(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* polygons_ = {}, float frustumHeight_ = {}) noexcept : polygons{polygons_}, frustumHeight{frustumHeight_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> polygons
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*& dyn_polygons();
      // Get instance field reference: public System.Single frustumHeight
      [[deprecated("Use field access instead!")]] float& dyn_frustumHeight();
      // public System.Boolean StateChanged(in System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> paths)
      // Offset: 0x2AB26B0
      bool StateChanged(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*> paths);
      // public System.Boolean get_IsNull()
      // Offset: 0x2AB27B0
      bool get_IsNull();
    }; // Cinemachine.ConfinerOven/PolygonSolution
    #pragma pack(pop)
    static check_size<sizeof(ConfinerOven::PolygonSolution), 8 + sizeof(float)> __Cinemachine_ConfinerOven_PolygonSolutionSizeCheck;
    static_assert(sizeof(ConfinerOven::PolygonSolution) == 0xC);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Cinemachine.ConfinerOven/BakingState
    // [TokenAttribute] Offset: FFFFFFFF
    struct BakingState/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: BakingState
      constexpr BakingState(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Cinemachine.ConfinerOven/BakingState BAKING
      static constexpr const int BAKING = 0;
      // Get static field: static public Cinemachine.ConfinerOven/BakingState BAKING
      static ::Cinemachine::ConfinerOven::BakingState _get_BAKING();
      // Set static field: static public Cinemachine.ConfinerOven/BakingState BAKING
      static void _set_BAKING(::Cinemachine::ConfinerOven::BakingState value);
      // static field const value: static public Cinemachine.ConfinerOven/BakingState BAKED
      static constexpr const int BAKED = 1;
      // Get static field: static public Cinemachine.ConfinerOven/BakingState BAKED
      static ::Cinemachine::ConfinerOven::BakingState _get_BAKED();
      // Set static field: static public Cinemachine.ConfinerOven/BakingState BAKED
      static void _set_BAKED(::Cinemachine::ConfinerOven::BakingState value);
      // static field const value: static public Cinemachine.ConfinerOven/BakingState TIMEOUT
      static constexpr const int TIMEOUT = 2;
      // Get static field: static public Cinemachine.ConfinerOven/BakingState TIMEOUT
      static ::Cinemachine::ConfinerOven::BakingState _get_TIMEOUT();
      // Set static field: static public Cinemachine.ConfinerOven/BakingState TIMEOUT
      static void _set_TIMEOUT(::Cinemachine::ConfinerOven::BakingState value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Cinemachine.ConfinerOven/BakingState
    #pragma pack(pop)
    static check_size<sizeof(ConfinerOven::BakingState), 0 + sizeof(int)> __Cinemachine_ConfinerOven_BakingStateSizeCheck;
    static_assert(sizeof(ConfinerOven::BakingState) == 0x4);
    // Size: 0x50
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Cinemachine.ConfinerOven/BakingStateCache
    // [TokenAttribute] Offset: FFFFFFFF
    struct BakingStateCache/*, public ::System::ValueType*/ {
      public:
      public:
      // public Cinemachine.ClipperLib/ClipperOffset offsetter
      // Size: 0x8
      // Offset: 0x0
      ::Cinemachine::ClipperLib::ClipperOffset* offsetter;
      // Field size check
      static_assert(sizeof(::Cinemachine::ClipperLib::ClipperOffset*) == 0x8);
      // public System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution> solutions
      // Size: 0x8
      // Offset: 0x8
      ::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>* solutions;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>*) == 0x8);
      // public Cinemachine.ConfinerOven/PolygonSolution rightCandidate
      // Size: 0xC
      // Offset: 0x10
      ::Cinemachine::ConfinerOven::PolygonSolution rightCandidate;
      // Field size check
      static_assert(sizeof(::Cinemachine::ConfinerOven::PolygonSolution) == 0xC);
      // Padding between fields: rightCandidate and: leftCandidate
      char __padding2[0x4] = {};
      // public Cinemachine.ConfinerOven/PolygonSolution leftCandidate
      // Size: 0xC
      // Offset: 0x20
      ::Cinemachine::ConfinerOven::PolygonSolution leftCandidate;
      // Field size check
      static_assert(sizeof(::Cinemachine::ConfinerOven::PolygonSolution) == 0xC);
      // Padding between fields: leftCandidate and: maxCandidate
      char __padding3[0x4] = {};
      // public System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> maxCandidate
      // Size: 0x8
      // Offset: 0x30
      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* maxCandidate;
      // Field size check
      static_assert(sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*) == 0x8);
      // public System.Single stepSize
      // Size: 0x4
      // Offset: 0x38
      float stepSize;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single maxFrustumHeight
      // Size: 0x4
      // Offset: 0x3C
      float maxFrustumHeight;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single userSetMaxFrustumHeight
      // Size: 0x4
      // Offset: 0x40
      float userSetMaxFrustumHeight;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single theoriticalMaxFrustumHeight
      // Size: 0x4
      // Offset: 0x44
      float theoriticalMaxFrustumHeight;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single currentFrustumHeight
      // Size: 0x4
      // Offset: 0x48
      float currentFrustumHeight;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single bakeTime
      // Size: 0x4
      // Offset: 0x4C
      float bakeTime;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      public:
      // Creating value type constructor for type: BakingStateCache
      constexpr BakingStateCache(::Cinemachine::ClipperLib::ClipperOffset* offsetter_ = {}, ::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>* solutions_ = {}, ::Cinemachine::ConfinerOven::PolygonSolution rightCandidate_ = {}, ::Cinemachine::ConfinerOven::PolygonSolution leftCandidate_ = {}, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* maxCandidate_ = {}, float stepSize_ = {}, float maxFrustumHeight_ = {}, float userSetMaxFrustumHeight_ = {}, float theoriticalMaxFrustumHeight_ = {}, float currentFrustumHeight_ = {}, float bakeTime_ = {}) noexcept : offsetter{offsetter_}, solutions{solutions_}, rightCandidate{rightCandidate_}, leftCandidate{leftCandidate_}, maxCandidate{maxCandidate_}, stepSize{stepSize_}, maxFrustumHeight{maxFrustumHeight_}, userSetMaxFrustumHeight{userSetMaxFrustumHeight_}, theoriticalMaxFrustumHeight{theoriticalMaxFrustumHeight_}, currentFrustumHeight{currentFrustumHeight_}, bakeTime{bakeTime_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public Cinemachine.ClipperLib/ClipperOffset offsetter
      [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::ClipperOffset*& dyn_offsetter();
      // Get instance field reference: public System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution> solutions
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>*& dyn_solutions();
      // Get instance field reference: public Cinemachine.ConfinerOven/PolygonSolution rightCandidate
      [[deprecated("Use field access instead!")]] ::Cinemachine::ConfinerOven::PolygonSolution& dyn_rightCandidate();
      // Get instance field reference: public Cinemachine.ConfinerOven/PolygonSolution leftCandidate
      [[deprecated("Use field access instead!")]] ::Cinemachine::ConfinerOven::PolygonSolution& dyn_leftCandidate();
      // Get instance field reference: public System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> maxCandidate
      [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*& dyn_maxCandidate();
      // Get instance field reference: public System.Single stepSize
      [[deprecated("Use field access instead!")]] float& dyn_stepSize();
      // Get instance field reference: public System.Single maxFrustumHeight
      [[deprecated("Use field access instead!")]] float& dyn_maxFrustumHeight();
      // Get instance field reference: public System.Single userSetMaxFrustumHeight
      [[deprecated("Use field access instead!")]] float& dyn_userSetMaxFrustumHeight();
      // Get instance field reference: public System.Single theoriticalMaxFrustumHeight
      [[deprecated("Use field access instead!")]] float& dyn_theoriticalMaxFrustumHeight();
      // Get instance field reference: public System.Single currentFrustumHeight
      [[deprecated("Use field access instead!")]] float& dyn_currentFrustumHeight();
      // Get instance field reference: public System.Single bakeTime
      [[deprecated("Use field access instead!")]] float& dyn_bakeTime();
    }; // Cinemachine.ConfinerOven/BakingStateCache
    #pragma pack(pop)
    static check_size<sizeof(ConfinerOven::BakingStateCache), 76 + sizeof(float)> __Cinemachine_ConfinerOven_BakingStateCacheSizeCheck;
    static_assert(sizeof(ConfinerOven::BakingStateCache) == 0x50);
    public:
    // private System.Single m_MinFrustumHeightWithBones
    // Size: 0x4
    // Offset: 0x10
    float m_MinFrustumHeightWithBones;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_MinFrustumHeightWithBones and: m_OriginalPolygon
    char __padding0[0x4] = {};
    // private System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> m_OriginalPolygon
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* m_OriginalPolygon;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*) == 0x8);
    // private Cinemachine.ClipperLib/IntPoint m_MidPoint
    // Size: 0x10
    // Offset: 0x20
    ::Cinemachine::ClipperLib::IntPoint m_MidPoint;
    // Field size check
    static_assert(sizeof(::Cinemachine::ClipperLib::IntPoint) == 0x10);
    // private System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> m_Skeleton
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>* m_Skeleton;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*) == 0x8);
    // private UnityEngine.Rect m_PolygonRect
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Rect m_PolygonRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rect) == 0x10);
    // private Cinemachine.ConfinerOven/AspectStretcher m_AspectStretcher
    // Size: 0xC
    // Offset: 0x48
    ::Cinemachine::ConfinerOven::AspectStretcher m_AspectStretcher;
    // Field size check
    static_assert(sizeof(::Cinemachine::ConfinerOven::AspectStretcher) == 0xC);
    // private System.Single m_MaxComputationTimeForFullSkeletonBakeInSeconds
    // Size: 0x4
    // Offset: 0x54
    float m_MaxComputationTimeForFullSkeletonBakeInSeconds;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Cinemachine.ConfinerOven/BakingState <State>k__BackingField
    // Size: 0x4
    // Offset: 0x58
    ::Cinemachine::ConfinerOven::BakingState State;
    // Field size check
    static_assert(sizeof(::Cinemachine::ConfinerOven::BakingState) == 0x4);
    // public System.Single bakeProgress
    // Size: 0x4
    // Offset: 0x5C
    float bakeProgress;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private Cinemachine.ConfinerOven/BakingStateCache m_Cache
    // Size: 0x50
    // Offset: 0x60
    ::Cinemachine::ConfinerOven::BakingStateCache m_Cache;
    // Field size check
    static_assert(sizeof(::Cinemachine::ConfinerOven::BakingStateCache) == 0x50);
    public:
    // static field const value: static private System.Int64 k_FloatToIntScaler
    static constexpr const int64_t k_FloatToIntScaler = 100000;
    // Get static field: static private System.Int64 k_FloatToIntScaler
    static int64_t _get_k_FloatToIntScaler();
    // Set static field: static private System.Int64 k_FloatToIntScaler
    static void _set_k_FloatToIntScaler(int64_t value);
    // static field const value: static private System.Single k_IntToFloatScaler
    static constexpr const float k_IntToFloatScaler = 1e-05;
    // Get static field: static private System.Single k_IntToFloatScaler
    static float _get_k_IntToFloatScaler();
    // Set static field: static private System.Single k_IntToFloatScaler
    static void _set_k_IntToFloatScaler(float value);
    // static field const value: static private System.Single k_MinStepSize
    static constexpr const float k_MinStepSize = 0.005;
    // Get static field: static private System.Single k_MinStepSize
    static float _get_k_MinStepSize();
    // Set static field: static private System.Single k_MinStepSize
    static void _set_k_MinStepSize(float value);
    // Get instance field reference: private System.Single m_MinFrustumHeightWithBones
    [[deprecated("Use field access instead!")]] float& dyn_m_MinFrustumHeightWithBones();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> m_OriginalPolygon
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*& dyn_m_OriginalPolygon();
    // Get instance field reference: private Cinemachine.ClipperLib/IntPoint m_MidPoint
    [[deprecated("Use field access instead!")]] ::Cinemachine::ClipperLib::IntPoint& dyn_m_MidPoint();
    // Get instance field reference: private System.Collections.Generic.List`1<System.Collections.Generic.List`1<Cinemachine.ClipperLib/IntPoint>> m_Skeleton
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::Cinemachine::ClipperLib::IntPoint>*>*& dyn_m_Skeleton();
    // Get instance field reference: private UnityEngine.Rect m_PolygonRect
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rect& dyn_m_PolygonRect();
    // Get instance field reference: private Cinemachine.ConfinerOven/AspectStretcher m_AspectStretcher
    [[deprecated("Use field access instead!")]] ::Cinemachine::ConfinerOven::AspectStretcher& dyn_m_AspectStretcher();
    // Get instance field reference: private System.Single m_MaxComputationTimeForFullSkeletonBakeInSeconds
    [[deprecated("Use field access instead!")]] float& dyn_m_MaxComputationTimeForFullSkeletonBakeInSeconds();
    // Get instance field reference: private Cinemachine.ConfinerOven/BakingState <State>k__BackingField
    [[deprecated("Use field access instead!")]] ::Cinemachine::ConfinerOven::BakingState& dyn_$State$k__BackingField();
    // Get instance field reference: public System.Single bakeProgress
    [[deprecated("Use field access instead!")]] float& dyn_bakeProgress();
    // Get instance field reference: private Cinemachine.ConfinerOven/BakingStateCache m_Cache
    [[deprecated("Use field access instead!")]] ::Cinemachine::ConfinerOven::BakingStateCache& dyn_m_Cache();
    // public System.Void .ctor(in System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> inputPath, in System.Single aspectRatio, System.Single maxFrustumHeight)
    // Offset: 0x2AB14C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConfinerOven* New_ctor(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*> inputPath, ByRef<float> aspectRatio, float maxFrustumHeight) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::ConfinerOven::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConfinerOven*, creationType>(byref(inputPath), byref(aspectRatio), maxFrustumHeight)));
    }
    // public Cinemachine.ConfinerOven/BakedSolution GetBakedSolution(System.Single frustumHeight)
    // Offset: 0x2AB1BA0
    ::Cinemachine::ConfinerOven::BakedSolution* GetBakedSolution(float frustumHeight);
    // public Cinemachine.ConfinerOven/BakingState get_State()
    // Offset: 0x2AB2048
    ::Cinemachine::ConfinerOven::BakingState get_State();
    // private System.Void set_State(Cinemachine.ConfinerOven/BakingState value)
    // Offset: 0x2AB2050
    void set_State(::Cinemachine::ConfinerOven::BakingState value);
    // private System.Void Initialize(in System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> inputPath, in System.Single aspectRatio, System.Single maxFrustumHeight)
    // Offset: 0x2AB15A0
    void Initialize(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*> inputPath, ByRef<float> aspectRatio, float maxFrustumHeight);
    // public System.Void BakeConfiner(System.Single maxComputationTimePerFrameInSeconds)
    // Offset: 0x2AB2210
    void BakeConfiner(float maxComputationTimePerFrameInSeconds);
    // static UnityEngine.Rect <Initialize>g__GetPolygonBoundingBox|23_0(in System.Collections.Generic.List`1<System.Collections.Generic.List`1<UnityEngine.Vector2>> polygons)
    // Offset: 0x2AB2058
    static ::UnityEngine::Rect $Initialize$g__GetPolygonBoundingBox_23_0(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*> polygons);
    // static Cinemachine.ClipperLib/IntPoint <Initialize>g__MidPointOfIntRect|23_1(Cinemachine.ClipperLib/IntRect bounds)
    // Offset: 0x2AB21C0
    static ::Cinemachine::ClipperLib::IntPoint $Initialize$g__MidPointOfIntRect_23_1(::Cinemachine::ClipperLib::IntRect bounds);
    // private System.Void <BakeConfiner>g__ComputeSkeleton|24_0(in System.Collections.Generic.List`1<Cinemachine.ConfinerOven/PolygonSolution> solutions)
    // Offset: 0x2AB27C0
    void $BakeConfiner$g__ComputeSkeleton_24_0(ByRef<::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>*> solutions);
  }; // Cinemachine.ConfinerOven
  #pragma pack(pop)
  static check_size<sizeof(ConfinerOven), 96 + sizeof(::Cinemachine::ConfinerOven::BakingStateCache)> __Cinemachine_ConfinerOvenSizeCheck;
  static_assert(sizeof(ConfinerOven) == 0xB0);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ConfinerOven::BakingStateCache, "Cinemachine", "ConfinerOven/BakingStateCache");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ConfinerOven::BakingState, "Cinemachine", "ConfinerOven/BakingState");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ConfinerOven::PolygonSolution, "Cinemachine", "ConfinerOven/PolygonSolution");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ConfinerOven::AspectStretcher, "Cinemachine", "ConfinerOven/AspectStretcher");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::GetBakedSolution
// Il2CppName: GetBakedSolution
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ConfinerOven::BakedSolution* (Cinemachine::ConfinerOven::*)(float)>(&Cinemachine::ConfinerOven::GetBakedSolution)> {
  static const MethodInfo* get() {
    static auto* frustumHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "GetBakedSolution", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{frustumHeight});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::get_State
// Il2CppName: get_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ConfinerOven::BakingState (Cinemachine::ConfinerOven::*)()>(&Cinemachine::ConfinerOven::get_State)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "get_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::set_State
// Il2CppName: set_State
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ConfinerOven::*)(::Cinemachine::ConfinerOven::BakingState)>(&Cinemachine::ConfinerOven::set_State)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Cinemachine", "ConfinerOven/BakingState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "set_State", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ConfinerOven::*)(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>, ByRef<float>, float)>(&Cinemachine::ConfinerOven::Initialize)> {
  static const MethodInfo* get() {
    static auto* inputPath = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})})->this_arg;
    static auto* aspectRatio = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    static auto* maxFrustumHeight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inputPath, aspectRatio, maxFrustumHeight});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::BakeConfiner
// Il2CppName: BakeConfiner
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ConfinerOven::*)(float)>(&Cinemachine::ConfinerOven::BakeConfiner)> {
  static const MethodInfo* get() {
    static auto* maxComputationTimePerFrameInSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "BakeConfiner", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{maxComputationTimePerFrameInSeconds});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::$Initialize$g__GetPolygonBoundingBox_23_0
// Il2CppName: <Initialize>g__GetPolygonBoundingBox|23_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (*)(ByRef<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>*>)>(&Cinemachine::ConfinerOven::$Initialize$g__GetPolygonBoundingBox_23_0)> {
  static const MethodInfo* get() {
    static auto* polygons = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")})})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "<Initialize>g__GetPolygonBoundingBox|23_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{polygons});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::$Initialize$g__MidPointOfIntRect_23_1
// Il2CppName: <Initialize>g__MidPointOfIntRect|23_1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Cinemachine::ClipperLib::IntPoint (*)(::Cinemachine::ClipperLib::IntRect)>(&Cinemachine::ConfinerOven::$Initialize$g__MidPointOfIntRect_23_1)> {
  static const MethodInfo* get() {
    static auto* bounds = &::il2cpp_utils::GetClassFromName("Cinemachine", "ClipperLib/IntRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "<Initialize>g__MidPointOfIntRect|23_1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bounds});
  }
};
// Writing MetadataGetter for method: Cinemachine::ConfinerOven::$BakeConfiner$g__ComputeSkeleton_24_0
// Il2CppName: <BakeConfiner>g__ComputeSkeleton|24_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::ConfinerOven::*)(ByRef<::System::Collections::Generic::List_1<::Cinemachine::ConfinerOven::PolygonSolution>*>)>(&Cinemachine::ConfinerOven::$BakeConfiner$g__ComputeSkeleton_24_0)> {
  static const MethodInfo* get() {
    static auto* solutions = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Cinemachine", "ConfinerOven/PolygonSolution")})->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ConfinerOven*), "<BakeConfiner>g__ComputeSkeleton|24_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{solutions});
  }
};
