// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Conduit.ConduitDispatcher/InvocationContextFilter
#include "Meta/Conduit/ConduitDispatcher_InvocationContextFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0*, "Meta.Conduit", "ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0");
// Type namespace: Meta.Conduit
namespace Meta::Conduit {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Collections.Generic.HashSet`1<System.String> exactMatches
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::HashSet_1<::StringW>* exactMatches;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::HashSet_1<::StringW>*) == 0x8);
    // public System.Func`2<System.String,System.Boolean> <>9__0
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::StringW, bool>* $$9__0;
    // Field size check
    static_assert(sizeof(::System::Func_2<::StringW, bool>*) == 0x8);
    public:
    // Get instance field reference: public System.Collections.Generic.HashSet`1<System.String> exactMatches
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::HashSet_1<::StringW>*& dyn_exactMatches();
    // Get instance field reference: public System.Func`2<System.String,System.Boolean> <>9__0
    [[deprecated("Use field access instead!")]] ::System::Func_2<::StringW, bool>*& dyn_$$9__0();
    // public System.Void .ctor()
    // Offset: 0x441C308
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0*, creationType>()));
    }
    // System.Boolean <CompatibleInvocationContext>b__0(System.String parameterName)
    // Offset: 0x441C334
    bool $CompatibleInvocationContext$b__0(::StringW parameterName);
  }; // Meta.Conduit.ConduitDispatcher/InvocationContextFilter/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0), 24 + sizeof(::System::Func_2<::StringW, bool>*)> __Meta_Conduit_ConduitDispatcher_InvocationContextFilter_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0::$CompatibleInvocationContext$b__0
// Il2CppName: <CompatibleInvocationContext>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0::*)(::StringW)>(&Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0::$CompatibleInvocationContext$b__0)> {
  static const MethodInfo* get() {
    static auto* parameterName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ConduitDispatcher::InvocationContextFilter::$$c__DisplayClass5_0*), "<CompatibleInvocationContext>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parameterName});
  }
};
