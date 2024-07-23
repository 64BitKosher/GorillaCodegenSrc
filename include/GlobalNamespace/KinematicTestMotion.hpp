// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Rigidbody
  class Rigidbody;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: KinematicTestMotion
  class KinematicTestMotion;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::KinematicTestMotion);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KinematicTestMotion*, "", "KinematicTestMotion");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: KinematicTestMotion
  // [TokenAttribute] Offset: FFFFFFFF
  class KinematicTestMotion : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::KinematicTestMotion::UpdateType
    struct UpdateType;
    // Nested type: ::GlobalNamespace::KinematicTestMotion::MoveType
    struct MoveType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: KinematicTestMotion/UpdateType
    // [TokenAttribute] Offset: FFFFFFFF
    struct UpdateType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UpdateType
      constexpr UpdateType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public KinematicTestMotion/UpdateType Update
      static constexpr const int Update = 0;
      // Get static field: static public KinematicTestMotion/UpdateType Update
      static ::GlobalNamespace::KinematicTestMotion::UpdateType _get_Update();
      // Set static field: static public KinematicTestMotion/UpdateType Update
      static void _set_Update(::GlobalNamespace::KinematicTestMotion::UpdateType value);
      // static field const value: static public KinematicTestMotion/UpdateType LateUpdate
      static constexpr const int LateUpdate = 1;
      // Get static field: static public KinematicTestMotion/UpdateType LateUpdate
      static ::GlobalNamespace::KinematicTestMotion::UpdateType _get_LateUpdate();
      // Set static field: static public KinematicTestMotion/UpdateType LateUpdate
      static void _set_LateUpdate(::GlobalNamespace::KinematicTestMotion::UpdateType value);
      // static field const value: static public KinematicTestMotion/UpdateType FixedUpdate
      static constexpr const int FixedUpdate = 2;
      // Get static field: static public KinematicTestMotion/UpdateType FixedUpdate
      static ::GlobalNamespace::KinematicTestMotion::UpdateType _get_FixedUpdate();
      // Set static field: static public KinematicTestMotion/UpdateType FixedUpdate
      static void _set_FixedUpdate(::GlobalNamespace::KinematicTestMotion::UpdateType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // KinematicTestMotion/UpdateType
    #pragma pack(pop)
    static check_size<sizeof(KinematicTestMotion::UpdateType), 0 + sizeof(int)> __GlobalNamespace_KinematicTestMotion_UpdateTypeSizeCheck;
    static_assert(sizeof(KinematicTestMotion::UpdateType) == 0x4);
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: KinematicTestMotion/MoveType
    // [TokenAttribute] Offset: FFFFFFFF
    struct MoveType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: MoveType
      constexpr MoveType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public KinematicTestMotion/MoveType TransformPosition
      static constexpr const int TransformPosition = 0;
      // Get static field: static public KinematicTestMotion/MoveType TransformPosition
      static ::GlobalNamespace::KinematicTestMotion::MoveType _get_TransformPosition();
      // Set static field: static public KinematicTestMotion/MoveType TransformPosition
      static void _set_TransformPosition(::GlobalNamespace::KinematicTestMotion::MoveType value);
      // static field const value: static public KinematicTestMotion/MoveType RigidbodyMovePosition
      static constexpr const int RigidbodyMovePosition = 1;
      // Get static field: static public KinematicTestMotion/MoveType RigidbodyMovePosition
      static ::GlobalNamespace::KinematicTestMotion::MoveType _get_RigidbodyMovePosition();
      // Set static field: static public KinematicTestMotion/MoveType RigidbodyMovePosition
      static void _set_RigidbodyMovePosition(::GlobalNamespace::KinematicTestMotion::MoveType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // KinematicTestMotion/MoveType
    #pragma pack(pop)
    static check_size<sizeof(KinematicTestMotion::MoveType), 0 + sizeof(int)> __GlobalNamespace_KinematicTestMotion_MoveTypeSizeCheck;
    static_assert(sizeof(KinematicTestMotion::MoveType) == 0x4);
    public:
    // public UnityEngine.Transform start
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* start;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Transform end
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::Transform* end;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // public UnityEngine.Rigidbody rigidbody
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Rigidbody* rigidbody;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rigidbody*) == 0x8);
    // public KinematicTestMotion/UpdateType updateType
    // Size: 0x4
    // Offset: 0x38
    ::GlobalNamespace::KinematicTestMotion::UpdateType updateType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KinematicTestMotion::UpdateType) == 0x4);
    // public KinematicTestMotion/MoveType moveType
    // Size: 0x4
    // Offset: 0x3C
    ::GlobalNamespace::KinematicTestMotion::MoveType moveType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::KinematicTestMotion::MoveType) == 0x4);
    // public System.Single period
    // Size: 0x4
    // Offset: 0x40
    float period;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public UnityEngine.Transform start
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_start();
    // Get instance field reference: public UnityEngine.Transform end
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn_end();
    // Get instance field reference: public UnityEngine.Rigidbody rigidbody
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rigidbody*& dyn_rigidbody();
    // Get instance field reference: public KinematicTestMotion/UpdateType updateType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KinematicTestMotion::UpdateType& dyn_updateType();
    // Get instance field reference: public KinematicTestMotion/MoveType moveType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::KinematicTestMotion::MoveType& dyn_moveType();
    // Get instance field reference: public System.Single period
    [[deprecated("Use field access instead!")]] float& dyn_period();
    // private System.Void FixedUpdate()
    // Offset: 0x27726D8
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x2772824
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x2772850
    void LateUpdate();
    // private System.Void UpdatePosition(System.Single time)
    // Offset: 0x2772708
    void UpdatePosition(float time);
    // public System.Void .ctor()
    // Offset: 0x2772880
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KinematicTestMotion* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::KinematicTestMotion::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KinematicTestMotion*, creationType>()));
    }
  }; // KinematicTestMotion
  #pragma pack(pop)
  static check_size<sizeof(KinematicTestMotion), 64 + sizeof(float)> __GlobalNamespace_KinematicTestMotionSizeCheck;
  static_assert(sizeof(KinematicTestMotion) == 0x44);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KinematicTestMotion::MoveType, "", "KinematicTestMotion/MoveType");
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::KinematicTestMotion::UpdateType, "", "KinematicTestMotion/UpdateType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::KinematicTestMotion::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KinematicTestMotion::*)()>(&GlobalNamespace::KinematicTestMotion::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KinematicTestMotion*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KinematicTestMotion::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KinematicTestMotion::*)()>(&GlobalNamespace::KinematicTestMotion::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KinematicTestMotion*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KinematicTestMotion::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KinematicTestMotion::*)()>(&GlobalNamespace::KinematicTestMotion::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KinematicTestMotion*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KinematicTestMotion::UpdatePosition
// Il2CppName: UpdatePosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::KinematicTestMotion::*)(float)>(&GlobalNamespace::KinematicTestMotion::UpdatePosition)> {
  static const MethodInfo* get() {
    static auto* time = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::KinematicTestMotion*), "UpdatePosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{time});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::KinematicTestMotion::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
