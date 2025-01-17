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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: SessionProperty
  class SessionProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::SessionProperty);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::SessionProperty*, "Fusion", "SessionProperty");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.SessionProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class SessionProperty : public ::Il2CppObject {
    public:
    public:
    // private System.Object _value
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return value;
    }
    // Get instance field reference: private System.Object _value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__value();
    // public System.Object get_PropertyValue()
    // Offset: 0x2ADCB08
    ::Il2CppObject* get_PropertyValue();
    // public System.Type get_PropertyType()
    // Offset: 0x2ADCB10
    ::System::Type* get_PropertyType();
    // public System.Boolean get_IsInt()
    // Offset: 0x2ADCB2C
    bool get_IsInt();
    // public System.Boolean get_IsString()
    // Offset: 0x2ADCB8C
    bool get_IsString();
    // private System.Void .ctor()
    // Offset: 0x2ADCBEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SessionProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::SessionProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SessionProperty*, creationType>()));
    }
    // static public System.Boolean Support(System.Object obj)
    // Offset: 0x2ADCE6C
    static bool Support(::Il2CppObject* obj);
    // static public Fusion.SessionProperty Convert(System.Object obj)
    // Offset: 0x2ADCEF0
    static ::Fusion::SessionProperty* Convert(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x2ADCFC8
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // Fusion.SessionProperty
  #pragma pack(pop)
  static check_size<sizeof(SessionProperty), 16 + sizeof(::Il2CppObject*)> __Fusion_SessionPropertySizeCheck;
  static_assert(sizeof(SessionProperty) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::SessionProperty::get_PropertyValue
// Il2CppName: get_PropertyValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::SessionProperty::*)()>(&Fusion::SessionProperty::get_PropertyValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "get_PropertyValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Fusion::SessionProperty::*)()>(&Fusion::SessionProperty::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::get_IsInt
// Il2CppName: get_IsInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionProperty::*)()>(&Fusion::SessionProperty::get_IsInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "get_IsInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::get_IsString
// Il2CppName: get_IsString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::SessionProperty::*)()>(&Fusion::SessionProperty::get_IsString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "get_IsString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::SessionProperty::Support
// Il2CppName: Support
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&Fusion::SessionProperty::Support)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "Support", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::SessionProperty* (*)(::Il2CppObject*)>(&Fusion::SessionProperty::Convert)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Fusion::SessionProperty::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::SessionProperty::*)()>(&Fusion::SessionProperty::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::SessionProperty*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
