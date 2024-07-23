// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.Regex
#include "System/Text/RegularExpressions/Regex.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: RegexCode
  class RegexCode;
  // Forward declaring type: ExclusiveReference
  class ExclusiveReference;
  // Forward declaring type: RegexReplacement
  class RegexReplacement;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: WeakReference`1<T>
  template<typename T>
  class WeakReference_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::Regex::CachedCodeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::Regex::CachedCodeEntry*, "System.Text.RegularExpressions", "Regex/CachedCodeEntry");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.Regex/CachedCodeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class Regex::CachedCodeEntry : public ::Il2CppObject {
    public:
    public:
    // public System.Text.RegularExpressions.Regex/CachedCodeEntry Next
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::Regex::CachedCodeEntry* Next;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Regex::CachedCodeEntry*) == 0x8);
    // public System.Text.RegularExpressions.Regex/CachedCodeEntry Previous
    // Size: 0x8
    // Offset: 0x18
    ::System::Text::RegularExpressions::Regex::CachedCodeEntry* Previous;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Regex::CachedCodeEntry*) == 0x8);
    // public readonly System.Text.RegularExpressions.Regex/CachedCodeEntryKey Key
    // Size: 0x18
    // Offset: 0x20
    ::System::Text::RegularExpressions::Regex::CachedCodeEntryKey Key;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::Regex::CachedCodeEntryKey) == 0x18);
    // public System.Text.RegularExpressions.RegexCode Code
    // Size: 0x8
    // Offset: 0x38
    ::System::Text::RegularExpressions::RegexCode* Code;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::RegexCode*) == 0x8);
    // public readonly System.Collections.Hashtable Caps
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Hashtable* Caps;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // public readonly System.Collections.Hashtable Capnames
    // Size: 0x8
    // Offset: 0x48
    ::System::Collections::Hashtable* Capnames;
    // Field size check
    static_assert(sizeof(::System::Collections::Hashtable*) == 0x8);
    // public readonly System.String[] Capslist
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::StringW> Capslist;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public readonly System.Int32 Capsize
    // Size: 0x4
    // Offset: 0x58
    int Capsize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: Capsize and: Runnerref
    char __padding7[0x4] = {};
    // public readonly System.Text.RegularExpressions.ExclusiveReference Runnerref
    // Size: 0x8
    // Offset: 0x60
    ::System::Text::RegularExpressions::ExclusiveReference* Runnerref;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::ExclusiveReference*) == 0x8);
    // public readonly System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> ReplRef
    // Size: 0x8
    // Offset: 0x68
    ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* ReplRef;
    // Field size check
    static_assert(sizeof(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*) == 0x8);
    public:
    // Get instance field reference: public System.Text.RegularExpressions.Regex/CachedCodeEntry Next
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::Regex::CachedCodeEntry*& dyn_Next();
    // Get instance field reference: public System.Text.RegularExpressions.Regex/CachedCodeEntry Previous
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::Regex::CachedCodeEntry*& dyn_Previous();
    // Get instance field reference: public readonly System.Text.RegularExpressions.Regex/CachedCodeEntryKey Key
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::Regex::CachedCodeEntryKey& dyn_Key();
    // Get instance field reference: public System.Text.RegularExpressions.RegexCode Code
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::RegexCode*& dyn_Code();
    // Get instance field reference: public readonly System.Collections.Hashtable Caps
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_Caps();
    // Get instance field reference: public readonly System.Collections.Hashtable Capnames
    [[deprecated("Use field access instead!")]] ::System::Collections::Hashtable*& dyn_Capnames();
    // Get instance field reference: public readonly System.String[] Capslist
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_Capslist();
    // Get instance field reference: public readonly System.Int32 Capsize
    [[deprecated("Use field access instead!")]] int& dyn_Capsize();
    // Get instance field reference: public readonly System.Text.RegularExpressions.ExclusiveReference Runnerref
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::ExclusiveReference*& dyn_Runnerref();
    // Get instance field reference: public readonly System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> ReplRef
    [[deprecated("Use field access instead!")]] ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*& dyn_ReplRef();
    // public System.Void .ctor(System.Text.RegularExpressions.Regex/CachedCodeEntryKey key, System.Collections.Hashtable capnames, System.String[] capslist, System.Text.RegularExpressions.RegexCode code, System.Collections.Hashtable caps, System.Int32 capsize, System.Text.RegularExpressions.ExclusiveReference runner, System.WeakReference`1<System.Text.RegularExpressions.RegexReplacement> replref)
    // Offset: 0x4F6C554
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Regex::CachedCodeEntry* New_ctor(::System::Text::RegularExpressions::Regex::CachedCodeEntryKey key, ::System::Collections::Hashtable* capnames, ::ArrayW<::StringW> capslist, ::System::Text::RegularExpressions::RegexCode* code, ::System::Collections::Hashtable* caps, int capsize, ::System::Text::RegularExpressions::ExclusiveReference* runner, ::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>* replref) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::Regex::CachedCodeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Regex::CachedCodeEntry*, creationType>(key, capnames, capslist, code, caps, capsize, runner, replref)));
    }
  }; // System.Text.RegularExpressions.Regex/CachedCodeEntry
  #pragma pack(pop)
  static check_size<sizeof(Regex::CachedCodeEntry), 104 + sizeof(::System::WeakReference_1<::System::Text::RegularExpressions::RegexReplacement*>*)> __System_Text_RegularExpressions_Regex_CachedCodeEntrySizeCheck;
  static_assert(sizeof(Regex::CachedCodeEntry) == 0x70);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::Regex::CachedCodeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
