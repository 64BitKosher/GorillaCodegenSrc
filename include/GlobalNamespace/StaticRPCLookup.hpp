// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystem
#include "GlobalNamespace/NetworkSystem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StaticRPCEntry
  class StaticRPCEntry;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StaticRPCLookup
  class StaticRPCLookup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StaticRPCLookup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StaticRPCLookup*, "", "StaticRPCLookup");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StaticRPCLookup
  // [TokenAttribute] Offset: FFFFFFFF
  class StaticRPCLookup : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.List`1<StaticRPCEntry> entries
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>* entries;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> eventCodeEntryLookup
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<uint8_t, int>* eventCodeEntryLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<uint8_t, int>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<NetworkSystem/StaticRPCPlaceholder,System.Int32> placeholderEntryLookup
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, int>* placeholderEntryLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, int>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.List`1<StaticRPCEntry> entries
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::GlobalNamespace::StaticRPCEntry*>*& dyn_entries();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<System.Byte,System.Int32> eventCodeEntryLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<uint8_t, int>*& dyn_eventCodeEntryLookup();
    // Get instance field reference: private System.Collections.Generic.Dictionary`2<NetworkSystem/StaticRPCPlaceholder,System.Int32> placeholderEntryLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, int>*& dyn_placeholderEntryLookup();
    // public System.Void Add(NetworkSystem/StaticRPCPlaceholder placeholder, System.Byte code, NetworkSystem/StaticRPC lookupMethod)
    // Offset: 0x291B78C
    void Add(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder* placeholder, uint8_t code, ::GlobalNamespace::NetworkSystem::StaticRPC* lookupMethod);
    // public NetworkSystem/StaticRPC CodeToMethod(System.Byte code)
    // Offset: 0x291B8EC
    ::GlobalNamespace::NetworkSystem::StaticRPC* CodeToMethod(uint8_t code);
    // public System.Byte PlaceholderToCode(NetworkSystem/StaticRPCPlaceholder placeholder)
    // Offset: 0x291B97C
    uint8_t PlaceholderToCode(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder* placeholder);
    // public System.Void .ctor()
    // Offset: 0x291BA0C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StaticRPCLookup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StaticRPCLookup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StaticRPCLookup*, creationType>()));
    }
  }; // StaticRPCLookup
  #pragma pack(pop)
  static check_size<sizeof(StaticRPCLookup), 32 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, int>*)> __GlobalNamespace_StaticRPCLookupSizeCheck;
  static_assert(sizeof(StaticRPCLookup) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StaticRPCLookup::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StaticRPCLookup::*)(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*, uint8_t, ::GlobalNamespace::NetworkSystem::StaticRPC*)>(&GlobalNamespace::StaticRPCLookup::Add)> {
  static const MethodInfo* get() {
    static auto* placeholder = &::il2cpp_utils::GetClassFromName("", "NetworkSystem/StaticRPCPlaceholder")->byval_arg;
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    static auto* lookupMethod = &::il2cpp_utils::GetClassFromName("", "NetworkSystem/StaticRPC")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticRPCLookup*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{placeholder, code, lookupMethod});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticRPCLookup::CodeToMethod
// Il2CppName: CodeToMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NetworkSystem::StaticRPC* (GlobalNamespace::StaticRPCLookup::*)(uint8_t)>(&GlobalNamespace::StaticRPCLookup::CodeToMethod)> {
  static const MethodInfo* get() {
    static auto* code = &::il2cpp_utils::GetClassFromName("System", "Byte")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticRPCLookup*), "CodeToMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{code});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticRPCLookup::PlaceholderToCode
// Il2CppName: PlaceholderToCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (GlobalNamespace::StaticRPCLookup::*)(::GlobalNamespace::NetworkSystem::StaticRPCPlaceholder*)>(&GlobalNamespace::StaticRPCLookup::PlaceholderToCode)> {
  static const MethodInfo* get() {
    static auto* placeholder = &::il2cpp_utils::GetClassFromName("", "NetworkSystem/StaticRPCPlaceholder")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StaticRPCLookup*), "PlaceholderToCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{placeholder});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StaticRPCLookup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
