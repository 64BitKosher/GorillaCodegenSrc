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
// Type namespace: GorillaTag
namespace GorillaTag {
  // Forward declaring type: InspectorNote
  class InspectorNote;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTag::InspectorNote);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTag::InspectorNote*, "GorillaTag", "InspectorNote");
// Type namespace: GorillaTag
namespace GorillaTag {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTag.InspectorNote
  // [TokenAttribute] Offset: FFFFFFFF
  class InspectorNote : public ::UnityEngine::MonoBehaviour {
    public:
    // protected System.Void Awake()
    // Offset: 0x28796B4
    void Awake();
    // public System.Void .ctor()
    // Offset: 0x287970C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InspectorNote* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTag::InspectorNote::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InspectorNote*, creationType>()));
    }
  }; // GorillaTag.InspectorNote
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTag::InspectorNote::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTag::InspectorNote::*)()>(&GorillaTag::InspectorNote::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTag::InspectorNote*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTag::InspectorNote::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
