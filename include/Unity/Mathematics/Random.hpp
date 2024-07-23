// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Forward declaring type: Random
  struct Random;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Unity::Mathematics::Random, "Unity.Mathematics", "Random");
// Type namespace: Unity.Mathematics
namespace Unity::Mathematics {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Unity.Mathematics.Random
  // [TokenAttribute] Offset: FFFFFFFF
  // [Il2CppEagerStaticClassConstructionAttribute] Offset: FFFFFFFF
  struct Random/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.UInt32 state
    // Size: 0x4
    // Offset: 0x0
    uint state;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: Random
    constexpr Random(uint state_ = {}) noexcept : state{state_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return state;
    }
    // Get instance field reference: public System.UInt32 state
    [[deprecated("Use field access instead!")]] uint& dyn_state();
    // public System.Void .ctor(System.UInt32 seed)
    // Offset: 0x518056C
    // ABORTED: conflicts with another method.  Random(uint seed);
    // public System.Double NextDouble()
    // Offset: 0x5180580
    double NextDouble();
    // private System.UInt32 NextState()
    // Offset: 0x51805B8
    uint NextState();
  }; // Unity.Mathematics.Random
  #pragma pack(pop)
  static check_size<sizeof(Random), 0 + sizeof(uint)> __Unity_Mathematics_RandomSizeCheck;
  static_assert(sizeof(Random) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Mathematics::Random::Random
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Mathematics::Random::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Unity::Mathematics::Random::*)()>(&Unity::Mathematics::Random::NextDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::Random), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Mathematics::Random::NextState
// Il2CppName: NextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Unity::Mathematics::Random::*)()>(&Unity::Mathematics::Random::NextState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Mathematics::Random), "NextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
