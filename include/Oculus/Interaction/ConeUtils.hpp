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
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ConeUtils
  class ConeUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ConeUtils);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ConeUtils*, "Oculus.Interaction", "ConeUtils");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ConeUtils
  // [TokenAttribute] Offset: FFFFFFFF
  class ConeUtils : public ::Il2CppObject {
    public:
    // static public System.Boolean RayWithinCone(UnityEngine.Ray ray, UnityEngine.Vector3 position, System.Single apertureDegrees)
    // Offset: 0x47DB3B0
    static bool RayWithinCone(::UnityEngine::Ray ray, ::UnityEngine::Vector3 position, float apertureDegrees);
    // public System.Void .ctor()
    // Offset: 0x47DB4B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConeUtils* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ConeUtils::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConeUtils*, creationType>()));
    }
  }; // Oculus.Interaction.ConeUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ConeUtils::RayWithinCone
// Il2CppName: RayWithinCone
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Ray, ::UnityEngine::Vector3, float)>(&Oculus::Interaction::ConeUtils::RayWithinCone)> {
  static const MethodInfo* get() {
    static auto* ray = &::il2cpp_utils::GetClassFromName("UnityEngine", "Ray")->byval_arg;
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* apertureDegrees = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ConeUtils*), "RayWithinCone", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ray, position, apertureDegrees});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ConeUtils::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
