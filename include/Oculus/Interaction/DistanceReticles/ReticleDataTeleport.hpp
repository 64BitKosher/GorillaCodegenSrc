// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.DistanceReticles.IReticleData
#include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Skipping declaration: TeleportReticleMode because it is already included!
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Forward declaring type: ReticleDataTeleport
  class ReticleDataTeleport;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport*, "Oculus.Interaction.DistanceReticles", "ReticleDataTeleport");
// Type namespace: Oculus.Interaction.DistanceReticles
namespace Oculus::Interaction::DistanceReticles {
  // Size: 0x34
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.DistanceReticles.ReticleDataTeleport
  // [TokenAttribute] Offset: FFFFFFFF
  class ReticleDataTeleport : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::DistanceReticles::IReticleData*/ {
    public:
    // Nested type: ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode
    struct TeleportReticleMode;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode
    // [TokenAttribute] Offset: FFFFFFFF
    struct TeleportReticleMode/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: TeleportReticleMode
      constexpr TeleportReticleMode(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Hidden
      static constexpr const int Hidden = 0;
      // Get static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Hidden
      static ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode _get_Hidden();
      // Set static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode Hidden
      static void _set_Hidden(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode value);
      // static field const value: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode ValidTarget
      static constexpr const int ValidTarget = 1;
      // Get static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode ValidTarget
      static ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode _get_ValidTarget();
      // Set static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode ValidTarget
      static void _set_ValidTarget(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode value);
      // static field const value: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode InvalidTarget
      static constexpr const int InvalidTarget = 2;
      // Get static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode InvalidTarget
      static ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode _get_InvalidTarget();
      // Set static field: static public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode InvalidTarget
      static void _set_InvalidTarget(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode
    #pragma pack(pop)
    static check_size<sizeof(ReticleDataTeleport::TeleportReticleMode), 0 + sizeof(int)> __Oculus_Interaction_DistanceReticles_ReticleDataTeleport_TeleportReticleModeSizeCheck;
    static_assert(sizeof(ReticleDataTeleport::TeleportReticleMode) == 0x4);
    public:
    // private UnityEngine.Transform _snapPoint
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Transform* snapPoint;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    // private Oculus.Interaction.MaterialPropertyBlockEditor _materialBlock
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::MaterialPropertyBlockEditor* materialBlock;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode _reticleMode
    // Size: 0x4
    // Offset: 0x30
    ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode reticleMode;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode) == 0x4);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::DistanceReticles::IReticleData
    operator ::Oculus::Interaction::DistanceReticles::IReticleData() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(this);
    }
    // Get static field: static private readonly System.Int32 _highlightShaderID
    static int _get__highlightShaderID();
    // Set static field: static private readonly System.Int32 _highlightShaderID
    static void _set__highlightShaderID(int value);
    // Get instance field reference: private UnityEngine.Transform _snapPoint
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__snapPoint();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _materialBlock
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__materialBlock();
    // Get instance field reference: private Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode _reticleMode
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode& dyn__reticleMode();
    // public Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode get_ReticleMode()
    // Offset: 0x484027C
    ::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode get_ReticleMode();
    // public System.Void set_ReticleMode(Oculus.Interaction.DistanceReticles.ReticleDataTeleport/TeleportReticleMode value)
    // Offset: 0x4840284
    void set_ReticleMode(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode value);
    // public UnityEngine.Vector3 ProcessHitPoint(UnityEngine.Vector3 hitPoint)
    // Offset: 0x484028C
    ::UnityEngine::Vector3 ProcessHitPoint(::UnityEngine::Vector3 hitPoint);
    // public System.Void Highlight(System.Boolean highlight)
    // Offset: 0x484033C
    void Highlight(bool highlight);
    // public System.Void InjectOptionalSnapPoint(UnityEngine.Transform snapPoint)
    // Offset: 0x4840438
    void InjectOptionalSnapPoint(::UnityEngine::Transform* snapPoint);
    // public System.Void .ctor()
    // Offset: 0x4840440
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReticleDataTeleport* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReticleDataTeleport*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x4840450
    static void _cctor();
  }; // Oculus.Interaction.DistanceReticles.ReticleDataTeleport
  #pragma pack(pop)
  static check_size<sizeof(ReticleDataTeleport), 48 + sizeof(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode)> __Oculus_Interaction_DistanceReticles_ReticleDataTeleportSizeCheck;
  static_assert(sizeof(ReticleDataTeleport) == 0x34);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode, "Oculus.Interaction.DistanceReticles", "ReticleDataTeleport/TeleportReticleMode");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::get_ReticleMode
// Il2CppName: get_ReticleMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode (Oculus::Interaction::DistanceReticles::ReticleDataTeleport::*)()>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::get_ReticleMode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), "get_ReticleMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::set_ReticleMode
// Il2CppName: set_ReticleMode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataTeleport::*)(::Oculus::Interaction::DistanceReticles::ReticleDataTeleport::TeleportReticleMode)>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::set_ReticleMode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.DistanceReticles", "ReticleDataTeleport/TeleportReticleMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), "set_ReticleMode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::ProcessHitPoint
// Il2CppName: ProcessHitPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::DistanceReticles::ReticleDataTeleport::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::ProcessHitPoint)> {
  static const MethodInfo* get() {
    static auto* hitPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), "ProcessHitPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hitPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::Highlight
// Il2CppName: Highlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataTeleport::*)(bool)>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::Highlight)> {
  static const MethodInfo* get() {
    static auto* highlight = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), "Highlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{highlight});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::InjectOptionalSnapPoint
// Il2CppName: InjectOptionalSnapPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::DistanceReticles::ReticleDataTeleport::*)(::UnityEngine::Transform*)>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::InjectOptionalSnapPoint)> {
  static const MethodInfo* get() {
    static auto* snapPoint = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), "InjectOptionalSnapPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{snapPoint});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::DistanceReticles::ReticleDataTeleport::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::DistanceReticles::ReticleDataTeleport::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::DistanceReticles::ReticleDataTeleport*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
