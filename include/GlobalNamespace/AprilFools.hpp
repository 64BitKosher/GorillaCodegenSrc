// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: System.Single
#include "System/Single.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: AprilFools
  class AprilFools;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::AprilFools);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AprilFools*, "", "AprilFools");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AprilFools
  // [TokenAttribute] Offset: FFFFFFFF
  class AprilFools : public ::Il2CppObject {
    public:
    // static field const value: static private System.Int32 changeIntervalSeconds
    static constexpr const int changeIntervalSeconds = 300;
    // Get static field: static private System.Int32 changeIntervalSeconds
    static int _get_changeIntervalSeconds();
    // Set static field: static private System.Int32 changeIntervalSeconds
    static void _set_changeIntervalSeconds(int value);
    // static field const value: static private System.Int32 lerpIntervalSeconds
    static constexpr const int lerpIntervalSeconds = 120;
    // Get static field: static private System.Int32 lerpIntervalSeconds
    static int _get_lerpIntervalSeconds();
    // Set static field: static private System.Int32 lerpIntervalSeconds
    static void _set_lerpIntervalSeconds(int value);
    // static field const value: static private System.Single minRange
    static constexpr const float minRange = 0.5;
    // Get static field: static private System.Single minRange
    static float _get_minRange();
    // Set static field: static private System.Single minRange
    static void _set_minRange(float value);
    // static field const value: static private System.Single maxRange
    static constexpr const float maxRange = 2;
    // Get static field: static private System.Single maxRange
    static float _get_maxRange();
    // Set static field: static private System.Single maxRange
    static void _set_maxRange(float value);
    // static field const value: static private System.Single excludeRangeStart
    static constexpr const float excludeRangeStart = 0.75;
    // Get static field: static private System.Single excludeRangeStart
    static float _get_excludeRangeStart();
    // Set static field: static private System.Single excludeRangeStart
    static void _set_excludeRangeStart(float value);
    // static field const value: static private System.Single excludeRangeEnd
    static constexpr const float excludeRangeEnd = 1.25;
    // Get static field: static private System.Single excludeRangeEnd
    static float _get_excludeRangeEnd();
    // Set static field: static private System.Single excludeRangeEnd
    static void _set_excludeRangeEnd(float value);
    // static public System.Int32 mod(System.Int32 x, System.Int32 m)
    // Offset: 0x26A0F28
    static int mod(int x, int m);
    // static public System.Single GenerateTarget(System.String username, System.String roomName, System.String areaName, System.Int32 startTime)
    // Offset: 0x26A0F40
    static float GenerateTarget(::StringW username, ::StringW roomName, ::StringW areaName, int startTime);
    // static public System.Single Slerp(System.Single a, System.Single b, System.Single t)
    // Offset: 0x26A1178
    static float Slerp(float a, float b, float t);
    // static public System.Single SmoothSlerp(System.Single a, System.Single b, System.Single t)
    // Offset: 0x26A12D0
    static float SmoothSlerp(float a, float b, float t);
    // static public System.Single GenerateSmoothTarget(System.String username, System.String roomName, System.String areaName)
    // Offset: 0x26A1354
    static float GenerateSmoothTarget(::StringW username, ::StringW roomName, ::StringW areaName);
  }; // AprilFools
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::AprilFools::mod
// Il2CppName: mod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(int, int)>(&GlobalNamespace::AprilFools::mod)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* m = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AprilFools*), "mod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, m});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AprilFools::GenerateTarget
// Il2CppName: GenerateTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, ::StringW, ::StringW, int)>(&GlobalNamespace::AprilFools::GenerateTarget)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* roomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* areaName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* startTime = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AprilFools*), "GenerateTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, roomName, areaName, startTime});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AprilFools::Slerp
// Il2CppName: Slerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&GlobalNamespace::AprilFools::Slerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AprilFools*), "Slerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AprilFools::SmoothSlerp
// Il2CppName: SmoothSlerp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(float, float, float)>(&GlobalNamespace::AprilFools::SmoothSlerp)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* b = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AprilFools*), "SmoothSlerp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a, b, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::AprilFools::GenerateSmoothTarget
// Il2CppName: GenerateSmoothTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, ::StringW, ::StringW)>(&GlobalNamespace::AprilFools::GenerateSmoothTarget)> {
  static const MethodInfo* get() {
    static auto* username = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* roomName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* areaName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::AprilFools*), "GenerateSmoothTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{username, roomName, areaName});
  }
};
