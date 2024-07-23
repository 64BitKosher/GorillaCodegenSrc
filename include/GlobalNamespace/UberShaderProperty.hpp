// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.ShaderPropertyType
#include "UnityEngine/Rendering/ShaderPropertyType.hpp"
// Including type: UnityEngine.Rendering.ShaderPropertyFlags
#include "UnityEngine/Rendering/ShaderPropertyFlags.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: UberShaderProperty
  class UberShaderProperty;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::UberShaderProperty);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UberShaderProperty*, "", "UberShaderProperty");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: UberShaderProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class UberShaderProperty : public ::Il2CppObject {
    public:
    public:
    // private System.Int32 _index
    // Size: 0x4
    // Offset: 0x10
    int index;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _nameID
    // Size: 0x4
    // Offset: 0x14
    int nameID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String _name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private UnityEngine.Rendering.ShaderPropertyType _type
    // Size: 0x4
    // Offset: 0x20
    ::UnityEngine::Rendering::ShaderPropertyType type;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ShaderPropertyType) == 0x4);
    // private UnityEngine.Rendering.ShaderPropertyFlags _flags
    // Size: 0x4
    // Offset: 0x24
    ::UnityEngine::Rendering::ShaderPropertyFlags flags;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::ShaderPropertyFlags) == 0x4);
    // private UnityEngine.Vector2 _rangeLimits
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Vector2 rangeLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    public:
    // Get instance field reference: private System.Int32 _index
    [[deprecated("Use field access instead!")]] int& dyn__index();
    // Get instance field reference: private System.Int32 _nameID
    [[deprecated("Use field access instead!")]] int& dyn__nameID();
    // Get instance field reference: private System.String _name
    [[deprecated("Use field access instead!")]] ::StringW& dyn__name();
    // Get instance field reference: private UnityEngine.Rendering.ShaderPropertyType _type
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ShaderPropertyType& dyn__type();
    // Get instance field reference: private UnityEngine.Rendering.ShaderPropertyFlags _flags
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::ShaderPropertyFlags& dyn__flags();
    // Get instance field reference: private UnityEngine.Vector2 _rangeLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn__rangeLimits();
    // public System.String get_name()
    // Offset: 0x2736834
    ::StringW get_name();
    // public System.Int32 get_nameID()
    // Offset: 0x273683C
    int get_nameID();
    // public System.Int32 get_index()
    // Offset: 0x2736844
    int get_index();
    // public UnityEngine.Rendering.ShaderPropertyType get_type()
    // Offset: 0x273684C
    ::UnityEngine::Rendering::ShaderPropertyType get_type();
    // public UnityEngine.Vector2 get_rangeLimits()
    // Offset: 0x2736854
    ::UnityEngine::Vector2 get_rangeLimits();
    // public UnityEngine.Rendering.ShaderPropertyFlags get_flags()
    // Offset: 0x273685C
    ::UnityEngine::Rendering::ShaderPropertyFlags get_flags();
    // public T GetValue(UnityEngine.Material target)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    T GetValue(::UnityEngine::Material* target) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UberShaderProperty::GetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___generic__method, target);
    }
    // public System.Void SetValue(UnityEngine.Material target, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void SetValue(::UnityEngine::Material* target, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UberShaderProperty::SetValue");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "SetValue", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(target), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, target, value);
    }
    // static private TOut ValueAs(TIn value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TIn, class TOut>
    static TOut ValueAs(TIn value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UberShaderProperty::ValueAs");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "UberShaderProperty", "ValueAs", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIn>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOut>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TIn>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TOut>::get()})));
      return ::il2cpp_utils::RunMethodRethrow<TOut, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, value);
    }
    // static public UberShaderProperty FromName(System.String name)
    // Offset: 0x2736864
    static ::GlobalNamespace::UberShaderProperty* FromName(::StringW name);
    // static public UberShaderProperty FromIndex(System.Int32 i)
    // Offset: 0x27368C4
    static ::GlobalNamespace::UberShaderProperty* FromIndex(int i);
    // static public UberShaderProperty[] GetAllProperties()
    // Offset: 0x27332CC
    static ::ArrayW<::GlobalNamespace::UberShaderProperty*> GetAllProperties();
    // public System.Void .ctor()
    // Offset: 0x27369D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UberShaderProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::UberShaderProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UberShaderProperty*, creationType>()));
    }
  }; // UberShaderProperty
  #pragma pack(pop)
  static check_size<sizeof(UberShaderProperty), 40 + sizeof(::UnityEngine::Vector2)> __GlobalNamespace_UberShaderPropertySizeCheck;
  static_assert(sizeof(UberShaderProperty) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_nameID
// Il2CppName: get_nameID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_nameID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_nameID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_index
// Il2CppName: get_index
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_index)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_index", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_type
// Il2CppName: get_type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyType (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_rangeLimits
// Il2CppName: get_rangeLimits
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_rangeLimits)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_rangeLimits", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::get_flags
// Il2CppName: get_flags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::ShaderPropertyFlags (GlobalNamespace::UberShaderProperty::*)()>(&GlobalNamespace::UberShaderProperty::get_flags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "get_flags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::GetValue
// Il2CppName: GetValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::SetValue
// Il2CppName: SetValue
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::ValueAs
// Il2CppName: ValueAs
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::FromName
// Il2CppName: FromName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UberShaderProperty* (*)(::StringW)>(&GlobalNamespace::UberShaderProperty::FromName)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "FromName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::FromIndex
// Il2CppName: FromIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::UberShaderProperty* (*)(int)>(&GlobalNamespace::UberShaderProperty::FromIndex)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "FromIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::GetAllProperties
// Il2CppName: GetAllProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::GlobalNamespace::UberShaderProperty*> (*)()>(&GlobalNamespace::UberShaderProperty::GetAllProperties)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::UberShaderProperty*), "GetAllProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::UberShaderProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
