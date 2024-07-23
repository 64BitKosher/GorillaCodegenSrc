// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Request`1<T>
  template<typename T>
  class Request_1;
  // Forward declaring type: AvatarEditorOptions
  class AvatarEditorOptions;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AvatarEditorResult
  class AvatarEditorResult;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: Avatar
  class Avatar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::Avatar);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Avatar*, "Oculus.Platform", "Avatar");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.Avatar
  // [TokenAttribute] Offset: FFFFFFFF
  class Avatar : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.AvatarEditorResult> LaunchAvatarEditor(Oculus.Platform.AvatarEditorOptions options)
    // Offset: 0x487F6A0
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* LaunchAvatarEditor(::Oculus::Platform::AvatarEditorOptions* options);
  }; // Oculus.Platform.Avatar
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::Avatar::LaunchAvatarEditor
// Il2CppName: LaunchAvatarEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AvatarEditorResult*>* (*)(::Oculus::Platform::AvatarEditorOptions*)>(&Oculus::Platform::Avatar::LaunchAvatarEditor)> {
  static const MethodInfo* get() {
    static auto* options = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "AvatarEditorOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::Avatar*), "LaunchAvatarEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{options});
  }
};