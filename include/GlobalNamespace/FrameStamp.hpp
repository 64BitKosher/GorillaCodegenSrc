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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FrameStamp
  struct FrameStamp;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FrameStamp, "", "FrameStamp");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: FrameStamp
  // [TokenAttribute] Offset: FFFFFFFF
  struct FrameStamp/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 _lastFrame
    // Size: 0x4
    // Offset: 0x0
    int lastFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: FrameStamp
    constexpr FrameStamp(int lastFrame_ = {}) noexcept : lastFrame{lastFrame_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return lastFrame;
    }
    // Get instance field reference: private System.Int32 _lastFrame
    [[deprecated("Use field access instead!")]] int& dyn__lastFrame();
    // public System.Int32 get_framesElapsed()
    // Offset: 0x274D9EC
    int get_framesElapsed();
    // static public FrameStamp Now()
    // Offset: 0x274DA0C
    static ::GlobalNamespace::FrameStamp Now();
    // public override System.String ToString()
    // Offset: 0x274DA24
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x274DAB8
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
  }; // FrameStamp
  #pragma pack(pop)
  static check_size<sizeof(FrameStamp), 0 + sizeof(int)> __GlobalNamespace_FrameStampSizeCheck;
  static_assert(sizeof(FrameStamp) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FrameStamp::get_framesElapsed
// Il2CppName: get_framesElapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FrameStamp::*)()>(&GlobalNamespace::FrameStamp::get_framesElapsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FrameStamp), "get_framesElapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FrameStamp::Now
// Il2CppName: Now
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::FrameStamp (*)()>(&GlobalNamespace::FrameStamp::Now)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FrameStamp), "Now", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FrameStamp::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::FrameStamp::*)()>(&GlobalNamespace::FrameStamp::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FrameStamp), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FrameStamp::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::FrameStamp::*)()>(&GlobalNamespace::FrameStamp::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FrameStamp), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
