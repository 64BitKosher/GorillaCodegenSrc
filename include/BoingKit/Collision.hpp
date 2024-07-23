// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: Collision
  class Collision;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::Collision);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::Collision*, "BoingKit", "Collision");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.Collision
  // [TokenAttribute] Offset: FFFFFFFF
  class Collision : public ::Il2CppObject {
    public:
    // static public System.Boolean SphereSphere(UnityEngine.Vector3 centerA, System.Single radiusA, UnityEngine.Vector3 centerB, System.Single radiusB, out UnityEngine.Vector3 push)
    // Offset: 0x28FB678
    static bool SphereSphere(::UnityEngine::Vector3 centerA, float radiusA, ::UnityEngine::Vector3 centerB, float radiusB, ByRef<::UnityEngine::Vector3> push);
    // static public System.Boolean SphereSphereInverse(UnityEngine.Vector3 centerA, System.Single radiusA, UnityEngine.Vector3 centerB, System.Single radiusB, out UnityEngine.Vector3 push)
    // Offset: 0x29019F0
    static bool SphereSphereInverse(::UnityEngine::Vector3 centerA, float radiusA, ::UnityEngine::Vector3 centerB, float radiusB, ByRef<::UnityEngine::Vector3> push);
    // static public System.Boolean SphereCapsule(UnityEngine.Vector3 centerA, System.Single radiusA, UnityEngine.Vector3 headB, UnityEngine.Vector3 tailB, System.Single radiusB, out UnityEngine.Vector3 push)
    // Offset: 0x2901B54
    static bool SphereCapsule(::UnityEngine::Vector3 centerA, float radiusA, ::UnityEngine::Vector3 headB, ::UnityEngine::Vector3 tailB, float radiusB, ByRef<::UnityEngine::Vector3> push);
    // static public System.Boolean SphereCapsuleInverse(UnityEngine.Vector3 centerA, System.Single radiusA, UnityEngine.Vector3 headB, UnityEngine.Vector3 tailB, System.Single radiusB, out UnityEngine.Vector3 push)
    // Offset: 0x2901D40
    static bool SphereCapsuleInverse(::UnityEngine::Vector3 centerA, float radiusA, ::UnityEngine::Vector3 headB, ::UnityEngine::Vector3 tailB, float radiusB, ByRef<::UnityEngine::Vector3> push);
    // static public System.Boolean SphereBox(UnityEngine.Vector3 centerOffsetA, System.Single radiusA, UnityEngine.Vector3 halfExtentB, out UnityEngine.Vector3 push)
    // Offset: 0x2901F14
    static bool SphereBox(::UnityEngine::Vector3 centerOffsetA, float radiusA, ::UnityEngine::Vector3 halfExtentB, ByRef<::UnityEngine::Vector3> push);
    // static public System.Boolean SphereBoxInverse(UnityEngine.Vector3 centerOffsetA, System.Single radiusA, UnityEngine.Vector3 halfExtentB, out UnityEngine.Vector3 push)
    // Offset: 0x29021C8
    static bool SphereBoxInverse(::UnityEngine::Vector3 centerOffsetA, float radiusA, ::UnityEngine::Vector3 halfExtentB, ByRef<::UnityEngine::Vector3> push);
    // public System.Void .ctor()
    // Offset: 0x2902224
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Collision* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::Collision::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Collision*, creationType>()));
    }
  }; // BoingKit.Collision
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::Collision::SphereSphere
// Il2CppName: SphereSphere
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereSphere)> {
  static const MethodInfo* get() {
    static auto* centerA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* centerB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereSphere", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerA, radiusA, centerB, radiusB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::SphereSphereInverse
// Il2CppName: SphereSphereInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereSphereInverse)> {
  static const MethodInfo* get() {
    static auto* centerA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* centerB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereSphereInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerA, radiusA, centerB, radiusB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::SphereCapsule
// Il2CppName: SphereCapsule
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereCapsule)> {
  static const MethodInfo* get() {
    static auto* centerA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereCapsule", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerA, radiusA, headB, tailB, radiusB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::SphereCapsuleInverse
// Il2CppName: SphereCapsuleInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereCapsuleInverse)> {
  static const MethodInfo* get() {
    static auto* centerA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* headB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* tailB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusB = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereCapsuleInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerA, radiusA, headB, tailB, radiusB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::SphereBox
// Il2CppName: SphereBox
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereBox)> {
  static const MethodInfo* get() {
    static auto* centerOffsetA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* halfExtentB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereBox", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerOffsetA, radiusA, halfExtentB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::SphereBoxInverse
// Il2CppName: SphereBoxInverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3, ByRef<::UnityEngine::Vector3>)>(&BoingKit::Collision::SphereBoxInverse)> {
  static const MethodInfo* get() {
    static auto* centerOffsetA = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radiusA = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* halfExtentB = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* push = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(BoingKit::Collision*), "SphereBoxInverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{centerOffsetA, radiusA, halfExtentB, push});
  }
};
// Writing MetadataGetter for method: BoingKit::Collision::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!