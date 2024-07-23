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
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GorillaScoreCounter
  class GorillaScoreCounter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GorillaScoreCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GorillaScoreCounter*, "", "GorillaScoreCounter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: GorillaScoreCounter
  // [TokenAttribute] Offset: FFFFFFFF
  class GorillaScoreCounter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // public System.Boolean isRedTeam
    // Size: 0x1
    // Offset: 0x20
    bool isRedTeam;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isRedTeam and: text
    char __padding0[0x7] = {};
    // public UnityEngine.UI.Text text
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Text* text;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // public System.String attribute
    // Size: 0x8
    // Offset: 0x30
    ::StringW attribute;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Boolean isRedTeam
    [[deprecated("Use field access instead!")]] bool& dyn_isRedTeam();
    // Get instance field reference: public UnityEngine.UI.Text text
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_text();
    // Get instance field reference: public System.String attribute
    [[deprecated("Use field access instead!")]] ::StringW& dyn_attribute();
    // private System.Void Awake()
    // Offset: 0x26F2AA4
    void Awake();
    // private System.Void Update()
    // Offset: 0x26F2B54
    void Update();
    // public System.Void .ctor()
    // Offset: 0x26F2C90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GorillaScoreCounter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GorillaScoreCounter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GorillaScoreCounter*, creationType>()));
    }
  }; // GorillaScoreCounter
  #pragma pack(pop)
  static check_size<sizeof(GorillaScoreCounter), 48 + sizeof(::StringW)> __GlobalNamespace_GorillaScoreCounterSizeCheck;
  static_assert(sizeof(GorillaScoreCounter) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreCounter::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreCounter::*)()>(&GlobalNamespace::GorillaScoreCounter::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreCounter*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreCounter::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GorillaScoreCounter::*)()>(&GlobalNamespace::GorillaScoreCounter::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GorillaScoreCounter*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GorillaScoreCounter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
