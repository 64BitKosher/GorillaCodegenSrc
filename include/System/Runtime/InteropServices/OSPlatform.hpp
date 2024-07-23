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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: OSPlatform
  struct OSPlatform;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::OSPlatform, "System.Runtime.InteropServices", "OSPlatform");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.InteropServices.OSPlatform
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct OSPlatform/*, public ::System::ValueType, public ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*/ {
    public:
    public:
    // private readonly System.String _osPlatform
    // Size: 0x8
    // Offset: 0x0
    ::StringW osPlatform;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating value type constructor for type: OSPlatform
    constexpr OSPlatform(::StringW osPlatform_ = {}) noexcept : osPlatform{osPlatform_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>
    operator ::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::System::Runtime::InteropServices::OSPlatform>*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return osPlatform;
    }
    // Get static field: static private readonly System.Runtime.InteropServices.OSPlatform <Linux>k__BackingField
    static ::System::Runtime::InteropServices::OSPlatform _get_$Linux$k__BackingField();
    // Set static field: static private readonly System.Runtime.InteropServices.OSPlatform <Linux>k__BackingField
    static void _set_$Linux$k__BackingField(::System::Runtime::InteropServices::OSPlatform value);
    // Get static field: static private readonly System.Runtime.InteropServices.OSPlatform <OSX>k__BackingField
    static ::System::Runtime::InteropServices::OSPlatform _get_$OSX$k__BackingField();
    // Set static field: static private readonly System.Runtime.InteropServices.OSPlatform <OSX>k__BackingField
    static void _set_$OSX$k__BackingField(::System::Runtime::InteropServices::OSPlatform value);
    // Get static field: static private readonly System.Runtime.InteropServices.OSPlatform <Windows>k__BackingField
    static ::System::Runtime::InteropServices::OSPlatform _get_$Windows$k__BackingField();
    // Set static field: static private readonly System.Runtime.InteropServices.OSPlatform <Windows>k__BackingField
    static void _set_$Windows$k__BackingField(::System::Runtime::InteropServices::OSPlatform value);
    // Get instance field reference: private readonly System.String _osPlatform
    [[deprecated("Use field access instead!")]] ::StringW& dyn__osPlatform();
    // static public System.Runtime.InteropServices.OSPlatform get_Linux()
    // Offset: 0x4572C18
    static ::System::Runtime::InteropServices::OSPlatform get_Linux();
    // static public System.Runtime.InteropServices.OSPlatform get_OSX()
    // Offset: 0x4572C70
    static ::System::Runtime::InteropServices::OSPlatform get_OSX();
    // static public System.Runtime.InteropServices.OSPlatform get_Windows()
    // Offset: 0x4572CC8
    static ::System::Runtime::InteropServices::OSPlatform get_Windows();
    // private System.Void .ctor(System.String osPlatform)
    // Offset: 0x4572D20
    // ABORTED: conflicts with another method.  OSPlatform(::StringW osPlatform);
    // static public System.Runtime.InteropServices.OSPlatform Create(System.String osPlatform)
    // Offset: 0x4572DD4
    static ::System::Runtime::InteropServices::OSPlatform Create(::StringW osPlatform);
    // public System.Boolean Equals(System.Runtime.InteropServices.OSPlatform other)
    // Offset: 0x4572DF4
    bool Equals(::System::Runtime::InteropServices::OSPlatform other);
    // System.Boolean Equals(System.String other)
    // Offset: 0x4572E04
    bool Equals(::StringW other);
    // static private System.Void .cctor()
    // Offset: 0x4572F0C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x4572E14
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x4572E94
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x4572EAC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Runtime.InteropServices.OSPlatform
  #pragma pack(pop)
  static check_size<sizeof(OSPlatform), 0 + sizeof(::StringW)> __System_Runtime_InteropServices_OSPlatformSizeCheck;
  static_assert(sizeof(OSPlatform) == 0x8);
  // static public System.Boolean op_Equality(System.Runtime.InteropServices.OSPlatform left, System.Runtime.InteropServices.OSPlatform right)
  // Offset: 0x4572F00
  bool operator ==(const ::System::Runtime::InteropServices::OSPlatform& left, const ::System::Runtime::InteropServices::OSPlatform& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::get_Linux
// Il2CppName: get_Linux
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&System::Runtime::InteropServices::OSPlatform::get_Linux)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "get_Linux", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::get_OSX
// Il2CppName: get_OSX
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&System::Runtime::InteropServices::OSPlatform::get_OSX)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "get_OSX", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::get_Windows
// Il2CppName: get_Windows
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)()>(&System::Runtime::InteropServices::OSPlatform::get_Windows)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "get_Windows", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::OSPlatform
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::InteropServices::OSPlatform (*)(::StringW)>(&System::Runtime::InteropServices::OSPlatform::Create)> {
  static const MethodInfo* get() {
    static auto* osPlatform = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{osPlatform});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::OSPlatform::*)(::System::Runtime::InteropServices::OSPlatform)>(&System::Runtime::InteropServices::OSPlatform::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "OSPlatform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::OSPlatform::*)(::StringW)>(&System::Runtime::InteropServices::OSPlatform::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Runtime::InteropServices::OSPlatform::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Runtime::InteropServices::OSPlatform::*)(::Il2CppObject*)>(&System::Runtime::InteropServices::OSPlatform::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Runtime::InteropServices::OSPlatform::*)()>(&System::Runtime::InteropServices::OSPlatform::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::InteropServices::OSPlatform::*)()>(&System::Runtime::InteropServices::OSPlatform::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::InteropServices::OSPlatform), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::InteropServices::OSPlatform::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!