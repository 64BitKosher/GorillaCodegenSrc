// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: TextCoreSettings
  struct TextCoreSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::TextCoreSettings, "UnityEngine.UIElements.UIR", "TextCoreSettings");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Size: 0x40
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.UIElements.UIR.TextCoreSettings
  // [TokenAttribute] Offset: FFFFFFFF
  struct TextCoreSettings/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*/ {
    public:
    public:
    // public UnityEngine.Color faceColor
    // Size: 0x10
    // Offset: 0x0
    ::UnityEngine::Color faceColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Color outlineColor
    // Size: 0x10
    // Offset: 0x10
    ::UnityEngine::Color outlineColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Single outlineWidth
    // Size: 0x4
    // Offset: 0x20
    float outlineWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.Color underlayColor
    // Size: 0x10
    // Offset: 0x24
    ::UnityEngine::Color underlayColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public UnityEngine.Vector2 underlayOffset
    // Size: 0x8
    // Offset: 0x34
    ::UnityEngine::Vector2 underlayOffset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Single underlaySoftness
    // Size: 0x4
    // Offset: 0x3C
    float underlaySoftness;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: TextCoreSettings
    constexpr TextCoreSettings(::UnityEngine::Color faceColor_ = {}, ::UnityEngine::Color outlineColor_ = {}, float outlineWidth_ = {}, ::UnityEngine::Color underlayColor_ = {}, ::UnityEngine::Vector2 underlayOffset_ = {}, float underlaySoftness_ = {}) noexcept : faceColor{faceColor_}, outlineColor{outlineColor_}, outlineWidth{outlineWidth_}, underlayColor{underlayColor_}, underlayOffset{underlayOffset_}, underlaySoftness{underlaySoftness_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>
    operator ::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::UIElements::UIR::TextCoreSettings>*>(this);
    }
    // Get instance field reference: public UnityEngine.Color faceColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_faceColor();
    // Get instance field reference: public UnityEngine.Color outlineColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_outlineColor();
    // Get instance field reference: public System.Single outlineWidth
    [[deprecated("Use field access instead!")]] float& dyn_outlineWidth();
    // Get instance field reference: public UnityEngine.Color underlayColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_underlayColor();
    // Get instance field reference: public UnityEngine.Vector2 underlayOffset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_underlayOffset();
    // Get instance field reference: public System.Single underlaySoftness
    [[deprecated("Use field access instead!")]] float& dyn_underlaySoftness();
    // public System.Boolean Equals(UnityEngine.UIElements.UIR.TextCoreSettings other)
    // Offset: 0x55D3388
    bool Equals(::UnityEngine::UIElements::UIR::TextCoreSettings other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x55D32F8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x55D347C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.UIElements.UIR.TextCoreSettings
  #pragma pack(pop)
  static check_size<sizeof(TextCoreSettings), 60 + sizeof(float)> __UnityEngine_UIElements_UIR_TextCoreSettingsSizeCheck;
  static_assert(sizeof(TextCoreSettings) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::TextCoreSettings::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::TextCoreSettings::*)(::UnityEngine::UIElements::UIR::TextCoreSettings)>(&UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.UIR", "TextCoreSettings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::TextCoreSettings), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::TextCoreSettings::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::UIR::TextCoreSettings::*)(::Il2CppObject*)>(&UnityEngine::UIElements::UIR::TextCoreSettings::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::TextCoreSettings), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::UIElements::UIR::TextCoreSettings::*)()>(&UnityEngine::UIElements::UIR::TextCoreSettings::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::UIR::TextCoreSettings), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
