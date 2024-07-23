// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Surfaces.IBoundsClipper
#include "Oculus/Interaction/Surfaces/IBoundsClipper.hpp"
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
  // Forward declaring type: Bounds
  struct Bounds;
}
// Completed forward declares
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Forward declaring type: BoundsClipper
  class BoundsClipper;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::Surfaces::BoundsClipper);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::Surfaces::BoundsClipper*, "Oculus.Interaction.Surfaces", "BoundsClipper");
// Type namespace: Oculus.Interaction.Surfaces
namespace Oculus::Interaction::Surfaces {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.Surfaces.BoundsClipper
  // [TokenAttribute] Offset: FFFFFFFF
  class BoundsClipper : public ::UnityEngine::MonoBehaviour/*, public ::Oculus::Interaction::Surfaces::IBoundsClipper*/ {
    public:
    public:
    // private UnityEngine.Vector3 _position
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 position;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _size
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::Surfaces::IBoundsClipper
    operator ::Oculus::Interaction::Surfaces::IBoundsClipper() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::Surfaces::IBoundsClipper*>(this);
    }
    // Get instance field reference: private UnityEngine.Vector3 _position
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__position();
    // Get instance field reference: private UnityEngine.Vector3 _size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__size();
    // public UnityEngine.Vector3 get_Position()
    // Offset: 0x4800124
    ::UnityEngine::Vector3 get_Position();
    // public System.Void set_Position(UnityEngine.Vector3 value)
    // Offset: 0x4800130
    void set_Position(::UnityEngine::Vector3 value);
    // public UnityEngine.Vector3 get_Size()
    // Offset: 0x480013C
    ::UnityEngine::Vector3 get_Size();
    // public System.Void set_Size(UnityEngine.Vector3 value)
    // Offset: 0x4800148
    void set_Size(::UnityEngine::Vector3 value);
    // public System.Boolean GetLocalBounds(UnityEngine.Transform localTo, out UnityEngine.Bounds bounds)
    // Offset: 0x4800154
    bool GetLocalBounds(::UnityEngine::Transform* localTo, ByRef<::UnityEngine::Bounds> bounds);
    // public System.Void .ctor()
    // Offset: 0x4800210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoundsClipper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::Surfaces::BoundsClipper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoundsClipper*, creationType>()));
    }
  }; // Oculus.Interaction.Surfaces.BoundsClipper
  #pragma pack(pop)
  static check_size<sizeof(BoundsClipper), 44 + sizeof(::UnityEngine::Vector3)> __Oculus_Interaction_Surfaces_BoundsClipperSizeCheck;
  static_assert(sizeof(BoundsClipper) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::get_Position
// Il2CppName: get_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::Surfaces::BoundsClipper::*)()>(&Oculus::Interaction::Surfaces::BoundsClipper::get_Position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::BoundsClipper*), "get_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::set_Position
// Il2CppName: set_Position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::Surfaces::BoundsClipper::set_Position)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::BoundsClipper*), "set_Position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::get_Size
// Il2CppName: get_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::Surfaces::BoundsClipper::*)()>(&Oculus::Interaction::Surfaces::BoundsClipper::get_Size)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::BoundsClipper*), "get_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::set_Size
// Il2CppName: set_Size
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::Surfaces::BoundsClipper::set_Size)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::BoundsClipper*), "set_Size", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::GetLocalBounds
// Il2CppName: GetLocalBounds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::Surfaces::BoundsClipper::*)(::UnityEngine::Transform*, ByRef<::UnityEngine::Bounds>)>(&Oculus::Interaction::Surfaces::BoundsClipper::GetLocalBounds)> {
  static const MethodInfo* get() {
    static auto* localTo = &::il2cpp_utils::GetClassFromName("UnityEngine", "Transform")->byval_arg;
    static auto* bounds = &::il2cpp_utils::GetClassFromName("UnityEngine", "Bounds")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::Surfaces::BoundsClipper*), "GetLocalBounds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localTo, bounds});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::Surfaces::BoundsClipper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
