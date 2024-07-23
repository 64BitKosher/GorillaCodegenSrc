// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IPolyline
  class IPolyline;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::IPolyline);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::IPolyline*, "Oculus.Interaction", "IPolyline");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.IPolyline
  // [TokenAttribute] Offset: FFFFFFFF
  class IPolyline {
    public:
    // public System.Int32 get_PointsCount()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_PointsCount();
    // public UnityEngine.Vector3 PointAtIndex(System.Int32 index)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Vector3 PointAtIndex(int index);
  }; // Oculus.Interaction.IPolyline
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::IPolyline::get_PointsCount
// Il2CppName: get_PointsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::IPolyline::*)()>(&Oculus::Interaction::IPolyline::get_PointsCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IPolyline*), "get_PointsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IPolyline::PointAtIndex
// Il2CppName: PointAtIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::IPolyline::*)(int)>(&Oculus::Interaction::IPolyline::PointAtIndex)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IPolyline*), "PointAtIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
