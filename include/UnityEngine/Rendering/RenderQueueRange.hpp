// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: RenderQueueRange
  struct RenderQueueRange;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderQueueRange, "UnityEngine.Rendering", "RenderQueueRange");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.RenderQueueRange
  // [TokenAttribute] Offset: FFFFFFFF
  struct RenderQueueRange/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>*/ {
    public:
    public:
    // private System.Int32 m_LowerBound
    // Size: 0x4
    // Offset: 0x0
    int m_LowerBound;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_UpperBound
    // Size: 0x4
    // Offset: 0x4
    int m_UpperBound;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: RenderQueueRange
    constexpr RenderQueueRange(int m_LowerBound_ = {}, int m_UpperBound_ = {}) noexcept : m_LowerBound{m_LowerBound_}, m_UpperBound{m_UpperBound_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::RenderQueueRange>*>(this);
    }
    // static field const value: static private System.Int32 k_MinimumBound
    static constexpr const int k_MinimumBound = 0;
    // Get static field: static private System.Int32 k_MinimumBound
    static int _get_k_MinimumBound();
    // Set static field: static private System.Int32 k_MinimumBound
    static void _set_k_MinimumBound(int value);
    // Get static field: static public readonly System.Int32 minimumBound
    static int _get_minimumBound();
    // Set static field: static public readonly System.Int32 minimumBound
    static void _set_minimumBound(int value);
    // static field const value: static private System.Int32 k_MaximumBound
    static constexpr const int k_MaximumBound = 5000;
    // Get static field: static private System.Int32 k_MaximumBound
    static int _get_k_MaximumBound();
    // Set static field: static private System.Int32 k_MaximumBound
    static void _set_k_MaximumBound(int value);
    // Get static field: static public readonly System.Int32 maximumBound
    static int _get_maximumBound();
    // Set static field: static public readonly System.Int32 maximumBound
    static void _set_maximumBound(int value);
    // Get instance field reference: private System.Int32 m_LowerBound
    [[deprecated("Use field access instead!")]] int& dyn_m_LowerBound();
    // Get instance field reference: private System.Int32 m_UpperBound
    [[deprecated("Use field access instead!")]] int& dyn_m_UpperBound();
    // static public UnityEngine.Rendering.RenderQueueRange get_all()
    // Offset: 0x54E7C90
    static ::UnityEngine::Rendering::RenderQueueRange get_all();
    // static public UnityEngine.Rendering.RenderQueueRange get_opaque()
    // Offset: 0x54E9CD4
    static ::UnityEngine::Rendering::RenderQueueRange get_opaque();
    // static public UnityEngine.Rendering.RenderQueueRange get_transparent()
    // Offset: 0x54E9CDC
    static ::UnityEngine::Rendering::RenderQueueRange get_transparent();
    // public System.Boolean Equals(UnityEngine.Rendering.RenderQueueRange other)
    // Offset: 0x54E7D30
    bool Equals(::UnityEngine::Rendering::RenderQueueRange other);
    // static private System.Void .cctor()
    // Offset: 0x54E9D90
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x54E9CE8
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x54E7E44
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.Rendering.RenderQueueRange
  #pragma pack(pop)
  static check_size<sizeof(RenderQueueRange), 4 + sizeof(int)> __UnityEngine_Rendering_RenderQueueRangeSizeCheck;
  static_assert(sizeof(RenderQueueRange) == 0x8);
  // static public System.Boolean op_Equality(UnityEngine.Rendering.RenderQueueRange left, UnityEngine.Rendering.RenderQueueRange right)
  // Offset: 0x54E9D70
  bool operator ==(const ::UnityEngine::Rendering::RenderQueueRange& left, const ::UnityEngine::Rendering::RenderQueueRange& right);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::get_all
// Il2CppName: get_all
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderQueueRange (*)()>(&UnityEngine::Rendering::RenderQueueRange::get_all)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "get_all", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::get_opaque
// Il2CppName: get_opaque
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderQueueRange (*)()>(&UnityEngine::Rendering::RenderQueueRange::get_opaque)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "get_opaque", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::get_transparent
// Il2CppName: get_transparent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::RenderQueueRange (*)()>(&UnityEngine::Rendering::RenderQueueRange::get_transparent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "get_transparent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderQueueRange::*)(::UnityEngine::Rendering::RenderQueueRange)>(&UnityEngine::Rendering::RenderQueueRange::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "RenderQueueRange")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::Rendering::RenderQueueRange::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::RenderQueueRange::*)(::Il2CppObject*)>(&UnityEngine::Rendering::RenderQueueRange::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::RenderQueueRange::*)()>(&UnityEngine::Rendering::RenderQueueRange::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::RenderQueueRange), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::RenderQueueRange::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
