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
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakeryLightMesh
  class BakeryLightMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakeryLightMesh);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeryLightMesh*, "", "BakeryLightMesh");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x5C
  #pragma pack(push, 1)
  // Autogenerated type: BakeryLightMesh
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class BakeryLightMesh : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Int32 UID
    // Size: 0x4
    // Offset: 0x20
    int UID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color color
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single intensity
    // Size: 0x4
    // Offset: 0x34
    float intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Texture2D texture
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Texture2D* texture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // public System.Single cutoff
    // Size: 0x4
    // Offset: 0x40
    float cutoff;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 samples
    // Size: 0x4
    // Offset: 0x44
    int samples;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 samples2
    // Size: 0x4
    // Offset: 0x48
    int samples2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 bitmask
    // Size: 0x4
    // Offset: 0x4C
    int bitmask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean selfShadow
    // Size: 0x1
    // Offset: 0x50
    bool selfShadow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean bakeToIndirect
    // Size: 0x1
    // Offset: 0x51
    bool bakeToIndirect;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: bakeToIndirect and: indirectIntensity
    char __padding9[0x2] = {};
    // public System.Single indirectIntensity
    // Size: 0x4
    // Offset: 0x54
    float indirectIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 lmid
    // Size: 0x4
    // Offset: 0x58
    int lmid;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get static field: static public System.Int32 lightsChanged
    static int _get_lightsChanged();
    // Set static field: static public System.Int32 lightsChanged
    static void _set_lightsChanged(int value);
    // Get instance field reference: public System.Int32 UID
    [[deprecated("Use field access instead!")]] int& dyn_UID();
    // Get instance field reference: public UnityEngine.Color color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_color();
    // Get instance field reference: public System.Single intensity
    [[deprecated("Use field access instead!")]] float& dyn_intensity();
    // Get instance field reference: public UnityEngine.Texture2D texture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn_texture();
    // Get instance field reference: public System.Single cutoff
    [[deprecated("Use field access instead!")]] float& dyn_cutoff();
    // Get instance field reference: public System.Int32 samples
    [[deprecated("Use field access instead!")]] int& dyn_samples();
    // Get instance field reference: public System.Int32 samples2
    [[deprecated("Use field access instead!")]] int& dyn_samples2();
    // Get instance field reference: public System.Int32 bitmask
    [[deprecated("Use field access instead!")]] int& dyn_bitmask();
    // Get instance field reference: public System.Boolean selfShadow
    [[deprecated("Use field access instead!")]] bool& dyn_selfShadow();
    // Get instance field reference: public System.Boolean bakeToIndirect
    [[deprecated("Use field access instead!")]] bool& dyn_bakeToIndirect();
    // Get instance field reference: public System.Single indirectIntensity
    [[deprecated("Use field access instead!")]] float& dyn_indirectIntensity();
    // Get instance field reference: public System.Int32 lmid
    [[deprecated("Use field access instead!")]] int& dyn_lmid();
    // private System.Void OnDrawGizmosSelected()
    // Offset: 0x2A78EC0
    void OnDrawGizmosSelected();
    // public System.Void .ctor()
    // Offset: 0x2A78FAC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakeryLightMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BakeryLightMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakeryLightMesh*, creationType>()));
    }
  }; // BakeryLightMesh
  #pragma pack(pop)
  static check_size<sizeof(BakeryLightMesh), 88 + sizeof(int)> __GlobalNamespace_BakeryLightMeshSizeCheck;
  static_assert(sizeof(BakeryLightMesh) == 0x5C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakeryLightMesh::OnDrawGizmosSelected
// Il2CppName: OnDrawGizmosSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakeryLightMesh::*)()>(&GlobalNamespace::BakeryLightMesh::OnDrawGizmosSelected)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakeryLightMesh*), "OnDrawGizmosSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakeryLightMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!