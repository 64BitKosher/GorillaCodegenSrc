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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: UnityReferenceHelper
  class UnityReferenceHelper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::UnityReferenceHelper);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::UnityReferenceHelper*, "Pathfinding", "UnityReferenceHelper");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.UnityReferenceHelper
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class UnityReferenceHelper : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String guid
    // Size: 0x8
    // Offset: 0x20
    ::StringW guid;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String guid
    [[deprecated("Use field access instead!")]] ::StringW& dyn_guid();
    // public System.String GetGUID()
    // Offset: 0x2A0D75C
    ::StringW GetGUID();
    // public System.Void Awake()
    // Offset: 0x2A0D764
    void Awake();
    // public System.Void Reset()
    // Offset: 0x2A0D768
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x2A0D9C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityReferenceHelper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::UnityReferenceHelper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityReferenceHelper*, creationType>()));
    }
  }; // Pathfinding.UnityReferenceHelper
  #pragma pack(pop)
  static check_size<sizeof(UnityReferenceHelper), 32 + sizeof(::StringW)> __Pathfinding_UnityReferenceHelperSizeCheck;
  static_assert(sizeof(UnityReferenceHelper) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::UnityReferenceHelper::GetGUID
// Il2CppName: GetGUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::UnityReferenceHelper::*)()>(&Pathfinding::UnityReferenceHelper::GetGUID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::UnityReferenceHelper*), "GetGUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::UnityReferenceHelper::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::UnityReferenceHelper::*)()>(&Pathfinding::UnityReferenceHelper::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::UnityReferenceHelper*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::UnityReferenceHelper::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::UnityReferenceHelper::*)()>(&Pathfinding::UnityReferenceHelper::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::UnityReferenceHelper*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::UnityReferenceHelper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!