// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: CustomDebugUI
  class CustomDebugUI;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CustomDebugUI);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDebugUI*, "", "CustomDebugUI");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: CustomDebugUI
  // [TokenAttribute] Offset: FFFFFFFF
  class CustomDebugUI : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.RectTransform textPrefab
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* textPrefab;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    public:
    // Get static field: static public CustomDebugUI instance
    static ::GlobalNamespace::CustomDebugUI* _get_instance();
    // Set static field: static public CustomDebugUI instance
    static void _set_instance(::GlobalNamespace::CustomDebugUI* value);
    // static field const value: static private System.Reflection.BindingFlags privateFlags
    static constexpr const int privateFlags = 36;
    // Get static field: static private System.Reflection.BindingFlags privateFlags
    static ::System::Reflection::BindingFlags _get_privateFlags();
    // Set static field: static private System.Reflection.BindingFlags privateFlags
    static void _set_privateFlags(::System::Reflection::BindingFlags value);
    // Get instance field reference: private UnityEngine.RectTransform textPrefab
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_textPrefab();
    // private System.Void Awake()
    // Offset: 0x292C060
    void Awake();
    // public UnityEngine.RectTransform AddTextField(System.String label, System.Int32 targetCanvas)
    // Offset: 0x292B738
    ::UnityEngine::RectTransform* AddTextField(::StringW label, int targetCanvas);
    // public System.Void RemoveFromCanvas(UnityEngine.RectTransform element, System.Int32 targetCanvas)
    // Offset: 0x292C0B8
    void RemoveFromCanvas(::UnityEngine::RectTransform* element, int targetCanvas);
    // public System.Void .ctor()
    // Offset: 0x292C2D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CustomDebugUI* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CustomDebugUI::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CustomDebugUI*, creationType>()));
    }
  }; // CustomDebugUI
  #pragma pack(pop)
  static check_size<sizeof(CustomDebugUI), 32 + sizeof(::UnityEngine::RectTransform*)> __GlobalNamespace_CustomDebugUISizeCheck;
  static_assert(sizeof(CustomDebugUI) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CustomDebugUI::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDebugUI::*)()>(&GlobalNamespace::CustomDebugUI::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDebugUI*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDebugUI::AddTextField
// Il2CppName: AddTextField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (GlobalNamespace::CustomDebugUI::*)(::StringW, int)>(&GlobalNamespace::CustomDebugUI::AddTextField)> {
  static const MethodInfo* get() {
    static auto* label = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* targetCanvas = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDebugUI*), "AddTextField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{label, targetCanvas});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDebugUI::RemoveFromCanvas
// Il2CppName: RemoveFromCanvas
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CustomDebugUI::*)(::UnityEngine::RectTransform*, int)>(&GlobalNamespace::CustomDebugUI::RemoveFromCanvas)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    static auto* targetCanvas = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CustomDebugUI*), "RemoveFromCanvas", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element, targetCanvas});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CustomDebugUI::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
