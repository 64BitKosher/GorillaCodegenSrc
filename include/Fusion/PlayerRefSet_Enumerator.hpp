// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.PlayerRefSet
#include "Fusion/PlayerRefSet.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: Fusion.PlayerRef
#include "Fusion/PlayerRef.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::PlayerRefSet::Enumerator, "Fusion", "PlayerRefSet/Enumerator");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.PlayerRefSet/Enumerator
  // [TokenAttribute] Offset: FFFFFFFF
  struct PlayerRefSet::Enumerator/*, public ::System::ValueType, public ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*/ {
    public:
    public:
    // private System.UInt64* _bits
    // Size: 0x8
    // Offset: 0x0
    uint64_t* bits;
    // Field size check
    static_assert(sizeof(uint64_t*) == 0x8);
    // private System.Int32 _bit
    // Size: 0x4
    // Offset: 0x8
    int bit;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Enumerator
    constexpr Enumerator(uint64_t* bits_ = {}, int bit_ = {}) noexcept : bits{bits_}, bit{bit_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>
    operator ::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>() noexcept {
      return *reinterpret_cast<::System::Collections::Generic::IEnumerator_1<::Fusion::PlayerRef>*>(this);
    }
    // Get instance field reference: private System.UInt64* _bits
    [[deprecated("Use field access instead!")]] uint64_t*& dyn__bits();
    // Get instance field reference: private System.Int32 _bit
    [[deprecated("Use field access instead!")]] int& dyn__bit();
    // public System.Void .ctor(System.UInt64* bits)
    // Offset: 0x2B485FC
    Enumerator(uint64_t* bits);
    // public Fusion.PlayerRef get_Current()
    // Offset: 0x2B486C4
    ::Fusion::PlayerRef get_Current();
    // public System.Void Reset()
    // Offset: 0x2B486D8
    void Reset();
    // public System.Boolean MoveNext()
    // Offset: 0x2B486E4
    bool MoveNext();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x2B48744
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Void Dispose()
    // Offset: 0x2B487A4
    void Dispose();
  }; // Fusion.PlayerRefSet/Enumerator
  #pragma pack(pop)
  static check_size<sizeof(PlayerRefSet::Enumerator), 8 + sizeof(int)> __Fusion_PlayerRefSet_EnumeratorSizeCheck;
  static_assert(sizeof(PlayerRefSet::Enumerator) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::Enumerator
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::PlayerRef (Fusion::PlayerRefSet::Enumerator::*)()>(&Fusion::PlayerRefSet::Enumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRefSet::Enumerator), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::PlayerRefSet::Enumerator::*)()>(&Fusion::PlayerRefSet::Enumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRefSet::Enumerator), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::PlayerRefSet::Enumerator::*)()>(&Fusion::PlayerRefSet::Enumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRefSet::Enumerator), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::System_Collections_IEnumerator_get_Current
// Il2CppName: System.Collections.IEnumerator.get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Fusion::PlayerRefSet::Enumerator::*)()>(&Fusion::PlayerRefSet::Enumerator::System_Collections_IEnumerator_get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRefSet::Enumerator), "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::PlayerRefSet::Enumerator::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::PlayerRefSet::Enumerator::*)()>(&Fusion::PlayerRefSet::Enumerator::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::PlayerRefSet::Enumerator), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
