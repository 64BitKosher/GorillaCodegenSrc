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
  // Forward declaring type: OVRStorable
  struct OVRStorable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRStorable, "", "OVRStorable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRStorable
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct OVRStorable/*, public ::System::ValueType, public ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>, public ::System::IEquatable_1<::GlobalNamespace::OVRStorable>*/ {
    public:
    public:
    // private readonly System.UInt64 <Handle>k__BackingField
    // Size: 0x8
    // Offset: 0x0
    uint64_t Handle;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    public:
    // Creating value type constructor for type: OVRStorable
    constexpr OVRStorable(uint64_t Handle_ = {}) noexcept : Handle{Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>
    operator ::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IOVRAnchorComponent_1<::GlobalNamespace::OVRStorable>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::GlobalNamespace::OVRStorable>
    operator ::System::IEquatable_1<::GlobalNamespace::OVRStorable>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::GlobalNamespace::OVRStorable>*>(this);
    }
    // Creating conversion operator: operator uint64_t
    constexpr operator uint64_t() const noexcept {
      return Handle;
    }
    // Get static field: static public readonly OVRStorable Null
    static ::GlobalNamespace::OVRStorable _get_Null();
    // Set static field: static public readonly OVRStorable Null
    static void _set_Null(::GlobalNamespace::OVRStorable value);
    // Get instance field reference: private readonly System.UInt64 <Handle>k__BackingField
    [[deprecated("Use field access instead!")]] uint64_t& dyn_$Handle$k__BackingField();
    // private OVRPlugin/SpaceComponentType IOVRAnchorComponent<OVRStorable>.get_Type()
    // Offset: 0x48AFEE8
    ::GlobalNamespace::OVRPlugin::SpaceComponentType IOVRAnchorComponent$OVRStorable$_get_Type();
    // private System.UInt64 IOVRAnchorComponent<OVRStorable>.get_Handle()
    // Offset: 0x48AFEF8
    uint64_t IOVRAnchorComponent$OVRStorable$_get_Handle();
    // private OVRStorable IOVRAnchorComponent<OVRStorable>.FromAnchor(OVRAnchor anchor)
    // Offset: 0x48AFF00
    ::GlobalNamespace::OVRStorable IOVRAnchorComponent$OVRStorable$_FromAnchor(::GlobalNamespace::OVRAnchor anchor);
    // public System.Boolean get_IsNull()
    // Offset: 0x48AFF14
    bool get_IsNull();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x48AFF24
    bool get_IsEnabled();
    // public OVRTask`1<System.Boolean> SetEnabledAsync(System.Boolean enabled, System.Double timeout)
    // Offset: 0x48AFFCC
    ::GlobalNamespace::OVRTask_1<bool> SetEnabledAsync(bool enabled, double timeout);
    // public System.Boolean Equals(OVRStorable other)
    // Offset: 0x48B00A8
    bool Equals(::GlobalNamespace::OVRStorable other);
    // OVRPlugin/SpaceComponentType get_Type()
    // Offset: 0x48AFEF0
    ::GlobalNamespace::OVRPlugin::SpaceComponentType get_Type();
    // System.UInt64 get_Handle()
    // Offset: 0x48B021C
    uint64_t get_Handle();
    // private System.Void .ctor(OVRAnchor anchor)
    // Offset: 0x48AFF08
    OVRStorable(::GlobalNamespace::OVRAnchor anchor);
    // static private System.Void .cctor()
    // Offset: 0x48B0224
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x48B00D0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x48B0148
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x48B0198
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // OVRStorable
  #pragma pack(pop)
  static check_size<sizeof(OVRStorable), 0 + sizeof(uint64_t)> __GlobalNamespace_OVRStorableSizeCheck;
  static_assert(sizeof(OVRStorable) == 0x8);
  // static public System.Boolean op_Equality(OVRStorable lhs, OVRStorable rhs)
  // Offset: 0x48B00B8
  bool operator ==(const ::GlobalNamespace::OVRStorable& lhs, const ::GlobalNamespace::OVRStorable& rhs);
  // static public System.Boolean op_Inequality(OVRStorable lhs, OVRStorable rhs)
  // Offset: 0x48B00C4
  bool operator !=(const ::GlobalNamespace::OVRStorable& lhs, const ::GlobalNamespace::OVRStorable& rhs);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_get_Type
// Il2CppName: IOVRAnchorComponent<OVRStorable>.get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceComponentType (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "IOVRAnchorComponent<OVRStorable>.get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_get_Handle
// Il2CppName: IOVRAnchorComponent<OVRStorable>.get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "IOVRAnchorComponent<OVRStorable>.get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_FromAnchor
// Il2CppName: IOVRAnchorComponent<OVRStorable>.FromAnchor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRStorable (GlobalNamespace::OVRStorable::*)(::GlobalNamespace::OVRAnchor)>(&GlobalNamespace::OVRStorable::IOVRAnchorComponent$OVRStorable$_FromAnchor)> {
  static const MethodInfo* get() {
    static auto* anchor = &::il2cpp_utils::GetClassFromName("", "OVRAnchor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "IOVRAnchorComponent<OVRStorable>.FromAnchor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{anchor});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::get_IsNull
// Il2CppName: get_IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::get_IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "get_IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::get_IsEnabled
// Il2CppName: get_IsEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::get_IsEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "get_IsEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::SetEnabledAsync
// Il2CppName: SetEnabledAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (GlobalNamespace::OVRStorable::*)(bool, double)>(&GlobalNamespace::OVRStorable::SetEnabledAsync)> {
  static const MethodInfo* get() {
    static auto* enabled = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "SetEnabledAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{enabled, timeout});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRStorable::*)(::GlobalNamespace::OVRStorable)>(&GlobalNamespace::OVRStorable::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("", "OVRStorable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin::SpaceComponentType (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::get_Handle
// Il2CppName: get_Handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::get_Handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "get_Handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::OVRStorable
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::OVRStorable::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRStorable::*)(::Il2CppObject*)>(&GlobalNamespace::OVRStorable::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::OVRStorable::*)()>(&GlobalNamespace::OVRStorable::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRStorable), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::OVRStorable::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
