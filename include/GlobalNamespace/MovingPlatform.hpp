// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BasePlatform
#include "GlobalNamespace/BasePlatform.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GTMathUtil
namespace GTMathUtil {
  // Forward declaring type: CriticalSpringDamper
  class CriticalSpringDamper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rigidbody
  class Rigidbody;
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MovingPlatform
  class MovingPlatform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MovingPlatform);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovingPlatform*, "", "MovingPlatform");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14C
  #pragma pack(push, 1)
  // Autogenerated type: MovingPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  class MovingPlatform : public ::GlobalNamespace::BasePlatform {
    public:
    // Nested type: ::GlobalNamespace::MovingPlatform::PlatformType
    struct PlatformType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MovingPlatform/PlatformType
    // [TokenAttribute] Offset: FFFFFFFF
    struct PlatformType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: PlatformType
      constexpr PlatformType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MovingPlatform/PlatformType PointToPoint
      static constexpr const int PointToPoint = 0;
      // Get static field: static public MovingPlatform/PlatformType PointToPoint
      static ::GlobalNamespace::MovingPlatform::PlatformType _get_PointToPoint();
      // Set static field: static public MovingPlatform/PlatformType PointToPoint
      static void _set_PointToPoint(::GlobalNamespace::MovingPlatform::PlatformType value);
      // static field const value: static public MovingPlatform/PlatformType Arc
      static constexpr const int Arc = 1;
      // Get static field: static public MovingPlatform/PlatformType Arc
      static ::GlobalNamespace::MovingPlatform::PlatformType _get_Arc();
      // Set static field: static public MovingPlatform/PlatformType Arc
      static void _set_Arc(::GlobalNamespace::MovingPlatform::PlatformType value);
      // static field const value: static public MovingPlatform/PlatformType Rotation
      static constexpr const int Rotation = 2;
      // Get static field: static public MovingPlatform/PlatformType Rotation
      static ::GlobalNamespace::MovingPlatform::PlatformType _get_Rotation();
      // Set static field: static public MovingPlatform/PlatformType Rotation
      static void _set_Rotation(::GlobalNamespace::MovingPlatform::PlatformType value);
      // static field const value: static public MovingPlatform/PlatformType Child
      static constexpr const int Child = 3;
      // Get static field: static public MovingPlatform/PlatformType Child
      static ::GlobalNamespace::MovingPlatform::PlatformType _get_Child();
      // Set static field: static public MovingPlatform/PlatformType Child
      static void _set_Child(::GlobalNamespace::MovingPlatform::PlatformType value);
      // static field const value: static public MovingPlatform/PlatformType ContinuousRotation
      static constexpr const int ContinuousRotation = 4;
      // Get static field: static public MovingPlatform/PlatformType ContinuousRotation
      static ::GlobalNamespace::MovingPlatform::PlatformType _get_ContinuousRotation();
      // Set static field: static public MovingPlatform/PlatformType ContinuousRotation
      static void _set_ContinuousRotation(::GlobalNamespace::MovingPlatform::PlatformType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // MovingPlatform/PlatformType
    #pragma pack(pop)
    static check_size<sizeof(MovingPlatform::PlatformType), 0 + sizeof(int)> __GlobalNamespace_MovingPlatform_PlatformTypeSizeCheck;
    static_assert(sizeof(MovingPlatform::PlatformType) == 0x4);
    public:
    // public MovingPlatform/PlatformType platformType
    // Size: 0x4
    // Offset: 0x20
    ::GlobalNamespace::MovingPlatform::PlatformType platformType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MovingPlatform::PlatformType) == 0x4);
    // public System.Single cycleLength
    // Size: 0x4
    // Offset: 0x24
    float cycleLength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single smoothingHalflife
    // Size: 0x4
    // Offset: 0x28
    float smoothingHalflife;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotateStartAmt
    // Size: 0x4
    // Offset: 0x2C
    float rotateStartAmt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single rotateAmt
    // Size: 0x4
    // Offset: 0x30
    float rotateAmt;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean reverseDirOnCycle
    // Size: 0x1
    // Offset: 0x34
    bool reverseDirOnCycle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean reverseDir
    // Size: 0x1
    // Offset: 0x35
    bool reverseDir;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: reverseDir and: springCD
    char __padding6[0x2] = {};
    // private GTMathUtil.CriticalSpringDamper springCD
    // Size: 0x8
    // Offset: 0x38
    ::GTMathUtil::CriticalSpringDamper* springCD;
    // Field size check
    static_assert(sizeof(::GTMathUtil::CriticalSpringDamper*) == 0x8);
    // private UnityEngine.Rigidbody rb
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Rigidbody* rb;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public UnityEngine.Transform startXf
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::Transform* startXf;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform endXf
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Transform* endXf;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Vector3 platformInitLocalPos
    // Size: 0xC
    // Offset: 0x58
    ::UnityEngine::Vector3 platformInitLocalPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 startPos
    // Size: 0xC
    // Offset: 0x64
    ::UnityEngine::Vector3 startPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 endPos
    // Size: 0xC
    // Offset: 0x70
    ::UnityEngine::Vector3 endPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion startRot
    // Size: 0x10
    // Offset: 0x7C
    ::UnityEngine::Quaternion startRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Quaternion endRot
    // Size: 0x10
    // Offset: 0x8C
    ::UnityEngine::Quaternion endRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public System.Single startPercentage
    // Size: 0x4
    // Offset: 0x9C
    float startPercentage;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single startDelay
    // Size: 0x4
    // Offset: 0xA0
    float startDelay;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean startNextCycle
    // Size: 0x1
    // Offset: 0xA4
    bool startNextCycle;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: startNextCycle and: pivot
    char __padding18[0x3] = {};
    // public UnityEngine.Transform pivot
    // Size: 0x8
    // Offset: 0xA8
    ::UnityEngine::Transform* pivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private UnityEngine.Quaternion initLocalRotation
    // Size: 0x10
    // Offset: 0xB0
    ::UnityEngine::Quaternion initLocalRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private UnityEngine.Vector3 initOffset
    // Size: 0xC
    // Offset: 0xC0
    ::UnityEngine::Vector3 initOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single currT
    // Size: 0x4
    // Offset: 0xCC
    float currT;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single percent
    // Size: 0x4
    // Offset: 0xD0
    float percent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single smoothedPercent
    // Size: 0x4
    // Offset: 0xD4
    float smoothedPercent;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean currForward
    // Size: 0x1
    // Offset: 0xD8
    bool currForward;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currForward and: dtSinceServerUpdate
    char __padding25[0x3] = {};
    // private System.Single dtSinceServerUpdate
    // Size: 0x4
    // Offset: 0xDC
    float dtSinceServerUpdate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Double lastServerTime
    // Size: 0x8
    // Offset: 0xE0
    double lastServerTime;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public UnityEngine.Vector3 currentVelocity
    // Size: 0xC
    // Offset: 0xE8
    ::UnityEngine::Vector3 currentVelocity;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 rotationalAxis
    // Size: 0xC
    // Offset: 0xF4
    ::UnityEngine::Vector3 rotationalAxis;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Single angularVelocity
    // Size: 0x4
    // Offset: 0x100
    float angularVelocity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 rotationPivot
    // Size: 0xC
    // Offset: 0x104
    ::UnityEngine::Vector3 rotationPivot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 lastPos
    // Size: 0xC
    // Offset: 0x110
    ::UnityEngine::Vector3 lastPos;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Quaternion lastRot
    // Size: 0x10
    // Offset: 0x11C
    ::UnityEngine::Quaternion lastRot;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public UnityEngine.Vector3 deltaPosition
    // Size: 0xC
    // Offset: 0x12C
    ::UnityEngine::Vector3 deltaPosition;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean debugMovement
    // Size: 0x1
    // Offset: 0x138
    bool debugMovement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: debugMovement and: lastNT
    char __padding35[0x7] = {};
    // private System.Double lastNT
    // Size: 0x8
    // Offset: 0x140
    double lastNT;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Single lastT
    // Size: 0x4
    // Offset: 0x148
    float lastT;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public MovingPlatform/PlatformType platformType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::MovingPlatform::PlatformType& dyn_platformType();
    // Get instance field reference: public System.Single cycleLength
    [[deprecated("Use field access instead!")]] float& dyn_cycleLength();
    // Get instance field reference: public System.Single smoothingHalflife
    [[deprecated("Use field access instead!")]] float& dyn_smoothingHalflife();
    // Get instance field reference: public System.Single rotateStartAmt
    [[deprecated("Use field access instead!")]] float& dyn_rotateStartAmt();
    // Get instance field reference: public System.Single rotateAmt
    [[deprecated("Use field access instead!")]] float& dyn_rotateAmt();
    // Get instance field reference: public System.Boolean reverseDirOnCycle
    [[deprecated("Use field access instead!")]] bool& dyn_reverseDirOnCycle();
    // Get instance field reference: public System.Boolean reverseDir
    [[deprecated("Use field access instead!")]] bool& dyn_reverseDir();
    // Get instance field reference: private GTMathUtil.CriticalSpringDamper springCD
    [[deprecated("Use field access instead!")]] ::GTMathUtil::CriticalSpringDamper*& dyn_springCD();
    // Get instance field reference: private UnityEngine.Rigidbody rb
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_rb();
    // Get instance field reference: public UnityEngine.Transform startXf
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_startXf();
    // Get instance field reference: public UnityEngine.Transform endXf
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_endXf();
    // Get instance field reference: public UnityEngine.Vector3 platformInitLocalPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_platformInitLocalPos();
    // Get instance field reference: private UnityEngine.Vector3 startPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_startPos();
    // Get instance field reference: private UnityEngine.Vector3 endPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_endPos();
    // Get instance field reference: private UnityEngine.Quaternion startRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_startRot();
    // Get instance field reference: private UnityEngine.Quaternion endRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_endRot();
    // Get instance field reference: public System.Single startPercentage
    [[deprecated("Use field access instead!")]] float& dyn_startPercentage();
    // Get instance field reference: public System.Single startDelay
    [[deprecated("Use field access instead!")]] float& dyn_startDelay();
    // Get instance field reference: public System.Boolean startNextCycle
    [[deprecated("Use field access instead!")]] bool& dyn_startNextCycle();
    // Get instance field reference: public UnityEngine.Transform pivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_pivot();
    // Get instance field reference: private UnityEngine.Quaternion initLocalRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_initLocalRotation();
    // Get instance field reference: private UnityEngine.Vector3 initOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_initOffset();
    // Get instance field reference: private System.Single currT
    [[deprecated("Use field access instead!")]] float& dyn_currT();
    // Get instance field reference: private System.Single percent
    [[deprecated("Use field access instead!")]] float& dyn_percent();
    // Get instance field reference: private System.Single smoothedPercent
    [[deprecated("Use field access instead!")]] float& dyn_smoothedPercent();
    // Get instance field reference: private System.Boolean currForward
    [[deprecated("Use field access instead!")]] bool& dyn_currForward();
    // Get instance field reference: private System.Single dtSinceServerUpdate
    [[deprecated("Use field access instead!")]] float& dyn_dtSinceServerUpdate();
    // Get instance field reference: private System.Double lastServerTime
    [[deprecated("Use field access instead!")]] double& dyn_lastServerTime();
    // Get instance field reference: public UnityEngine.Vector3 currentVelocity
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_currentVelocity();
    // Get instance field reference: public UnityEngine.Vector3 rotationalAxis
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotationalAxis();
    // Get instance field reference: public System.Single angularVelocity
    [[deprecated("Use field access instead!")]] float& dyn_angularVelocity();
    // Get instance field reference: public UnityEngine.Vector3 rotationPivot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rotationPivot();
    // Get instance field reference: public UnityEngine.Vector3 lastPos
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastPos();
    // Get instance field reference: public UnityEngine.Quaternion lastRot
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_lastRot();
    // Get instance field reference: public UnityEngine.Vector3 deltaPosition
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_deltaPosition();
    // Get instance field reference: public System.Boolean debugMovement
    [[deprecated("Use field access instead!")]] bool& dyn_debugMovement();
    // Get instance field reference: private System.Double lastNT
    [[deprecated("Use field access instead!")]] double& dyn_lastNT();
    // Get instance field reference: private System.Single lastT
    [[deprecated("Use field access instead!")]] float& dyn_lastT();
    // public System.Single InitTimeOffset()
    // Offset: 0x2729780
    float InitTimeOffset();
    // private System.Int64 InitTimeOffsetMs()
    // Offset: 0x2729790
    int64_t InitTimeOffsetMs();
    // private System.Int64 NetworkTimeMs()
    // Offset: 0x27297C4
    int64_t NetworkTimeMs();
    // private System.Int64 CycleLengthMs()
    // Offset: 0x27298A0
    int64_t CycleLengthMs();
    // public System.Double PlatformTime()
    // Offset: 0x27298CC
    double PlatformTime();
    // public System.Int32 CycleCount()
    // Offset: 0x2729920
    int CycleCount();
    // public System.Single CycleCompletionPercent()
    // Offset: 0x2729960
    float CycleCompletionPercent();
    // public System.Boolean CycleForward()
    // Offset: 0x2729A04
    bool CycleForward();
    // private System.Void Awake()
    // Offset: 0x2729A54
    void Awake();
    // private System.Void OnEnable()
    // Offset: 0x2729C0C
    void OnEnable();
    // private UnityEngine.Vector3 UpdatePointToPoint()
    // Offset: 0x2729CD0
    ::UnityEngine::Vector3 UpdatePointToPoint();
    // private UnityEngine.Vector3 UpdateArc()
    // Offset: 0x2729D18
    ::UnityEngine::Vector3 UpdateArc();
    // private UnityEngine.Quaternion UpdateRotation()
    // Offset: 0x2729DF8
    ::UnityEngine::Quaternion UpdateRotation();
    // private UnityEngine.Quaternion UpdateContinuousRotation()
    // Offset: 0x2729E2C
    ::UnityEngine::Quaternion UpdateContinuousRotation();
    // private System.Void SetupContext()
    // Offset: 0x2729F4C
    void SetupContext();
    // private System.Void Update()
    // Offset: 0x272A07C
    void Update();
    // public UnityEngine.Vector3 ThisFrameMovement()
    // Offset: 0x272A2E4
    ::UnityEngine::Vector3 ThisFrameMovement();
    // public System.Void .ctor()
    // Offset: 0x272A2F4
    // Implemented from: BasePlatform
    // Base method: System.Void BasePlatform::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MovingPlatform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MovingPlatform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MovingPlatform*, creationType>()));
    }
  }; // MovingPlatform
  #pragma pack(pop)
  static check_size<sizeof(MovingPlatform), 328 + sizeof(float)> __GlobalNamespace_MovingPlatformSizeCheck;
  static_assert(sizeof(MovingPlatform) == 0x14C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MovingPlatform::PlatformType, "", "MovingPlatform/PlatformType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::InitTimeOffset
// Il2CppName: InitTimeOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::InitTimeOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "InitTimeOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::InitTimeOffsetMs
// Il2CppName: InitTimeOffsetMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::InitTimeOffsetMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "InitTimeOffsetMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::NetworkTimeMs
// Il2CppName: NetworkTimeMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::NetworkTimeMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "NetworkTimeMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::CycleLengthMs
// Il2CppName: CycleLengthMs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::CycleLengthMs)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "CycleLengthMs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::PlatformTime
// Il2CppName: PlatformTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::PlatformTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "PlatformTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::CycleCount
// Il2CppName: CycleCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::CycleCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "CycleCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::CycleCompletionPercent
// Il2CppName: CycleCompletionPercent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::CycleCompletionPercent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "CycleCompletionPercent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::CycleForward
// Il2CppName: CycleForward
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::CycleForward)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "CycleForward", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::UpdatePointToPoint
// Il2CppName: UpdatePointToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::UpdatePointToPoint)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "UpdatePointToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::UpdateArc
// Il2CppName: UpdateArc
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::UpdateArc)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "UpdateArc", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::UpdateRotation
// Il2CppName: UpdateRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::UpdateRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "UpdateRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::UpdateContinuousRotation
// Il2CppName: UpdateContinuousRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::UpdateContinuousRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "UpdateContinuousRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::SetupContext
// Il2CppName: SetupContext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::SetupContext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "SetupContext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::ThisFrameMovement
// Il2CppName: ThisFrameMovement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::MovingPlatform::*)()>(&GlobalNamespace::MovingPlatform::ThisFrameMovement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MovingPlatform*), "ThisFrameMovement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MovingPlatform::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
