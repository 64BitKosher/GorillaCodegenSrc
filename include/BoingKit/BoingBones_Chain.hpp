// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BoingKit.BoingBones
#include "BoingKit/BoingBones.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: SharedBoingParams
  class SharedBoingParams;
  // Skipping declaration: CurveType because it is already included!
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingBones::Chain);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingBones::Chain*, "BoingKit", "BoingBones/Chain");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0xD8
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingBones/Chain
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingBones::Chain : public ::Il2CppObject {
    public:
    // Nested type: ::BoingKit::BoingBones::Chain::CurveType
    struct CurveType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: BoingKit.BoingBones/Chain/CurveType
    // [TokenAttribute] Offset: FFFFFFFF
    struct CurveType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: CurveType
      constexpr CurveType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType ConstantOne
      static constexpr const int ConstantOne = 0;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType ConstantOne
      static ::BoingKit::BoingBones::Chain::CurveType _get_ConstantOne();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType ConstantOne
      static void _set_ConstantOne(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType ConstantHalf
      static constexpr const int ConstantHalf = 1;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType ConstantHalf
      static ::BoingKit::BoingBones::Chain::CurveType _get_ConstantHalf();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType ConstantHalf
      static void _set_ConstantHalf(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType ConstantZero
      static constexpr const int ConstantZero = 2;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType ConstantZero
      static ::BoingKit::BoingBones::Chain::CurveType _get_ConstantZero();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType ConstantZero
      static void _set_ConstantZero(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType RootOneTailHalf
      static constexpr const int RootOneTailHalf = 3;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType RootOneTailHalf
      static ::BoingKit::BoingBones::Chain::CurveType _get_RootOneTailHalf();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType RootOneTailHalf
      static void _set_RootOneTailHalf(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType RootOneTailZero
      static constexpr const int RootOneTailZero = 4;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType RootOneTailZero
      static ::BoingKit::BoingBones::Chain::CurveType _get_RootOneTailZero();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType RootOneTailZero
      static void _set_RootOneTailZero(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType RootHalfTailOne
      static constexpr const int RootHalfTailOne = 5;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType RootHalfTailOne
      static ::BoingKit::BoingBones::Chain::CurveType _get_RootHalfTailOne();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType RootHalfTailOne
      static void _set_RootHalfTailOne(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType RootZeroTailOne
      static constexpr const int RootZeroTailOne = 6;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType RootZeroTailOne
      static ::BoingKit::BoingBones::Chain::CurveType _get_RootZeroTailOne();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType RootZeroTailOne
      static void _set_RootZeroTailOne(::BoingKit::BoingBones::Chain::CurveType value);
      // static field const value: static public BoingKit.BoingBones/Chain/CurveType Custom
      static constexpr const int Custom = 7;
      // Get static field: static public BoingKit.BoingBones/Chain/CurveType Custom
      static ::BoingKit::BoingBones::Chain::CurveType _get_Custom();
      // Set static field: static public BoingKit.BoingBones/Chain/CurveType Custom
      static void _set_Custom(::BoingKit::BoingBones::Chain::CurveType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // BoingKit.BoingBones/Chain/CurveType
    #pragma pack(pop)
    static check_size<sizeof(BoingBones::Chain::CurveType), 0 + sizeof(int)> __BoingKit_BoingBones_Chain_CurveTypeSizeCheck;
    static_assert(sizeof(BoingBones::Chain::CurveType) == 0x4);
    public:
    // public UnityEngine.Transform Root
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::Transform* Root;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform[] Exclusion
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::UnityEngine::Transform*> Exclusion;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // public System.Boolean EffectorReaction
    // Size: 0x1
    // Offset: 0x20
    bool EffectorReaction;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean LooseRoot
    // Size: 0x1
    // Offset: 0x21
    bool LooseRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: LooseRoot and: ParamsOverride
    char __padding3[0x6] = {};
    // public BoingKit.SharedBoingParams ParamsOverride
    // Size: 0x8
    // Offset: 0x28
    ::BoingKit::SharedBoingParams* ParamsOverride;
    // Field size check
    static_assert(sizeof(::BoingKit::SharedBoingParams*) == 0x8);
    // public BoingKit.BoingBones/Chain/CurveType AnimationBlendCurveType
    // Size: 0x4
    // Offset: 0x30
    ::BoingKit::BoingBones::Chain::CurveType AnimationBlendCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // Padding between fields: AnimationBlendCurveType and: AnimationBlendCustomCurve
    char __padding5[0x4] = {};
    // public UnityEngine.AnimationCurve AnimationBlendCustomCurve
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::AnimationCurve* AnimationBlendCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public BoingKit.BoingBones/Chain/CurveType LengthStiffnessCurveType
    // Size: 0x4
    // Offset: 0x40
    ::BoingKit::BoingBones::Chain::CurveType LengthStiffnessCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // Padding between fields: LengthStiffnessCurveType and: LengthStiffnessCustomCurve
    char __padding7[0x4] = {};
    // public UnityEngine.AnimationCurve LengthStiffnessCustomCurve
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::AnimationCurve* LengthStiffnessCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public BoingKit.BoingBones/Chain/CurveType PoseStiffnessCurveType
    // Size: 0x4
    // Offset: 0x50
    ::BoingKit::BoingBones::Chain::CurveType PoseStiffnessCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // Padding between fields: PoseStiffnessCurveType and: PoseStiffnessCustomCurve
    char __padding9[0x4] = {};
    // public UnityEngine.AnimationCurve PoseStiffnessCustomCurve
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::AnimationCurve* PoseStiffnessCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single MaxBendAngleCap
    // Size: 0x4
    // Offset: 0x60
    float MaxBendAngleCap;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public BoingKit.BoingBones/Chain/CurveType BendAngleCapCurveType
    // Size: 0x4
    // Offset: 0x64
    ::BoingKit::BoingBones::Chain::CurveType BendAngleCapCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // public UnityEngine.AnimationCurve BendAngleCapCustomCurve
    // Size: 0x8
    // Offset: 0x68
    ::UnityEngine::AnimationCurve* BendAngleCapCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single MaxCollisionRadius
    // Size: 0x4
    // Offset: 0x70
    float MaxCollisionRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public BoingKit.BoingBones/Chain/CurveType CollisionRadiusCurveType
    // Size: 0x4
    // Offset: 0x74
    ::BoingKit::BoingBones::Chain::CurveType CollisionRadiusCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // public UnityEngine.AnimationCurve CollisionRadiusCustomCurve
    // Size: 0x8
    // Offset: 0x78
    ::UnityEngine::AnimationCurve* CollisionRadiusCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Boolean EnableBoingKitCollision
    // Size: 0x1
    // Offset: 0x80
    bool EnableBoingKitCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableUnityCollision
    // Size: 0x1
    // Offset: 0x81
    bool EnableUnityCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean EnableInterChainCollision
    // Size: 0x1
    // Offset: 0x82
    bool EnableInterChainCollision;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: EnableInterChainCollision and: Gravity
    char __padding19[0x1] = {};
    // public UnityEngine.Vector3 Gravity
    // Size: 0xC
    // Offset: 0x84
    ::UnityEngine::Vector3 Gravity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // UnityEngine.Bounds Bounds
    // Size: 0x18
    // Offset: 0x90
    ::UnityEngine::Bounds Bounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Bounds) == 0x18);
    // public BoingKit.BoingBones/Chain/CurveType SquashAndStretchCurveType
    // Size: 0x4
    // Offset: 0xA8
    ::BoingKit::BoingBones::Chain::CurveType SquashAndStretchCurveType;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingBones::Chain::CurveType) == 0x4);
    // Padding between fields: SquashAndStretchCurveType and: SquashAndStretchCustomCurve
    char __padding22[0x4] = {};
    // public UnityEngine.AnimationCurve SquashAndStretchCustomCurve
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::AnimationCurve* SquashAndStretchCustomCurve;
    // Field size check
    static_assert(sizeof(::UnityEngine::AnimationCurve*) == 0x8);
    // public System.Single MaxSquash
    // Size: 0x4
    // Offset: 0xB8
    float MaxSquash;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single MaxStretch
    // Size: 0x4
    // Offset: 0xBC
    float MaxStretch;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // UnityEngine.Transform m_scannedRoot
    // Size: 0x8
    // Offset: 0xC0
    ::UnityEngine::Transform* m_scannedRoot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // UnityEngine.Transform[] m_scannedExclusion
    // Size: 0x8
    // Offset: 0xC8
    ::ArrayW<::UnityEngine::Transform*> m_scannedExclusion;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Transform*>) == 0x8);
    // System.Int32 m_hierarchyHash
    // Size: 0x4
    // Offset: 0xD0
    int m_hierarchyHash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Single MaxLengthFromRoot
    // Size: 0x4
    // Offset: 0xD4
    float MaxLengthFromRoot;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform Root
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_Root();
    // Get instance field reference: public UnityEngine.Transform[] Exclusion
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_Exclusion();
    // Get instance field reference: public System.Boolean EffectorReaction
    [[deprecated("Use field access instead!")]] bool& dyn_EffectorReaction();
    // Get instance field reference: public System.Boolean LooseRoot
    [[deprecated("Use field access instead!")]] bool& dyn_LooseRoot();
    // Get instance field reference: public BoingKit.SharedBoingParams ParamsOverride
    [[deprecated("Use field access instead!")]] ::BoingKit::SharedBoingParams*& dyn_ParamsOverride();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType AnimationBlendCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_AnimationBlendCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve AnimationBlendCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_AnimationBlendCustomCurve();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType LengthStiffnessCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_LengthStiffnessCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve LengthStiffnessCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_LengthStiffnessCustomCurve();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType PoseStiffnessCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_PoseStiffnessCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve PoseStiffnessCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_PoseStiffnessCustomCurve();
    // Get instance field reference: public System.Single MaxBendAngleCap
    [[deprecated("Use field access instead!")]] float& dyn_MaxBendAngleCap();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType BendAngleCapCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_BendAngleCapCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve BendAngleCapCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_BendAngleCapCustomCurve();
    // Get instance field reference: public System.Single MaxCollisionRadius
    [[deprecated("Use field access instead!")]] float& dyn_MaxCollisionRadius();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType CollisionRadiusCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_CollisionRadiusCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve CollisionRadiusCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_CollisionRadiusCustomCurve();
    // Get instance field reference: public System.Boolean EnableBoingKitCollision
    [[deprecated("Use field access instead!")]] bool& dyn_EnableBoingKitCollision();
    // Get instance field reference: public System.Boolean EnableUnityCollision
    [[deprecated("Use field access instead!")]] bool& dyn_EnableUnityCollision();
    // Get instance field reference: public System.Boolean EnableInterChainCollision
    [[deprecated("Use field access instead!")]] bool& dyn_EnableInterChainCollision();
    // Get instance field reference: public UnityEngine.Vector3 Gravity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Gravity();
    // Get instance field reference: UnityEngine.Bounds Bounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Bounds& dyn_Bounds();
    // Get instance field reference: public BoingKit.BoingBones/Chain/CurveType SquashAndStretchCurveType
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingBones::Chain::CurveType& dyn_SquashAndStretchCurveType();
    // Get instance field reference: public UnityEngine.AnimationCurve SquashAndStretchCustomCurve
    [[deprecated("Use field access instead!")]] ::UnityEngine::AnimationCurve*& dyn_SquashAndStretchCustomCurve();
    // Get instance field reference: public System.Single MaxSquash
    [[deprecated("Use field access instead!")]] float& dyn_MaxSquash();
    // Get instance field reference: public System.Single MaxStretch
    [[deprecated("Use field access instead!")]] float& dyn_MaxStretch();
    // Get instance field reference: UnityEngine.Transform m_scannedRoot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_m_scannedRoot();
    // Get instance field reference: UnityEngine.Transform[] m_scannedExclusion
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Transform*>& dyn_m_scannedExclusion();
    // Get instance field reference: System.Int32 m_hierarchyHash
    [[deprecated("Use field access instead!")]] int& dyn_m_hierarchyHash();
    // Get instance field reference: System.Single MaxLengthFromRoot
    [[deprecated("Use field access instead!")]] float& dyn_MaxLengthFromRoot();
    // static public System.Single EvaluateCurve(BoingKit.BoingBones/Chain/CurveType type, System.Single t, UnityEngine.AnimationCurve curve)
    // Offset: 0x28EB9D0
    static float EvaluateCurve(::BoingKit::BoingBones::Chain::CurveType type, float t, ::UnityEngine::AnimationCurve* curve);
    // public System.Void .ctor()
    // Offset: 0x28ECDD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingBones::Chain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingBones::Chain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingBones::Chain*, creationType>()));
    }
  }; // BoingKit.BoingBones/Chain
  #pragma pack(pop)
  static check_size<sizeof(BoingBones::Chain), 212 + sizeof(float)> __BoingKit_BoingBones_ChainSizeCheck;
  static_assert(sizeof(BoingBones::Chain) == 0xD8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingBones::Chain::CurveType, "BoingKit", "BoingBones/Chain/CurveType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingBones::Chain::EvaluateCurve
// Il2CppName: EvaluateCurve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::BoingKit::BoingBones::Chain::CurveType, float, ::UnityEngine::AnimationCurve*)>(&BoingKit::BoingBones::Chain::EvaluateCurve)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("BoingKit", "BoingBones/Chain/CurveType")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* curve = &::il2cpp_utils::GetClassFromName("UnityEngine", "AnimationCurve")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingBones::Chain*), "EvaluateCurve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, t, curve});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingBones::Chain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
