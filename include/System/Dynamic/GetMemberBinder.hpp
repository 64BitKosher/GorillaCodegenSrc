// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Dynamic.DynamicMetaObjectBinder
#include "System/Dynamic/DynamicMetaObjectBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Dynamic
namespace System::Dynamic {
  // Forward declaring type: DynamicMetaObject
  class DynamicMetaObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Forward declaring type: GetMemberBinder
  class GetMemberBinder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Dynamic::GetMemberBinder);
DEFINE_IL2CPP_ARG_TYPE(::System::Dynamic::GetMemberBinder*, "System.Dynamic", "GetMemberBinder");
// Type namespace: System.Dynamic
namespace System::Dynamic {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Dynamic.GetMemberBinder
  // [TokenAttribute] Offset: FFFFFFFF
  class GetMemberBinder : public ::System::Dynamic::DynamicMetaObjectBinder {
    public:
    public:
    // private readonly System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private readonly System.Boolean <IgnoreCase>k__BackingField
    // Size: 0x1
    // Offset: 0x20
    bool IgnoreCase;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*
    constexpr operator ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Il2CppObject*>*() const noexcept = delete;
    // Get instance field reference: private readonly System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private readonly System.Boolean <IgnoreCase>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IgnoreCase$k__BackingField();
    // protected System.Void .ctor(System.String name, System.Boolean ignoreCase)
    // Offset: 0x4BE816C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GetMemberBinder* New_ctor(::StringW name, bool ignoreCase) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Dynamic::GetMemberBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GetMemberBinder*, creationType>(name, ignoreCase)));
    }
    // public System.String get_Name()
    // Offset: 0x4BE8258
    ::StringW get_Name();
    // public System.Boolean get_IgnoreCase()
    // Offset: 0x4BE8260
    bool get_IgnoreCase();
    // public System.Dynamic.DynamicMetaObject FallbackGetMember(System.Dynamic.DynamicMetaObject target)
    // Offset: 0x4BE6D00
    ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target);
    // public System.Dynamic.DynamicMetaObject FallbackGetMember(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject errorSuggestion)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Dynamic::DynamicMetaObject* FallbackGetMember(::System::Dynamic::DynamicMetaObject* target, ::System::Dynamic::DynamicMetaObject* errorSuggestion);
    // public override System.Type get_ReturnType()
    // Offset: 0x4BE81EC
    // Implemented from: System.Dynamic.DynamicMetaObjectBinder
    // Base method: System.Type DynamicMetaObjectBinder::get_ReturnType()
    ::System::Type* get_ReturnType();
    // public override System.Dynamic.DynamicMetaObject Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    // Offset: 0x4BE8268
    // Implemented from: System.Dynamic.DynamicMetaObjectBinder
    // Base method: System.Dynamic.DynamicMetaObject DynamicMetaObjectBinder::Bind(System.Dynamic.DynamicMetaObject target, System.Dynamic.DynamicMetaObject[] args)
    ::System::Dynamic::DynamicMetaObject* Bind(::System::Dynamic::DynamicMetaObject* target, ::ArrayW<::System::Dynamic::DynamicMetaObject*> args);
    // override System.Boolean get_IsStandardBinder()
    // Offset: 0x4BE8344
    // Implemented from: System.Dynamic.DynamicMetaObjectBinder
    // Base method: System.Boolean DynamicMetaObjectBinder::get_IsStandardBinder()
    bool get_IsStandardBinder();
  }; // System.Dynamic.GetMemberBinder
  #pragma pack(pop)
  static check_size<sizeof(GetMemberBinder), 32 + sizeof(bool)> __System_Dynamic_GetMemberBinderSizeCheck;
  static_assert(sizeof(GetMemberBinder) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Dynamic::GetMemberBinder::*)()>(&System::Dynamic::GetMemberBinder::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::get_IgnoreCase
// Il2CppName: get_IgnoreCase
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::GetMemberBinder::*)()>(&System::Dynamic::GetMemberBinder::get_IgnoreCase)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "get_IgnoreCase", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::FallbackGetMember
// Il2CppName: FallbackGetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::GetMemberBinder::FallbackGetMember)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "FallbackGetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::FallbackGetMember
// Il2CppName: FallbackGetMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::System::Dynamic::DynamicMetaObject*)>(&System::Dynamic::GetMemberBinder::FallbackGetMember)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* errorSuggestion = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "FallbackGetMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, errorSuggestion});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Dynamic::GetMemberBinder::*)()>(&System::Dynamic::GetMemberBinder::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::Bind
// Il2CppName: Bind
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Dynamic::DynamicMetaObject* (System::Dynamic::GetMemberBinder::*)(::System::Dynamic::DynamicMetaObject*, ::ArrayW<::System::Dynamic::DynamicMetaObject*>)>(&System::Dynamic::GetMemberBinder::Bind)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Dynamic", "DynamicMetaObject"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "Bind", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, args});
  }
};
// Writing MetadataGetter for method: System::Dynamic::GetMemberBinder::get_IsStandardBinder
// Il2CppName: get_IsStandardBinder
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Dynamic::GetMemberBinder::*)()>(&System::Dynamic::GetMemberBinder::get_IsStandardBinder)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Dynamic::GetMemberBinder*), "get_IsStandardBinder", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
