// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.Accuracy
#include "Fusion/Accuracy.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: AccuracyDefaults
  class AccuracyDefaults;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::AccuracyDefaults);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::AccuracyDefaults*, "Fusion", "AccuracyDefaults");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.AccuracyDefaults
  // [TokenAttribute] Offset: FFFFFFFF
  class AccuracyDefaults : public ::Il2CppObject {
    public:
    public:
    // System.String[] coreKeys
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::StringW> coreKeys;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // Fusion.Accuracy[] coreDefs
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::Fusion::Accuracy> coreDefs;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::Accuracy>) == 0x8);
    // Fusion.Accuracy[] coreVals
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::Fusion::Accuracy> coreVals;
    // Field size check
    static_assert(sizeof(::ArrayW<::Fusion::Accuracy>) == 0x8);
    // readonly System.Collections.Generic.Dictionary`2<System.Int32,System.String> coreTagLookup
    // Size: 0x8
    // Offset: 0x28
    ::System::Collections::Generic::Dictionary_2<int, ::StringW>* coreTagLookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::StringW>*) == 0x8);
    // System.Collections.Generic.List`1<System.String> tags
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::StringW>* tags;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::StringW>*) == 0x8);
    // System.Collections.Generic.List`1<Fusion.Accuracy> values
    // Size: 0x8
    // Offset: 0x38
    ::System::Collections::Generic::List_1<::Fusion::Accuracy>* values;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Fusion::Accuracy>*) == 0x8);
    // System.Collections.Generic.Dictionary`2<System.Int32,Fusion.Accuracy> Lookup
    // Size: 0x8
    // Offset: 0x40
    ::System::Collections::Generic::Dictionary_2<int, ::Fusion::Accuracy>* Lookup;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<int, ::Fusion::Accuracy>*) == 0x8);
    public:
    // static field const value: static System.Int32 CORE_COUNT
    static constexpr const int CORE_COUNT = 5;
    // Get static field: static System.Int32 CORE_COUNT
    static int _get_CORE_COUNT();
    // Set static field: static System.Int32 CORE_COUNT
    static void _set_CORE_COUNT(int value);
    // static field const value: static public System.String UNCOMPRESSED
    static constexpr const char* UNCOMPRESSED = "Uncompressed";
    // Get static field: static public System.String UNCOMPRESSED
    static ::StringW _get_UNCOMPRESSED();
    // Set static field: static public System.String UNCOMPRESSED
    static void _set_UNCOMPRESSED(::StringW value);
    // static field const value: static public System.String DEFAULT
    static constexpr const char* DEFAULT = "Default";
    // Get static field: static public System.String DEFAULT
    static ::StringW _get_DEFAULT();
    // Set static field: static public System.String DEFAULT
    static void _set_DEFAULT(::StringW value);
    // static field const value: static public System.String POSITION
    static constexpr const char* POSITION = "Position";
    // Get static field: static public System.String POSITION
    static ::StringW _get_POSITION();
    // Set static field: static public System.String POSITION
    static void _set_POSITION(::StringW value);
    // static field const value: static public System.String ROTATION
    static constexpr const char* ROTATION = "Rotation";
    // Get static field: static public System.String ROTATION
    static ::StringW _get_ROTATION();
    // Set static field: static public System.String ROTATION
    static void _set_ROTATION(::StringW value);
    // static field const value: static public System.String NORMALIZED_TIME
    static constexpr const char* NORMALIZED_TIME = "NormalizedTime";
    // Get static field: static public System.String NORMALIZED_TIME
    static ::StringW _get_NORMALIZED_TIME();
    // Set static field: static public System.String NORMALIZED_TIME
    static void _set_NORMALIZED_TIME(::StringW value);
    // static field const value: static public System.Single DEFAULT_ACCURACY
    static constexpr const float DEFAULT_ACCURACY = 0.001;
    // Get static field: static public System.Single DEFAULT_ACCURACY
    static float _get_DEFAULT_ACCURACY();
    // Set static field: static public System.Single DEFAULT_ACCURACY
    static void _set_DEFAULT_ACCURACY(float value);
    // static field const value: static public System.Single DEFAULT_UNCOMPRESSED_VALUE
    static constexpr const float DEFAULT_UNCOMPRESSED_VALUE = 0;
    // Get static field: static public System.Single DEFAULT_UNCOMPRESSED_VALUE
    static float _get_DEFAULT_UNCOMPRESSED_VALUE();
    // Set static field: static public System.Single DEFAULT_UNCOMPRESSED_VALUE
    static void _set_DEFAULT_UNCOMPRESSED_VALUE(float value);
    // static field const value: static System.Single DEFAULT_POSITION_VALUE
    static constexpr const float DEFAULT_POSITION_VALUE = 0.001;
    // Get static field: static System.Single DEFAULT_POSITION_VALUE
    static float _get_DEFAULT_POSITION_VALUE();
    // Set static field: static System.Single DEFAULT_POSITION_VALUE
    static void _set_DEFAULT_POSITION_VALUE(float value);
    // static field const value: static System.Single DEFAULT_ROTATION_VALUE
    static constexpr const float DEFAULT_ROTATION_VALUE = 0.001;
    // Get static field: static System.Single DEFAULT_ROTATION_VALUE
    static float _get_DEFAULT_ROTATION_VALUE();
    // Set static field: static System.Single DEFAULT_ROTATION_VALUE
    static void _set_DEFAULT_ROTATION_VALUE(float value);
    // static field const value: static System.Single DEFAULT_NRM_TIME_VALUE
    static constexpr const float DEFAULT_NRM_TIME_VALUE = 0.0001;
    // Get static field: static System.Single DEFAULT_NRM_TIME_VALUE
    static float _get_DEFAULT_NRM_TIME_VALUE();
    // Set static field: static System.Single DEFAULT_NRM_TIME_VALUE
    static void _set_DEFAULT_NRM_TIME_VALUE(float value);
    // Get static field: static readonly Fusion.Accuracy Uncompressed
    static ::Fusion::Accuracy _get_Uncompressed();
    // Set static field: static readonly Fusion.Accuracy Uncompressed
    static void _set_Uncompressed(::Fusion::Accuracy value);
    // Get static field: static readonly Fusion.Accuracy Default
    static ::Fusion::Accuracy _get_Default();
    // Set static field: static readonly Fusion.Accuracy Default
    static void _set_Default(::Fusion::Accuracy value);
    // Get static field: static readonly Fusion.Accuracy DefaultPosition
    static ::Fusion::Accuracy _get_DefaultPosition();
    // Set static field: static readonly Fusion.Accuracy DefaultPosition
    static void _set_DefaultPosition(::Fusion::Accuracy value);
    // Get static field: static readonly Fusion.Accuracy DefaultRotation
    static ::Fusion::Accuracy _get_DefaultRotation();
    // Set static field: static readonly Fusion.Accuracy DefaultRotation
    static void _set_DefaultRotation(::Fusion::Accuracy value);
    // Get static field: static readonly Fusion.Accuracy DefaultNormalizedTime
    static ::Fusion::Accuracy _get_DefaultNormalizedTime();
    // Set static field: static readonly Fusion.Accuracy DefaultNormalizedTime
    static void _set_DefaultNormalizedTime(::Fusion::Accuracy value);
    // Get instance field reference: System.String[] coreKeys
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_coreKeys();
    // Get instance field reference: Fusion.Accuracy[] coreDefs
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::Accuracy>& dyn_coreDefs();
    // Get instance field reference: Fusion.Accuracy[] coreVals
    [[deprecated("Use field access instead!")]] ::ArrayW<::Fusion::Accuracy>& dyn_coreVals();
    // Get instance field reference: readonly System.Collections.Generic.Dictionary`2<System.Int32,System.String> coreTagLookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::StringW>*& dyn_coreTagLookup();
    // Get instance field reference: System.Collections.Generic.List`1<System.String> tags
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::StringW>*& dyn_tags();
    // Get instance field reference: System.Collections.Generic.List`1<Fusion.Accuracy> values
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Fusion::Accuracy>*& dyn_values();
    // Get instance field reference: System.Collections.Generic.Dictionary`2<System.Int32,Fusion.Accuracy> Lookup
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<int, ::Fusion::Accuracy>*& dyn_Lookup();
    // static System.Int32 get_ZeroHashRemap()
    // Offset: 0x2B6CFF8
    static int get_ZeroHashRemap();
    // static System.String get_ZeroHashNameRemap()
    // Offset: 0x2B6D044
    static ::StringW get_ZeroHashNameRemap();
    // static Fusion.Accuracy get_ZeroHashAccuracyRemap()
    // Offset: 0x2B6D084
    static ::Fusion::Accuracy get_ZeroHashAccuracyRemap();
    // System.Void .ctor()
    // Offset: 0x2B6D0E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AccuracyDefaults* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::AccuracyDefaults::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AccuracyDefaults*, creationType>()));
    }
    // System.Void ValidateAndFix()
    // Offset: 0x2B6D684
    void ValidateAndFix();
    // System.Void InitializeCoreValues()
    // Offset: 0x2B6D21C
    void InitializeCoreValues();
    // System.Void RebuildLookup()
    // Offset: 0x2B6D6B0
    void RebuildLookup();
    // System.Boolean TryGetAccuracy(System.String tag, out Fusion.Accuracy accuracy)
    // Offset: 0x2B6D8FC
    bool TryGetAccuracy(::StringW tag, ByRef<::Fusion::Accuracy> accuracy);
    // public System.Boolean TryGetAccuracy(System.Int32 hash, out Fusion.Accuracy accuracy)
    // Offset: 0x2B6DAC8
    bool TryGetAccuracy(int hash, ByRef<::Fusion::Accuracy> accuracy);
    // public Fusion.Accuracy GetAccuracyOrThrow(System.String tag)
    // Offset: 0x2B6DBC8
    ::Fusion::Accuracy GetAccuracyOrThrow(::StringW tag);
    // System.String GetNameFromHash(System.Int32 hash)
    // Offset: 0x2B6DD60
    ::StringW GetNameFromHash(int hash);
    // System.Void Rename(System.String newtag, System.Int32 index)
    // Offset: 0x2B6DF64
    void Rename(::StringW newtag, int index);
    // System.Void Add(System.String tag, System.Single value)
    // Offset: 0x2B6E034
    void Add(::StringW tag, float value);
    // System.Void Remove(System.String tag)
    // Offset: 0x2B6E204
    void Remove(::StringW tag);
    // System.Void RemoveAt(System.Int32 index)
    // Offset: 0x2B6E2C0
    void RemoveAt(int index);
    // static private System.Void .cctor()
    // Offset: 0x2B6E340
    static void _cctor();
  }; // Fusion.AccuracyDefaults
  #pragma pack(pop)
  static check_size<sizeof(AccuracyDefaults), 64 + sizeof(::System::Collections::Generic::Dictionary_2<int, ::Fusion::Accuracy>*)> __Fusion_AccuracyDefaultsSizeCheck;
  static_assert(sizeof(AccuracyDefaults) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::get_ZeroHashRemap
// Il2CppName: get_ZeroHashRemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&Fusion::AccuracyDefaults::get_ZeroHashRemap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "get_ZeroHashRemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::get_ZeroHashNameRemap
// Il2CppName: get_ZeroHashNameRemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&Fusion::AccuracyDefaults::get_ZeroHashNameRemap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "get_ZeroHashNameRemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::get_ZeroHashAccuracyRemap
// Il2CppName: get_ZeroHashAccuracyRemap
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Accuracy (*)()>(&Fusion::AccuracyDefaults::get_ZeroHashAccuracyRemap)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "get_ZeroHashAccuracyRemap", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::ValidateAndFix
// Il2CppName: ValidateAndFix
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)()>(&Fusion::AccuracyDefaults::ValidateAndFix)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "ValidateAndFix", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::InitializeCoreValues
// Il2CppName: InitializeCoreValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)()>(&Fusion::AccuracyDefaults::InitializeCoreValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "InitializeCoreValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::RebuildLookup
// Il2CppName: RebuildLookup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)()>(&Fusion::AccuracyDefaults::RebuildLookup)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "RebuildLookup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::TryGetAccuracy
// Il2CppName: TryGetAccuracy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::AccuracyDefaults::*)(::StringW, ByRef<::Fusion::Accuracy>)>(&Fusion::AccuracyDefaults::TryGetAccuracy)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* accuracy = &::il2cpp_utils::GetClassFromName("Fusion", "Accuracy")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "TryGetAccuracy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, accuracy});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::TryGetAccuracy
// Il2CppName: TryGetAccuracy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::AccuracyDefaults::*)(int, ByRef<::Fusion::Accuracy>)>(&Fusion::AccuracyDefaults::TryGetAccuracy)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* accuracy = &::il2cpp_utils::GetClassFromName("Fusion", "Accuracy")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "TryGetAccuracy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash, accuracy});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::GetAccuracyOrThrow
// Il2CppName: GetAccuracyOrThrow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Fusion::Accuracy (Fusion::AccuracyDefaults::*)(::StringW)>(&Fusion::AccuracyDefaults::GetAccuracyOrThrow)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "GetAccuracyOrThrow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::GetNameFromHash
// Il2CppName: GetNameFromHash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Fusion::AccuracyDefaults::*)(int)>(&Fusion::AccuracyDefaults::GetNameFromHash)> {
  static const MethodInfo* get() {
    static auto* hash = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "GetNameFromHash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hash});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::Rename
// Il2CppName: Rename
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)(::StringW, int)>(&Fusion::AccuracyDefaults::Rename)> {
  static const MethodInfo* get() {
    static auto* newtag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "Rename", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newtag, index});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::Add
// Il2CppName: Add
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)(::StringW, float)>(&Fusion::AccuracyDefaults::Add)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "Add", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag, value});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::Remove
// Il2CppName: Remove
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)(::StringW)>(&Fusion::AccuracyDefaults::Remove)> {
  static const MethodInfo* get() {
    static auto* tag = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "Remove", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{tag});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::RemoveAt
// Il2CppName: RemoveAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::AccuracyDefaults::*)(int)>(&Fusion::AccuracyDefaults::RemoveAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), "RemoveAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: Fusion::AccuracyDefaults::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::AccuracyDefaults::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::AccuracyDefaults*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};