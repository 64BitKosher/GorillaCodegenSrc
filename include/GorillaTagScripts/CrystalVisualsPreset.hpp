// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Forward declaring type: CrystalVisualsPreset
  class CrystalVisualsPreset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GorillaTagScripts::CrystalVisualsPreset);
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::CrystalVisualsPreset*, "GorillaTagScripts", "CrystalVisualsPreset");
// Type namespace: GorillaTagScripts
namespace GorillaTagScripts {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: GorillaTagScripts.CrystalVisualsPreset
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class CrystalVisualsPreset : public ::UnityEngine::ScriptableObject {
    public:
    // Nested type: ::GorillaTagScripts::CrystalVisualsPreset::VisualState
    struct VisualState;
    // Size: 0x20
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: GorillaTagScripts.CrystalVisualsPreset/VisualState
    // [TokenAttribute] Offset: FFFFFFFF
    struct VisualState/*, public ::System::ValueType*/ {
      public:
      public:
      // public UnityEngine.Color albedo
      // Size: 0x10
      // Offset: 0x0
      ::UnityEngine::Color albedo;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      // public UnityEngine.Color emission
      // Size: 0x10
      // Offset: 0x10
      ::UnityEngine::Color emission;
      // Field size check
      static_assert(sizeof(::UnityEngine::Color) == 0x10);
      public:
      // Creating value type constructor for type: VisualState
      constexpr VisualState(::UnityEngine::Color albedo_ = {}, ::UnityEngine::Color emission_ = {}) noexcept : albedo{albedo_}, emission{emission_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public UnityEngine.Color albedo
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_albedo();
      // Get instance field reference: public UnityEngine.Color emission
      [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_emission();
      // static System.Int32 <GetHashCode>g__GetColorHash|2_0(UnityEngine.Color c)
      // Offset: 0x2803DFC
      static int $GetHashCode$g__GetColorHash_2_0(::UnityEngine::Color c);
      // public override System.Int32 GetHashCode()
      // Offset: 0x2803D4C
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
    }; // GorillaTagScripts.CrystalVisualsPreset/VisualState
    #pragma pack(pop)
    static check_size<sizeof(CrystalVisualsPreset::VisualState), 16 + sizeof(::UnityEngine::Color)> __GorillaTagScripts_CrystalVisualsPreset_VisualStateSizeCheck;
    static_assert(sizeof(CrystalVisualsPreset::VisualState) == 0x20);
    public:
    // public GorillaTagScripts.CrystalVisualsPreset/VisualState stateA
    // Size: 0x20
    // Offset: 0x18
    ::GorillaTagScripts::CrystalVisualsPreset::VisualState stateA;
    // Field size check
    static_assert(sizeof(::GorillaTagScripts::CrystalVisualsPreset::VisualState) == 0x20);
    // public GorillaTagScripts.CrystalVisualsPreset/VisualState stateB
    // Size: 0x20
    // Offset: 0x38
    ::GorillaTagScripts::CrystalVisualsPreset::VisualState stateB;
    // Field size check
    static_assert(sizeof(::GorillaTagScripts::CrystalVisualsPreset::VisualState) == 0x20);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public GorillaTagScripts.CrystalVisualsPreset/VisualState stateA
    [[deprecated("Use field access instead!")]] ::GorillaTagScripts::CrystalVisualsPreset::VisualState& dyn_stateA();
    // Get instance field reference: public GorillaTagScripts.CrystalVisualsPreset/VisualState stateB
    [[deprecated("Use field access instead!")]] ::GorillaTagScripts::CrystalVisualsPreset::VisualState& dyn_stateB();
    // private System.Void Save()
    // Offset: 0x2803D40
    void Save();
    // public System.Void .ctor()
    // Offset: 0x2803D44
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CrystalVisualsPreset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GorillaTagScripts::CrystalVisualsPreset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CrystalVisualsPreset*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0x2803C80
    // Implemented from: UnityEngine.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // GorillaTagScripts.CrystalVisualsPreset
  #pragma pack(pop)
  static check_size<sizeof(CrystalVisualsPreset), 56 + sizeof(::GorillaTagScripts::CrystalVisualsPreset::VisualState)> __GorillaTagScripts_CrystalVisualsPresetSizeCheck;
  static_assert(sizeof(CrystalVisualsPreset) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GorillaTagScripts::CrystalVisualsPreset::VisualState, "GorillaTagScripts", "CrystalVisualsPreset/VisualState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GorillaTagScripts::CrystalVisualsPreset::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GorillaTagScripts::CrystalVisualsPreset::*)()>(&GorillaTagScripts::CrystalVisualsPreset::Save)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::CrystalVisualsPreset*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GorillaTagScripts::CrystalVisualsPreset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GorillaTagScripts::CrystalVisualsPreset::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GorillaTagScripts::CrystalVisualsPreset::*)()>(&GorillaTagScripts::CrystalVisualsPreset::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GorillaTagScripts::CrystalVisualsPreset*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
