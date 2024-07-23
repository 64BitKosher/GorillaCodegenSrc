// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Mesh
  class Mesh;
}
// Forward declaring namespace: Pathfinding::RVO
namespace Pathfinding::RVO {
  // Forward declaring type: Simulator
  class Simulator;
  // Forward declaring type: IAgent
  class IAgent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Forward declaring type: LightweightRVO
  class LightweightRVO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Examples::LightweightRVO);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::LightweightRVO*, "Pathfinding.Examples", "LightweightRVO");
// Type namespace: Pathfinding.Examples
namespace Pathfinding::Examples {
  // Size: 0xA8
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Examples.LightweightRVO
  // [TokenAttribute] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class LightweightRVO : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Pathfinding::Examples::LightweightRVO::RVOExampleType
    struct RVOExampleType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.Examples.LightweightRVO/RVOExampleType
    // [TokenAttribute] Offset: FFFFFFFF
    struct RVOExampleType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: RVOExampleType
      constexpr RVOExampleType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Circle
      static constexpr const int Circle = 0;
      // Get static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Circle
      static ::Pathfinding::Examples::LightweightRVO::RVOExampleType _get_Circle();
      // Set static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Circle
      static void _set_Circle(::Pathfinding::Examples::LightweightRVO::RVOExampleType value);
      // static field const value: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Line
      static constexpr const int Line = 1;
      // Get static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Line
      static ::Pathfinding::Examples::LightweightRVO::RVOExampleType _get_Line();
      // Set static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Line
      static void _set_Line(::Pathfinding::Examples::LightweightRVO::RVOExampleType value);
      // static field const value: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Point
      static constexpr const int Point = 2;
      // Get static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Point
      static ::Pathfinding::Examples::LightweightRVO::RVOExampleType _get_Point();
      // Set static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Point
      static void _set_Point(::Pathfinding::Examples::LightweightRVO::RVOExampleType value);
      // static field const value: static public Pathfinding.Examples.LightweightRVO/RVOExampleType RandomStreams
      static constexpr const int RandomStreams = 3;
      // Get static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType RandomStreams
      static ::Pathfinding::Examples::LightweightRVO::RVOExampleType _get_RandomStreams();
      // Set static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType RandomStreams
      static void _set_RandomStreams(::Pathfinding::Examples::LightweightRVO::RVOExampleType value);
      // static field const value: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Crossing
      static constexpr const int Crossing = 4;
      // Get static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Crossing
      static ::Pathfinding::Examples::LightweightRVO::RVOExampleType _get_Crossing();
      // Set static field: static public Pathfinding.Examples.LightweightRVO/RVOExampleType Crossing
      static void _set_Crossing(::Pathfinding::Examples::LightweightRVO::RVOExampleType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.Examples.LightweightRVO/RVOExampleType
    #pragma pack(pop)
    static check_size<sizeof(LightweightRVO::RVOExampleType), 0 + sizeof(int)> __Pathfinding_Examples_LightweightRVO_RVOExampleTypeSizeCheck;
    static_assert(sizeof(LightweightRVO::RVOExampleType) == 0x4);
    public:
    // public System.Int32 agentCount
    // Size: 0x4
    // Offset: 0x20
    int agentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single exampleScale
    // Size: 0x4
    // Offset: 0x24
    float exampleScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public Pathfinding.Examples.LightweightRVO/RVOExampleType type
    // Size: 0x4
    // Offset: 0x28
    ::Pathfinding::Examples::LightweightRVO::RVOExampleType type;
    // Field size check
    static_assert(sizeof(::Pathfinding::Examples::LightweightRVO::RVOExampleType) == 0x4);
    // public System.Single radius
    // Size: 0x4
    // Offset: 0x2C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maxSpeed
    // Size: 0x4
    // Offset: 0x30
    float maxSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single agentTimeHorizon
    // Size: 0x4
    // Offset: 0x34
    float agentTimeHorizon;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single obstacleTimeHorizon
    // Size: 0x4
    // Offset: 0x38
    float obstacleTimeHorizon;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 maxNeighbours
    // Size: 0x4
    // Offset: 0x3C
    int maxNeighbours;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector3 renderingOffset
    // Size: 0xC
    // Offset: 0x40
    ::UnityEngine::Vector3 renderingOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public System.Boolean debug
    // Size: 0x1
    // Offset: 0x4C
    bool debug;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: debug and: mesh
    char __padding9[0x3] = {};
    // private UnityEngine.Mesh mesh
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Mesh* mesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::Mesh*) == 0x8);
    // private Pathfinding.RVO.Simulator sim
    // Size: 0x8
    // Offset: 0x58
    ::Pathfinding::RVO::Simulator* sim;
    // Field size check
    static_assert(sizeof(::Pathfinding::RVO::Simulator*) == 0x8);
    // private System.Collections.Generic.List`1<Pathfinding.RVO.IAgent> agents
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>* agents;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Vector3> goals
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* goals;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Vector3>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.Color> colors
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::UnityEngine::Color>* colors;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::Color>*) == 0x8);
    // private UnityEngine.Vector3[] verts
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<::UnityEngine::Vector3> verts;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector3>) == 0x8);
    // private UnityEngine.Vector2[] uv
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::UnityEngine::Vector2> uv;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private System.Int32[] tris
    // Size: 0x8
    // Offset: 0x88
    ::ArrayW<int> tris;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private UnityEngine.Color[] meshColors
    // Size: 0x8
    // Offset: 0x90
    ::ArrayW<::UnityEngine::Color> meshColors;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Color>) == 0x8);
    // private UnityEngine.Vector2[] interpolatedVelocities
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<::UnityEngine::Vector2> interpolatedVelocities;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    // private UnityEngine.Vector2[] interpolatedRotations
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<::UnityEngine::Vector2> interpolatedRotations;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::Vector2>) == 0x8);
    public:
    // Get instance field reference: public System.Int32 agentCount
    [[deprecated("Use field access instead!")]] int& dyn_agentCount();
    // Get instance field reference: public System.Single exampleScale
    [[deprecated("Use field access instead!")]] float& dyn_exampleScale();
    // Get instance field reference: public Pathfinding.Examples.LightweightRVO/RVOExampleType type
    [[deprecated("Use field access instead!")]] ::Pathfinding::Examples::LightweightRVO::RVOExampleType& dyn_type();
    // Get instance field reference: public System.Single radius
    [[deprecated("Use field access instead!")]] float& dyn_radius();
    // Get instance field reference: public System.Single maxSpeed
    [[deprecated("Use field access instead!")]] float& dyn_maxSpeed();
    // Get instance field reference: public System.Single agentTimeHorizon
    [[deprecated("Use field access instead!")]] float& dyn_agentTimeHorizon();
    // Get instance field reference: public System.Single obstacleTimeHorizon
    [[deprecated("Use field access instead!")]] float& dyn_obstacleTimeHorizon();
    // Get instance field reference: public System.Int32 maxNeighbours
    [[deprecated("Use field access instead!")]] int& dyn_maxNeighbours();
    // Get instance field reference: public UnityEngine.Vector3 renderingOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_renderingOffset();
    // Get instance field reference: public System.Boolean debug
    [[deprecated("Use field access instead!")]] bool& dyn_debug();
    // Get instance field reference: private UnityEngine.Mesh mesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::Mesh*& dyn_mesh();
    // Get instance field reference: private Pathfinding.RVO.Simulator sim
    [[deprecated("Use field access instead!")]] ::Pathfinding::RVO::Simulator*& dyn_sim();
    // Get instance field reference: private System.Collections.Generic.List`1<Pathfinding.RVO.IAgent> agents
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Pathfinding::RVO::IAgent*>*& dyn_agents();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Vector3> goals
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*& dyn_goals();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.Color> colors
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::Color>*& dyn_colors();
    // Get instance field reference: private UnityEngine.Vector3[] verts
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector3>& dyn_verts();
    // Get instance field reference: private UnityEngine.Vector2[] uv
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_uv();
    // Get instance field reference: private System.Int32[] tris
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn_tris();
    // Get instance field reference: private UnityEngine.Color[] meshColors
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Color>& dyn_meshColors();
    // Get instance field reference: private UnityEngine.Vector2[] interpolatedVelocities
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_interpolatedVelocities();
    // Get instance field reference: private UnityEngine.Vector2[] interpolatedRotations
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::Vector2>& dyn_interpolatedRotations();
    // public System.Void Start()
    // Offset: 0x2A4027C
    void Start();
    // public System.Void OnGUI()
    // Offset: 0x2A413F4
    void OnGUI();
    // private System.Single uniformDistance(System.Single radius)
    // Offset: 0x2A41A54
    float uniformDistance(float radius);
    // public System.Void CreateAgents(System.Int32 num)
    // Offset: 0x2A40480
    void CreateAgents(int num);
    // private System.Void SetAgentSettings()
    // Offset: 0x2A41A9C
    void SetAgentSettings();
    // public System.Void Update()
    // Offset: 0x2A41D54
    void Update();
    // public System.Void .ctor()
    // Offset: 0x2A42CE8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightweightRVO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Examples::LightweightRVO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightweightRVO*, creationType>()));
    }
  }; // Pathfinding.Examples.LightweightRVO
  #pragma pack(pop)
  static check_size<sizeof(LightweightRVO), 160 + sizeof(::ArrayW<::UnityEngine::Vector2>)> __Pathfinding_Examples_LightweightRVOSizeCheck;
  static_assert(sizeof(LightweightRVO) == 0xA8);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Examples::LightweightRVO::RVOExampleType, "Pathfinding.Examples", "LightweightRVO/RVOExampleType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::LightweightRVO::*)()>(&Pathfinding::Examples::LightweightRVO::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::OnGUI
// Il2CppName: OnGUI
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::LightweightRVO::*)()>(&Pathfinding::Examples::LightweightRVO::OnGUI)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "OnGUI", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::uniformDistance
// Il2CppName: uniformDistance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Pathfinding::Examples::LightweightRVO::*)(float)>(&Pathfinding::Examples::LightweightRVO::uniformDistance)> {
  static const MethodInfo* get() {
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "uniformDistance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{radius});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::CreateAgents
// Il2CppName: CreateAgents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::LightweightRVO::*)(int)>(&Pathfinding::Examples::LightweightRVO::CreateAgents)> {
  static const MethodInfo* get() {
    static auto* num = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "CreateAgents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{num});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::SetAgentSettings
// Il2CppName: SetAgentSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::LightweightRVO::*)()>(&Pathfinding::Examples::LightweightRVO::SetAgentSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "SetAgentSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Examples::LightweightRVO::*)()>(&Pathfinding::Examples::LightweightRVO::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Examples::LightweightRVO*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Examples::LightweightRVO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!