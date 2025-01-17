// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InternedString
#include "UnityEngine/InputSystem/Utilities/InternedString.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::InputSystem::Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputDeviceDescription
  struct InputDeviceDescription;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Forward declaring type: InputDeviceMatcher
  struct InputDeviceMatcher;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, "UnityEngine.InputSystem.Layouts", "InputDeviceMatcher");
// Type namespace: UnityEngine.InputSystem.Layouts
namespace UnityEngine::InputSystem::Layouts {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.InputSystem.Layouts.InputDeviceMatcher
  // [TokenAttribute] Offset: FFFFFFFF
  struct InputDeviceMatcher/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*/ {
    public:
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatcherJson
    struct MatcherJson;
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::$$c
    class $$c;
    // Nested type: ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::$get_patterns$d__4
    class $get_patterns$d__4;
    public:
    // private System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] m_Patterns
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>> m_Patterns;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>) == 0x8);
    public:
    // Creating value type constructor for type: InputDeviceMatcher
    constexpr InputDeviceMatcher(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>> m_Patterns_ = ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>(static_cast<void*>(nullptr))) noexcept : m_Patterns{m_Patterns_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>
    operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>*>(this);
    }
    // Creating conversion operator: operator ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>
    constexpr operator ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>() const noexcept {
      return m_Patterns;
    }
    // Get static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kInterfaceKey
    static ::UnityEngine::InputSystem::Utilities::InternedString _get_kInterfaceKey();
    // Set static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kInterfaceKey
    static void _set_kInterfaceKey(::UnityEngine::InputSystem::Utilities::InternedString value);
    // Get static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kDeviceClassKey
    static ::UnityEngine::InputSystem::Utilities::InternedString _get_kDeviceClassKey();
    // Set static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kDeviceClassKey
    static void _set_kDeviceClassKey(::UnityEngine::InputSystem::Utilities::InternedString value);
    // Get static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kManufacturerKey
    static ::UnityEngine::InputSystem::Utilities::InternedString _get_kManufacturerKey();
    // Set static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kManufacturerKey
    static void _set_kManufacturerKey(::UnityEngine::InputSystem::Utilities::InternedString value);
    // Get static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kProductKey
    static ::UnityEngine::InputSystem::Utilities::InternedString _get_kProductKey();
    // Set static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kProductKey
    static void _set_kProductKey(::UnityEngine::InputSystem::Utilities::InternedString value);
    // Get static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kVersionKey
    static ::UnityEngine::InputSystem::Utilities::InternedString _get_kVersionKey();
    // Set static field: static private readonly UnityEngine.InputSystem.Utilities.InternedString kVersionKey
    static void _set_kVersionKey(::UnityEngine::InputSystem::Utilities::InternedString value);
    // Get instance field reference: private System.Collections.Generic.KeyValuePair`2<UnityEngine.InputSystem.Utilities.InternedString,System.Object>[] m_Patterns
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>& dyn_m_Patterns();
    // public System.Boolean get_empty()
    // Offset: 0x5169568
    bool get_empty();
    // public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>> get_patterns()
    // Offset: 0x5169578
    ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Il2CppObject*>>* get_patterns();
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithInterface(System.String pattern, System.Boolean supportRegex)
    // Offset: 0x516962C
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithInterface(::StringW pattern, bool supportRegex);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithDeviceClass(System.String pattern, System.Boolean supportRegex)
    // Offset: 0x51698B8
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithDeviceClass(::StringW pattern, bool supportRegex);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithManufacturer(System.String pattern, System.Boolean supportRegex)
    // Offset: 0x5169930
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithManufacturer(::StringW pattern, bool supportRegex);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithProduct(System.String pattern, System.Boolean supportRegex)
    // Offset: 0x51699A8
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithProduct(::StringW pattern, bool supportRegex);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithVersion(System.String pattern, System.Boolean supportRegex)
    // Offset: 0x5169A20
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithVersion(::StringW pattern, bool supportRegex);
    // public UnityEngine.InputSystem.Layouts.InputDeviceMatcher WithCapability(System.String path, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher WithCapability(::StringW path, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithCapability");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "WithCapability", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(path), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher, false>(this, ___generic__method, path, value);
    }
    // private UnityEngine.InputSystem.Layouts.InputDeviceMatcher With(UnityEngine.InputSystem.Utilities.InternedString key, System.Object value, System.Boolean supportRegex)
    // Offset: 0x51696A4
    ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher With(::UnityEngine::InputSystem::Utilities::InternedString key, ::Il2CppObject* value, bool supportRegex);
    // public System.Single MatchPercentage(UnityEngine.InputSystem.Layouts.InputDeviceDescription deviceDescription)
    // Offset: 0x5169A98
    float MatchPercentage(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);
    // static private System.Boolean MatchSingleProperty(System.Object pattern, System.String value)
    // Offset: 0x5169E0C
    static bool MatchSingleProperty(::Il2CppObject* pattern, ::StringW value);
    // static private System.Int32 GetNumPropertiesIn(UnityEngine.InputSystem.Layouts.InputDeviceDescription description)
    // Offset: 0x516A584
    static int GetNumPropertiesIn(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description);
    // static public UnityEngine.InputSystem.Layouts.InputDeviceMatcher FromDeviceDescription(UnityEngine.InputSystem.Layouts.InputDeviceDescription deviceDescription)
    // Offset: 0x516A648
    static ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher FromDeviceDescription(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription);
    // public System.Boolean Equals(UnityEngine.InputSystem.Layouts.InputDeviceMatcher other)
    // Offset: 0x516A8C0
    bool Equals(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher other);
    // static private System.Void .cctor()
    // Offset: 0x516AB1C
    static void _cctor();
    // public override System.String ToString()
    // Offset: 0x516A730
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x516A9FC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x516AB04
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.InputSystem.Layouts.InputDeviceMatcher
  #pragma pack(pop)
  static check_size<sizeof(InputDeviceMatcher), 0 + sizeof(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*>>)> __UnityEngine_InputSystem_Layouts_InputDeviceMatcherSizeCheck;
  static_assert(sizeof(InputDeviceMatcher) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.InputSystem.Layouts.InputDeviceMatcher left, UnityEngine.InputSystem.Layouts.InputDeviceMatcher right)
  // Offset: 0x516AA74
  bool operator ==(const ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& left, const ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& right);
  // static public System.Boolean op_Inequality(UnityEngine.InputSystem.Layouts.InputDeviceMatcher left, UnityEngine.InputSystem.Layouts.InputDeviceMatcher right)
  // Offset: 0x516AA90
  bool operator !=(const ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& left, const ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns
// Il2CppName: get_patterns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW, ::Il2CppObject*>>* (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::get_patterns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "get_patterns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface
// Il2CppName: WithInterface
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithInterface)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "WithInterface", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass
// Il2CppName: WithDeviceClass
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithDeviceClass)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "WithDeviceClass", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer
// Il2CppName: WithManufacturer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithManufacturer)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "WithManufacturer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct
// Il2CppName: WithProduct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithProduct)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "WithProduct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion
// Il2CppName: WithVersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::StringW, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithVersion)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "WithVersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::WithCapability
// Il2CppName: WithCapability
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With
// Il2CppName: With
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::UnityEngine::InputSystem::Utilities::InternedString, ::Il2CppObject*, bool)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::With)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Utilities", "InternedString")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* supportRegex = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "With", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value, supportRegex});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage
// Il2CppName: MatchPercentage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchPercentage)> {
  static const MethodInfo* get() {
    static auto* deviceDescription = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "MatchPercentage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceDescription});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty
// Il2CppName: MatchSingleProperty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::StringW)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::MatchSingleProperty)> {
  static const MethodInfo* get() {
    static auto* pattern = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "MatchSingleProperty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pattern, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn
// Il2CppName: GetNumPropertiesIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetNumPropertiesIn)> {
  static const MethodInfo* get() {
    static auto* description = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "GetNumPropertiesIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{description});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription
// Il2CppName: FromDeviceDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::FromDeviceDescription)> {
  static const MethodInfo* get() {
    static auto* deviceDescription = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceDescription")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "FromDeviceDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deviceDescription});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.InputSystem.Layouts", "InputDeviceMatcher")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)(::Il2CppObject*)>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::InputSystem::Layouts::InputDeviceMatcher::*)()>(&UnityEngine::InputSystem::Layouts::InputDeviceMatcher::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::InputSystem::Layouts::InputDeviceMatcher), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Layouts::InputDeviceMatcher::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
