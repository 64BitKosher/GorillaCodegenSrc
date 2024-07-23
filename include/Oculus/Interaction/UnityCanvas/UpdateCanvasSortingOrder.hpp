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
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Forward declaring type: UpdateCanvasSortingOrder
  class UpdateCanvasSortingOrder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*, "Oculus.Interaction.UnityCanvas", "UpdateCanvasSortingOrder");
// Type namespace: Oculus.Interaction.UnityCanvas
namespace Oculus::Interaction::UnityCanvas {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.UnityCanvas.UpdateCanvasSortingOrder
  // [TokenAttribute] Offset: FFFFFFFF
  class UpdateCanvasSortingOrder : public ::UnityEngine::MonoBehaviour {
    public:
    // public System.Void SetCanvasSortingOrder(System.Int32 sortingOrder)
    // Offset: 0x47E1568
    void SetCanvasSortingOrder(int sortingOrder);
    // public System.Void .ctor()
    // Offset: 0x47E1634
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UpdateCanvasSortingOrder* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UpdateCanvasSortingOrder*, creationType>()));
    }
  }; // Oculus.Interaction.UnityCanvas.UpdateCanvasSortingOrder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::SetCanvasSortingOrder
// Il2CppName: SetCanvasSortingOrder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::*)(int)>(&Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::SetCanvasSortingOrder)> {
  static const MethodInfo* get() {
    static auto* sortingOrder = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder*), "SetCanvasSortingOrder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sortingOrder});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::UnityCanvas::UpdateCanvasSortingOrder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!