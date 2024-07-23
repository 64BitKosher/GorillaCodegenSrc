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
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Edge
  struct Edge;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: Triangle
  struct Triangle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Triangle, "UnityEngine.ProBuilder", "Triangle");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0xC
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.ProBuilder.Triangle
  // [TokenAttribute] Offset: FFFFFFFF
  struct Triangle/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*/ {
    public:
    public:
    // private System.Int32 m_A
    // Size: 0x4
    // Offset: 0x0
    int m_A;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_B
    // Size: 0x4
    // Offset: 0x4
    int m_B;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_C
    // Size: 0x4
    // Offset: 0x8
    int m_C;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Triangle
    constexpr Triangle(int m_A_ = {}, int m_B_ = {}, int m_C_ = {}) noexcept : m_A{m_A_}, m_B{m_B_}, m_C{m_C_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>
    operator ::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::Triangle>*>(this);
    }
    // Get instance field reference: private System.Int32 m_A
    [[deprecated("Use field access instead!")]] int& dyn_m_A();
    // Get instance field reference: private System.Int32 m_B
    [[deprecated("Use field access instead!")]] int& dyn_m_B();
    // Get instance field reference: private System.Int32 m_C
    [[deprecated("Use field access instead!")]] int& dyn_m_C();
    // public System.Int32 get_a()
    // Offset: 0x51E19AC
    int get_a();
    // public System.Int32 get_b()
    // Offset: 0x51E19B4
    int get_b();
    // public System.Int32 get_c()
    // Offset: 0x51E19BC
    int get_c();
    // public System.Collections.Generic.IEnumerable`1<System.Int32> get_indices()
    // Offset: 0x51E19C4
    ::System::Collections::Generic::IEnumerable_1<int>* get_indices();
    // public System.Void .ctor(System.Int32 a, System.Int32 b, System.Int32 c)
    // Offset: 0x51E1A4C
    // ABORTED: conflicts with another method.  Triangle(int a, int b, int c);
    // public System.Boolean Equals(UnityEngine.ProBuilder.Triangle other)
    // Offset: 0x51E1A58
    bool Equals(::UnityEngine::ProBuilder::Triangle other);
    // public System.Boolean IsAdjacent(UnityEngine.ProBuilder.Triangle other)
    // Offset: 0x51E1B44
    bool IsAdjacent(::UnityEngine::ProBuilder::Triangle other);
    // private System.Boolean ContainsEdge(UnityEngine.ProBuilder.Edge edge)
    // Offset: 0x51E1BD8
    bool ContainsEdge(::UnityEngine::ProBuilder::Edge edge);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x51E1A8C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x51E1B24
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // UnityEngine.ProBuilder.Triangle
  #pragma pack(pop)
  static check_size<sizeof(Triangle), 8 + sizeof(int)> __UnityEngine_ProBuilder_TriangleSizeCheck;
  static_assert(sizeof(Triangle) == 0xC);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::get_a
// Il2CppName: get_a
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Triangle::*)()>(&UnityEngine::ProBuilder::Triangle::get_a)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "get_a", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::get_b
// Il2CppName: get_b
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Triangle::*)()>(&UnityEngine::ProBuilder::Triangle::get_b)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "get_b", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::get_c
// Il2CppName: get_c
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Triangle::*)()>(&UnityEngine::ProBuilder::Triangle::get_c)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "get_c", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::get_indices
// Il2CppName: get_indices
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<int>* (UnityEngine::ProBuilder::Triangle::*)()>(&UnityEngine::ProBuilder::Triangle::get_indices)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "get_indices", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::Triangle
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Triangle)>(&UnityEngine::ProBuilder::Triangle::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::IsAdjacent
// Il2CppName: IsAdjacent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Triangle)>(&UnityEngine::ProBuilder::Triangle::IsAdjacent)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Triangle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "IsAdjacent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::ContainsEdge
// Il2CppName: ContainsEdge
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Triangle::*)(::UnityEngine::ProBuilder::Edge)>(&UnityEngine::ProBuilder::Triangle::ContainsEdge)> {
  static const MethodInfo* get() {
    static auto* edge = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "Edge")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "ContainsEdge", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{edge});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::Triangle::*)(::Il2CppObject*)>(&UnityEngine::ProBuilder::Triangle::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::Triangle::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::ProBuilder::Triangle::*)()>(&UnityEngine::ProBuilder::Triangle::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::Triangle), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
