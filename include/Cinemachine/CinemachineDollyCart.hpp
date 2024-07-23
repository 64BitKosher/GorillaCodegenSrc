// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Cinemachine.CinemachinePathBase/PositionUnits
#include "Cinemachine/CinemachinePathBase_PositionUnits.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Cinemachine
namespace Cinemachine {
  // Skipping declaration: CinemachinePathBase because it is already included!
}
// Completed forward declares
// Type namespace: Cinemachine
namespace Cinemachine {
  // Forward declaring type: CinemachineDollyCart
  class CinemachineDollyCart;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Cinemachine::CinemachineDollyCart);
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineDollyCart*, "Cinemachine", "CinemachineDollyCart");
// Type namespace: Cinemachine
namespace Cinemachine {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Cinemachine.CinemachineDollyCart
  // [TokenAttribute] Offset: FFFFFFFF
  // [DocumentationSortingAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  class CinemachineDollyCart : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Cinemachine::CinemachineDollyCart::UpdateMethod
    struct UpdateMethod;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Cinemachine.CinemachineDollyCart/UpdateMethod
    // [TokenAttribute] Offset: FFFFFFFF
    struct UpdateMethod/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: UpdateMethod
      constexpr UpdateMethod(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Cinemachine.CinemachineDollyCart/UpdateMethod Update
      static constexpr const int Update = 0;
      // Get static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod Update
      static ::Cinemachine::CinemachineDollyCart::UpdateMethod _get_Update();
      // Set static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod Update
      static void _set_Update(::Cinemachine::CinemachineDollyCart::UpdateMethod value);
      // static field const value: static public Cinemachine.CinemachineDollyCart/UpdateMethod FixedUpdate
      static constexpr const int FixedUpdate = 1;
      // Get static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod FixedUpdate
      static ::Cinemachine::CinemachineDollyCart::UpdateMethod _get_FixedUpdate();
      // Set static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod FixedUpdate
      static void _set_FixedUpdate(::Cinemachine::CinemachineDollyCart::UpdateMethod value);
      // static field const value: static public Cinemachine.CinemachineDollyCart/UpdateMethod LateUpdate
      static constexpr const int LateUpdate = 2;
      // Get static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod LateUpdate
      static ::Cinemachine::CinemachineDollyCart::UpdateMethod _get_LateUpdate();
      // Set static field: static public Cinemachine.CinemachineDollyCart/UpdateMethod LateUpdate
      static void _set_LateUpdate(::Cinemachine::CinemachineDollyCart::UpdateMethod value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Cinemachine.CinemachineDollyCart/UpdateMethod
    #pragma pack(pop)
    static check_size<sizeof(CinemachineDollyCart::UpdateMethod), 0 + sizeof(int)> __Cinemachine_CinemachineDollyCart_UpdateMethodSizeCheck;
    static_assert(sizeof(CinemachineDollyCart::UpdateMethod) == 0x4);
    public:
    // public Cinemachine.CinemachinePathBase m_Path
    // Size: 0x8
    // Offset: 0x20
    ::Cinemachine::CinemachinePathBase* m_Path;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachinePathBase*) == 0x8);
    // public Cinemachine.CinemachineDollyCart/UpdateMethod m_UpdateMethod
    // Size: 0x4
    // Offset: 0x28
    ::Cinemachine::CinemachineDollyCart::UpdateMethod m_UpdateMethod;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachineDollyCart::UpdateMethod) == 0x4);
    // public Cinemachine.CinemachinePathBase/PositionUnits m_PositionUnits
    // Size: 0x4
    // Offset: 0x2C
    ::Cinemachine::CinemachinePathBase::PositionUnits m_PositionUnits;
    // Field size check
    static_assert(sizeof(::Cinemachine::CinemachinePathBase::PositionUnits) == 0x4);
    // public System.Single m_Speed
    // Size: 0x4
    // Offset: 0x30
    float m_Speed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single m_Position
    // Size: 0x4
    // Offset: 0x34
    float m_Position;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public Cinemachine.CinemachinePathBase m_Path
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachinePathBase*& dyn_m_Path();
    // Get instance field reference: public Cinemachine.CinemachineDollyCart/UpdateMethod m_UpdateMethod
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachineDollyCart::UpdateMethod& dyn_m_UpdateMethod();
    // Get instance field reference: public Cinemachine.CinemachinePathBase/PositionUnits m_PositionUnits
    [[deprecated("Use field access instead!")]] ::Cinemachine::CinemachinePathBase::PositionUnits& dyn_m_PositionUnits();
    // Get instance field reference: public System.Single m_Speed
    [[deprecated("Use field access instead!")]] float& dyn_m_Speed();
    // Get instance field reference: public System.Single m_Position
    [[deprecated("Use field access instead!")]] float& dyn_m_Position();
    // private System.Void FixedUpdate()
    // Offset: 0x2A8C348
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x2A8C4B0
    void Update();
    // private System.Void LateUpdate()
    // Offset: 0x2A8C54C
    void LateUpdate();
    // private System.Void SetCartPosition(System.Single distanceAlongPath)
    // Offset: 0x2A8C390
    void SetCartPosition(float distanceAlongPath);
    // public System.Void .ctor()
    // Offset: 0x2A8C5EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CinemachineDollyCart* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Cinemachine::CinemachineDollyCart::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CinemachineDollyCart*, creationType>()));
    }
  }; // Cinemachine.CinemachineDollyCart
  #pragma pack(pop)
  static check_size<sizeof(CinemachineDollyCart), 52 + sizeof(float)> __Cinemachine_CinemachineDollyCartSizeCheck;
  static_assert(sizeof(CinemachineDollyCart) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Cinemachine::CinemachineDollyCart::UpdateMethod, "Cinemachine", "CinemachineDollyCart/UpdateMethod");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Cinemachine::CinemachineDollyCart::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineDollyCart::*)()>(&Cinemachine::CinemachineDollyCart::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineDollyCart*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineDollyCart::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineDollyCart::*)()>(&Cinemachine::CinemachineDollyCart::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineDollyCart*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineDollyCart::LateUpdate
// Il2CppName: LateUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineDollyCart::*)()>(&Cinemachine::CinemachineDollyCart::LateUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineDollyCart*), "LateUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineDollyCart::SetCartPosition
// Il2CppName: SetCartPosition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Cinemachine::CinemachineDollyCart::*)(float)>(&Cinemachine::CinemachineDollyCart::SetCartPosition)> {
  static const MethodInfo* get() {
    static auto* distanceAlongPath = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Cinemachine::CinemachineDollyCart*), "SetCartPosition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{distanceAlongPath});
  }
};
// Writing MetadataGetter for method: Cinemachine::CinemachineDollyCart::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
