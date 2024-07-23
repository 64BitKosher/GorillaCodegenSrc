// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: GorillaTag.GuidedRefs.IGuidedRefMonoBehaviour
#include "GorillaTag/GuidedRefs/IGuidedRefMonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GorillaTag::GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: GuidedRefBasicTargetInfo
  struct GuidedRefBasicTargetInfo;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Forward declaring type: IGuidedRefTargetMono
  class IGuidedRefTargetMono;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::GuidedRefs::IGuidedRefTargetMono);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::GuidedRefs::IGuidedRefTargetMono*, "GorillaTag.GuidedRefs", "IGuidedRefTargetMono");
// Type namespace: GorillaTag.GuidedRefs
namespace GorillaTag::GuidedRefs {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.GuidedRefs.IGuidedRefTargetMono
  // [TokenAttribute] Offset: FFFFFFFF
  class IGuidedRefTargetMono/*, public ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*/ {
    public:
    // Creating interface conversion operator: operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour
    operator ::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour() noexcept {
      return *reinterpret_cast<::GorillaTag::GuidedRefs::IGuidedRefMonoBehaviour*>(this);
    }
    // public GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo get_GRefTargetInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo get_GRefTargetInfo();
    // public System.Void set_GRefTargetInfo(GorillaTag.GuidedRefs.GuidedRefBasicTargetInfo value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_GRefTargetInfo(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo value);
    // public UnityEngine.Object get_GuidedRefTargetObject()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Object* get_GuidedRefTargetObject();
  }; // GorillaTag.GuidedRefs.IGuidedRefTargetMono
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GRefTargetInfo
// Il2CppName: get_GRefTargetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo (GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)()>(&GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GRefTargetInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefTargetMono*), "get_GRefTargetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefTargetMono::set_GRefTargetInfo
// Il2CppName: set_GRefTargetInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)(::GorillaTag::GuidedRefs::GuidedRefBasicTargetInfo)>(&GorillaTag::GuidedRefs::IGuidedRefTargetMono::set_GRefTargetInfo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("GorillaTag.GuidedRefs", "GuidedRefBasicTargetInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefTargetMono*), "set_GRefTargetInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GuidedRefTargetObject
// Il2CppName: get_GuidedRefTargetObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (GorillaTag::GuidedRefs::IGuidedRefTargetMono::*)()>(&GorillaTag::GuidedRefs::IGuidedRefTargetMono::get_GuidedRefTargetObject)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::GuidedRefs::IGuidedRefTargetMono*), "get_GuidedRefTargetObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
