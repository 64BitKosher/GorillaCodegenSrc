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
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: RunnerVisibilityNodeRoot
  class RunnerVisibilityNodeRoot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::RunnerVisibilityNodeRoot);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::RunnerVisibilityNodeRoot*, "Fusion", "RunnerVisibilityNodeRoot");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.RunnerVisibilityNodeRoot
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class RunnerVisibilityNodeRoot : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Awake()
    // Offset: 0x2B15204
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x2B15210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RunnerVisibilityNodeRoot* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::RunnerVisibilityNodeRoot::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RunnerVisibilityNodeRoot*, creationType>()));
    }
  }; // Fusion.RunnerVisibilityNodeRoot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodeRoot::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::RunnerVisibilityNodeRoot::*)()>(&Fusion::RunnerVisibilityNodeRoot::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::RunnerVisibilityNodeRoot*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::RunnerVisibilityNodeRoot::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
