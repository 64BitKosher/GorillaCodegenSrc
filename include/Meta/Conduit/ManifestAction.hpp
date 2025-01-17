// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Conduit.IManifestMethod
#include "Meta/Conduit/IManifestMethod.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Meta::Conduit
namespace Meta::Conduit {
  // Forward declaring type: ManifestParameter
  class ManifestParameter;
}
// Completed forward declares
// Type namespace: Meta.Conduit
namespace Meta::Conduit {
  // Forward declaring type: ManifestAction
  class ManifestAction;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Conduit::ManifestAction);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Conduit::ManifestAction*, "Meta.Conduit", "ManifestAction");
// Type namespace: Meta.Conduit
namespace Meta::Conduit {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Conduit.ManifestAction
  // [TokenAttribute] Offset: FFFFFFFF
  class ManifestAction : public ::Il2CppObject/*, public ::Meta::Conduit::IManifestMethod*/ {
    public:
    public:
    // private System.String <ID>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW _ID;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Assembly>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW Assembly;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String <Name>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::StringW Name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> <Parameters>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* Parameters;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> <Aliases>k__BackingField
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* Aliases;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Meta::Conduit::IManifestMethod
    operator ::Meta::Conduit::IManifestMethod() noexcept {
      return *reinterpret_cast<::Meta::Conduit::IManifestMethod*>(this);
    }
    // Get instance field reference: private System.String <ID>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$ID$k__BackingField();
    // Get instance field reference: private System.String <Assembly>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Assembly$k__BackingField();
    // Get instance field reference: private System.String <Name>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$Name$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> <Parameters>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*& dyn_$Parameters$k__BackingField();
    // Get instance field reference: private System.Collections.Generic.List`1<System.String> <Aliases>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_$Aliases$k__BackingField();
    // public System.Void .ctor()
    // Offset: 0x441EFC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ManifestAction* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Conduit::ManifestAction::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ManifestAction*, creationType>()));
    }
    // public System.String get_ID()
    // Offset: 0x441F0A4
    ::StringW get_ID();
    // public System.Void set_ID(System.String value)
    // Offset: 0x441F0AC
    void set_ID(::StringW value);
    // public System.String get_Assembly()
    // Offset: 0x441F0B4
    ::StringW get_Assembly();
    // public System.Void set_Assembly(System.String value)
    // Offset: 0x441F0BC
    void set_Assembly(::StringW value);
    // public System.String get_Name()
    // Offset: 0x441F0C4
    ::StringW get_Name();
    // public System.Void set_Name(System.String value)
    // Offset: 0x441F0CC
    void set_Name(::StringW value);
    // public System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> get_Parameters()
    // Offset: 0x441F0D4
    ::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* get_Parameters();
    // public System.Void set_Parameters(System.Collections.Generic.List`1<Meta.Conduit.ManifestParameter> value)
    // Offset: 0x441F0DC
    void set_Parameters(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* value);
    // public System.String get_DeclaringTypeName()
    // Offset: 0x441F0E4
    ::StringW get_DeclaringTypeName();
    // public System.Collections.Generic.List`1<System.String> get_Aliases()
    // Offset: 0x441F11C
    ::System::Collections::Generic::List_1<::StringW>* get_Aliases();
    // public System.Void set_Aliases(System.Collections.Generic.List`1<System.String> value)
    // Offset: 0x441F124
    void set_Aliases(::System::Collections::Generic::List_1<::StringW>* value);
    // private System.Boolean Equals(Meta.Conduit.ManifestAction other)
    // Offset: 0x441F1B8
    bool Equals(::Meta::Conduit::ManifestAction* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x441F12C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x441F284
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Meta.Conduit.ManifestAction
  #pragma pack(pop)
  static check_size<sizeof(ManifestAction), 48 + sizeof(::System::Collections::Generic::List_1<::StringW>*)> __Meta_Conduit_ManifestActionSizeCheck;
  static_assert(sizeof(ManifestAction) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_ID
// Il2CppName: get_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_ID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::set_ID
// Il2CppName: set_ID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Conduit::ManifestAction::*)(::StringW)>(&Meta::Conduit::ManifestAction::set_ID)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "set_ID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::set_Assembly
// Il2CppName: set_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Conduit::ManifestAction::*)(::StringW)>(&Meta::Conduit::ManifestAction::set_Assembly)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "set_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::set_Name
// Il2CppName: set_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Conduit::ManifestAction::*)(::StringW)>(&Meta::Conduit::ManifestAction::set_Name)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "set_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>* (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::set_Parameters
// Il2CppName: set_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Conduit::ManifestAction::*)(::System::Collections::Generic::List_1<::Meta::Conduit::ManifestParameter*>*)>(&Meta::Conduit::ManifestAction::set_Parameters)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Meta.Conduit", "ManifestParameter")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "set_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_DeclaringTypeName
// Il2CppName: get_DeclaringTypeName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_DeclaringTypeName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_DeclaringTypeName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::get_Aliases
// Il2CppName: get_Aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::StringW>* (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::get_Aliases)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "get_Aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::set_Aliases
// Il2CppName: set_Aliases
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Conduit::ManifestAction::*)(::System::Collections::Generic::List_1<::StringW>*)>(&Meta::Conduit::ManifestAction::set_Aliases)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "set_Aliases", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Conduit::ManifestAction::*)(::Meta::Conduit::ManifestAction*)>(&Meta::Conduit::ManifestAction::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Meta.Conduit", "ManifestAction")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Meta::Conduit::ManifestAction::*)(::Il2CppObject*)>(&Meta::Conduit::ManifestAction::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Meta::Conduit::ManifestAction::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Meta::Conduit::ManifestAction::*)()>(&Meta::Conduit::ManifestAction::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Conduit::ManifestAction*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
