// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Collections.Generic.IComparer`1
#include "System/Collections/Generic/IComparer_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Rendering::Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: IntersectNode
  class IntersectNode;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: MyIntersectNodeSort
  class MyIntersectNodeSort;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::MyIntersectNodeSort);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::MyIntersectNodeSort*, "UnityEngine.Rendering.Universal", "MyIntersectNodeSort");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.MyIntersectNodeSort
  // [TokenAttribute] Offset: FFFFFFFF
  class MyIntersectNodeSort : public ::Il2CppObject/*, public ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*/ {
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>
    operator ::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IComparer_1<::UnityEngine::Rendering::Universal::IntersectNode*>*>(this);
    }
    // public System.Int32 Compare(UnityEngine.Rendering.Universal.IntersectNode node1, UnityEngine.Rendering.Universal.IntersectNode node2)
    // Offset: 0x526CDDC
    int Compare(::UnityEngine::Rendering::Universal::IntersectNode* node1, ::UnityEngine::Rendering::Universal::IntersectNode* node2);
    // public System.Void .ctor()
    // Offset: 0x526CE14
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MyIntersectNodeSort* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::MyIntersectNodeSort::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MyIntersectNodeSort*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.MyIntersectNodeSort
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::MyIntersectNodeSort::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::Universal::MyIntersectNodeSort::*)(::UnityEngine::Rendering::Universal::IntersectNode*, ::UnityEngine::Rendering::Universal::IntersectNode*)>(&UnityEngine::Rendering::Universal::MyIntersectNodeSort::Compare)> {
  static const MethodInfo* get() {
    static auto* node1 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IntersectNode")->byval_arg;
    static auto* node2 = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "IntersectNode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::MyIntersectNodeSort*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node1, node2});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::MyIntersectNodeSort::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
