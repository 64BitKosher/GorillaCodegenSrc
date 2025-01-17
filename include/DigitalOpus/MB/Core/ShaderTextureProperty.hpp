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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: ShaderTextureProperty
  class ShaderTextureProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::ShaderTextureProperty);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::ShaderTextureProperty*, "DigitalOpus.MB.Core", "ShaderTextureProperty");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.ShaderTextureProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class ShaderTextureProperty : public ::Il2CppObject {
    public:
    public:
    // public System.String name
    // Size: 0x8
    // Offset: 0x10
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.Boolean isNormalMap
    // Size: 0x1
    // Offset: 0x18
    bool isNormalMap;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean isNormalDontKnow
    // Size: 0x1
    // Offset: 0x19
    bool isNormalDontKnow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: public System.Boolean isNormalMap
    [[deprecated("Use field access instead!")]] bool& dyn_isNormalMap();
    // Get instance field reference: public System.Boolean isNormalDontKnow
    [[deprecated("Use field access instead!")]] bool& dyn_isNormalDontKnow();
    // public System.Void .ctor(System.String n, System.Boolean norm)
    // Offset: 0x43DD7A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderTextureProperty* New_ctor(::StringW n, bool norm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::ShaderTextureProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderTextureProperty*, creationType>(n, norm)));
    }
    // public System.Void .ctor(System.String n, System.Boolean norm, System.Boolean isNormalDontKnow)
    // Offset: 0x43DD7E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShaderTextureProperty* New_ctor(::StringW n, bool norm, bool isNormalDontKnow) {
      static auto ___internal__logger = ::Logger::get().WithContext("::DigitalOpus::MB::Core::ShaderTextureProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShaderTextureProperty*, creationType>(n, norm, isNormalDontKnow)));
    }
    // static public System.String[] GetNames(System.Collections.Generic.List`1<DigitalOpus.MB.Core.ShaderTextureProperty> props)
    // Offset: 0x43DD8E4
    static ::ArrayW<::StringW> GetNames(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>* props);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x43DD834
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x43DD8DC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // DigitalOpus.MB.Core.ShaderTextureProperty
  #pragma pack(pop)
  static check_size<sizeof(ShaderTextureProperty), 25 + sizeof(bool)> __DigitalOpus_MB_Core_ShaderTexturePropertySizeCheck;
  static_assert(sizeof(ShaderTextureProperty) == 0x1A);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ShaderTextureProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ShaderTextureProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ShaderTextureProperty::GetNames
// Il2CppName: GetNames
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW> (*)(::System::Collections::Generic::List_1<::DigitalOpus::MB::Core::ShaderTextureProperty*>*)>(&DigitalOpus::MB::Core::ShaderTextureProperty::GetNames)> {
  static const MethodInfo* get() {
    static auto* props = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "ShaderTextureProperty")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ShaderTextureProperty*), "GetNames", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{props});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ShaderTextureProperty::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::ShaderTextureProperty::*)(::Il2CppObject*)>(&DigitalOpus::MB::Core::ShaderTextureProperty::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ShaderTextureProperty*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::ShaderTextureProperty::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::ShaderTextureProperty::*)()>(&DigitalOpus::MB::Core::ShaderTextureProperty::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::ShaderTextureProperty*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
