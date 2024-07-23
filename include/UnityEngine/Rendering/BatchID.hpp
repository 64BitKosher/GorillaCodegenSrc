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
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: BatchID
  struct BatchID;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchID, "UnityEngine.Rendering", "BatchID");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.BatchID
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  struct BatchID/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*/ {
    public:
    public:
    // public System.UInt32 value
    // Size: 0x4
    // Offset: 0x0
    uint value;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: BatchID
    constexpr BatchID(uint value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::BatchID>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::BatchID>*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return value;
    }
    // Get static field: static public readonly UnityEngine.Rendering.BatchID Null
    static ::UnityEngine::Rendering::BatchID _get_Null();
    // Set static field: static public readonly UnityEngine.Rendering.BatchID Null
    static void _set_Null(::UnityEngine::Rendering::BatchID value);
    // Get instance field reference: public System.UInt32 value
    [[deprecated("Use field access instead!")]] uint& dyn_value();
    // public System.Boolean Equals(UnityEngine.Rendering.BatchID other)
    // Offset: 0x54EF61C
    bool Equals(::UnityEngine::Rendering::BatchID other);
    // static private System.Void .cctor()
    // Offset: 0x54EF62C
    static void _cctor();
    // public override System.Int32 GetHashCode()
    // Offset: 0x54EF59C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54EF5A4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
  }; // UnityEngine.Rendering.BatchID
  #pragma pack(pop)
  static check_size<sizeof(BatchID), 0 + sizeof(uint)> __UnityEngine_Rendering_BatchIDSizeCheck;
  static_assert(sizeof(BatchID) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchID::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::BatchID::*)(::UnityEngine::Rendering::BatchID)>(&UnityEngine::Rendering::BatchID::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "BatchID")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchID), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchID::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::BatchID::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchID), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchID::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::BatchID::*)()>(&UnityEngine::Rendering::BatchID::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchID), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::BatchID::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::BatchID::*)(::Il2CppObject*)>(&UnityEngine::Rendering::BatchID::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::BatchID), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};