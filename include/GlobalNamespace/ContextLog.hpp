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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ContextLog
  class ContextLog;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ContextLog);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ContextLog*, "", "ContextLog");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ContextLog
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ContextLog : public ::Il2CppObject {
    public:
    // static public System.Void Log(T0 ctx, T1 arg1)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1>
    static void Log(T0 ctx, T1 arg1) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ContextLog::Log");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ContextLog", "Log", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ctx), ::il2cpp_utils::ExtractType(arg1)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, ctx, arg1);
    }
    // static public System.Void LogCall(T0 ctx, T1 arg1, System.String call)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T0, class T1>
    static void LogCall(T0 ctx, T1 arg1, ::StringW call) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ContextLog::LogCall");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ContextLog", "LogCall", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ctx), ::il2cpp_utils::ExtractType(arg1), ::il2cpp_utils::ExtractType(call)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T0>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T1>::get()})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, ctx, arg1, call);
    }
    // static private System.String GetPrefix(ref T ctx)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static ::StringW GetPrefix(ByRef<T> ctx) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ContextLog::GetPrefix");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "ContextLog", "GetPrefix", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(ctx)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::StringW, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, byref(ctx));
    }
  }; // ContextLog
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ContextLog::Log
// Il2CppName: Log
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ContextLog::LogCall
// Il2CppName: LogCall
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::ContextLog::GetPrefix
// Il2CppName: GetPrefix
// Cannot write MetadataGetter for generic methods!
