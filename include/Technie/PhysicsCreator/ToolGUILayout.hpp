// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: GUIContent
  class GUIContent;
  // Forward declaring type: GUIStyle
  class GUIStyle;
  // Forward declaring type: GUILayoutOption
  class GUILayoutOption;
}
// Completed forward declares
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Forward declaring type: ToolGUILayout
  class ToolGUILayout;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Technie::PhysicsCreator::ToolGUILayout);
DEFINE_IL2CPP_ARG_TYPE(::Technie::PhysicsCreator::ToolGUILayout*, "Technie.PhysicsCreator", "ToolGUILayout");
// Type namespace: Technie.PhysicsCreator
namespace Technie::PhysicsCreator {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Technie.PhysicsCreator.ToolGUILayout
  // [TokenAttribute] Offset: FFFFFFFF
  class ToolGUILayout : public ::Il2CppObject {
    public:
    // Get static field: static public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector2> buttonPositions
    static ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Vector2>* _get_buttonPositions();
    // Set static field: static public System.Collections.Generic.Dictionary`2<System.String,UnityEngine.Vector2> buttonPositions
    static void _set_buttonPositions(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Vector2>* value);
    // static public System.Boolean Button(System.String buttonName, ref UnityEngine.Vector2 buttonPos)
    // Offset: 0x503545C
    static bool Button(::StringW buttonName, ByRef<::UnityEngine::Vector2> buttonPos);
    // static public System.Boolean Button(System.String buttonId, UnityEngine.Rect rect, UnityEngine.GUIContent content, UnityEngine.GUIStyle style)
    // Offset: 0x5035578
    static bool Button(::StringW buttonId, ::UnityEngine::Rect rect, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style);
    // static public System.Boolean Button(System.String buttonId, UnityEngine.GUIContent content, UnityEngine.GUIStyle style, params UnityEngine.GUILayoutOption[] options)
    // Offset: 0x50356B4
    static bool Button(::StringW buttonId, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::ArrayW<::UnityEngine::GUILayoutOption*> options);
    // static public System.Boolean Button(System.String buttonId, System.String buttonName)
    // Offset: 0x50357F0
    static bool Button(::StringW buttonId, ::StringW buttonName);
    // static public UnityEngine.Vector2 GetButtonPosition(System.String buttonId)
    // Offset: 0x5035974
    static ::UnityEngine::Vector2 GetButtonPosition(::StringW buttonId);
    // public System.Void .ctor()
    // Offset: 0x50359F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ToolGUILayout* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Technie::PhysicsCreator::ToolGUILayout::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ToolGUILayout*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x50359FC
    static void _cctor();
  }; // Technie.PhysicsCreator.ToolGUILayout
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::UnityEngine::Vector2>)>(&Technie::PhysicsCreator::ToolGUILayout::Button)> {
  static const MethodInfo* get() {
    static auto* buttonName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* buttonPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonName, buttonPos});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&Technie::PhysicsCreator::ToolGUILayout::Button)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* rect = &::il2cpp_utils::GetClassFromName("UnityEngine", "Rect")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId, rect, content, style});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::ArrayW<::UnityEngine::GUILayoutOption*>)>(&Technie::PhysicsCreator::ToolGUILayout::Button)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* content = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIContent")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("UnityEngine", "GUIStyle")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "GUILayoutOption"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId, content, style, options});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::Button
// Il2CppName: Button
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&Technie::PhysicsCreator::ToolGUILayout::Button)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* buttonName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), "Button", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId, buttonName});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::GetButtonPosition
// Il2CppName: GetButtonPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::StringW)>(&Technie::PhysicsCreator::ToolGUILayout::GetButtonPosition)> {
  static const MethodInfo* get() {
    static auto* buttonId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), "GetButtonPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buttonId});
  }
};
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Technie::PhysicsCreator::ToolGUILayout::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Technie::PhysicsCreator::ToolGUILayout::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Technie::PhysicsCreator::ToolGUILayout*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};