// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Forward declaring type: NativeMethodAttribute
  class NativeMethodAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Bindings::NativeMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeMethodAttribute*, "UnityEngine.Bindings", "NativeMethodAttribute");
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Bindings.NativeMethodAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [VisibleToOtherModulesAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class NativeMethodAttribute : public ::System::Attribute {
    public:
    public:
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Boolean <IsThreadSafe>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool IsThreadSafe;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsFreeFunction>k__BackingField
    // Size: 0x1
    // Offset: 0x19
    bool IsFreeFunction;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ThrowsException>k__BackingField
    // Size: 0x1
    // Offset: 0x1A
    bool ThrowsException;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <HasExplicitThis>k__BackingField
    // Size: 0x1
    // Offset: 0x1B
    bool HasExplicitThis;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Boolean <IsThreadSafe>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsThreadSafe$k__BackingField();
    // Get instance field reference: private System.Boolean <IsFreeFunction>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsFreeFunction$k__BackingField();
    // Get instance field reference: private System.Boolean <ThrowsException>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ThrowsException$k__BackingField();
    // Get instance field reference: private System.Boolean <HasExplicitThis>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$HasExplicitThis$k__BackingField();
    // public System.Void set_Name(System.String value)
    // Offset: 0x553AFC4
    void set_Name(::StringW value);
    // public System.Void set_IsThreadSafe(System.Boolean value)
    // Offset: 0x553AFCC
    void set_IsThreadSafe(bool value);
    // public System.Void set_IsFreeFunction(System.Boolean value)
    // Offset: 0x553AFD8
    void set_IsFreeFunction(bool value);
    // public System.Void set_ThrowsException(System.Boolean value)
    // Offset: 0x553AFE4
    void set_ThrowsException(bool value);
    // public System.Void set_HasExplicitThis(System.Boolean value)
    // Offset: 0x553AFF0
    void set_HasExplicitThis(bool value);
    // public System.Void .ctor()
    // Offset: 0x553AFFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeMethodAttribute*, creationType>()));
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0x553B004
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeMethodAttribute* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeMethodAttribute*, creationType>(name)));
    }
    // public System.Void .ctor(System.String name, System.Boolean isFreeFunction)
    // Offset: 0x553B108
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeMethodAttribute*, creationType>(name, isFreeFunction)));
    }
    // public System.Void .ctor(System.String name, System.Boolean isFreeFunction, System.Boolean isThreadSafe)
    // Offset: 0x553B130
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeMethodAttribute* New_ctor(::StringW name, bool isFreeFunction, bool isThreadSafe) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Bindings::NativeMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeMethodAttribute*, creationType>(name, isFreeFunction, isThreadSafe)));
    }
  }; // UnityEngine.Bindings.NativeMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(NativeMethodAttribute), 27 + sizeof(bool)> __UnityEngine_Bindings_NativeMethodAttributeSizeCheck;
  static_assert(sizeof(NativeMethodAttribute) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeMethodAttribute::*)(::StringW)>(&UnityEngine::Bindings::NativeMethodAttribute::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeMethodAttribute*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::set_IsThreadSafe
// Il2CppName: set_IsThreadSafe
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeMethodAttribute::*)(bool)>(&UnityEngine::Bindings::NativeMethodAttribute::set_IsThreadSafe)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeMethodAttribute*), "set_IsThreadSafe", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::set_IsFreeFunction
// Il2CppName: set_IsFreeFunction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeMethodAttribute::*)(bool)>(&UnityEngine::Bindings::NativeMethodAttribute::set_IsFreeFunction)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeMethodAttribute*), "set_IsFreeFunction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::set_ThrowsException
// Il2CppName: set_ThrowsException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeMethodAttribute::*)(bool)>(&UnityEngine::Bindings::NativeMethodAttribute::set_ThrowsException)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeMethodAttribute*), "set_ThrowsException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::set_HasExplicitThis
// Il2CppName: set_HasExplicitThis
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Bindings::NativeMethodAttribute::*)(bool)>(&UnityEngine::Bindings::NativeMethodAttribute::set_HasExplicitThis)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Bindings::NativeMethodAttribute*), "set_HasExplicitThis", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Bindings::NativeMethodAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!