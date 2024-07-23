// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
  // Forward declaring type: NormalizationCheck
  struct NormalizationCheck;
  // Forward declaring type: NormalizationForm
  struct NormalizationForm;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Forward declaring type: Normalization
  class Normalization;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::Normalization);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Normalization*, "System.Text", "Normalization");
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Normalization
  // [TokenAttribute] Offset: FFFFFFFF
  class Normalization : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte* props
    static uint8_t* _get_props();
    // Set static field: static private System.Byte* props
    static void _set_props(uint8_t* value);
    // Get static field: static private System.Int32* mappedChars
    static int* _get_mappedChars();
    // Set static field: static private System.Int32* mappedChars
    static void _set_mappedChars(int* value);
    // Get static field: static private System.Int16* charMapIndex
    static int16_t* _get_charMapIndex();
    // Set static field: static private System.Int16* charMapIndex
    static void _set_charMapIndex(int16_t* value);
    // Get static field: static private System.Int16* helperIndex
    static int16_t* _get_helperIndex();
    // Set static field: static private System.Int16* helperIndex
    static void _set_helperIndex(int16_t* value);
    // Get static field: static private System.UInt16* mapIdxToComposite
    static uint16_t* _get_mapIdxToComposite();
    // Set static field: static private System.UInt16* mapIdxToComposite
    static void _set_mapIdxToComposite(uint16_t* value);
    // Get static field: static private System.Byte* combiningClass
    static uint8_t* _get_combiningClass();
    // Set static field: static private System.Byte* combiningClass
    static void _set_combiningClass(uint8_t* value);
    // Get static field: static private System.Object forLock
    static ::Il2CppObject* _get_forLock();
    // Set static field: static private System.Object forLock
    static void _set_forLock(::Il2CppObject* value);
    // Get static field: static public readonly System.Boolean isReady
    static bool _get_isReady();
    // Set static field: static public readonly System.Boolean isReady
    static void _set_isReady(bool value);
    // static private System.UInt32 PropValue(System.Int32 cp)
    // Offset: 0x44E364C
    static uint PropValue(int cp);
    // static private System.Int32 CharMapIdx(System.Int32 cp)
    // Offset: 0x44E36E0
    static int CharMapIdx(int cp);
    // static private System.Byte GetCombiningClass(System.Int32 c)
    // Offset: 0x44E3774
    static uint8_t GetCombiningClass(int c);
    // static private System.Int32 GetPrimaryCompositeFromMapIndex(System.Int32 src)
    // Offset: 0x44E381C
    static int GetPrimaryCompositeFromMapIndex(int src);
    // static private System.Int32 GetPrimaryCompositeHelperIndex(System.Int32 cp)
    // Offset: 0x44E38C4
    static int GetPrimaryCompositeHelperIndex(int cp);
    // static private System.String Compose(System.String source, System.Int32 checkType)
    // Offset: 0x44E396C
    static ::StringW Compose(::StringW source, int checkType);
    // static private System.Text.StringBuilder Combine(System.String source, System.Int32 start, System.Int32 checkType)
    // Offset: 0x44E3B80
    static ::System::Text::StringBuilder* Combine(::StringW source, int start, int checkType);
    // static private System.Void Combine(System.Text.StringBuilder sb, System.Int32 i, System.Int32 checkType)
    // Offset: 0x44E3CBC
    static void Combine(::System::Text::StringBuilder* sb, int i, int checkType);
    // static private System.Int32 CombineHangul(System.Text.StringBuilder sb, System.String s, System.Int32 current)
    // Offset: 0x44E3F00
    static int CombineHangul(::System::Text::StringBuilder* sb, ::StringW s, int current);
    // static private System.Int32 Fetch(System.Text.StringBuilder sb, System.String s, System.Int32 i)
    // Offset: 0x44E42F8
    static int Fetch(::System::Text::StringBuilder* sb, ::StringW s, int i);
    // static private System.Int32 TryComposeWithPreviousStarter(System.Text.StringBuilder sb, System.String s, System.Int32 current)
    // Offset: 0x44E40C4
    static int TryComposeWithPreviousStarter(::System::Text::StringBuilder* sb, ::StringW s, int current);
    // static private System.Int32 TryCompose(System.Int32 i, System.Int32 starter, System.Int32 candidate)
    // Offset: 0x44E4334
    static int TryCompose(int i, int starter, int candidate);
    // static private System.String Decompose(System.String source, System.Int32 checkType)
    // Offset: 0x44E444C
    static ::StringW Decompose(::StringW source, int checkType);
    // static private System.Void Decompose(System.String source, ref System.Text.StringBuilder sb, System.Int32 checkType)
    // Offset: 0x44E3A4C
    static void Decompose(::StringW source, ByRef<::System::Text::StringBuilder*> sb, int checkType);
    // static private System.Void ReorderCanonical(System.String src, ref System.Text.StringBuilder sb, System.Int32 start)
    // Offset: 0x44E46C8
    static void ReorderCanonical(::StringW src, ByRef<::System::Text::StringBuilder*> sb, int start);
    // static private System.Void DecomposeChar(ref System.Text.StringBuilder sb, ref System.Int32[] buf, System.String s, System.Int32 i, System.Int32 checkType, ref System.Int32 start)
    // Offset: 0x44E44D8
    static void DecomposeChar(ByRef<::System::Text::StringBuilder*> sb, ByRef<::ArrayW<int>> buf, ::StringW s, int i, int checkType, ByRef<int> start);
    // static public System.Text.NormalizationCheck QuickCheck(System.Char c, System.Int32 type)
    // Offset: 0x44E3DCC
    static ::System::Text::NormalizationCheck QuickCheck(::Il2CppChar c, int type);
    // static private System.Int32 GetCanonicalHangul(System.Int32 s, System.Int32[] buf, System.Int32 bufIdx)
    // Offset: 0x44E4AFC
    static int GetCanonicalHangul(int s, ::ArrayW<int> buf, int bufIdx);
    // static private System.Int32 GetCanonical(System.Int32 c, System.Int32[] buf, System.Int32 bufIdx, System.Int32 checkType)
    // Offset: 0x44E4944
    static int GetCanonical(int c, ::ArrayW<int> buf, int bufIdx, int checkType);
    // static public System.String Normalize(System.String source, System.Text.NormalizationForm normalizationForm)
    // Offset: 0x44E4BE8
    static ::StringW Normalize(::StringW source, ::System::Text::NormalizationForm normalizationForm);
    // static public System.String Normalize(System.String source, System.Int32 type)
    // Offset: 0x44E4CA4
    static ::StringW Normalize(::StringW source, int type);
    // static private System.Void load_normalization_resource(out System.IntPtr props, out System.IntPtr mappedChars, out System.IntPtr charMapIndex, out System.IntPtr helperIndex, out System.IntPtr mapIdxToComposite, out System.IntPtr combiningClass)
    // Offset: 0x44E4D44
    static void load_normalization_resource(ByRef<::System::IntPtr> props, ByRef<::System::IntPtr> mappedChars, ByRef<::System::IntPtr> charMapIndex, ByRef<::System::IntPtr> helperIndex, ByRef<::System::IntPtr> mapIdxToComposite, ByRef<::System::IntPtr> combiningClass);
    // static private System.Void .cctor()
    // Offset: 0x44E4D48
    static void _cctor();
  }; // System.Text.Normalization
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::Normalization::PropValue
// Il2CppName: PropValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(int)>(&System::Text::Normalization::PropValue)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "PropValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::CharMapIdx
// Il2CppName: CharMapIdx
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Text::Normalization::CharMapIdx)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "CharMapIdx", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::GetCombiningClass
// Il2CppName: GetCombiningClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(int)>(&System::Text::Normalization::GetCombiningClass)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "GetCombiningClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::GetPrimaryCompositeFromMapIndex
// Il2CppName: GetPrimaryCompositeFromMapIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Text::Normalization::GetPrimaryCompositeFromMapIndex)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "GetPrimaryCompositeFromMapIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::GetPrimaryCompositeHelperIndex
// Il2CppName: GetPrimaryCompositeHelperIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int)>(&System::Text::Normalization::GetPrimaryCompositeHelperIndex)> {
  static const MethodInfo* get() {
    static auto* cp = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "GetPrimaryCompositeHelperIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cp});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Compose
// Il2CppName: Compose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int)>(&System::Text::Normalization::Compose)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Compose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::StringBuilder* (*)(::StringW, int, int)>(&System::Text::Normalization::Combine)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, start, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Combine
// Il2CppName: Combine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Text::StringBuilder*, int, int)>(&System::Text::Normalization::Combine)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Combine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, i, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::CombineHangul
// Il2CppName: CombineHangul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Text::StringBuilder*, ::StringW, int)>(&System::Text::Normalization::CombineHangul)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "CombineHangul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, s, current});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Fetch
// Il2CppName: Fetch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Text::StringBuilder*, ::StringW, int)>(&System::Text::Normalization::Fetch)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Fetch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, s, i});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::TryComposeWithPreviousStarter
// Il2CppName: TryComposeWithPreviousStarter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::Text::StringBuilder*, ::StringW, int)>(&System::Text::Normalization::TryComposeWithPreviousStarter)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* current = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "TryComposeWithPreviousStarter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, s, current});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::TryCompose
// Il2CppName: TryCompose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int, int)>(&System::Text::Normalization::TryCompose)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* starter = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* candidate = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "TryCompose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, starter, candidate});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Decompose
// Il2CppName: Decompose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int)>(&System::Text::Normalization::Decompose)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Decompose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Decompose
// Il2CppName: Decompose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::System::Text::StringBuilder*>, int)>(&System::Text::Normalization::Decompose)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Decompose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, sb, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::ReorderCanonical
// Il2CppName: ReorderCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ByRef<::System::Text::StringBuilder*>, int)>(&System::Text::Normalization::ReorderCanonical)> {
  static const MethodInfo* get() {
    static auto* src = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "ReorderCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{src, sb, start});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::DecomposeChar
// Il2CppName: DecomposeChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::Text::StringBuilder*>, ByRef<::ArrayW<int>>, ::StringW, int, int, ByRef<int>)>(&System::Text::Normalization::DecomposeChar)> {
  static const MethodInfo* get() {
    static auto* sb = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->this_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->this_arg;
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "DecomposeChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sb, buf, s, i, checkType, start});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::QuickCheck
// Il2CppName: QuickCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::NormalizationCheck (*)(::Il2CppChar, int)>(&System::Text::Normalization::QuickCheck)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "QuickCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, type});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::GetCanonicalHangul
// Il2CppName: GetCanonicalHangul
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::ArrayW<int>, int)>(&System::Text::Normalization::GetCanonicalHangul)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* bufIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "GetCanonicalHangul", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, buf, bufIdx});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::GetCanonical
// Il2CppName: GetCanonical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, ::ArrayW<int>, int, int)>(&System::Text::Normalization::GetCanonical)> {
  static const MethodInfo* get() {
    static auto* c = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* buf = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Int32"), 1)->byval_arg;
    static auto* bufIdx = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* checkType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "GetCanonical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{c, buf, bufIdx, checkType});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::System::Text::NormalizationForm)>(&System::Text::Normalization::Normalize)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* normalizationForm = &::il2cpp_utils::GetClassFromName("System.Text", "NormalizationForm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, normalizationForm});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::Normalize
// Il2CppName: Normalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, int)>(&System::Text::Normalization::Normalize)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "Normalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, type});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::load_normalization_resource
// Il2CppName: load_normalization_resource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>)>(&System::Text::Normalization::load_normalization_resource)> {
  static const MethodInfo* get() {
    static auto* props = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* mappedChars = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* charMapIndex = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* helperIndex = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* mapIdxToComposite = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* combiningClass = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), "load_normalization_resource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{props, mappedChars, charMapIndex, helperIndex, mapIdxToComposite, combiningClass});
  }
};
// Writing MetadataGetter for method: System::Text::Normalization::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Text::Normalization::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::Normalization*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
