// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.DocumentationInfo
#include "UnityEngine/Rendering/DocumentationInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: Documentation
  class Documentation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Rendering::Universal::Documentation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::Documentation*, "UnityEngine.Rendering.Universal", "Documentation");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Rendering.Universal.Documentation
  // [TokenAttribute] Offset: FFFFFFFF
  class Documentation : public ::UnityEngine::Rendering::DocumentationInfo {
    public:
    // static field const value: static public System.String packageName
    static constexpr const char* packageName = "com.unity.render-pipelines.universal";
    // Get static field: static public System.String packageName
    static ::StringW _get_packageName();
    // Set static field: static public System.String packageName
    static void _set_packageName(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x52BC12C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Documentation* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::Documentation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Documentation*, creationType>()));
    }
  }; // UnityEngine.Rendering.Universal.Documentation
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::Documentation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
