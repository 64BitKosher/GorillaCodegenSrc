// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Forward declaring type: SerializedType
  struct SerializedType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedType, "UnityEngine.ResourceManagement.Util", "SerializedType");
// Type namespace: UnityEngine.ResourceManagement.Util
namespace UnityEngine::ResourceManagement::Util {
  // Size: 0x19
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ResourceManagement.Util.SerializedType
  // [TokenAttribute] Offset: FFFFFFFF
  struct SerializedType/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.String m_AssemblyName
    // Size: 0x8
    // Offset: 0x0
    ::StringW m_AssemblyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_ClassName
    // Size: 0x8
    // Offset: 0x8
    ::StringW m_ClassName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type m_CachedType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* m_CachedType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Boolean <ValueChanged>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool ValueChanged;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: SerializedType
    constexpr SerializedType(::StringW m_AssemblyName_ = {}, ::StringW m_ClassName_ = {}, ::System::Type* m_CachedType_ = {}, bool ValueChanged_ = {}) noexcept : m_AssemblyName{m_AssemblyName_}, m_ClassName{m_ClassName_}, m_CachedType{m_CachedType_}, ValueChanged{ValueChanged_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.String m_AssemblyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_AssemblyName();
    // Get instance field reference: private System.String m_ClassName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_ClassName();
    // Get instance field reference: private System.Type m_CachedType
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_m_CachedType();
    // Get instance field reference: private System.Boolean <ValueChanged>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$ValueChanged$k__BackingField();
    // public System.String get_AssemblyName()
    // Offset: 0x5330BDC
    ::StringW get_AssemblyName();
    // public System.String get_ClassName()
    // Offset: 0x5330BE4
    ::StringW get_ClassName();
    // public System.Type get_Value()
    // Offset: 0x5330C9C
    ::System::Type* get_Value();
    // public System.Void set_Value(System.Type value)
    // Offset: 0x5330EA0
    void set_Value(::System::Type* value);
    // public System.Boolean get_ValueChanged()
    // Offset: 0x5330F8C
    bool get_ValueChanged();
    // public System.Void set_ValueChanged(System.Boolean value)
    // Offset: 0x5330F94
    void set_ValueChanged(bool value);
    // public override System.String ToString()
    // Offset: 0x5330BEC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.ResourceManagement.Util.SerializedType
  #pragma pack(pop)
  static check_size<sizeof(SerializedType), 24 + sizeof(bool)> __UnityEngine_ResourceManagement_Util_SerializedTypeSizeCheck;
  static_assert(sizeof(SerializedType) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName
// Il2CppName: get_AssemblyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_AssemblyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_AssemblyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName
// Il2CppName: get_ClassName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_ClassName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_ClassName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_Value
// Il2CppName: set_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::SerializedType::*)(::System::Type*)>(&UnityEngine::ResourceManagement::Util::SerializedType::set_Value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "set_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged
// Il2CppName: get_ValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::get_ValueChanged)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "get_ValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged
// Il2CppName: set_ValueChanged
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::Util::SerializedType::*)(bool)>(&UnityEngine::ResourceManagement::Util::SerializedType::set_ValueChanged)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "set_ValueChanged", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::Util::SerializedType::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ResourceManagement::Util::SerializedType::*)()>(&UnityEngine::ResourceManagement::Util::SerializedType::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::Util::SerializedType), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
