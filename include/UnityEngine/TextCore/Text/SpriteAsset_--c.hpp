// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.TextCore.Text.SpriteAsset
#include "UnityEngine/TextCore/Text/SpriteAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TextCore::Text
namespace UnityEngine::TextCore::Text {
  // Forward declaring type: SpriteGlyph
  class SpriteGlyph;
  // Forward declaring type: SpriteCharacter
  class SpriteCharacter;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TextCore::Text::SpriteAsset::$$c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::SpriteAsset::$$c*, "UnityEngine.TextCore.Text", "SpriteAsset/<>c");
// Type namespace: UnityEngine.TextCore.Text
namespace UnityEngine::TextCore::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TextCore.Text.SpriteAsset/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class SpriteAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TextCore.Text.SpriteAsset/<>c <>9
    static ::UnityEngine::TextCore::Text::SpriteAsset::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TextCore.Text.SpriteAsset/<>c <>9
    static void _set_$$9(::UnityEngine::TextCore::Text::SpriteAsset::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Text.SpriteGlyph,System.UInt32> <>9__37_0
    static ::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint>* _get_$$9__37_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Text.SpriteGlyph,System.UInt32> <>9__37_0
    static void _set_$$9__37_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteGlyph*, uint>* value);
    // Get static field: static public System.Func`2<UnityEngine.TextCore.Text.SpriteCharacter,System.UInt32> <>9__38_0
    static ::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint>* _get_$$9__38_0();
    // Set static field: static public System.Func`2<UnityEngine.TextCore.Text.SpriteCharacter,System.UInt32> <>9__38_0
    static void _set_$$9__38_0(::System::Func_2<::UnityEngine::TextCore::Text::SpriteCharacter*, uint>* value);
    // static private System.Void .cctor()
    // Offset: 0x555218C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x55521F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SpriteAsset::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::TextCore::Text::SpriteAsset::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SpriteAsset::$$c*, creationType>()));
    }
    // System.UInt32 <SortGlyphTable>b__37_0(UnityEngine.TextCore.Text.SpriteGlyph item)
    // Offset: 0x55521FC
    uint $SortGlyphTable$b__37_0(::UnityEngine::TextCore::Text::SpriteGlyph* item);
    // System.UInt32 <SortCharacterTable>b__38_0(UnityEngine.TextCore.Text.SpriteCharacter c)
    // Offset: 0x5552214
    uint $SortCharacterTable$b__38_0(::UnityEngine::TextCore::Text::SpriteCharacter* c);
  }; // UnityEngine.TextCore.Text.SpriteAsset/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteAsset::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TextCore::Text::SpriteAsset::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::SpriteAsset::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteAsset::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteAsset::$$c::$SortGlyphTable$b__37_0
// Il2CppName: <SortGlyphTable>b__37_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Text::SpriteAsset::$$c::*)(::UnityEngine::TextCore::Text::SpriteGlyph*)>(&UnityEngine::TextCore::Text::SpriteAsset::$$c::$SortGlyphTable$b__37_0)> {
  static const MethodInfo* get() {
    static auto* item = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "SpriteGlyph")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::SpriteAsset::$$c*), "<SortGlyphTable>b__37_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{item});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::Text::SpriteAsset::$$c::$SortCharacterTable$b__38_0
// Il2CppName: <SortCharacterTable>b__38_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (UnityEngine::TextCore::Text::SpriteAsset::$$c::*)(::UnityEngine::TextCore::Text::SpriteCharacter*)>(&UnityEngine::TextCore::Text::SpriteAsset::$$c::$SortCharacterTable$b__38_0)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("UnityEngine.TextCore.Text", "SpriteCharacter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::Text::SpriteAsset::$$c*), "<SortCharacterTable>b__38_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
