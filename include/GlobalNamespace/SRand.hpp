// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.UInt32
#include "System/UInt32.hpp"
// Including type: System.Double
#include "System/Double.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color32
  struct Color32;
  // Forward declaring type: Color
  struct Color;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SRand
  struct SRand;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SRand, "", "SRand");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: SRand
  // [TokenAttribute] Offset: FFFFFFFF
  struct SRand/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.UInt32 _seed
    // Size: 0x4
    // Offset: 0x0
    uint seed;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 _state
    // Size: 0x4
    // Offset: 0x4
    uint state;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    public:
    // Creating value type constructor for type: SRand
    constexpr SRand(uint seed_ = {}, uint state_ = {}) noexcept : seed{seed_}, state{state_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static private System.UInt32 MAX_PLUS_ONE
    static constexpr const uint MAX_PLUS_ONE = 268435457u;
    // Get static field: static private System.UInt32 MAX_PLUS_ONE
    static uint _get_MAX_PLUS_ONE();
    // Set static field: static private System.UInt32 MAX_PLUS_ONE
    static void _set_MAX_PLUS_ONE(uint value);
    // static field const value: static private System.Double MAX_AS_DOUBLE
    static constexpr const double MAX_AS_DOUBLE = 268435456;
    // Get static field: static private System.Double MAX_AS_DOUBLE
    static double _get_MAX_AS_DOUBLE();
    // Set static field: static private System.Double MAX_AS_DOUBLE
    static void _set_MAX_AS_DOUBLE(double value);
    // Get instance field reference: private System.UInt32 _seed
    [[deprecated("Use field access instead!")]] uint& dyn__seed();
    // Get instance field reference: private System.UInt32 _state
    [[deprecated("Use field access instead!")]] uint& dyn__state();
    // public System.Void .ctor(System.Int32 seed)
    // Offset: 0x2750398
    SRand(int seed);
    // public System.Void .ctor(System.UInt32 seed)
    // Offset: 0x27503A0
    SRand(uint seed);
    // public System.Void .ctor(System.Int64 seed)
    // Offset: 0x27503A8
    SRand(int64_t seed);
    // public System.Void .ctor(System.DateTime seed)
    // Offset: 0x27503D4
    SRand(::System::DateTime seed);
    // public System.Void .ctor(System.String seed)
    // Offset: 0x2750424
    SRand(::StringW seed);
    // public System.Void .ctor(System.Byte[] seed)
    // Offset: 0x2750578
    SRand(::ArrayW<uint8_t> seed);
    // public System.Double NextDouble()
    // Offset: 0x27506BC
    double NextDouble();
    // public System.Double NextDouble(System.Double max)
    // Offset: 0x2750714
    double NextDouble(double max);
    // public System.Double NextDouble(System.Double min, System.Double max)
    // Offset: 0x2750780
    double NextDouble(double min, double max);
    // public System.Single NextFloat()
    // Offset: 0x27507EC
    float NextFloat();
    // public System.Single NextFloat(System.Single max)
    // Offset: 0x2750848
    float NextFloat(float max);
    // public System.Single NextFloat(System.Single min, System.Single max)
    // Offset: 0x27508BC
    float NextFloat(float min, float max);
    // public System.Boolean NextBool()
    // Offset: 0x2750934
    bool NextBool();
    // public System.UInt32 NextUInt()
    // Offset: 0x2750970
    uint NextUInt();
    // public System.Int32 NextInt()
    // Offset: 0x27509A8
    int NextInt();
    // public System.Int32 NextInt(System.Int32 max)
    // Offset: 0x27509E0
    int NextInt(int max);
    // public System.Int32 NextInt(System.Int32 min, System.Int32 max)
    // Offset: 0x2750A2C
    int NextInt(int min, int max);
    // public System.Int32 NextIntWithExclusion(System.Int32 min, System.Int32 max, System.Int32 exclude)
    // Offset: 0x2750A7C
    int NextIntWithExclusion(int min, int max, int exclude);
    // public System.Int32 NextIntWithExclusion2(System.Int32 min, System.Int32 max, System.Int32 exclude, System.Int32 exclude2)
    // Offset: 0x2750AE4
    int NextIntWithExclusion2(int min, int max, int exclude, int exclude2);
    // public UnityEngine.Color32 NextColor32()
    // Offset: 0x2750B74
    ::UnityEngine::Color32 NextColor32();
    // public UnityEngine.Color NextColor()
    // Offset: 0x2750BE8
    ::UnityEngine::Color NextColor();
    // public System.Void Shuffle(T[] array)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Shuffle(::ArrayW<T> array) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SRand::Shuffle");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Shuffle", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, array);
    }
    // public System.Void Shuffle(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Shuffle(::System::Collections::Generic::List_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SRand::Shuffle");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "Shuffle", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(list)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, list);
    }
    // public System.Void Reset()
    // Offset: 0x2750CB0
    void Reset();
    // public System.Void Reset(System.Int32 seed)
    // Offset: 0x2750CBC
    void Reset(int seed);
    // public System.Void Reset(System.UInt32 seed)
    // Offset: 0x2750CC4
    void Reset(uint seed);
    // public System.Void Reset(System.Int64 seed)
    // Offset: 0x2750CCC
    void Reset(int64_t seed);
    // public System.Void Reset(System.DateTime seed)
    // Offset: 0x2750CF8
    void Reset(::System::DateTime seed);
    // public System.Void Reset(System.String seed)
    // Offset: 0x2750D48
    void Reset(::StringW seed);
    // public System.Void Reset(System.Byte[] seed)
    // Offset: 0x2750E9C
    void Reset(::ArrayW<uint8_t> seed);
    // private System.UInt32 NextState()
    // Offset: 0x2750FE0
    uint NextState();
    // private System.UInt32 Mix(System.UInt32 x)
    // Offset: 0x2751018
    uint Mix(uint x);
    // static public SRand New()
    // Offset: 0x27512D8
    static ::GlobalNamespace::SRand New();
    // static public SRand op_Explicit(System.Int32 seed)
    // Offset: 0x2751364
    explicit SRand(int& seed);
    // static public SRand op_Explicit(System.UInt32 seed)
    // Offset: 0x2751370
    explicit SRand(uint& seed);
    // static public SRand op_Explicit(System.Int64 seed)
    // Offset: 0x275137C
    explicit SRand(int64_t& seed);
    // static public SRand op_Explicit(System.String seed)
    // Offset: 0x27513A8
    explicit SRand(::StringW& seed);
    // static public SRand op_Explicit(System.Byte[] seed)
    // Offset: 0x27513C8
    explicit SRand(::ArrayW<uint8_t>& seed);
    // static public SRand op_Explicit(System.DateTime seed)
    // Offset: 0x27513E8
    explicit SRand(::System::DateTime& seed);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2751038
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x27510A4
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // SRand
  #pragma pack(pop)
  static check_size<sizeof(SRand), 4 + sizeof(uint)> __GlobalNamespace_SRandSizeCheck;
  static_assert(sizeof(SRand) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextDouble)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::SRand::*)(double)>(&GlobalNamespace::SRand::NextDouble)> {
  static const MethodInfo* get() {
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextDouble
// Il2CppName: NextDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::SRand::*)(double, double)>(&GlobalNamespace::SRand::NextDouble)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextFloat
// Il2CppName: NextFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextFloat)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextFloat
// Il2CppName: NextFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SRand::*)(float)>(&GlobalNamespace::SRand::NextFloat)> {
  static const MethodInfo* get() {
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextFloat
// Il2CppName: NextFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SRand::*)(float, float)>(&GlobalNamespace::SRand::NextFloat)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextBool
// Il2CppName: NextBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextUInt
// Il2CppName: NextUInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextUInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextUInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextInt
// Il2CppName: NextInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextInt)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextInt
// Il2CppName: NextInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)(int)>(&GlobalNamespace::SRand::NextInt)> {
  static const MethodInfo* get() {
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextInt
// Il2CppName: NextInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)(int, int)>(&GlobalNamespace::SRand::NextInt)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextIntWithExclusion
// Il2CppName: NextIntWithExclusion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)(int, int, int)>(&GlobalNamespace::SRand::NextIntWithExclusion)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exclude = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextIntWithExclusion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max, exclude});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextIntWithExclusion2
// Il2CppName: NextIntWithExclusion2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)(int, int, int, int)>(&GlobalNamespace::SRand::NextIntWithExclusion2)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exclude = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exclude2 = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextIntWithExclusion2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max, exclude, exclude2});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextColor32
// Il2CppName: NextColor32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color32 (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextColor32)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextColor32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextColor
// Il2CppName: NextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Shuffle
// Il2CppName: Shuffle
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SRand::Shuffle
// Il2CppName: Shuffle
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(int)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(uint)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(int64_t)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(::System::DateTime)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(::StringW)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SRand::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::SRand::Reset)> {
  static const MethodInfo* get() {
    static auto* seed = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{seed});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::NextState
// Il2CppName: NextState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::NextState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "NextState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::Mix
// Il2CppName: Mix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (GlobalNamespace::SRand::*)(uint)>(&GlobalNamespace::SRand::Mix)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "Mix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::New
// Il2CppName: New
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SRand (*)()>(&GlobalNamespace::SRand::New)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "New", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::SRand
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::SRand::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SRand::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::SRand::*)()>(&GlobalNamespace::SRand::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SRand), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
