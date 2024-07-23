// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.Ionic.Zip.ZipFile
#include "Pathfinding/Ionic/Zip/ZipFile.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator
#include "System/Collections/Generic/Dictionary_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: ZipEntry
  class ZipEntry;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*, "Pathfinding.Ionic.Zip", "ZipFile/<GetEnumerator>c__Iterator0");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // WARNING Size may be invalid!
  // Autogenerated type: Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ZipFile::$GetEnumerator$c__Iterator0 : public ::Il2CppObject/*, public ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*/ {
    public:
    public:
    // System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry> <<$$>>__0
    // Size: 0xFFFFFFFF
    // Offset: 0x10
    typename ::System::Collections::Generic::Dictionary_2<::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*>::ValueCollection::Enumerator $$$$$$__0;
    // Pathfinding.Ionic.Zip.ZipEntry <e>__1
    // Size: 0x8
    // Offset: 0x28
    ::Pathfinding::Ionic::Zip::ZipEntry* $e$__1;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntry*) == 0x8);
    // System.Int32 $PC
    // Size: 0x4
    // Offset: 0x30
    int $PC;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Pathfinding.Ionic.Zip.ZipEntry $current
    // Size: 0x8
    // Offset: 0x38
    ::Pathfinding::Ionic::Zip::ZipEntry* $current;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipEntry*) == 0x8);
    // Pathfinding.Ionic.Zip.ZipFile <>f__this
    // Size: 0x8
    // Offset: 0x40
    ::Pathfinding::Ionic::Zip::ZipFile* $$f__this;
    // Field size check
    static_assert(sizeof(::Pathfinding::Ionic::Zip::ZipFile*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>
    operator ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Pathfinding::Ionic::Zip::ZipEntry*>*>(this);
    }
    // Get instance field reference: System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Pathfinding.Ionic.Zip.ZipEntry> <<$$>>__0
    [[deprecated("Use field access instead!")]] typename ::System::Collections::Generic::Dictionary_2<::StringW, ::Pathfinding::Ionic::Zip::ZipEntry*>::ValueCollection::Enumerator& dyn_$$$$$$__0();
    // Get instance field reference: Pathfinding.Ionic.Zip.ZipEntry <e>__1
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zip::ZipEntry*& dyn_$e$__1();
    // Get instance field reference: System.Int32 $PC
    [[deprecated("Use field access instead!")]] int& dyn_$PC();
    // Get instance field reference: Pathfinding.Ionic.Zip.ZipEntry $current
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zip::ZipEntry*& dyn_$current();
    // Get instance field reference: Pathfinding.Ionic.Zip.ZipFile <>f__this
    [[deprecated("Use field access instead!")]] ::Pathfinding::Ionic::Zip::ZipFile*& dyn_$$f__this();
    // public System.Void .ctor()
    // Offset: 0x49AF258
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ZipFile::$GetEnumerator$c__Iterator0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ZipFile::$GetEnumerator$c__Iterator0*, creationType>()));
    }
    // private Pathfinding.Ionic.Zip.ZipEntry System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current()
    // Offset: 0x49AF260
    ::Pathfinding::Ionic::Zip::ZipEntry* System_Collections_Generic_IEnumerator$Pathfinding_Ionic_Zip_ZipEntry$_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x49AF268
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x49AF270
    bool MoveNext();
    // public System.Void Dispose()
    // Offset: 0x49AF460
    void Dispose();
    // public System.Void Reset()
    // Offset: 0x49AF4C8
    void Reset();
  }; // Pathfinding.Ionic.Zip.ZipFile/<GetEnumerator>c__Iterator0
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::System_Collections_Generic_IEnumerator$Pathfinding_Ionic_Zip_ZipEntry$_get_Current
// Il2CppName: System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zip::ZipEntry* (Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::*)()>(&Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::System_Collections_Generic_IEnumerator$Pathfinding_Ionic_Zip_ZipEntry$_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*), "System.Collections.Generic.IEnumerator<Pathfinding.Ionic.Zip.ZipEntry>.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::*)()>(&Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::*)()>(&Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::*)()>(&Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::*)()>(&Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::ZipFile::$GetEnumerator$c__Iterator0*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
