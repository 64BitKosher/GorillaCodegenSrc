// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Behaviour
#include "Fusion/Behaviour.hpp"
// Including type: Fusion.HitboxTypes
#include "Fusion/HitboxTypes.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: HitboxRoot
  class HitboxRoot;
  // Forward declaring type: HitboxCollider
  struct HitboxCollider;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Hitbox
  class Hitbox;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::Hitbox);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Hitbox*, "Fusion", "Hitbox");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.Hitbox
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class Hitbox : public ::Fusion::Behaviour {
    public:
    public:
    // public Fusion.HitboxTypes Type
    // Size: 0x4
    // Offset: 0x20
    ::Fusion::HitboxTypes Type;
    // Field size check
    static_assert(sizeof(::Fusion::HitboxTypes) == 0x4);
    // public System.Single SphereRadius
    // Size: 0x4
    // Offset: 0x24
    float SphereRadius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Vector3 BoxExtents
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 BoxExtents;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public UnityEngine.Vector3 Offset
    // Size: 0xC
    // Offset: 0x34
    ::UnityEngine::Vector3 Offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // public Fusion.HitboxRoot Root
    // Size: 0x8
    // Offset: 0x40
    ::Fusion::HitboxRoot* Root;
    // Field size check
    static_assert(sizeof(::Fusion::HitboxRoot*) == 0x8);
    // System.Int32 _hitboxIndex
    // Size: 0x4
    // Offset: 0x48
    int hitboxIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <ColliderIndex>k__BackingField
    // Size: 0x4
    // Offset: 0x4C
    int ColliderIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public UnityEngine.Color GizmosColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color GizmosColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public Fusion.HitboxTypes Type
    [[deprecated("Use field access instead!")]] ::Fusion::HitboxTypes& dyn_Type();
    // Get instance field reference: public System.Single SphereRadius
    [[deprecated("Use field access instead!")]] float& dyn_SphereRadius();
    // Get instance field reference: public UnityEngine.Vector3 BoxExtents
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_BoxExtents();
    // Get instance field reference: public UnityEngine.Vector3 Offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_Offset();
    // Get instance field reference: public Fusion.HitboxRoot Root
    [[deprecated("Use field access instead!")]] ::Fusion::HitboxRoot*& dyn_Root();
    // Get instance field reference: System.Int32 _hitboxIndex
    [[deprecated("Use field access instead!")]] int& dyn__hitboxIndex();
    // Get instance field reference: private System.Int32 <ColliderIndex>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$ColliderIndex$k__BackingField();
    // Get instance field reference: public UnityEngine.Color GizmosColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_GizmosColor();
    // System.Single get_AbsSphereRadius()
    // Offset: 0x2B3BED0
    float get_AbsSphereRadius();
    // UnityEngine.Vector3 get_AbsBoxExtents()
    // Offset: 0x2B3BEDC
    ::UnityEngine::Vector3 get_AbsBoxExtents();
    // public System.Int32 get_HitboxIndex()
    // Offset: 0x2B3BEF4
    int get_HitboxIndex();
    // System.UInt32 get_HitboxMask()
    // Offset: 0x2B3BEFC
    uint get_HitboxMask();
    // public System.Boolean get_HitboxActive()
    // Offset: 0x2B3BF10
    bool get_HitboxActive();
    // public System.Void set_HitboxActive(System.Boolean value)
    // Offset: 0x2B3C0A8
    void set_HitboxActive(bool value);
    // public System.Int32 get_ColliderIndex()
    // Offset: 0x2B3C258
    int get_ColliderIndex();
    // System.Void set_ColliderIndex(System.Int32 value)
    // Offset: 0x2B3C260
    void set_ColliderIndex(int value);
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x2B3C268
    ::UnityEngine::Vector3 get_Position();
    // System.Void SetColliderData(ref Fusion.HitboxCollider c, System.Int32 tick)
    // Offset: 0x2B3C2E0
    void SetColliderData(ByRef<::Fusion::HitboxCollider> c, int tick);
    // public System.Void OnDrawGizmos()
    // Offset: 0x2B3C4A8
    void OnDrawGizmos();
    // protected System.Void DrawGizmos(UnityEngine.Color color, ref UnityEngine.Matrix4x4 localToWorldMatrix)
    // Offset: 0x2B3C674
    void DrawGizmos(::UnityEngine::Color color, ByRef<::UnityEngine::Matrix4x4> localToWorldMatrix);
    // public System.Void .ctor()
    // Offset: 0x2B3C79C
    // Implemented from: Fusion.Behaviour
    // Base method: System.Void Behaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hitbox* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::Hitbox::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hitbox*, creationType>()));
    }
  }; // Fusion.Hitbox
  #pragma pack(pop)
  static check_size<sizeof(Hitbox), 80 + sizeof(::UnityEngine::Color)> __Fusion_HitboxSizeCheck;
  static_assert(sizeof(Hitbox) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Hitbox::get_AbsSphereRadius
// Il2CppName: get_AbsSphereRadius
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_AbsSphereRadius)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_AbsSphereRadius", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_AbsBoxExtents
// Il2CppName: get_AbsBoxExtents
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_AbsBoxExtents)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_AbsBoxExtents", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_HitboxIndex
// Il2CppName: get_HitboxIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_HitboxIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_HitboxIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_HitboxMask
// Il2CppName: get_HitboxMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_HitboxMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_HitboxMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_HitboxActive
// Il2CppName: get_HitboxActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_HitboxActive)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_HitboxActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::set_HitboxActive
// Il2CppName: set_HitboxActive
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Hitbox::*)(bool)>(&Fusion::Hitbox::set_HitboxActive)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "set_HitboxActive", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_ColliderIndex
// Il2CppName: get_ColliderIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_ColliderIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_ColliderIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::set_ColliderIndex
// Il2CppName: set_ColliderIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Hitbox::*)(int)>(&Fusion::Hitbox::set_ColliderIndex)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "set_ColliderIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Fusion::Hitbox::*)()>(&Fusion::Hitbox::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::SetColliderData
// Il2CppName: SetColliderData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Hitbox::*)(ByRef<::Fusion::HitboxCollider>, int)>(&Fusion::Hitbox::SetColliderData)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxCollider")->this_arg;
    static auto* tick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "SetColliderData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, tick});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Hitbox::*)()>(&Fusion::Hitbox::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Hitbox::*)(::UnityEngine::Color, ByRef<::UnityEngine::Matrix4x4>)>(&Fusion::Hitbox::DrawGizmos)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* localToWorldMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Hitbox*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, localToWorldMatrix});
  }
};
// Writing MetadataGetter for method: Fusion::Hitbox::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
