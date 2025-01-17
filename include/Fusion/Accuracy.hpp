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
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: WriteAccuracy
  struct WriteAccuracy;
  // Forward declaring type: NetworkProjectConfig
  class NetworkProjectConfig;
  // Forward declaring type: ReadAccuracy
  struct ReadAccuracy;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: Accuracy
  struct Accuracy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::Accuracy, "Fusion", "Accuracy");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.Accuracy
  // [TokenAttribute] Offset: FFFFFFFF
  struct Accuracy/*, public ::System::ValueType*/ {
    public:
    public:
    // System.Single _value
    // Size: 0x4
    // Offset: 0x0
    float value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Single _inverse
    // Size: 0x4
    // Offset: 0x4
    float inverse;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // System.Int32 _hash
    // Size: 0x4
    // Offset: 0x8
    int hash;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Accuracy
    constexpr Accuracy(float value_ = {}, float inverse_ = {}, int hash_ = {}) noexcept : value{value_}, inverse{inverse_}, hash{hash_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: System.Single _value
    [[deprecated("Use field access instead!")]] float& dyn__value();
    // Get instance field reference: System.Single _inverse
    [[deprecated("Use field access instead!")]] float& dyn__inverse();
    // Get instance field reference: System.Int32 _hash
    [[deprecated("Use field access instead!")]] int& dyn__hash();
    // public System.Single get_Value()
    // Offset: 0x2B0B224
    float get_Value();
    // System.Single get_Inverse()
    // Offset: 0x2B0B2BC
    float get_Inverse();
    // private System.Void GetAccuracyFromHash()
    // Offset: 0x2B0B24C
    void GetAccuracyFromHash();
    // System.Void SetValue(System.Single accuracy)
    // Offset: 0x2B0B2E0
    void SetValue(float accuracy);
    // System.Void UseGlobalAccuracy(System.String tag)
    // Offset: 0x2B0B30C
    void UseGlobalAccuracy(::StringW tag);
    // public Fusion.WriteAccuracy GetWriteAccuracy(Fusion.NetworkProjectConfig config)
    // Offset: 0x2B0B398
    ::Fusion::WriteAccuracy GetWriteAccuracy(::Fusion::NetworkProjectConfig* config);
    // public Fusion.ReadAccuracy GetReadAccuracy(Fusion.NetworkProjectConfig config)
    // Offset: 0x2B0B408
    ::Fusion::ReadAccuracy GetReadAccuracy(::Fusion::NetworkProjectConfig* config);
    // public System.Void .ctor(System.Single accuracy)
    // Offset: 0x2B0B46C
    Accuracy(float accuracy);
    // System.Void .ctor(System.String tag, System.Single value)
    // Offset: 0x2B0B49C
    Accuracy(::StringW tag, float value);
    // public System.Void .ctor(System.String tag)
    // Offset: 0x2B0B4F4
    Accuracy(::StringW tag);
    // public override System.String ToString()
    // Offset: 0x2B0B558
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Fusion.Accuracy
  #pragma pack(pop)
  static check_size<sizeof(Accuracy), 8 + sizeof(int)> __Fusion_AccuracySizeCheck;
  static_assert(sizeof(Accuracy) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::Accuracy::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Fusion::Accuracy::*)()>(&Fusion::Accuracy::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::get_Inverse
// Il2CppName: get_Inverse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Fusion::Accuracy::*)()>(&Fusion::Accuracy::get_Inverse)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "get_Inverse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::GetAccuracyFromHash
// Il2CppName: GetAccuracyFromHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Accuracy::*)()>(&Fusion::Accuracy::GetAccuracyFromHash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "GetAccuracyFromHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::SetValue
// Il2CppName: SetValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Accuracy::*)(float)>(&Fusion::Accuracy::SetValue)> {
  static const MethodInfo* get() {
    static auto* accuracy = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "SetValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{accuracy});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::UseGlobalAccuracy
// Il2CppName: UseGlobalAccuracy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::Accuracy::*)(::StringW)>(&Fusion::Accuracy::UseGlobalAccuracy)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "UseGlobalAccuracy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::GetWriteAccuracy
// Il2CppName: GetWriteAccuracy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::WriteAccuracy (Fusion::Accuracy::*)(::Fusion::NetworkProjectConfig*)>(&Fusion::Accuracy::GetWriteAccuracy)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkProjectConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "GetWriteAccuracy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::GetReadAccuracy
// Il2CppName: GetReadAccuracy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::ReadAccuracy (Fusion::Accuracy::*)(::Fusion::NetworkProjectConfig*)>(&Fusion::Accuracy::GetReadAccuracy)> {
  static const MethodInfo* get() {
    static auto* config = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkProjectConfig")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "GetReadAccuracy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{config});
  }
};
// Writing MetadataGetter for method: Fusion::Accuracy::Accuracy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Accuracy::Accuracy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Accuracy::Accuracy
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::Accuracy::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::Accuracy::*)()>(&Fusion::Accuracy::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::Accuracy), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
