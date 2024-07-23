// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: Pose
  class Pose;
  // Skipping declaration: SegmentType because it is already included!
}
// Completed forward declares
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Forward declaring type: TrackSegment
  class TrackSegment;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OculusSampleFramework::TrackSegment);
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::TrackSegment*, "OculusSampleFramework", "TrackSegment");
// Type namespace: OculusSampleFramework
namespace OculusSampleFramework {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: OculusSampleFramework.TrackSegment
  // [TokenAttribute] Offset: FFFFFFFF
  class TrackSegment : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::OculusSampleFramework::TrackSegment::SegmentType
    struct SegmentType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: OculusSampleFramework.TrackSegment/SegmentType
    // [TokenAttribute] Offset: FFFFFFFF
    struct SegmentType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: SegmentType
      constexpr SegmentType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public OculusSampleFramework.TrackSegment/SegmentType Straight
      static constexpr const int Straight = 0;
      // Get static field: static public OculusSampleFramework.TrackSegment/SegmentType Straight
      static ::OculusSampleFramework::TrackSegment::SegmentType _get_Straight();
      // Set static field: static public OculusSampleFramework.TrackSegment/SegmentType Straight
      static void _set_Straight(::OculusSampleFramework::TrackSegment::SegmentType value);
      // static field const value: static public OculusSampleFramework.TrackSegment/SegmentType LeftTurn
      static constexpr const int LeftTurn = 1;
      // Get static field: static public OculusSampleFramework.TrackSegment/SegmentType LeftTurn
      static ::OculusSampleFramework::TrackSegment::SegmentType _get_LeftTurn();
      // Set static field: static public OculusSampleFramework.TrackSegment/SegmentType LeftTurn
      static void _set_LeftTurn(::OculusSampleFramework::TrackSegment::SegmentType value);
      // static field const value: static public OculusSampleFramework.TrackSegment/SegmentType RightTurn
      static constexpr const int RightTurn = 2;
      // Get static field: static public OculusSampleFramework.TrackSegment/SegmentType RightTurn
      static ::OculusSampleFramework::TrackSegment::SegmentType _get_RightTurn();
      // Set static field: static public OculusSampleFramework.TrackSegment/SegmentType RightTurn
      static void _set_RightTurn(::OculusSampleFramework::TrackSegment::SegmentType value);
      // static field const value: static public OculusSampleFramework.TrackSegment/SegmentType Switch
      static constexpr const int Switch = 3;
      // Get static field: static public OculusSampleFramework.TrackSegment/SegmentType Switch
      static ::OculusSampleFramework::TrackSegment::SegmentType _get_Switch();
      // Set static field: static public OculusSampleFramework.TrackSegment/SegmentType Switch
      static void _set_Switch(::OculusSampleFramework::TrackSegment::SegmentType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // OculusSampleFramework.TrackSegment/SegmentType
    #pragma pack(pop)
    static check_size<sizeof(TrackSegment::SegmentType), 0 + sizeof(int)> __OculusSampleFramework_TrackSegment_SegmentTypeSizeCheck;
    static_assert(sizeof(TrackSegment::SegmentType) == 0x4);
    public:
    // private OculusSampleFramework.TrackSegment/SegmentType _segmentType
    // Size: 0x4
    // Offset: 0x20
    ::OculusSampleFramework::TrackSegment::SegmentType segmentType;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::TrackSegment::SegmentType) == 0x4);
    // Padding between fields: segmentType and: straight
    char __padding0[0x4] = {};
    // private UnityEngine.MeshFilter _straight
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::MeshFilter* straight;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _leftTurn
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::MeshFilter* leftTurn;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.MeshFilter _rightTurn
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::MeshFilter* rightTurn;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private System.Single _gridSize
    // Size: 0x4
    // Offset: 0x40
    float gridSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _subDivCount
    // Size: 0x4
    // Offset: 0x44
    int subDivCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.GameObject _mesh
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::GameObject* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // private System.Single <StartDistance>k__BackingField
    // Size: 0x4
    // Offset: 0x50
    float StartDistance;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: StartDistance and: p1
    char __padding7[0x4] = {};
    // private OculusSampleFramework.Pose _p1
    // Size: 0x8
    // Offset: 0x58
    ::OculusSampleFramework::Pose* p1;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::Pose*) == 0x8);
    // private OculusSampleFramework.Pose _p2
    // Size: 0x8
    // Offset: 0x60
    ::OculusSampleFramework::Pose* p2;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::Pose*) == 0x8);
    // private OculusSampleFramework.Pose _endPose
    // Size: 0x8
    // Offset: 0x68
    ::OculusSampleFramework::Pose* endPose;
    // Field size check
    static_assert(sizeof(::OculusSampleFramework::Pose*) == 0x8);
    public:
    // static field const value: static private System.Single _originalGridSize
    static constexpr const float _originalGridSize = 0.8;
    // Get static field: static private System.Single _originalGridSize
    static float _get__originalGridSize();
    // Set static field: static private System.Single _originalGridSize
    static void _set__originalGridSize(float value);
    // static field const value: static private System.Single _trackWidth
    static constexpr const float _trackWidth = 0.15;
    // Get static field: static private System.Single _trackWidth
    static float _get__trackWidth();
    // Set static field: static private System.Single _trackWidth
    static void _set__trackWidth(float value);
    // Get instance field reference: private OculusSampleFramework.TrackSegment/SegmentType _segmentType
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::TrackSegment::SegmentType& dyn__segmentType();
    // Get instance field reference: private UnityEngine.MeshFilter _straight
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__straight();
    // Get instance field reference: private UnityEngine.MeshFilter _leftTurn
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__leftTurn();
    // Get instance field reference: private UnityEngine.MeshFilter _rightTurn
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn__rightTurn();
    // Get instance field reference: private System.Single _gridSize
    [[deprecated("Use field access instead!")]] float& dyn__gridSize();
    // Get instance field reference: private System.Int32 _subDivCount
    [[deprecated("Use field access instead!")]] int& dyn__subDivCount();
    // Get instance field reference: private UnityEngine.GameObject _mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn__mesh();
    // Get instance field reference: private System.Single <StartDistance>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$StartDistance$k__BackingField();
    // Get instance field reference: private OculusSampleFramework.Pose _p1
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::Pose*& dyn__p1();
    // Get instance field reference: private OculusSampleFramework.Pose _p2
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::Pose*& dyn__p2();
    // Get instance field reference: private OculusSampleFramework.Pose _endPose
    [[deprecated("Use field access instead!")]] ::OculusSampleFramework::Pose*& dyn__endPose();
    // public System.Single get_StartDistance()
    // Offset: 0x282B814
    float get_StartDistance();
    // public System.Void set_StartDistance(System.Single value)
    // Offset: 0x282B81C
    void set_StartDistance(float value);
    // public System.Single get_GridSize()
    // Offset: 0x282B824
    float get_GridSize();
    // private System.Void set_GridSize(System.Single value)
    // Offset: 0x282B82C
    void set_GridSize(float value);
    // public System.Int32 get_SubDivCount()
    // Offset: 0x282B834
    int get_SubDivCount();
    // public System.Void set_SubDivCount(System.Int32 value)
    // Offset: 0x282B83C
    void set_SubDivCount(int value);
    // public OculusSampleFramework.TrackSegment/SegmentType get_Type()
    // Offset: 0x282B844
    ::OculusSampleFramework::TrackSegment::SegmentType get_Type();
    // public OculusSampleFramework.Pose get_EndPose()
    // Offset: 0x282B84C
    ::OculusSampleFramework::Pose* get_EndPose();
    // public System.Single get_Radius()
    // Offset: 0x282BC10
    float get_Radius();
    // public System.Single setGridSize(System.Single size)
    // Offset: 0x282BC20
    float setGridSize(float size);
    // public System.Single get_SegmentLength()
    // Offset: 0x282B8A4
    float get_SegmentLength();
    // private System.Void Awake()
    // Offset: 0x282BC38
    void Awake();
    // public System.Void UpdatePose(System.Single distanceIntoSegment, OculusSampleFramework.Pose pose)
    // Offset: 0x282B8E0
    void UpdatePose(float distanceIntoSegment, ::OculusSampleFramework::Pose* pose);
    // private System.Void Update()
    // Offset: 0x282BC3C
    void Update();
    // private System.Void OnDisable()
    // Offset: 0x282BC40
    void OnDisable();
    // private System.Void DrawDebugLines()
    // Offset: 0x282BC9C
    void DrawDebugLines();
    // public System.Void RegenerateTrackAndMesh()
    // Offset: 0x282C5C0
    void RegenerateTrackAndMesh();
    // public System.Void .ctor()
    // Offset: 0x282C844
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TrackSegment* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::OculusSampleFramework::TrackSegment::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TrackSegment*, creationType>()));
    }
  }; // OculusSampleFramework.TrackSegment
  #pragma pack(pop)
  static check_size<sizeof(TrackSegment), 104 + sizeof(::OculusSampleFramework::Pose*)> __OculusSampleFramework_TrackSegmentSizeCheck;
  static_assert(sizeof(TrackSegment) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::OculusSampleFramework::TrackSegment::SegmentType, "OculusSampleFramework", "TrackSegment/SegmentType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_StartDistance
// Il2CppName: get_StartDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_StartDistance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_StartDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::set_StartDistance
// Il2CppName: set_StartDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)(float)>(&OculusSampleFramework::TrackSegment::set_StartDistance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "set_StartDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_GridSize
// Il2CppName: get_GridSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_GridSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_GridSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::set_GridSize
// Il2CppName: set_GridSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)(float)>(&OculusSampleFramework::TrackSegment::set_GridSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "set_GridSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_SubDivCount
// Il2CppName: get_SubDivCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_SubDivCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_SubDivCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::set_SubDivCount
// Il2CppName: set_SubDivCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)(int)>(&OculusSampleFramework::TrackSegment::set_SubDivCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "set_SubDivCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::TrackSegment::SegmentType (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_EndPose
// Il2CppName: get_EndPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OculusSampleFramework::Pose* (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_EndPose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_EndPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_Radius
// Il2CppName: get_Radius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_Radius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_Radius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::setGridSize
// Il2CppName: setGridSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrackSegment::*)(float)>(&OculusSampleFramework::TrackSegment::setGridSize)> {
  static const MethodInfo* get() {
    static auto* size = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "setGridSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{size});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::get_SegmentLength
// Il2CppName: get_SegmentLength
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::get_SegmentLength)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "get_SegmentLength", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::UpdatePose
// Il2CppName: UpdatePose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)(float, ::OculusSampleFramework::Pose*)>(&OculusSampleFramework::TrackSegment::UpdatePose)> {
  static const MethodInfo* get() {
    static auto* distanceIntoSegment = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pose = &::il2cpp_utils::GetClassFromName("OculusSampleFramework", "Pose")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "UpdatePose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distanceIntoSegment, pose});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::DrawDebugLines
// Il2CppName: DrawDebugLines
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::DrawDebugLines)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "DrawDebugLines", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::RegenerateTrackAndMesh
// Il2CppName: RegenerateTrackAndMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (OculusSampleFramework::TrackSegment::*)()>(&OculusSampleFramework::TrackSegment::RegenerateTrackAndMesh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(OculusSampleFramework::TrackSegment*), "RegenerateTrackAndMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: OculusSampleFramework::TrackSegment::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
