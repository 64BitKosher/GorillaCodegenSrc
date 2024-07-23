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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Forward declaring type: SceneManagerHelper
  class SceneManagerHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Photon::Pun::SceneManagerHelper);
DEFINE_IL2CPP_ARG_TYPE(::Photon::Pun::SceneManagerHelper*, "Photon.Pun", "SceneManagerHelper");
// Type namespace: Photon.Pun
namespace Photon::Pun {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Photon.Pun.SceneManagerHelper
  // [TokenAttribute] Offset: FFFFFFFF
  class SceneManagerHelper : public ::Il2CppObject {
    public:
    // static public System.String get_ActiveSceneName()
    // Offset: 0x4A588E4
    static ::StringW get_ActiveSceneName();
    // static public System.Int32 get_ActiveSceneBuildIndex()
    // Offset: 0x4A58948
    static int get_ActiveSceneBuildIndex();
    // public System.Void .ctor()
    // Offset: 0x4A589AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneManagerHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Photon::Pun::SceneManagerHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneManagerHelper*, creationType>()));
    }
  }; // Photon.Pun.SceneManagerHelper
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Photon::Pun::SceneManagerHelper::get_ActiveSceneName
// Il2CppName: get_ActiveSceneName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Photon::Pun::SceneManagerHelper::get_ActiveSceneName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::SceneManagerHelper*), "get_ActiveSceneName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::SceneManagerHelper::get_ActiveSceneBuildIndex
// Il2CppName: get_ActiveSceneBuildIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Photon::Pun::SceneManagerHelper::get_ActiveSceneBuildIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Photon::Pun::SceneManagerHelper*), "get_ActiveSceneBuildIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Photon::Pun::SceneManagerHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
