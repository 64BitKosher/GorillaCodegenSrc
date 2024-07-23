// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: IBoundsTraversalTest
  class IBoundsTraversalTest;
  // Forward declaring type: HitboxRoot
  class HitboxRoot;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ILagCompensationBroadphase
  class ILagCompensationBroadphase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::ILagCompensationBroadphase);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ILagCompensationBroadphase*, "Fusion", "ILagCompensationBroadphase");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ILagCompensationBroadphase
  // [TokenAttribute] Offset: FFFFFFFF
  class ILagCompensationBroadphase {
    public:
    // public System.Void CopyFrom(Fusion.ILagCompensationBroadphase other)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void CopyFrom(::Fusion::ILagCompensationBroadphase* other);
    // public System.Void Traverse(Fusion.IBoundsTraversalTest hitTest, System.Collections.Generic.List`1<Fusion.HitboxRoot> candidateRoots, System.Int32 layerMask)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Traverse(::Fusion::IBoundsTraversalTest* hitTest, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>* candidateRoots, int layerMask);
    // public System.Void Add(Fusion.HitboxRoot root)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Add(::Fusion::HitboxRoot* root);
    // public System.Boolean Remove(Fusion.HitboxRoot root)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Remove(::Fusion::HitboxRoot* root);
    // public System.Void Update(Fusion.HitboxRoot changed, System.Int32 tick)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Update(::Fusion::HitboxRoot* changed, int tick);
    // public System.Void Optimize()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Optimize();
    // public System.Void RenderGizmos(UnityEngine.Color color)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RenderGizmos(::UnityEngine::Color color);
  }; // Fusion.ILagCompensationBroadphase
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::CopyFrom
// Il2CppName: CopyFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)(::Fusion::ILagCompensationBroadphase*)>(&Fusion::ILagCompensationBroadphase::CopyFrom)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Fusion", "ILagCompensationBroadphase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "CopyFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::Traverse
// Il2CppName: Traverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)(::Fusion::IBoundsTraversalTest*, ::System::Collections::Generic::List_1<::Fusion::HitboxRoot*>*, int)>(&Fusion::ILagCompensationBroadphase::Traverse)> {
  static const MethodInfo* get() {
    static auto* hitTest = &::il2cpp_utils::GetClassFromName("Fusion", "IBoundsTraversalTest")->byval_arg;
    static auto* candidateRoots = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")})->byval_arg;
    static auto* layerMask = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "Traverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitTest, candidateRoots, layerMask});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*)>(&Fusion::ILagCompensationBroadphase::Add)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*)>(&Fusion::ILagCompensationBroadphase::Remove)> {
  static const MethodInfo* get() {
    static auto* root = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{root});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)(::Fusion::HitboxRoot*, int)>(&Fusion::ILagCompensationBroadphase::Update)> {
  static const MethodInfo* get() {
    static auto* changed = &::il2cpp_utils::GetClassFromName("Fusion", "HitboxRoot")->byval_arg;
    static auto* tick = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{changed, tick});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::Optimize
// Il2CppName: Optimize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)()>(&Fusion::ILagCompensationBroadphase::Optimize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "Optimize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::ILagCompensationBroadphase::RenderGizmos
// Il2CppName: RenderGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::ILagCompensationBroadphase::*)(::UnityEngine::Color)>(&Fusion::ILagCompensationBroadphase::RenderGizmos)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ILagCompensationBroadphase*), "RenderGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
