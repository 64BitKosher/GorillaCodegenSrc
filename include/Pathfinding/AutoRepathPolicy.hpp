// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Pathfinding
namespace Pathfinding {
  // Forward declaring type: AutoRepathPolicy
  class AutoRepathPolicy;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AutoRepathPolicy);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AutoRepathPolicy*, "Pathfinding", "AutoRepathPolicy");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AutoRepathPolicy
  // [TokenAttribute] Offset: FFFFFFFF
  class AutoRepathPolicy : public ::Il2CppObject {
    public:
    // Nested type: ::Pathfinding::AutoRepathPolicy::Mode
    struct Mode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Pathfinding.AutoRepathPolicy/Mode
    // [TokenAttribute] Offset: FFFFFFFF
    struct Mode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Mode
      constexpr Mode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Pathfinding.AutoRepathPolicy/Mode Never
      static constexpr const int Never = 0;
      // Get static field: static public Pathfinding.AutoRepathPolicy/Mode Never
      static ::Pathfinding::AutoRepathPolicy::Mode _get_Never();
      // Set static field: static public Pathfinding.AutoRepathPolicy/Mode Never
      static void _set_Never(::Pathfinding::AutoRepathPolicy::Mode value);
      // static field const value: static public Pathfinding.AutoRepathPolicy/Mode EveryNSeconds
      static constexpr const int EveryNSeconds = 1;
      // Get static field: static public Pathfinding.AutoRepathPolicy/Mode EveryNSeconds
      static ::Pathfinding::AutoRepathPolicy::Mode _get_EveryNSeconds();
      // Set static field: static public Pathfinding.AutoRepathPolicy/Mode EveryNSeconds
      static void _set_EveryNSeconds(::Pathfinding::AutoRepathPolicy::Mode value);
      // static field const value: static public Pathfinding.AutoRepathPolicy/Mode Dynamic
      static constexpr const int Dynamic = 2;
      // Get static field: static public Pathfinding.AutoRepathPolicy/Mode Dynamic
      static ::Pathfinding::AutoRepathPolicy::Mode _get_Dynamic();
      // Set static field: static public Pathfinding.AutoRepathPolicy/Mode Dynamic
      static void _set_Dynamic(::Pathfinding::AutoRepathPolicy::Mode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Pathfinding.AutoRepathPolicy/Mode
    #pragma pack(pop)
    static check_size<sizeof(AutoRepathPolicy::Mode), 0 + sizeof(int)> __Pathfinding_AutoRepathPolicy_ModeSizeCheck;
    static_assert(sizeof(AutoRepathPolicy::Mode) == 0x4);
    public:
    // public Pathfinding.AutoRepathPolicy/Mode mode
    // Size: 0x4
    // Offset: 0x10
    ::Pathfinding::AutoRepathPolicy::Mode mode;
    // Field size check
    static_assert(sizeof(::Pathfinding::AutoRepathPolicy::Mode) == 0x4);
    // public System.Single period
    // Size: 0x4
    // Offset: 0x14
    float period;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single sensitivity
    // Size: 0x4
    // Offset: 0x18
    float sensitivity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single maximumPeriod
    // Size: 0x4
    // Offset: 0x1C
    float maximumPeriod;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean visualizeSensitivity
    // Size: 0x1
    // Offset: 0x20
    bool visualizeSensitivity;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: visualizeSensitivity and: lastDestination
    char __padding4[0x3] = {};
    // private UnityEngine.Vector3 lastDestination
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 lastDestination;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Single lastRepathTime
    // Size: 0x4
    // Offset: 0x30
    float lastRepathTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public Pathfinding.AutoRepathPolicy/Mode mode
    [[deprecated("Use field access instead!")]] ::Pathfinding::AutoRepathPolicy::Mode& dyn_mode();
    // Get instance field reference: public System.Single period
    [[deprecated("Use field access instead!")]] float& dyn_period();
    // Get instance field reference: public System.Single sensitivity
    [[deprecated("Use field access instead!")]] float& dyn_sensitivity();
    // Get instance field reference: public System.Single maximumPeriod
    [[deprecated("Use field access instead!")]] float& dyn_maximumPeriod();
    // Get instance field reference: public System.Boolean visualizeSensitivity
    [[deprecated("Use field access instead!")]] bool& dyn_visualizeSensitivity();
    // Get instance field reference: private UnityEngine.Vector3 lastDestination
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_lastDestination();
    // Get instance field reference: private System.Single lastRepathTime
    [[deprecated("Use field access instead!")]] float& dyn_lastRepathTime();
    // public System.Boolean ShouldRecalculatePath(UnityEngine.Vector3 position, System.Single radius, UnityEngine.Vector3 destination)
    // Offset: 0x29A74B8
    bool ShouldRecalculatePath(::UnityEngine::Vector3 position, float radius, ::UnityEngine::Vector3 destination);
    // public System.Void Reset()
    // Offset: 0x29A75EC
    void Reset();
    // public System.Void DidRecalculatePath(UnityEngine.Vector3 destination)
    // Offset: 0x29A75F8
    void DidRecalculatePath(::UnityEngine::Vector3 destination);
    // public System.Void DrawGizmos(UnityEngine.Vector3 position, System.Single radius)
    // Offset: 0x29A7634
    void DrawGizmos(::UnityEngine::Vector3 position, float radius);
    // public System.Void .ctor()
    // Offset: 0x29A774C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AutoRepathPolicy* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::AutoRepathPolicy::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AutoRepathPolicy*, creationType>()));
    }
  }; // Pathfinding.AutoRepathPolicy
  #pragma pack(pop)
  static check_size<sizeof(AutoRepathPolicy), 48 + sizeof(float)> __Pathfinding_AutoRepathPolicySizeCheck;
  static_assert(sizeof(AutoRepathPolicy) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AutoRepathPolicy::Mode, "Pathfinding", "AutoRepathPolicy/Mode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AutoRepathPolicy::ShouldRecalculatePath
// Il2CppName: ShouldRecalculatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3, float, ::UnityEngine::Vector3)>(&Pathfinding::AutoRepathPolicy::ShouldRecalculatePath)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AutoRepathPolicy*), "ShouldRecalculatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, radius, destination});
  }
};
// Writing MetadataGetter for method: Pathfinding::AutoRepathPolicy::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AutoRepathPolicy::*)()>(&Pathfinding::AutoRepathPolicy::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AutoRepathPolicy*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AutoRepathPolicy::DidRecalculatePath
// Il2CppName: DidRecalculatePath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3)>(&Pathfinding::AutoRepathPolicy::DidRecalculatePath)> {
  static const MethodInfo* get() {
    static auto* destination = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AutoRepathPolicy*), "DidRecalculatePath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{destination});
  }
};
// Writing MetadataGetter for method: Pathfinding::AutoRepathPolicy::DrawGizmos
// Il2CppName: DrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AutoRepathPolicy::*)(::UnityEngine::Vector3, float)>(&Pathfinding::AutoRepathPolicy::DrawGizmos)> {
  static const MethodInfo* get() {
    static auto* position = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* radius = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AutoRepathPolicy*), "DrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{position, radius});
  }
};
// Writing MetadataGetter for method: Pathfinding::AutoRepathPolicy::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
