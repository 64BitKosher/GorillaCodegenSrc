// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Including type: UnityEngine.Matrix4x4
#include "UnityEngine/Matrix4x4.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
  // Forward declaring type: MaterialPropertyBlock
  class MaterialPropertyBlock;
}
// Forward declaring namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingReactorField
  class BoingReactorField;
  // Forward declaring type: BoingEffector
  class BoingEffector;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BushFieldReactorFieldMain
  class BushFieldReactorFieldMain;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BushFieldReactorFieldMain);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BushFieldReactorFieldMain*, "", "BushFieldReactorFieldMain");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: BushFieldReactorFieldMain
  // [TokenAttribute] Offset: FFFFFFFF
  class BushFieldReactorFieldMain : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public UnityEngine.GameObject Bush
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::GameObject* Bush;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject Blossom
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::GameObject* Blossom;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public UnityEngine.GameObject Sphere
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::GameObject* Sphere;
    // Field size check
    static_assert(sizeof(::UnityEngine::GameObject*) == 0x8);
    // public BoingKit.BoingReactorField ReactorField
    // Size: 0x8
    // Offset: 0x38
    ::BoingKit::BoingReactorField* ReactorField;
    // Field size check
    static_assert(sizeof(::BoingKit::BoingReactorField*) == 0x8);
    // public System.Int32 NumBushes
    // Size: 0x4
    // Offset: 0x40
    int NumBushes;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector2 BushScaleRange
    // Size: 0x8
    // Offset: 0x44
    ::UnityEngine::Vector2 BushScaleRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Int32 NumBlossoms
    // Size: 0x4
    // Offset: 0x4C
    int NumBlossoms;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Vector2 BlossomScaleRange
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Vector2 BlossomScaleRange;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 FieldBounds
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::Vector2 FieldBounds;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Int32 NumSpheresPerCircle
    // Size: 0x4
    // Offset: 0x60
    int NumSpheresPerCircle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 NumCircles
    // Size: 0x4
    // Offset: 0x64
    int NumCircles;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Single MaxCircleRadius
    // Size: 0x4
    // Offset: 0x68
    float MaxCircleRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single CircleSpeed
    // Size: 0x4
    // Offset: 0x6C
    float CircleSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Collections.Generic.List`1<BoingKit.BoingEffector> m_aSphere
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::BoingKit::BoingEffector*>* m_aSphere;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::BoingKit::BoingEffector*>*) == 0x8);
    // private System.Single m_basePhase
    // Size: 0x4
    // Offset: 0x78
    float m_basePhase;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: m_basePhase and: m_aaInstancedBushMatrix
    char __padding14[0x4] = {};
    // private UnityEngine.Matrix4x4[][] m_aaInstancedBushMatrix
    // Size: 0x8
    // Offset: 0x80
    ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>> m_aaInstancedBushMatrix;
    // Field size check
    static_assert(sizeof(::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>) == 0x8);
    // private UnityEngine.MaterialPropertyBlock m_bushMaterialProps
    // Size: 0x8
    // Offset: 0x88
    ::UnityEngine::MaterialPropertyBlock* m_bushMaterialProps;
    // Field size check
    static_assert(sizeof(::UnityEngine::MaterialPropertyBlock*) == 0x8);
    public:
    // Get static field: static private readonly System.Int32 kNumInstancedBushesPerDrawCall
    static int _get_kNumInstancedBushesPerDrawCall();
    // Set static field: static private readonly System.Int32 kNumInstancedBushesPerDrawCall
    static void _set_kNumInstancedBushesPerDrawCall(int value);
    // Get instance field reference: public UnityEngine.GameObject Bush
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Bush();
    // Get instance field reference: public UnityEngine.GameObject Blossom
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Blossom();
    // Get instance field reference: public UnityEngine.GameObject Sphere
    [[deprecated("Use field access instead!")]] ::UnityEngine::GameObject*& dyn_Sphere();
    // Get instance field reference: public BoingKit.BoingReactorField ReactorField
    [[deprecated("Use field access instead!")]] ::BoingKit::BoingReactorField*& dyn_ReactorField();
    // Get instance field reference: public System.Int32 NumBushes
    [[deprecated("Use field access instead!")]] int& dyn_NumBushes();
    // Get instance field reference: public UnityEngine.Vector2 BushScaleRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_BushScaleRange();
    // Get instance field reference: public System.Int32 NumBlossoms
    [[deprecated("Use field access instead!")]] int& dyn_NumBlossoms();
    // Get instance field reference: public UnityEngine.Vector2 BlossomScaleRange
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_BlossomScaleRange();
    // Get instance field reference: public UnityEngine.Vector2 FieldBounds
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_FieldBounds();
    // Get instance field reference: public System.Int32 NumSpheresPerCircle
    [[deprecated("Use field access instead!")]] int& dyn_NumSpheresPerCircle();
    // Get instance field reference: public System.Int32 NumCircles
    [[deprecated("Use field access instead!")]] int& dyn_NumCircles();
    // Get instance field reference: public System.Single MaxCircleRadius
    [[deprecated("Use field access instead!")]] float& dyn_MaxCircleRadius();
    // Get instance field reference: public System.Single CircleSpeed
    [[deprecated("Use field access instead!")]] float& dyn_CircleSpeed();
    // Get instance field reference: private System.Collections.Generic.List`1<BoingKit.BoingEffector> m_aSphere
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::BoingKit::BoingEffector*>*& dyn_m_aSphere();
    // Get instance field reference: private System.Single m_basePhase
    [[deprecated("Use field access instead!")]] float& dyn_m_basePhase();
    // Get instance field reference: private UnityEngine.Matrix4x4[][] m_aaInstancedBushMatrix
    [[deprecated("Use field access instead!")]] ::ArrayW<::ArrayW<::UnityEngine::Matrix4x4>>& dyn_m_aaInstancedBushMatrix();
    // Get instance field reference: private UnityEngine.MaterialPropertyBlock m_bushMaterialProps
    [[deprecated("Use field access instead!")]] ::UnityEngine::MaterialPropertyBlock*& dyn_m_bushMaterialProps();
    // public System.Void Start()
    // Offset: 0x2684438
    void Start();
    // public System.Void Update()
    // Offset: 0x2684D50
    void Update();
    // public System.Void .ctor()
    // Offset: 0x2685020
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BushFieldReactorFieldMain* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BushFieldReactorFieldMain::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BushFieldReactorFieldMain*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2685028
    static void _cctor();
  }; // BushFieldReactorFieldMain
  #pragma pack(pop)
  static check_size<sizeof(BushFieldReactorFieldMain), 136 + sizeof(::UnityEngine::MaterialPropertyBlock*)> __GlobalNamespace_BushFieldReactorFieldMainSizeCheck;
  static_assert(sizeof(BushFieldReactorFieldMain) == 0x90);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BushFieldReactorFieldMain::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BushFieldReactorFieldMain::*)()>(&GlobalNamespace::BushFieldReactorFieldMain::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BushFieldReactorFieldMain*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BushFieldReactorFieldMain::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BushFieldReactorFieldMain::*)()>(&GlobalNamespace::BushFieldReactorFieldMain::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BushFieldReactorFieldMain*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BushFieldReactorFieldMain::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BushFieldReactorFieldMain::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BushFieldReactorFieldMain::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BushFieldReactorFieldMain*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
