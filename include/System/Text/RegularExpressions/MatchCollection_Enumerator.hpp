// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Text.RegularExpressions.MatchCollection
#include "System/Text/RegularExpressions/MatchCollection.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text::RegularExpressions
namespace System::Text::RegularExpressions {
  // Forward declaring type: Match
  class Match;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Text::RegularExpressions::MatchCollection::Enumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::MatchCollection::Enumerator*, "System.Text.RegularExpressions", "MatchCollection/Enumerator");
// Type namespace: System.Text.RegularExpressions
namespace System::Text::RegularExpressions {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.RegularExpressions.MatchCollection/Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchCollection::Enumerator : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>*/ {
    public:
    public:
    // private readonly System.Text.RegularExpressions.MatchCollection _collection
    // Size: 0x8
    // Offset: 0x10
    ::System::Text::RegularExpressions::MatchCollection* collection;
    // Field size check
    static_assert(sizeof(::System::Text::RegularExpressions::MatchCollection*) == 0x8);
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x18
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>
    operator ::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::System::Text::RegularExpressions::Match*>*>(this);
    }
    // Get instance field reference: private readonly System.Text.RegularExpressions.MatchCollection _collection
    [[deprecated("Use field access instead!")]] ::System::Text::RegularExpressions::MatchCollection*& dyn__collection();
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // System.Void .ctor(System.Text.RegularExpressions.MatchCollection collection)
    // Offset: 0x4F6B27C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchCollection::Enumerator* New_ctor(::System::Text::RegularExpressions::MatchCollection* collection) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Text::RegularExpressions::MatchCollection::Enumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchCollection::Enumerator*, creationType>(collection)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x4F6BB2C
    bool MoveNext();
    // public System.Text.RegularExpressions.Match get_Current()
    // Offset: 0x4F6BB7C
    ::System::Text::RegularExpressions::Match* get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x4F6BBE4
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x4F6BBE8
    void System_Collections_IEnumerator_Reset();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x4F6BBF4
    void System_IDisposable_Dispose();
  }; // System.Text.RegularExpressions.MatchCollection/Enumerator
  #pragma pack(pop)
  static check_size<sizeof(MatchCollection::Enumerator), 24 + sizeof(int)> __System_Text_RegularExpressions_MatchCollection_EnumeratorSizeCheck;
  static_assert(sizeof(MatchCollection::Enumerator) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Text::RegularExpressions::MatchCollection::Enumerator::*)()>(&System::Text::RegularExpressions::MatchCollection::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection::Enumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::RegularExpressions::Match* (System::Text::RegularExpressions::MatchCollection::Enumerator::*)()>(&System::Text::RegularExpressions::MatchCollection::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection::Enumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Text::RegularExpressions::MatchCollection::Enumerator::*)()>(&System::Text::RegularExpressions::MatchCollection::Enumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection::Enumerator*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::System_Collections_IEnumerator_Reset
// Il2CppName: System.Collections.IEnumerator.Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::MatchCollection::Enumerator::*)()>(&System::Text::RegularExpressions::MatchCollection::Enumerator::System_Collections_IEnumerator_Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection::Enumerator*), "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Text::RegularExpressions::MatchCollection::Enumerator::System_IDisposable_Dispose
// Il2CppName: System.IDisposable.Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Text::RegularExpressions::MatchCollection::Enumerator::*)()>(&System::Text::RegularExpressions::MatchCollection::Enumerator::System_IDisposable_Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Text::RegularExpressions::MatchCollection::Enumerator*), "System.IDisposable.Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};