// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CallSite`1<T>
  template<typename T>
  class CallSite_1;
  // Forward declaring type: CallSite
  class CallSite;
  // Forward declaring type: RuleCache`1<T>
  template<typename T>
  class RuleCache_1;
  // Forward declaring type: CallSiteBinder
  class CallSiteBinder;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: CallSiteOps
  class CallSiteOps;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::CompilerServices::CallSiteOps);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::CallSiteOps*, "System.Runtime.CompilerServices", "CallSiteOps");
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.CompilerServices.CallSiteOps
  // [TokenAttribute] Offset: FFFFFFFF
  // [EditorBrowsableAttribute] Offset: FFFFFFFF
  // [DebuggerStepThroughAttribute] Offset: FFFFFFFF
  class CallSiteOps : public ::Il2CppObject {
    public:
    // static public System.Runtime.CompilerServices.CallSite`1<T> CreateMatchmaker(System.Runtime.CompilerServices.CallSite`1<T> site)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Runtime::CompilerServices::CallSite_1<T>* CreateMatchmaker(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::CreateMatchmaker");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "CreateMatchmaker", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(site)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::CallSite_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, site);
    }
    // static public System.Boolean SetNotMatched(System.Runtime.CompilerServices.CallSite site)
    // Offset: 0x4BE0CD4
    static bool SetNotMatched(::System::Runtime::CompilerServices::CallSite* site);
    // static public System.Boolean GetMatch(System.Runtime.CompilerServices.CallSite site)
    // Offset: 0x4BE0CF4
    static bool GetMatch(::System::Runtime::CompilerServices::CallSite* site);
    // static public System.Void ClearMatch(System.Runtime.CompilerServices.CallSite site)
    // Offset: 0x4BE0D0C
    static void ClearMatch(::System::Runtime::CompilerServices::CallSite* site);
    // static public System.Void AddRule(System.Runtime.CompilerServices.CallSite`1<T> site, T rule)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void AddRule(::System::Runtime::CompilerServices::CallSite_1<T>* site, T rule) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::AddRule");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "AddRule", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(site), ::il2cpp_utils::ExtractType(rule)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, site, rule);
    }
    // static public System.Void UpdateRules(System.Runtime.CompilerServices.CallSite`1<T> this, System.Int32 matched)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void UpdateRules(::System::Runtime::CompilerServices::CallSite_1<T>* _this, int matched) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::UpdateRules");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "UpdateRules", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(_this), ::il2cpp_utils::ExtractType(matched)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, _this, matched);
    }
    // static public T[] GetRules(System.Runtime.CompilerServices.CallSite`1<T> site)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> GetRules(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::GetRules");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "GetRules", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(site)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, site);
    }
    // static public System.Runtime.CompilerServices.RuleCache`1<T> GetRuleCache(System.Runtime.CompilerServices.CallSite`1<T> site)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::System::Runtime::CompilerServices::RuleCache_1<T>* GetRuleCache(::System::Runtime::CompilerServices::CallSite_1<T>* site) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::GetRuleCache");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "GetRuleCache", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(site)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::System::Runtime::CompilerServices::RuleCache_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, site);
    }
    // static public System.Void MoveRule(System.Runtime.CompilerServices.RuleCache`1<T> cache, T rule, System.Int32 i)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void MoveRule(::System::Runtime::CompilerServices::RuleCache_1<T>* cache, T rule, int i) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::MoveRule");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "MoveRule", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(cache), ::il2cpp_utils::ExtractType(rule), ::il2cpp_utils::ExtractType(i)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, cache, rule, i);
    }
    // static public T[] GetCachedRules(System.Runtime.CompilerServices.RuleCache`1<T> cache)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::ArrayW<T> GetCachedRules(::System::Runtime::CompilerServices::RuleCache_1<T>* cache) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::GetCachedRules");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "GetCachedRules", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(cache)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, cache);
    }
    // static public T Bind(System.Runtime.CompilerServices.CallSiteBinder binder, System.Runtime.CompilerServices.CallSite`1<T> site, System.Object[] args)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Bind(::System::Runtime::CompilerServices::CallSiteBinder* binder, ::System::Runtime::CompilerServices::CallSite_1<T>* site, ::ArrayW<::Il2CppObject*> args) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::CompilerServices::CallSiteOps::Bind");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("System.Runtime.CompilerServices", "CallSiteOps", "Bind", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(binder), ::il2cpp_utils::ExtractType(site), ::il2cpp_utils::ExtractType(args)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, binder, site, args);
    }
  }; // System.Runtime.CompilerServices.CallSiteOps
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::CreateMatchmaker
// Il2CppName: CreateMatchmaker
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::SetNotMatched
// Il2CppName: SetNotMatched
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::CompilerServices::CallSite*)>(&System::Runtime::CompilerServices::CallSiteOps::SetNotMatched)> {
  static const MethodInfo* get() {
    static auto* site = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "CallSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteOps*), "SetNotMatched", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{site});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::GetMatch
// Il2CppName: GetMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Runtime::CompilerServices::CallSite*)>(&System::Runtime::CompilerServices::CallSiteOps::GetMatch)> {
  static const MethodInfo* get() {
    static auto* site = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "CallSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteOps*), "GetMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{site});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::ClearMatch
// Il2CppName: ClearMatch
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Runtime::CompilerServices::CallSite*)>(&System::Runtime::CompilerServices::CallSiteOps::ClearMatch)> {
  static const MethodInfo* get() {
    static auto* site = &::il2cpp_utils::GetClassFromName("System.Runtime.CompilerServices", "CallSite")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::CompilerServices::CallSiteOps*), "ClearMatch", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{site});
  }
};
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::AddRule
// Il2CppName: AddRule
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::UpdateRules
// Il2CppName: UpdateRules
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::GetRules
// Il2CppName: GetRules
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::GetRuleCache
// Il2CppName: GetRuleCache
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::MoveRule
// Il2CppName: MoveRule
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::GetCachedRules
// Il2CppName: GetCachedRules
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: System::Runtime::CompilerServices::CallSiteOps::Bind
// Il2CppName: Bind
// Cannot write MetadataGetter for generic methods!
