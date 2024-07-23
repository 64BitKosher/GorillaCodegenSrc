// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.DebugTree.INodeUI`1
#include "Oculus/Interaction/DebugTree/INodeUI_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: Oculus::Interaction::DebugTree
namespace Oculus::Interaction::DebugTree {
  // Forward declaring type: ITreeNode`1<TLeaf>
  template<typename TLeaf>
  class ITreeNode_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Forward declaring type: ActiveStateNodeUIVertical
  class ActiveStateNodeUIVertical;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*, "Oculus.Interaction.PoseDetection.Debug", "ActiveStateNodeUIVertical");
// Type namespace: Oculus.Interaction.PoseDetection.Debug
namespace Oculus::Interaction::PoseDetection::Debug {
  // Size: 0x6A
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.PoseDetection.Debug.ActiveStateNodeUIVertical
  // [TokenAttribute] Offset: FFFFFFFF
  class ActiveStateNodeUIVertical : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>*/ {
    public:
    public:
    // private UnityEngine.RectTransform _childArea
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* childArea;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.RectTransform _connectingLine
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::RectTransform* connectingLine;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private TMPro.TextMeshProUGUI _label
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshProUGUI* label;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Image _activeImage
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::UI::Image* activeImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private UnityEngine.Color _activeColor
    // Size: 0x10
    // Offset: 0x40
    ::UnityEngine::Color activeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color _inactiveColor
    // Size: 0x10
    // Offset: 0x50
    ::UnityEngine::Color inactiveColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private Oculus.Interaction.DebugTree.ITreeNode`1<Oculus.Interaction.IActiveState> _boundNode
    // Size: 0x8
    // Offset: 0x60
    ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>* boundNode;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*) == 0x8);
    // private System.Boolean _isRoot
    // Size: 0x1
    // Offset: 0x68
    bool isRoot;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isDuplicate
    // Size: 0x1
    // Offset: 0x69
    bool isDuplicate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>
    operator ::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::DebugTree::INodeUI_1<::Oculus::Interaction::IActiveState*>*>(this);
    }
    // static field const value: static private System.String OBJNAME_FORMAT
    static constexpr const char* OBJNAME_FORMAT = "<color=#dddddd><size=85%>{0}</size></color>";
    // Get static field: static private System.String OBJNAME_FORMAT
    static ::StringW _get_OBJNAME_FORMAT();
    // Set static field: static private System.String OBJNAME_FORMAT
    static void _set_OBJNAME_FORMAT(::StringW value);
    // Get instance field reference: private UnityEngine.RectTransform _childArea
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__childArea();
    // Get instance field reference: private UnityEngine.RectTransform _connectingLine
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn__connectingLine();
    // Get instance field reference: private TMPro.TextMeshProUGUI _label
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__label();
    // Get instance field reference: private UnityEngine.UI.Image _activeImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__activeImage();
    // Get instance field reference: private UnityEngine.Color _activeColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__activeColor();
    // Get instance field reference: private UnityEngine.Color _inactiveColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__inactiveColor();
    // Get instance field reference: private Oculus.Interaction.DebugTree.ITreeNode`1<Oculus.Interaction.IActiveState> _boundNode
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*& dyn__boundNode();
    // Get instance field reference: private System.Boolean _isRoot
    [[deprecated("Use field access instead!")]] bool& dyn__isRoot();
    // Get instance field reference: private System.Boolean _isDuplicate
    [[deprecated("Use field access instead!")]] bool& dyn__isDuplicate();
    // public UnityEngine.RectTransform get_ChildArea()
    // Offset: 0x47F80F0
    ::UnityEngine::RectTransform* get_ChildArea();
    // public System.Void Bind(Oculus.Interaction.DebugTree.ITreeNode`1<Oculus.Interaction.IActiveState> node, System.Boolean isRoot, System.Boolean isDuplicate)
    // Offset: 0x47F80F8
    void Bind(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>* node, bool isRoot, bool isDuplicate);
    // protected System.Void Start()
    // Offset: 0x47F835C
    void Start();
    // protected System.Void Update()
    // Offset: 0x47F8360
    void Update();
    // private System.String GetLabelText(Oculus.Interaction.DebugTree.ITreeNode`1<Oculus.Interaction.IActiveState> node)
    // Offset: 0x47F8158
    ::StringW GetLabelText(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>* node);
    // public System.Void .ctor()
    // Offset: 0x47F8530
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActiveStateNodeUIVertical* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActiveStateNodeUIVertical*, creationType>()));
    }
  }; // Oculus.Interaction.PoseDetection.Debug.ActiveStateNodeUIVertical
  #pragma pack(pop)
  static check_size<sizeof(ActiveStateNodeUIVertical), 105 + sizeof(bool)> __Oculus_Interaction_PoseDetection_Debug_ActiveStateNodeUIVerticalSizeCheck;
  static_assert(sizeof(ActiveStateNodeUIVertical) == 0x6A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::get_ChildArea
// Il2CppName: get_ChildArea
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::get_ChildArea)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*), "get_ChildArea", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::*)(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*, bool, bool)>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Bind)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Interaction.DebugTree", "ITreeNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")})->byval_arg;
    static auto* isRoot = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* isDuplicate = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node, isRoot, isDuplicate});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::*)()>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::GetLabelText
// Il2CppName: GetLabelText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::*)(::Oculus::Interaction::DebugTree::ITreeNode_1<::Oculus::Interaction::IActiveState*>*)>(&Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::GetLabelText)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("Oculus.Interaction.DebugTree", "ITreeNode`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical*), "GetLabelText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::PoseDetection::Debug::ActiveStateNodeUIVertical::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
