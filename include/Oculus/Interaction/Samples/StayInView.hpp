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
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Forward declaring type: StayInView
  class StayInView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Samples::StayInView);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Samples::StayInView*, "Oculus.Interaction.Samples", "StayInView");
// Type namespace: Oculus.Interaction.Samples
namespace Oculus::Interaction::Samples {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Samples.StayInView
  // [TokenAttribute] Offset: FFFFFFFF
  class StayInView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Transform _eyeCenter
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* eyeCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private System.Single _extraDistanceForward
    // Size: 0x4
    // Offset: 0x28
    float extraDistanceForward;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _zeroOutEyeHeight
    // Size: 0x1
    // Offset: 0x2C
    bool zeroOutEyeHeight;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Transform _eyeCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__eyeCenter();
    // Get instance field reference: private System.Single _extraDistanceForward
    [[deprecated("Use field access instead!")]] float& dyn__extraDistanceForward();
    // Get instance field reference: private System.Boolean _zeroOutEyeHeight
    [[deprecated("Use field access instead!")]] bool& dyn__zeroOutEyeHeight();
    // private System.Void Update()
    // Offset: 0x47A22AC
    void Update();
    // public System.Void .ctor()
    // Offset: 0x47A256C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StayInView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Samples::StayInView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StayInView*, creationType>()));
    }
  }; // Oculus.Interaction.Samples.StayInView
  #pragma pack(pop)
  static check_size<sizeof(StayInView), 44 + sizeof(bool)> __Oculus_Interaction_Samples_StayInViewSizeCheck;
  static_assert(sizeof(StayInView) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Samples::StayInView::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Samples::StayInView::*)()>(&Oculus::Interaction::Samples::StayInView::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Samples::StayInView*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Samples::StayInView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
