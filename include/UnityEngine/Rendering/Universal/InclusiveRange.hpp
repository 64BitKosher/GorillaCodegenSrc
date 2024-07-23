// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Forward declaring type: InclusiveRange
  struct InclusiveRange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::InclusiveRange, "UnityEngine.Rendering.Universal", "InclusiveRange");
// Type namespace: UnityEngine.Rendering.Universal
namespace UnityEngine::Rendering::Universal {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.Universal.InclusiveRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct InclusiveRange/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int16 start
    // Size: 0x2
    // Offset: 0x0
    int16_t start;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    // public System.Int16 end
    // Size: 0x2
    // Offset: 0x2
    int16_t end;
    // Field size check
    static_assert(sizeof(int16_t) == 0x2);
    public:
    // Creating value type constructor for type: InclusiveRange
    constexpr InclusiveRange(int16_t start_ = {}, int16_t end_ = {}) noexcept : start{start_}, end{end_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int16 start
    [[deprecated("Use field access instead!")]] int16_t& dyn_start();
    // Get instance field reference: public System.Int16 end
    [[deprecated("Use field access instead!")]] int16_t& dyn_end();
    // public System.Void .ctor(System.Int16 startEnd)
    // Offset: 0x52E017C
    InclusiveRange(int16_t startEnd);
    // public System.Void .ctor(System.Int16 start, System.Int16 end)
    // Offset: 0x52E0188
    // ABORTED: conflicts with another method.  InclusiveRange(int16_t start, int16_t end);
    // public System.Void Expand(System.Int16 index)
    // Offset: 0x52E0194
    void Expand(int16_t index);
    // public System.Void Clamp(System.Int16 min, System.Int16 max)
    // Offset: 0x52E0220
    void Clamp(int16_t min, int16_t max);
    // public System.Boolean get_isEmpty()
    // Offset: 0x52E02AC
    bool get_isEmpty();
    // public System.Boolean Contains(System.Int16 index)
    // Offset: 0x52E02C0
    bool Contains(int16_t index);
    // static public UnityEngine.Rendering.Universal.InclusiveRange Merge(UnityEngine.Rendering.Universal.InclusiveRange a, UnityEngine.Rendering.Universal.InclusiveRange b)
    // Offset: 0x52E02E4
    static ::UnityEngine::Rendering::Universal::InclusiveRange Merge(::UnityEngine::Rendering::Universal::InclusiveRange a, ::UnityEngine::Rendering::Universal::InclusiveRange b);
    // static public UnityEngine.Rendering.Universal.InclusiveRange get_empty()
    // Offset: 0x52E0378
    static ::UnityEngine::Rendering::Universal::InclusiveRange get_empty();
    // public override System.String ToString()
    // Offset: 0x52E0380
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // UnityEngine.Rendering.Universal.InclusiveRange
  #pragma pack(pop)
  static check_size<sizeof(InclusiveRange), 2 + sizeof(int16_t)> __UnityEngine_Rendering_Universal_InclusiveRangeSizeCheck;
  static_assert(sizeof(InclusiveRange) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::InclusiveRange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::InclusiveRange
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::InclusiveRange::*)(int16_t)>(&UnityEngine::Rendering::Universal::InclusiveRange::Expand)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::Clamp
// Il2CppName: Clamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::Universal::InclusiveRange::*)(int16_t, int16_t)>(&UnityEngine::Rendering::Universal::InclusiveRange::Clamp)> {
  static const MethodInfo* get() {
    static auto* min = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    static auto* max = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "Clamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{min, max});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::get_isEmpty
// Il2CppName: get_isEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::InclusiveRange::*)()>(&UnityEngine::Rendering::Universal::InclusiveRange::get_isEmpty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "get_isEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::Universal::InclusiveRange::*)(int16_t)>(&UnityEngine::Rendering::Universal::InclusiveRange::Contains)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int16")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::Merge
// Il2CppName: Merge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::InclusiveRange (*)(::UnityEngine::Rendering::Universal::InclusiveRange, ::UnityEngine::Rendering::Universal::InclusiveRange)>(&UnityEngine::Rendering::Universal::InclusiveRange::Merge)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "InclusiveRange")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering.Universal", "InclusiveRange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "Merge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::get_empty
// Il2CppName: get_empty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::Universal::InclusiveRange (*)()>(&UnityEngine::Rendering::Universal::InclusiveRange::get_empty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "get_empty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::Universal::InclusiveRange::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::Universal::InclusiveRange::*)()>(&UnityEngine::Rendering::Universal::InclusiveRange::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::Universal::InclusiveRange), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
