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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: AmbientValueAttribute
  class AmbientValueAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::AmbientValueAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::AmbientValueAttribute*, "System.ComponentModel", "AmbientValueAttribute");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.AmbientValueAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class AmbientValueAttribute : public ::System::Attribute {
    public:
    public:
    // private readonly System.Object <Value>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* Value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return Value;
    }
    // Get instance field reference: private readonly System.Object <Value>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$Value$k__BackingField();
    // public System.Void .ctor(System.Type type, System.String value)
    // Offset: 0x4EF3E98
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(::System::Type* type, ::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(type, value)));
    }
    // public System.Void .ctor(System.Char value)
    // Offset: 0x4EF3FB8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(::Il2CppChar value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Byte value)
    // Offset: 0x4EF4030
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(uint8_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Int16 value)
    // Offset: 0x4EF40A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(int16_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Int32 value)
    // Offset: 0x4EF4120
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Int64 value)
    // Offset: 0x4EF4198
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(int64_t value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Single value)
    // Offset: 0x4EF4210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(float value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Double value)
    // Offset: 0x4EF4288
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(double value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Boolean value)
    // Offset: 0x4EF4300
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(bool value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.String value)
    // Offset: 0x4EF437C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(::StringW value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Void .ctor(System.Object value)
    // Offset: 0x4EF43AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AmbientValueAttribute* New_ctor(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::AmbientValueAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AmbientValueAttribute*, creationType>(value)));
    }
    // public System.Object get_Value()
    // Offset: 0x4EF43DC
    ::Il2CppObject* get_Value();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4EF43E4
    // Implemented from: System.Attribute
    // Base method: System.Boolean Attribute::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4EF4490
    // Implemented from: System.Attribute
    // Base method: System.Int32 Attribute::GetHashCode()
    int GetHashCode();
  }; // System.ComponentModel.AmbientValueAttribute
  #pragma pack(pop)
  static check_size<sizeof(AmbientValueAttribute), 16 + sizeof(::Il2CppObject*)> __System_ComponentModel_AmbientValueAttributeSizeCheck;
  static_assert(sizeof(AmbientValueAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::AmbientValueAttribute::*)()>(&System::ComponentModel::AmbientValueAttribute::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AmbientValueAttribute*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::ComponentModel::AmbientValueAttribute::*)(::Il2CppObject*)>(&System::ComponentModel::AmbientValueAttribute::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AmbientValueAttribute*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::AmbientValueAttribute::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::ComponentModel::AmbientValueAttribute::*)()>(&System::ComponentModel::AmbientValueAttribute::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::AmbientValueAttribute*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};