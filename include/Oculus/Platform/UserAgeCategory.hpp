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
  // Forward declaring type: Request
  class Request;
  // Forward declaring type: AppAgeCategory
  struct AppAgeCategory;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: UserAccountAgeCategory
  class UserAccountAgeCategory;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: UserAgeCategory
  class UserAgeCategory;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::UserAgeCategory);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::UserAgeCategory*, "Oculus.Platform", "UserAgeCategory");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.UserAgeCategory
  // [TokenAttribute] Offset: FFFFFFFF
  class UserAgeCategory : public ::Il2CppObject {
    public:
    // static public Oculus.Platform.Request`1<Oculus.Platform.Models.UserAccountAgeCategory> Get()
    // Offset: 0x488216C
    static ::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* Get();
    // static public Oculus.Platform.Request Report(Oculus.Platform.AppAgeCategory age_category)
    // Offset: 0x48822BC
    static ::Oculus::Platform::Request* Report(::Oculus::Platform::AppAgeCategory age_category);
  }; // Oculus.Platform.UserAgeCategory
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::UserAgeCategory::Get
// Il2CppName: Get
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::UserAccountAgeCategory*>* (*)()>(&Oculus::Platform::UserAgeCategory::Get)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserAgeCategory*), "Get", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::UserAgeCategory::Report
// Il2CppName: Report
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request* (*)(::Oculus::Platform::AppAgeCategory)>(&Oculus::Platform::UserAgeCategory::Report)> {
  static const MethodInfo* get() {
    static auto* age_category = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "AppAgeCategory")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::UserAgeCategory*), "Report", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{age_category});
  }
};
