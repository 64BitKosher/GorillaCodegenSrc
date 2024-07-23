// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Utilities
namespace Meta::WitAi::Utilities {
  // Forward declaring type: DictionaryList`2<T, U>
  template<typename T, typename U>
  class DictionaryList_2;
}
// Forward declaring namespace: Meta::WitAi
namespace Meta::WitAi {
  // Forward declaring type: RegisteredMatchIntent
  class RegisteredMatchIntent;
}
// Completed forward declares
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Forward declaring type: MatchIntentRegistry
  class MatchIntentRegistry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::MatchIntentRegistry);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::MatchIntentRegistry*, "Meta.WitAi", "MatchIntentRegistry");
// Type namespace: Meta.WitAi
namespace Meta::WitAi {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.MatchIntentRegistry
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchIntentRegistry : public ::Il2CppObject {
    public:
    // Get static field: static private Meta.WitAi.Utilities.DictionaryList`2<System.String,Meta.WitAi.RegisteredMatchIntent> registeredMethods
    static ::Meta::WitAi::Utilities::DictionaryList_2<::StringW, ::Meta::WitAi::RegisteredMatchIntent*>* _get_registeredMethods();
    // Set static field: static private Meta.WitAi.Utilities.DictionaryList`2<System.String,Meta.WitAi.RegisteredMatchIntent> registeredMethods
    static void _set_registeredMethods(::Meta::WitAi::Utilities::DictionaryList_2<::StringW, ::Meta::WitAi::RegisteredMatchIntent*>* value);
    // static public Meta.WitAi.Utilities.DictionaryList`2<System.String,Meta.WitAi.RegisteredMatchIntent> get_RegisteredMethods()
    // Offset: 0x44258E4
    static ::Meta::WitAi::Utilities::DictionaryList_2<::StringW, ::Meta::WitAi::RegisteredMatchIntent*>* get_RegisteredMethods();
    // static System.Void Initialize()
    // Offset: 0x4425940
    static void Initialize();
    // static System.Void RefreshAssemblies()
    // Offset: 0x4425A70
    static void RefreshAssemblies();
  }; // Meta.WitAi.MatchIntentRegistry
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::MatchIntentRegistry::get_RegisteredMethods
// Il2CppName: get_RegisteredMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::WitAi::Utilities::DictionaryList_2<::StringW, ::Meta::WitAi::RegisteredMatchIntent*>* (*)()>(&Meta::WitAi::MatchIntentRegistry::get_RegisteredMethods)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::MatchIntentRegistry*), "get_RegisteredMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::MatchIntentRegistry::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::WitAi::MatchIntentRegistry::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::MatchIntentRegistry*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::MatchIntentRegistry::RefreshAssemblies
// Il2CppName: RefreshAssemblies
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::WitAi::MatchIntentRegistry::RefreshAssemblies)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::MatchIntentRegistry*), "RefreshAssemblies", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
