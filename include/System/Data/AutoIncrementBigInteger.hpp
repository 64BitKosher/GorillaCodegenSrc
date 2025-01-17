// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.AutoIncrementValue
#include "System/Data/AutoIncrementValue.hpp"
// Including type: System.Numerics.BigInteger
#include "System/Numerics/BigInteger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
}
// Completed forward declares
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: AutoIncrementBigInteger
  class AutoIncrementBigInteger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::AutoIncrementBigInteger);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::AutoIncrementBigInteger*, "System.Data", "AutoIncrementBigInteger");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.AutoIncrementBigInteger
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoIncrementBigInteger : public ::System::Data::AutoIncrementValue {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private System.Numerics.BigInteger _current
    // Size: 0x10
    // Offset: 0x18
    ::System::Numerics::BigInteger current;
    // Field size check
    static_assert(sizeof(::System::Numerics::BigInteger) == 0x10);
    // private System.Int64 _seed
    // Size: 0x8
    // Offset: 0x28
    int64_t seed;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Numerics.BigInteger _step
    // Size: 0x10
    // Offset: 0x30
    ::System::Numerics::BigInteger step;
    // Field size check
    static_assert(sizeof(::System::Numerics::BigInteger) == 0x10);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: private System.Numerics.BigInteger _current
    [[deprecated("Use field access instead!")]] ::System::Numerics::BigInteger& dyn__current();
    // Get instance field reference: private System.Int64 _seed
    [[deprecated("Use field access instead!")]] int64_t& dyn__seed();
    // Get instance field reference: private System.Numerics.BigInteger _step
    [[deprecated("Use field access instead!")]] ::System::Numerics::BigInteger& dyn__step();
    // private System.Boolean BoundaryCheck(System.Numerics.BigInteger value)
    // Offset: 0x4C11EC8
    bool BoundaryCheck(::System::Numerics::BigInteger value);
    // override System.Object get_Current()
    // Offset: 0x4C11C84
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Object AutoIncrementValue::get_Current()
    ::Il2CppObject* get_Current();
    // override System.Void set_Current(System.Object value)
    // Offset: 0x4C11CE0
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::set_Current(System.Object value)
    void set_Current(::Il2CppObject* value);
    // override System.Type get_DataType()
    // Offset: 0x4C11D60
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Type AutoIncrementValue::get_DataType()
    ::System::Type* get_DataType();
    // override System.Int64 get_Seed()
    // Offset: 0x4C11DCC
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Int64 AutoIncrementValue::get_Seed()
    int64_t get_Seed();
    // override System.Void set_Seed(System.Int64 value)
    // Offset: 0x4C11DD4
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::set_Seed(System.Int64 value)
    void set_Seed(int64_t value);
    // override System.Int64 get_Step()
    // Offset: 0x4C11FF0
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Int64 AutoIncrementValue::get_Step()
    int64_t get_Step();
    // override System.Void set_Step(System.Int64 value)
    // Offset: 0x4C12050
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::set_Step(System.Int64 value)
    void set_Step(int64_t value);
    // override System.Void MoveAfter()
    // Offset: 0x4C121FC
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::MoveAfter()
    void MoveAfter();
    // override System.Void SetCurrent(System.Object value, System.IFormatProvider formatProvider)
    // Offset: 0x4C12290
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::SetCurrent(System.Object value, System.IFormatProvider formatProvider)
    void SetCurrent(::Il2CppObject* value, ::System::IFormatProvider* formatProvider);
    // override System.Void SetCurrentAndIncrement(System.Object value)
    // Offset: 0x4C122C0
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::SetCurrentAndIncrement(System.Object value)
    void SetCurrentAndIncrement(::Il2CppObject* value);
    // public System.Void .ctor()
    // Offset: 0x4C0C414
    // Implemented from: System.Data.AutoIncrementValue
    // Base method: System.Void AutoIncrementValue::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoIncrementBigInteger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::AutoIncrementBigInteger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoIncrementBigInteger*, creationType>()));
    }
  }; // System.Data.AutoIncrementBigInteger
  #pragma pack(pop)
  static check_size<sizeof(AutoIncrementBigInteger), 48 + sizeof(::System::Numerics::BigInteger)> __System_Data_AutoIncrementBigIntegerSizeCheck;
  static_assert(sizeof(AutoIncrementBigInteger) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::BoundaryCheck
// Il2CppName: BoundaryCheck
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::AutoIncrementBigInteger::*)(::System::Numerics::BigInteger)>(&System::Data::AutoIncrementBigInteger::BoundaryCheck)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Numerics", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "BoundaryCheck", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::AutoIncrementBigInteger::*)()>(&System::Data::AutoIncrementBigInteger::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::set_Current
// Il2CppName: set_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)(::Il2CppObject*)>(&System::Data::AutoIncrementBigInteger::set_Current)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "set_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::get_DataType
// Il2CppName: get_DataType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Data::AutoIncrementBigInteger::*)()>(&System::Data::AutoIncrementBigInteger::get_DataType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "get_DataType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::get_Seed
// Il2CppName: get_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::AutoIncrementBigInteger::*)()>(&System::Data::AutoIncrementBigInteger::get_Seed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "get_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::set_Seed
// Il2CppName: set_Seed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)(int64_t)>(&System::Data::AutoIncrementBigInteger::set_Seed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "set_Seed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::get_Step
// Il2CppName: get_Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Data::AutoIncrementBigInteger::*)()>(&System::Data::AutoIncrementBigInteger::get_Step)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "get_Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::set_Step
// Il2CppName: set_Step
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)(int64_t)>(&System::Data::AutoIncrementBigInteger::set_Step)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "set_Step", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::MoveAfter
// Il2CppName: MoveAfter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)()>(&System::Data::AutoIncrementBigInteger::MoveAfter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "MoveAfter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::SetCurrent
// Il2CppName: SetCurrent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)(::Il2CppObject*, ::System::IFormatProvider*)>(&System::Data::AutoIncrementBigInteger::SetCurrent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "SetCurrent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatProvider});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::SetCurrentAndIncrement
// Il2CppName: SetCurrentAndIncrement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::AutoIncrementBigInteger::*)(::Il2CppObject*)>(&System::Data::AutoIncrementBigInteger::SetCurrentAndIncrement)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::AutoIncrementBigInteger*), "SetCurrentAndIncrement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Data::AutoIncrementBigInteger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
