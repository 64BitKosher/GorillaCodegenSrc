// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.PointableElement
#include "Oculus/Interaction/PointableElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Forward declaring type: CanvasMesh
  class CanvasMesh;
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Skipping declaration: PointerEvent because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: PointableCanvasMesh
  class PointableCanvasMesh;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PointableCanvasMesh);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PointableCanvasMesh*, "Oculus.Interaction", "PointableCanvasMesh");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PointableCanvasMesh
  // [TokenAttribute] Offset: FFFFFFFF
  class PointableCanvasMesh : public ::Oculus::Interaction::PointableElement {
    public:
    // Writing base type padding for base size: 0x61 to desired offset: 0x68
    char ___base_padding[0x7] = {};
    public:
    // private Oculus.Interaction.UnityCanvas.CanvasMesh _canvasMesh
    // Size: 0x8
    // Offset: 0x68
    ::Oculus::Interaction::UnityCanvas::CanvasMesh* canvasMesh;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::UnityCanvas::CanvasMesh*) == 0x8);
    public:
    // Get instance field reference: private Oculus.Interaction.UnityCanvas.CanvasMesh _canvasMesh
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::UnityCanvas::CanvasMesh*& dyn__canvasMesh();
    // public System.Void InjectAllCanvasMeshPointable(Oculus.Interaction.UnityCanvas.CanvasMesh canvasMesh)
    // Offset: 0x47D6C44
    void InjectAllCanvasMeshPointable(::Oculus::Interaction::UnityCanvas::CanvasMesh* canvasMesh);
    // public System.Void InjectCanvasMesh(Oculus.Interaction.UnityCanvas.CanvasMesh canvasMesh)
    // Offset: 0x47D6C4C
    void InjectCanvasMesh(::Oculus::Interaction::UnityCanvas::CanvasMesh* canvasMesh);
    // protected override System.Void Start()
    // Offset: 0x47D6AD4
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::Start()
    void Start();
    // public override System.Void ProcessPointerEvent(Oculus.Interaction.PointerEvent evt)
    // Offset: 0x47D6ADC
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::ProcessPointerEvent(Oculus.Interaction.PointerEvent evt)
    void ProcessPointerEvent(::Oculus::Interaction::PointerEvent evt);
    // public System.Void .ctor()
    // Offset: 0x47D6C54
    // Implemented from: Oculus.Interaction.PointableElement
    // Base method: System.Void PointableElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PointableCanvasMesh* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PointableCanvasMesh::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PointableCanvasMesh*, creationType>()));
    }
  }; // Oculus.Interaction.PointableCanvasMesh
  #pragma pack(pop)
  static check_size<sizeof(PointableCanvasMesh), 104 + sizeof(::Oculus::Interaction::UnityCanvas::CanvasMesh*)> __Oculus_Interaction_PointableCanvasMeshSizeCheck;
  static_assert(sizeof(PointableCanvasMesh) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasMesh::InjectAllCanvasMeshPointable
// Il2CppName: InjectAllCanvasMeshPointable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&Oculus::Interaction::PointableCanvasMesh::InjectAllCanvasMeshPointable)> {
  static const MethodInfo* get() {
    static auto* canvasMesh = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.UnityCanvas", "CanvasMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvasMesh*), "InjectAllCanvasMeshPointable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvasMesh});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasMesh::InjectCanvasMesh
// Il2CppName: InjectCanvasMesh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::UnityCanvas::CanvasMesh*)>(&Oculus::Interaction::PointableCanvasMesh::InjectCanvasMesh)> {
  static const MethodInfo* get() {
    static auto* canvasMesh = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.UnityCanvas", "CanvasMesh")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvasMesh*), "InjectCanvasMesh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{canvasMesh});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasMesh::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvasMesh::*)()>(&Oculus::Interaction::PointableCanvasMesh::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvasMesh*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasMesh::ProcessPointerEvent
// Il2CppName: ProcessPointerEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PointableCanvasMesh::*)(::Oculus::Interaction::PointerEvent)>(&Oculus::Interaction::PointableCanvasMesh::ProcessPointerEvent)> {
  static const MethodInfo* get() {
    static auto* evt = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "PointerEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PointableCanvasMesh*), "ProcessPointerEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{evt});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PointableCanvasMesh::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
