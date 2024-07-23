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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: Vector2
  struct Vector2;
}
// Forward declaring namespace: DigitalOpus::MB::Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: DVector2
  struct DVector2;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: DRect
  struct DRect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::DRect, "DigitalOpus.MB.Core", "DRect");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x20
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: DigitalOpus.MB.Core.DRect
  // [TokenAttribute] Offset: FFFFFFFF
  struct DRect/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Double x
    // Size: 0x8
    // Offset: 0x0
    double x;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double y
    // Size: 0x8
    // Offset: 0x8
    double y;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double width
    // Size: 0x8
    // Offset: 0x10
    double width;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public System.Double height
    // Size: 0x8
    // Offset: 0x18
    double height;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Creating value type constructor for type: DRect
    constexpr DRect(double x_ = {}, double y_ = {}, double width_ = {}, double height_ = {}) noexcept : x{x_}, y{y_}, width{width_}, height{height_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Double x
    [[deprecated("Use field access instead!")]] double& dyn_x();
    // Get instance field reference: public System.Double y
    [[deprecated("Use field access instead!")]] double& dyn_y();
    // Get instance field reference: public System.Double width
    [[deprecated("Use field access instead!")]] double& dyn_width();
    // Get instance field reference: public System.Double height
    [[deprecated("Use field access instead!")]] double& dyn_height();
    // public System.Void .ctor(UnityEngine.Rect r)
    // Offset: 0x43D1D30
    DRect(::UnityEngine::Rect r);
    // public System.Void .ctor(UnityEngine.Vector2 o, UnityEngine.Vector2 s)
    // Offset: 0x43D1D4C
    DRect(::UnityEngine::Vector2 o, ::UnityEngine::Vector2 s);
    // public System.Void .ctor(DigitalOpus.MB.Core.DRect r)
    // Offset: 0x43D1D68
    // ABORTED: is copy constructor.  DRect(::DigitalOpus::MB::Core::DRect r);
    // public System.Void .ctor(System.Single xx, System.Single yy, System.Single w, System.Single h)
    // Offset: 0x43D1D74
    DRect(float xx, float yy, float w, float h);
    // public System.Void .ctor(System.Double xx, System.Double yy, System.Double w, System.Double h)
    // Offset: 0x43D1D90
    // ABORTED: conflicts with another method.  DRect(double xx, double yy, double w, double h);
    // public UnityEngine.Rect GetRect()
    // Offset: 0x43D1D9C
    ::UnityEngine::Rect GetRect();
    // public DigitalOpus.MB.Core.DVector2 get_minD()
    // Offset: 0x43D1DB8
    ::DigitalOpus::MB::Core::DVector2 get_minD();
    // public DigitalOpus.MB.Core.DVector2 get_maxD()
    // Offset: 0x43D1DC0
    ::DigitalOpus::MB::Core::DVector2 get_maxD();
    // public UnityEngine.Vector2 get_min()
    // Offset: 0x43D1DD0
    ::UnityEngine::Vector2 get_min();
    // public UnityEngine.Vector2 get_max()
    // Offset: 0x43D1DE0
    ::UnityEngine::Vector2 get_max();
    // public UnityEngine.Vector2 get_size()
    // Offset: 0x43D1DF4
    ::UnityEngine::Vector2 get_size();
    // public DigitalOpus.MB.Core.DVector2 get_center()
    // Offset: 0x43D1E04
    ::DigitalOpus::MB::Core::DVector2 get_center();
    // public System.Void Expand(System.Single amt)
    // Offset: 0x43D21BC
    void Expand(float amt);
    // public System.Boolean Encloses(DigitalOpus.MB.Core.DRect smallToTestIfFits)
    // Offset: 0x43D21E4
    bool Encloses(::DigitalOpus::MB::Core::DRect smallToTestIfFits);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x43D1E1C
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x43D1FFC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x43D2254
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // DigitalOpus.MB.Core.DRect
  #pragma pack(pop)
  static check_size<sizeof(DRect), 24 + sizeof(double)> __DigitalOpus_MB_Core_DRectSizeCheck;
  static_assert(sizeof(DRect) == 0x20);
  // static public System.Boolean op_Equality(DigitalOpus.MB.Core.DRect a, DigitalOpus.MB.Core.DRect b)
  // Offset: 0x43D1ED8
  bool operator ==(const ::DigitalOpus::MB::Core::DRect& a, const ::DigitalOpus::MB::Core::DRect& b);
  // static public System.Boolean op_Inequality(DigitalOpus.MB.Core.DRect a, DigitalOpus.MB.Core.DRect b)
  // Offset: 0x43D1F68
  bool operator !=(const ::DigitalOpus::MB::Core::DRect& a, const ::DigitalOpus::MB::Core::DRect& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::DRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::DRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::DRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::DRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::DRect
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::GetRect
// Il2CppName: GetRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::GetRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "GetRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_minD
// Il2CppName: get_minD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DVector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_minD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_minD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_maxD
// Il2CppName: get_maxD
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DVector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_maxD)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_maxD", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_min
// Il2CppName: get_min
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_min)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_min", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_max
// Il2CppName: get_max
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_max)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_max", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_size
// Il2CppName: get_size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::DigitalOpus::MB::Core::DVector2 (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::Expand
// Il2CppName: Expand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (DigitalOpus::MB::Core::DRect::*)(float)>(&DigitalOpus::MB::Core::DRect::Expand)> {
  static const MethodInfo* get() {
    static auto* amt = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "Expand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{amt});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::Encloses
// Il2CppName: Encloses
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::DRect::*)(::DigitalOpus::MB::Core::DRect)>(&DigitalOpus::MB::Core::DRect::Encloses)> {
  static const MethodInfo* get() {
    static auto* smallToTestIfFits = &::il2cpp_utils::GetClassFromName("DigitalOpus.MB.Core", "DRect")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "Encloses", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{smallToTestIfFits});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (DigitalOpus::MB::Core::DRect::*)(::Il2CppObject*)>(&DigitalOpus::MB::Core::DRect::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (DigitalOpus::MB::Core::DRect::*)()>(&DigitalOpus::MB::Core::DRect::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::DRect), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: DigitalOpus::MB::Core::DRect::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!