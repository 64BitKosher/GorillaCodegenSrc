// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Text.TextElement
#include "UnityEngine/TextCore/Text/TextElement.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: SpriteCharacter
  class SpriteCharacter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteCharacter*, "UnityEngine.TextCore.Text", "SpriteCharacter");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.SpriteCharacter
  // [TokenAttribute] Offset: FFFFFFFF
  class SpriteCharacter : public ::UnityEngine::TextCore::Text::TextElement {
    public:
    public:
    // private System.String m_Name
    // Size: 0x8
    // Offset: 0x30
    ::StringW m_Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return m_Name;
    }
    // Get instance field reference: private System.String m_Name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Name();
    // public System.String get_name()
    // Offset: 0x55512C8
    ::StringW get_name();
    // public System.Void .ctor()
    // Offset: 0x555222C
    // Implemented from: UnityEngine.TextCore.Text.TextElement
    // Base method: System.Void TextElement::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpriteCharacter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Text::SpriteCharacter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpriteCharacter*, creationType>()));
    }
  }; // UnityEngine.TextCore.Text.SpriteCharacter
  #pragma pack(pop)
  static check_size<sizeof(SpriteCharacter), 48 + sizeof(::StringW)> __UnityEngine_TextCore_Text_SpriteCharacterSizeCheck;
  static_assert(sizeof(SpriteCharacter) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteCharacter::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::TextCore::Text::SpriteCharacter::*)()>(&UnityEngine::TextCore::Text::SpriteCharacter::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::SpriteCharacter*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteCharacter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!