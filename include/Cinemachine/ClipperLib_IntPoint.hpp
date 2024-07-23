// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Cinemachine.ClipperLib
#include "Cinemachine/ClipperLib.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::ClipperLib::IntPoint, "Cinemachine", "ClipperLib/IntPoint");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Cinemachine.ClipperLib/IntPoint
  // [TokenAttribute] Offset: FFFFFFFF
  struct ClipperLib::IntPoint/*, public ::System::ValueType*/ {
    public:
    public:
    // public System.Int64 X
    // Size: 0x8
    // Offset: 0x0
    int64_t X;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public System.Int64 Y
    // Size: 0x8
    // Offset: 0x8
    int64_t Y;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: IntPoint
    constexpr IntPoint(int64_t X_ = {}, int64_t Y_ = {}) noexcept : X{X_}, Y{Y_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public System.Int64 X
    [[deprecated("Use field access instead!")]] int64_t& dyn_X();
    // Get instance field reference: public System.Int64 Y
    [[deprecated("Use field access instead!")]] int64_t& dyn_Y();
    // public System.Void .ctor(System.Int64 X, System.Int64 Y)
    // Offset: 0x2ABCA14
    // ABORTED: conflicts with another method.  IntPoint(int64_t X, int64_t Y);
    // public System.Void .ctor(System.Double x, System.Double y)
    // Offset: 0x2ABCA1C
    IntPoint(double x, double y);
    // public System.Void .ctor(Cinemachine.ClipperLib/IntPoint pt)
    // Offset: 0x2ABCA48
    // ABORTED: is copy constructor.  IntPoint(::Cinemachine::ClipperLib::IntPoint pt);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x2ABCA80
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x2ABCB08
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // Cinemachine.ClipperLib/IntPoint
  #pragma pack(pop)
  static check_size<sizeof(ClipperLib::IntPoint), 8 + sizeof(int64_t)> __Cinemachine_ClipperLib_IntPointSizeCheck;
  static_assert(sizeof(ClipperLib::IntPoint) == 0x10);
  // static public System.Boolean op_Equality(Cinemachine.ClipperLib/IntPoint a, Cinemachine.ClipperLib/IntPoint b)
  // Offset: 0x2ABCA50
  bool operator ==(const ::Cinemachine::ClipperLib::IntPoint& a, const ::Cinemachine::ClipperLib::IntPoint& b);
  // static public System.Boolean op_Inequality(Cinemachine.ClipperLib/IntPoint a, Cinemachine.ClipperLib/IntPoint b)
  // Offset: 0x2ABCA68
  bool operator !=(const ::Cinemachine::ClipperLib::IntPoint& a, const ::Cinemachine::ClipperLib::IntPoint& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::IntPoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::IntPoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::IntPoint
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Cinemachine::ClipperLib::IntPoint::*)(::Il2CppObject*)>(&Cinemachine::ClipperLib::IntPoint::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ClipperLib::IntPoint), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Cinemachine::ClipperLib::IntPoint::*)()>(&Cinemachine::ClipperLib::IntPoint::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::ClipperLib::IntPoint), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::operator ==
// Il2CppName: op_Equality
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Cinemachine::ClipperLib::IntPoint::operator !=
// Il2CppName: op_Inequality
// Cannot perform method pointer template specialization from operators!
