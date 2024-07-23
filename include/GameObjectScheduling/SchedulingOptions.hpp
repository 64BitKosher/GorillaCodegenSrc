// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ScriptableObject
#include "UnityEngine/ScriptableObject.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Forward declaring type: SchedulingOptions
  class SchedulingOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GameObjectScheduling::SchedulingOptions);
DEFINE_IL2CPP_ARG_TYPE(::GameObjectScheduling::SchedulingOptions*, "GameObjectScheduling", "SchedulingOptions");
// Type namespace: GameObjectScheduling
namespace GameObjectScheduling {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: GameObjectScheduling.SchedulingOptions
  // [TokenAttribute] Offset: FFFFFFFF
  // [CreateAssetMenuAttribute] Offset: FFFFFFFF
  class SchedulingOptions : public ::UnityEngine::ScriptableObject {
    public:
    public:
    // private System.String debugServerTime
    // Size: 0x8
    // Offset: 0x18
    ::StringW debugServerTime;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.DateTime dtDebugServerTime
    // Size: 0x8
    // Offset: 0x20
    ::System::DateTime dtDebugServerTime;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.Single timescale
    // Size: 0x4
    // Offset: 0x28
    float timescale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.String debugServerTime
    [[deprecated("Use field access instead!")]] ::StringW& dyn_debugServerTime();
    // Get instance field reference: private System.DateTime dtDebugServerTime
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_dtDebugServerTime();
    // Get instance field reference: private System.Single timescale
    [[deprecated("Use field access instead!")]] float& dyn_timescale();
    // public System.DateTime get_DtDebugServerTime()
    // Offset: 0x28CF0B8
    ::System::DateTime get_DtDebugServerTime();
    // public System.Void .ctor()
    // Offset: 0x28CF0F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SchedulingOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GameObjectScheduling::SchedulingOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SchedulingOptions*, creationType>()));
    }
  }; // GameObjectScheduling.SchedulingOptions
  #pragma pack(pop)
  static check_size<sizeof(SchedulingOptions), 40 + sizeof(float)> __GameObjectScheduling_SchedulingOptionsSizeCheck;
  static_assert(sizeof(SchedulingOptions) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GameObjectScheduling::SchedulingOptions::get_DtDebugServerTime
// Il2CppName: get_DtDebugServerTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (GameObjectScheduling::SchedulingOptions::*)()>(&GameObjectScheduling::SchedulingOptions::get_DtDebugServerTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GameObjectScheduling::SchedulingOptions*), "get_DtDebugServerTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GameObjectScheduling::SchedulingOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
