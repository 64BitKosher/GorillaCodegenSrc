// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Forward declaring type: GlyphAnchorPoint
  struct GlyphAnchorPoint;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::GlyphAnchorPoint, "UnityEngine.TextCore.LowLevel", "GlyphAnchorPoint");
// Type namespace: UnityEngine.TextCore.LowLevel
namespace UnityEngine::TextCore::LowLevel {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.TextCore.LowLevel.GlyphAnchorPoint
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct GlyphAnchorPoint/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_XCoordinate
    // Size: 0x4
    // Offset: 0x0
    float m_XCoordinate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_YCoordinate
    // Size: 0x4
    // Offset: 0x4
    float m_YCoordinate;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: GlyphAnchorPoint
    constexpr GlyphAnchorPoint(float m_XCoordinate_ = {}, float m_YCoordinate_ = {}) noexcept : m_XCoordinate{m_XCoordinate_}, m_YCoordinate{m_YCoordinate_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single m_XCoordinate
    [[deprecated("Use field access instead!")]] float& dyn_m_XCoordinate();
    // Get instance field reference: private System.Single m_YCoordinate
    [[deprecated("Use field access instead!")]] float& dyn_m_YCoordinate();
    // public System.Single get_xCoordinate()
    // Offset: 0x5543974
    float get_xCoordinate();
    // public System.Single get_yCoordinate()
    // Offset: 0x554397C
    float get_yCoordinate();
  }; // UnityEngine.TextCore.LowLevel.GlyphAnchorPoint
  #pragma pack(pop)
  static check_size<sizeof(GlyphAnchorPoint), 4 + sizeof(float)> __UnityEngine_TextCore_LowLevel_GlyphAnchorPointSizeCheck;
  static_assert(sizeof(GlyphAnchorPoint) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate
// Il2CppName: get_xCoordinate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_xCoordinate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphAnchorPoint), "get_xCoordinate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate
// Il2CppName: get_yCoordinate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::*)()>(&UnityEngine::TextCore::LowLevel::GlyphAnchorPoint::get_yCoordinate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TextCore::LowLevel::GlyphAnchorPoint), "get_yCoordinate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
