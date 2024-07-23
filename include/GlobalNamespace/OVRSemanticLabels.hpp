// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: IOVRAnchorComponent`1
#include "GlobalNamespace/IOVRAnchorComponent_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: OVRAnchor because it is already included!
  // Skipping declaration: OVRTask`1 because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRSemanticLabels
  struct OVRSemanticLabels;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSemanticLabels, "", "OVRSemanticLabels");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSemanticLabels
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct OVRSemanticLabels/*, public ::System::ValueType, public ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>, public ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*/ {
    public:
    public:
    // private readonly System.UInt64 <Handle>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    uint64_t Handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: OVRSemanticLabels
    constexpr OVRSemanticLabels(uint64_t Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>
    operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRSemanticLabels>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>
    operator ::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::OVRSemanticLabels>*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return Handle;
    }
    // Get static field: static public readonly OVRSemanticLabels Null
    static ::GlobalNamespace::OVRSemanticLabels _get_Null();
    // Set static field: static public readonly OVRSemanticLabels Null
    static void _set_Null(::GlobalNamespace::OVRSemanticLabels value);
    // Get instance field reference: private readonly System.UInt64 <Handle>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$Handle$k__BackingField();
    // private OVRPlugin/SpaceComponentType IOVRAnchorComponent<OVRSemanticLabels>.get_Type()
    // Offset: 0x48B0EB8
    ::GlobalNamespace::OVRPlugin::SpaceComponentType IOVRAnchorComponent$OVRSemanticLabels$_get_Type();
    // private System.UInt64 IOVRAnchorComponent<OVRSemanticLabels>.get_Handle()
    // Offset: 0x48B0EC8
    uint64_t IOVRAnchorComponent$OVRSemanticLabels$_get_Handle();
    // private OVRSemanticLabels IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor(OVRAnchor anchor)
    // Offset: 0x48B0ED0
    ::GlobalNamespace::OVRSemanticLabels IOVRAnchorComponent$OVRSemanticLabels$_FromAnchor(::GlobalNamespace::OVRAnchor anchor);
    // public System.Boolean get_IsNull()
    // Offset: 0x48B0EE4
    bool get_IsNull();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x48B0EF4
    bool get_IsEnabled();
    // private OVRTask`1<System.Boolean> IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync(System.Boolean enabled, System.Double timeout)
    // Offset: 0x48B0F9C
    ::GlobalNamespace::OVRTask_1<bool> IOVRAnchorComponent$OVRSemanticLabels$_SetEnabledAsync(bool enabled, double timeout);
    // public System.Boolean Equals(OVRSemanticLabels other)
    // Offset: 0x48B0FE8
    bool Equals(::GlobalNamespace::OVRSemanticLabels other);
    // OVRPlugin/SpaceComponentType get_Type()
    // Offset: 0x48B0EC0
    ::GlobalNamespace::OVRPlugin::SpaceComponentType get_Type();
    // System.UInt64 get_Handle()
    // Offset: 0x48B115C
    uint64_t get_Handle();
    // private System.Void .ctor(OVRAnchor anchor)
    // Offset: 0x48B0ED8
    OVRSemanticLabels(::GlobalNamespace::OVRAnchor anchor);
    // public System.String get_Labels()
    // Offset: 0x48B1164
    ::StringW get_Labels();
    // static private System.Void .cctor()
    // Offset: 0x48B122C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x48B1010
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x48B1088
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x48B10D8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // OVRSemanticLabels
  #pragma pack(pop)
  static check_size<sizeof(OVRSemanticLabels), 0 + sizeof(uint64_t)> __GlobalNamespace_OVRSemanticLabelsSizeCheck;
  static_assert(sizeof(OVRSemanticLabels) == 0x8);
  // static public System.Boolean op_Equality(OVRSemanticLabels lhs, OVRSemanticLabels rhs)
  // Offset: 0x48B0FF8
  bool operator ==(const ::GlobalNamespace::OVRSemanticLabels& lhs, const ::GlobalNamespace::OVRSemanticLabels& rhs);
  // static public System.Boolean op_Inequality(OVRSemanticLabels lhs, OVRSemanticLabels rhs)
  // Offset: 0x48B1004
  bool operator !=(const ::GlobalNamespace::OVRSemanticLabels& lhs, const ::GlobalNamespace::OVRSemanticLabels& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_get_Type
// Il2CppName: IOVRAnchorComponent<OVRSemanticLabels>.get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceComponentType (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "IOVRAnchorComponent<OVRSemanticLabels>.get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_get_Handle
// Il2CppName: IOVRAnchorComponent<OVRSemanticLabels>.get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "IOVRAnchorComponent<OVRSemanticLabels>.get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_FromAnchor
// Il2CppName: IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSemanticLabels (GlobalNamespace::OVRSemanticLabels::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_FromAnchor)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "IOVRAnchorComponent<OVRSemanticLabels>.FromAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_SetEnabledAsync
// Il2CppName: IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (GlobalNamespace::OVRSemanticLabels::*)(bool, double)>(&GlobalNamespace::OVRSemanticLabels::IOVRAnchorComponent$OVRSemanticLabels$_SetEnabledAsync)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "IOVRAnchorComponent<OVRSemanticLabels>.SetEnabledAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSemanticLabels::*)(::GlobalNamespace::OVRSemanticLabels)>(&GlobalNamespace::OVRSemanticLabels::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OVRSemanticLabels")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceComponentType (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::OVRSemanticLabels
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::get_Labels
// Il2CppName: get_Labels
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::get_Labels)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "get_Labels", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRSemanticLabels::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSemanticLabels::*)(::Il2CppObject*)>(&GlobalNamespace::OVRSemanticLabels::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRSemanticLabels::*)()>(&GlobalNamespace::OVRSemanticLabels::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSemanticLabels), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRSemanticLabels::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!