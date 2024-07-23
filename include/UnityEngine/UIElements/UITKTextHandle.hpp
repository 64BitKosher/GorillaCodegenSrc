// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Text.TextHandle
#include "UnityEngine/TextCore/Text/TextHandle.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: TextElement
  class TextElement;
  // Forward declaring type: PointerUpEvent
  class PointerUpEvent;
  // Forward declaring type: PointerOverEvent
  class PointerOverEvent;
  // Forward declaring type: PointerMoveEvent
  class PointerMoveEvent;
  // Forward declaring type: PointerOutEvent
  class PointerOutEvent;
  // Forward declaring type: PointerDownEvent
  class PointerDownEvent;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: TextInfo
  class TextInfo;
  // Forward declaring type: TextOverflowMode
  struct TextOverflowMode;
  // Forward declaring type: TextGenerationSettings
  class TextGenerationSettings;
  // Forward declaring type: FontAsset
  class FontAsset;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: UITKTextHandle
  class UITKTextHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::UITKTextHandle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UITKTextHandle*, "UnityEngine.UIElements", "UITKTextHandle");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x5A
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.UITKTextHandle
  // [TokenAttribute] Offset: FFFFFFFF
  class UITKTextHandle : public ::UnityEngine::TextCore::Text::TextHandle {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x34
    char ___base_padding[0x3] = {};
    public:
    // private UnityEngine.Vector2 <MeasuredSizes>k__BackingField
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2 MeasuredSizes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // private UnityEngine.Vector2 <RoundedSizes>k__BackingField
    // Size: 0x8
    // Offset: 0x3C
    ::UnityEngine::Vector2 RoundedSizes;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // Padding between fields: RoundedSizes and: m_TextElement
    char __padding1[0x4] = {};
    // private UnityEngine.UIElements.TextElement m_TextElement
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::UIElements::TextElement* m_TextElement;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::TextElement*) == 0x8);
    // System.Boolean isOverridingCursor
    // Size: 0x1
    // Offset: 0x50
    bool isOverridingCursor;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOverridingCursor and: currentLinkIDHash
    char __padding3[0x3] = {};
    // System.Int32 currentLinkIDHash
    // Size: 0x4
    // Offset: 0x54
    int currentLinkIDHash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Boolean hasLinkTag
    // Size: 0x1
    // Offset: 0x58
    bool hasLinkTag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // System.Boolean hasATag
    // Size: 0x1
    // Offset: 0x59
    bool hasATag;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static readonly System.Single k_MinPadding
    static float _get_k_MinPadding();
    // Set static field: static readonly System.Single k_MinPadding
    static void _set_k_MinPadding(float value);
    // Get instance field reference: private UnityEngine.Vector2 <MeasuredSizes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$MeasuredSizes$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector2 <RoundedSizes>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_$RoundedSizes$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.TextElement m_TextElement
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::TextElement*& dyn_m_TextElement();
    // Get instance field reference: System.Boolean isOverridingCursor
    [[deprecated("Use field access instead!")]] bool& dyn_isOverridingCursor();
    // Get instance field reference: System.Int32 currentLinkIDHash
    [[deprecated("Use field access instead!")]] int& dyn_currentLinkIDHash();
    // Get instance field reference: System.Boolean hasLinkTag
    [[deprecated("Use field access instead!")]] bool& dyn_hasLinkTag();
    // Get instance field reference: System.Boolean hasATag
    [[deprecated("Use field access instead!")]] bool& dyn_hasATag();
    // public System.Void .ctor(UnityEngine.UIElements.TextElement te)
    // Offset: 0x56B67EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UITKTextHandle* New_ctor(::UnityEngine::UIElements::TextElement* te) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UITKTextHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UITKTextHandle*, creationType>(te)));
    }
    // public UnityEngine.Vector2 get_MeasuredSizes()
    // Offset: 0x56B6870
    ::UnityEngine::Vector2 get_MeasuredSizes();
    // public System.Void set_MeasuredSizes(UnityEngine.Vector2 value)
    // Offset: 0x56B6878
    void set_MeasuredSizes(::UnityEngine::Vector2 value);
    // public UnityEngine.Vector2 get_RoundedSizes()
    // Offset: 0x56B6880
    ::UnityEngine::Vector2 get_RoundedSizes();
    // public System.Void set_RoundedSizes(UnityEngine.Vector2 value)
    // Offset: 0x56B6888
    void set_RoundedSizes(::UnityEngine::Vector2 value);
    // public System.Single ComputeTextWidth(System.String textToMeasure, System.Boolean wordWrap, System.Single width, System.Single height)
    // Offset: 0x56B6890
    float ComputeTextWidth(::StringW textToMeasure, bool wordWrap, float width, float height);
    // public System.Single ComputeTextHeight(System.String textToMeasure, System.Single width, System.Single height)
    // Offset: 0x56B6C94
    float ComputeTextHeight(::StringW textToMeasure, float width, float height);
    // public UnityEngine.TextCore.Text.TextInfo Update()
    // Offset: 0x56B6D5C
    ::UnityEngine::TextCore::Text::TextInfo* Update();
    // private System.Void ATagOnPointerUp(UnityEngine.UIElements.PointerUpEvent pue)
    // Offset: 0x56B777C
    void ATagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);
    // private System.Void ATagOnPointerOver(UnityEngine.UIElements.PointerOverEvent _)
    // Offset: 0x56B7918
    void ATagOnPointerOver(::UnityEngine::UIElements::PointerOverEvent* _);
    // private System.Void ATagOnPointerMove(UnityEngine.UIElements.PointerMoveEvent pme)
    // Offset: 0x56B7920
    void ATagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);
    // private System.Void ATagOnPointerOut(UnityEngine.UIElements.PointerOutEvent _)
    // Offset: 0x56B7BD8
    void ATagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* _);
    // System.Void LinkTagOnPointerDown(UnityEngine.UIElements.PointerDownEvent pde)
    // Offset: 0x56B7BE0
    void LinkTagOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* pde);
    // System.Void LinkTagOnPointerUp(UnityEngine.UIElements.PointerUpEvent pue)
    // Offset: 0x56B7ED8
    void LinkTagOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* pue);
    // System.Void LinkTagOnPointerMove(UnityEngine.UIElements.PointerMoveEvent pme)
    // Offset: 0x56B81D0
    void LinkTagOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* pme);
    // private System.Void LinkTagOnPointerOut(UnityEngine.UIElements.PointerOutEvent poe)
    // Offset: 0x56B8818
    void LinkTagOnPointerOut(::UnityEngine::UIElements::PointerOutEvent* poe);
    // private System.Void HandleLinkTag()
    // Offset: 0x56B736C
    void HandleLinkTag();
    // private System.Void HandleATag()
    // Offset: 0x56B6E44
    void HandleATag();
    // private UnityEngine.TextCore.Text.TextOverflowMode GetTextOverflowMode()
    // Offset: 0x56B8A28
    ::UnityEngine::TextCore::Text::TextOverflowMode GetTextOverflowMode();
    // System.Void ConvertUssToTextGenerationSettings(UnityEngine.TextCore.Text.TextGenerationSettings tgs)
    // Offset: 0x56B6968
    void ConvertUssToTextGenerationSettings(::UnityEngine::TextCore::Text::TextGenerationSettings* tgs);
    // System.Boolean TextLibraryCanElide()
    // Offset: 0x56B8ACC
    bool TextLibraryCanElide();
    // System.Single GetTextEffectPadding(UnityEngine.TextCore.Text.FontAsset fontAsset)
    // Offset: 0x56B8D7C
    float GetTextEffectPadding(::UnityEngine::TextCore::Text::FontAsset* fontAsset);
    // static private System.Void .cctor()
    // Offset: 0x56B90B4
    static void _cctor();
  }; // UnityEngine.UIElements.UITKTextHandle
  #pragma pack(pop)
  static check_size<sizeof(UITKTextHandle), 89 + sizeof(bool)> __UnityEngine_UIElements_UITKTextHandleSizeCheck;
  static_assert(sizeof(UITKTextHandle) == 0x5A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes
// Il2CppName: get_MeasuredSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::get_MeasuredSizes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "get_MeasuredSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes
// Il2CppName: set_MeasuredSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::UITKTextHandle::set_MeasuredSizes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "set_MeasuredSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes
// Il2CppName: get_RoundedSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::get_RoundedSizes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "get_RoundedSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes
// Il2CppName: set_RoundedSizes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::Vector2)>(&UnityEngine::UIElements::UITKTextHandle::set_RoundedSizes)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "set_RoundedSizes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ComputeTextWidth
// Il2CppName: ComputeTextWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::UITKTextHandle::*)(::StringW, bool, float, float)>(&UnityEngine::UIElements::UITKTextHandle::ComputeTextWidth)> {
  static const MethodInfo* get() {
    static auto* textToMeasure = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* wordWrap = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ComputeTextWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textToMeasure, wordWrap, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ComputeTextHeight
// Il2CppName: ComputeTextHeight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::UITKTextHandle::*)(::StringW, float, float)>(&UnityEngine::UIElements::UITKTextHandle::ComputeTextHeight)> {
  static const MethodInfo* get() {
    static auto* textToMeasure = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ComputeTextHeight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{textToMeasure, width, height});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextInfo* (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ATagOnPointerUp
// Il2CppName: ATagOnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerUpEvent*)>(&UnityEngine::UIElements::UITKTextHandle::ATagOnPointerUp)> {
  static const MethodInfo* get() {
    static auto* pue = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerUpEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ATagOnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ATagOnPointerOver
// Il2CppName: ATagOnPointerOver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerOverEvent*)>(&UnityEngine::UIElements::UITKTextHandle::ATagOnPointerOver)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerOverEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ATagOnPointerOver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ATagOnPointerMove
// Il2CppName: ATagOnPointerMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(&UnityEngine::UIElements::UITKTextHandle::ATagOnPointerMove)> {
  static const MethodInfo* get() {
    static auto* pme = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerMoveEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ATagOnPointerMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pme});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ATagOnPointerOut
// Il2CppName: ATagOnPointerOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerOutEvent*)>(&UnityEngine::UIElements::UITKTextHandle::ATagOnPointerOut)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerOutEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ATagOnPointerOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerDown
// Il2CppName: LinkTagOnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerDownEvent*)>(&UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerDown)> {
  static const MethodInfo* get() {
    static auto* pde = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerDownEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "LinkTagOnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pde});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerUp
// Il2CppName: LinkTagOnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerUpEvent*)>(&UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerUp)> {
  static const MethodInfo* get() {
    static auto* pue = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerUpEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "LinkTagOnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pue});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerMove
// Il2CppName: LinkTagOnPointerMove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerMoveEvent*)>(&UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerMove)> {
  static const MethodInfo* get() {
    static auto* pme = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerMoveEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "LinkTagOnPointerMove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pme});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerOut
// Il2CppName: LinkTagOnPointerOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::UIElements::PointerOutEvent*)>(&UnityEngine::UIElements::UITKTextHandle::LinkTagOnPointerOut)> {
  static const MethodInfo* get() {
    static auto* poe = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "PointerOutEvent")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "LinkTagOnPointerOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{poe});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::HandleLinkTag
// Il2CppName: HandleLinkTag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::HandleLinkTag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "HandleLinkTag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::HandleATag
// Il2CppName: HandleATag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::HandleATag)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "HandleATag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode
// Il2CppName: GetTextOverflowMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::TextCore::Text::TextOverflowMode (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::GetTextOverflowMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "GetTextOverflowMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings
// Il2CppName: ConvertUssToTextGenerationSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::Text::TextGenerationSettings*)>(&UnityEngine::UIElements::UITKTextHandle::ConvertUssToTextGenerationSettings)> {
  static const MethodInfo* get() {
    static auto* tgs = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "TextGenerationSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "ConvertUssToTextGenerationSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tgs});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide
// Il2CppName: TextLibraryCanElide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UITKTextHandle::*)()>(&UnityEngine::UIElements::UITKTextHandle::TextLibraryCanElide)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "TextLibraryCanElide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::GetTextEffectPadding
// Il2CppName: GetTextEffectPadding
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::UIElements::UITKTextHandle::*)(::UnityEngine::TextCore::Text::FontAsset*)>(&UnityEngine::UIElements::UITKTextHandle::GetTextEffectPadding)> {
  static const MethodInfo* get() {
    static auto* fontAsset = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "FontAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), "GetTextEffectPadding", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fontAsset});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UITKTextHandle::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::UIElements::UITKTextHandle::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UITKTextHandle*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};