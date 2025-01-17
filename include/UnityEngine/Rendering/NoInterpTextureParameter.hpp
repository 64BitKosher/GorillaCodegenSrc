// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.VolumeParameter`1
#include "UnityEngine/Rendering/VolumeParameter_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: NoInterpTextureParameter
  class NoInterpTextureParameter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::NoInterpTextureParameter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::NoInterpTextureParameter*, "UnityEngine.Rendering", "NoInterpTextureParameter");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.NoInterpTextureParameter
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: FFFFFFFF
  class NoInterpTextureParameter : public ::UnityEngine::Rendering::VolumeParameter_1<::UnityEngine::Texture*> {
    public:
    // public System.Void .ctor(UnityEngine.Texture value, System.Boolean overrideState)
    // Offset: 0x5263DBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoInterpTextureParameter* New_ctor(::UnityEngine::Texture* value, bool overrideState) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::NoInterpTextureParameter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoInterpTextureParameter*, creationType>(value, overrideState)));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x5263E1C
    // Implemented from: UnityEngine.Rendering.VolumeParameter`1
    // Base method: System.Int32 VolumeParameter_1::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.NoInterpTextureParameter
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::NoInterpTextureParameter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::NoInterpTextureParameter::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::NoInterpTextureParameter::*)()>(&UnityEngine::Rendering::NoInterpTextureParameter::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::NoInterpTextureParameter*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
