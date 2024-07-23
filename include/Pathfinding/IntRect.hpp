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
// Forward declaring namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: Int2
  struct Int2;
}
// Forward declaring namespace: Pathfinding::Util
namespace Pathfinding::Util {
  // Forward declaring type: GraphTransform
  class GraphTransform;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: IntRect
  struct IntRect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::IntRect, "Pathfinding", "IntRect");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Pathfinding.IntRect
  // [TokenAttribute] Offset: FFFFFFFF
  struct IntRect/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int32 xmin
    // Size: 0x4
    // Offset: 0x0
    int xmin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ymin
    // Size: 0x4
    // Offset: 0x4
    int ymin;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 xmax
    // Size: 0x4
    // Offset: 0x8
    int xmax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 ymax
    // Size: 0x4
    // Offset: 0xC
    int ymax;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: IntRect
    constexpr IntRect(int xmin_ = {}, int ymin_ = {}, int xmax_ = {}, int ymax_ = {}) noexcept : xmin{xmin_}, ymin{ymin_}, xmax{xmax_}, ymax{ymax_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int32 xmin
    [[deprecated("Use field access instead!")]] int& dyn_xmin();
    // Get instance field reference: public System.Int32 ymin
    [[deprecated("Use field access instead!")]] int& dyn_ymin();
    // Get instance field reference: public System.Int32 xmax
    [[deprecated("Use field access instead!")]] int& dyn_xmax();
    // Get instance field reference: public System.Int32 ymax
    [[deprecated("Use field access instead!")]] int& dyn_ymax();
    // public System.Void .ctor(System.Int32 xmin, System.Int32 ymin, System.Int32 xmax, System.Int32 ymax)
    // Offset: 0x2999B24
    // ABORTED: conflicts with another method.  IntRect(int xmin, int ymin, int xmax, int ymax);
    // public System.Boolean Contains(System.Int32 x, System.Int32 y)
    // Offset: 0x2999B30
    bool Contains(int x, int y);
    // public Pathfinding.Int2 get_Min()
    // Offset: 0x2999B6C
    ::Pathfinding::Int2 get_Min();
    // public Pathfinding.Int2 get_Max()
    // Offset: 0x2999B90
    ::Pathfinding::Int2 get_Max();
    // public System.Int32 get_Width()
    // Offset: 0x2999BB4
    int get_Width();
    // public System.Int32 get_Height()
    // Offset: 0x2999BC8
    int get_Height();
    // public System.Int32 get_Area()
    // Offset: 0x2999BDC
    int get_Area();
    // public System.Boolean IsValid()
    // Offset: 0x2999BF8
    bool IsValid();
    // static public Pathfinding.IntRect Intersection(Pathfinding.IntRect a, Pathfinding.IntRect b)
    // Offset: 0x2999D8C
    static ::Pathfinding::IntRect Intersection(::Pathfinding::IntRect a, ::Pathfinding::IntRect b);
    // static public System.Boolean Intersects(Pathfinding.IntRect a, Pathfinding.IntRect b)
    // Offset: 0x2999E68
    static bool Intersects(::Pathfinding::IntRect a, ::Pathfinding::IntRect b);
    // static public Pathfinding.IntRect Union(Pathfinding.IntRect a, Pathfinding.IntRect b)
    // Offset: 0x2999EAC
    static ::Pathfinding::IntRect Union(::Pathfinding::IntRect a, ::Pathfinding::IntRect b);
    // public Pathfinding.IntRect ExpandToContain(System.Int32 x, System.Int32 y)
    // Offset: 0x2999F88
    ::Pathfinding::IntRect ExpandToContain(int x, int y);
    // public Pathfinding.IntRect Expand(System.Int32 range)
    // Offset: 0x299A058
    ::Pathfinding::IntRect Expand(int range);
    // public System.Void DebugDraw(Pathfinding.Util.GraphTransform transform, UnityEngine.Color color)
    // Offset: 0x299A284
    void DebugDraw(::Pathfinding::Util::GraphTransform* transform, ::UnityEngine::Color color);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2999CAC
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2999D64
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x299A080
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // Pathfinding.IntRect
  #pragma pack(pop)
  static check_size<sizeof(IntRect), 12 + sizeof(int)> __Pathfinding_IntRectSizeCheck;
  static_assert(sizeof(IntRect) == 0x10);
  // static public System.Boolean op_Equality(Pathfinding.IntRect a, Pathfinding.IntRect b)
  // Offset: 0x2999C24
  bool operator ==(const ::Pathfinding::IntRect& a, const ::Pathfinding::IntRect& b);
  // static public System.Boolean op_Inequality(Pathfinding.IntRect a, Pathfinding.IntRect b)
  // Offset: 0x2999C68
  bool operator !=(const ::Pathfinding::IntRect& a, const ::Pathfinding::IntRect& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::IntRect::IntRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::IntRect::Contains
// Il2CppName: Contains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::IntRect::*)(int, int)>(&Pathfinding::IntRect::Contains)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Contains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::get_Min
// Il2CppName: get_Min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int2 (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::get_Min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "get_Min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::get_Max
// Il2CppName: get_Max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Int2 (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::get_Max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "get_Max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::get_Width
// Il2CppName: get_Width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::get_Width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "get_Width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::get_Height
// Il2CppName: get_Height
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::get_Height)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "get_Height", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::get_Area
// Il2CppName: get_Area
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::get_Area)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "get_Area", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::IsValid
// Il2CppName: IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::Intersection
// Il2CppName: Intersection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::IntRect (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&Pathfinding::IntRect::Intersection)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Intersection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::Intersects
// Il2CppName: Intersects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&Pathfinding::IntRect::Intersects)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Intersects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::Union
// Il2CppName: Union
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::IntRect (*)(::Pathfinding::IntRect, ::Pathfinding::IntRect)>(&Pathfinding::IntRect::Union)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("Pathfinding", "IntRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Union", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::ExpandToContain
// Il2CppName: ExpandToContain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::IntRect (Pathfinding::IntRect::*)(int, int)>(&Pathfinding::IntRect::ExpandToContain)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* y = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "ExpandToContain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, y});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::IntRect (Pathfinding::IntRect::*)(int)>(&Pathfinding::IntRect::Expand)> {
  static const MethodInfo* get() {
    static auto* range = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{range});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::DebugDraw
// Il2CppName: DebugDraw
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::IntRect::*)(::Pathfinding::Util::GraphTransform*, ::UnityEngine::Color)>(&Pathfinding::IntRect::DebugDraw)> {
  static const MethodInfo* get() {
    static auto* transform = &::il2cpp_utils::GetClassFromName("Pathfinding.Util", "GraphTransform")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "DebugDraw", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{transform, color});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::IntRect::*)(::Il2CppObject*)>(&Pathfinding::IntRect::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Pathfinding::IntRect::*)()>(&Pathfinding::IntRect::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::IntRect), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::IntRect::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Pathfinding::IntRect::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
