// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: GrabObject
  class GrabObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GrabObject);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GrabObject*, "", "GrabObject");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: GrabObject
  // [TokenAttribute] Offset: FFFFFFFF
  class GrabObject : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::GrabObject::ManipulationType
    struct ManipulationType;
    // Nested type: ::GlobalNamespace::GrabObject::GrabbedObject
    class GrabbedObject;
    // Nested type: ::GlobalNamespace::GrabObject::ReleasedObject
    class ReleasedObject;
    // Nested type: ::GlobalNamespace::GrabObject::SetCursorPosition
    class SetCursorPosition;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: GrabObject/ManipulationType
    // [TokenAttribute] Offset: FFFFFFFF
    struct ManipulationType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: ManipulationType
      constexpr ManipulationType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public GrabObject/ManipulationType Default
      static constexpr const int Default = 0;
      // Get static field: static public GrabObject/ManipulationType Default
      static ::GlobalNamespace::GrabObject::ManipulationType _get_Default();
      // Set static field: static public GrabObject/ManipulationType Default
      static void _set_Default(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType ForcedHand
      static constexpr const int ForcedHand = 1;
      // Get static field: static public GrabObject/ManipulationType ForcedHand
      static ::GlobalNamespace::GrabObject::ManipulationType _get_ForcedHand();
      // Set static field: static public GrabObject/ManipulationType ForcedHand
      static void _set_ForcedHand(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType DollyHand
      static constexpr const int DollyHand = 2;
      // Get static field: static public GrabObject/ManipulationType DollyHand
      static ::GlobalNamespace::GrabObject::ManipulationType _get_DollyHand();
      // Set static field: static public GrabObject/ManipulationType DollyHand
      static void _set_DollyHand(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType DollyAttached
      static constexpr const int DollyAttached = 3;
      // Get static field: static public GrabObject/ManipulationType DollyAttached
      static ::GlobalNamespace::GrabObject::ManipulationType _get_DollyAttached();
      // Set static field: static public GrabObject/ManipulationType DollyAttached
      static void _set_DollyAttached(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType HorizontalScaled
      static constexpr const int HorizontalScaled = 4;
      // Get static field: static public GrabObject/ManipulationType HorizontalScaled
      static ::GlobalNamespace::GrabObject::ManipulationType _get_HorizontalScaled();
      // Set static field: static public GrabObject/ManipulationType HorizontalScaled
      static void _set_HorizontalScaled(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType VerticalScaled
      static constexpr const int VerticalScaled = 5;
      // Get static field: static public GrabObject/ManipulationType VerticalScaled
      static ::GlobalNamespace::GrabObject::ManipulationType _get_VerticalScaled();
      // Set static field: static public GrabObject/ManipulationType VerticalScaled
      static void _set_VerticalScaled(::GlobalNamespace::GrabObject::ManipulationType value);
      // static field const value: static public GrabObject/ManipulationType Menu
      static constexpr const int Menu = 6;
      // Get static field: static public GrabObject/ManipulationType Menu
      static ::GlobalNamespace::GrabObject::ManipulationType _get_Menu();
      // Set static field: static public GrabObject/ManipulationType Menu
      static void _set_Menu(::GlobalNamespace::GrabObject::ManipulationType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // GrabObject/ManipulationType
    #pragma pack(pop)
    static check_size<sizeof(GrabObject::ManipulationType), 0 + sizeof(int)> __GlobalNamespace_GrabObject_ManipulationTypeSizeCheck;
    static_assert(sizeof(GrabObject::ManipulationType) == 0x4);
    public:
    // public System.String ObjectName
    // Size: 0x8
    // Offset: 0x20
    ::StringW ObjectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ObjectInstructions
    // Size: 0x8
    // Offset: 0x28
    ::StringW ObjectInstructions;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public GrabObject/ManipulationType objectManipulationType
    // Size: 0x4
    // Offset: 0x30
    ::GlobalNamespace::GrabObject::ManipulationType objectManipulationType;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GrabObject::ManipulationType) == 0x4);
    // public System.Boolean showLaserWhileGrabbed
    // Size: 0x1
    // Offset: 0x34
    bool showLaserWhileGrabbed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: showLaserWhileGrabbed and: grabbedRotation
    char __padding3[0x3] = {};
    // public UnityEngine.Quaternion grabbedRotation
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Quaternion grabbedRotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // public GrabObject/GrabbedObject GrabbedObjectDelegate
    // Size: 0x8
    // Offset: 0x48
    ::GlobalNamespace::GrabObject::GrabbedObject* GrabbedObjectDelegate;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GrabObject::GrabbedObject*) == 0x8);
    // public GrabObject/ReleasedObject ReleasedObjectDelegate
    // Size: 0x8
    // Offset: 0x50
    ::GlobalNamespace::GrabObject::ReleasedObject* ReleasedObjectDelegate;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GrabObject::ReleasedObject*) == 0x8);
    // public GrabObject/SetCursorPosition CursorPositionDelegate
    // Size: 0x8
    // Offset: 0x58
    ::GlobalNamespace::GrabObject::SetCursorPosition* CursorPositionDelegate;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GrabObject::SetCursorPosition*) == 0x8);
    public:
    // Get instance field reference: public System.String ObjectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ObjectName();
    // Get instance field reference: public System.String ObjectInstructions
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ObjectInstructions();
    // Get instance field reference: public GrabObject/ManipulationType objectManipulationType
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GrabObject::ManipulationType& dyn_objectManipulationType();
    // Get instance field reference: public System.Boolean showLaserWhileGrabbed
    [[deprecated("Use field access instead!")]] bool& dyn_showLaserWhileGrabbed();
    // Get instance field reference: public UnityEngine.Quaternion grabbedRotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn_grabbedRotation();
    // Get instance field reference: public GrabObject/GrabbedObject GrabbedObjectDelegate
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GrabObject::GrabbedObject*& dyn_GrabbedObjectDelegate();
    // Get instance field reference: public GrabObject/ReleasedObject ReleasedObjectDelegate
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GrabObject::ReleasedObject*& dyn_ReleasedObjectDelegate();
    // Get instance field reference: public GrabObject/SetCursorPosition CursorPositionDelegate
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::GrabObject::SetCursorPosition*& dyn_CursorPositionDelegate();
    // public System.Void Grab(OVRInput/Controller grabHand)
    // Offset: 0x2933228
    void Grab(::GlobalNamespace::OVRInput::Controller grabHand);
    // public System.Void Release()
    // Offset: 0x2933288
    void Release();
    // public System.Void CursorPos(UnityEngine.Vector3 cursorPos)
    // Offset: 0x29332A4
    void CursorPos(::UnityEngine::Vector3 cursorPos);
    // public System.Void .ctor()
    // Offset: 0x29332C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GrabObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GrabObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GrabObject*, creationType>()));
    }
  }; // GrabObject
  #pragma pack(pop)
  static check_size<sizeof(GrabObject), 88 + sizeof(::GlobalNamespace::GrabObject::SetCursorPosition*)> __GlobalNamespace_GrabObjectSizeCheck;
  static_assert(sizeof(GrabObject) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GrabObject::ManipulationType, "", "GrabObject/ManipulationType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::Grab
// Il2CppName: Grab
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GrabObject::*)(::GlobalNamespace::OVRInput::Controller)>(&GlobalNamespace::GrabObject::Grab)> {
  static const MethodInfo* get() {
    static auto* grabHand = &::il2cpp_utils::GetClassFromName("", "OVRInput/Controller")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject*), "Grab", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{grabHand});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GrabObject::*)()>(&GlobalNamespace::GrabObject::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::CursorPos
// Il2CppName: CursorPos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GrabObject::*)(::UnityEngine::Vector3)>(&GlobalNamespace::GrabObject::CursorPos)> {
  static const MethodInfo* get() {
    static auto* cursorPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GrabObject*), "CursorPos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cursorPos});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GrabObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!