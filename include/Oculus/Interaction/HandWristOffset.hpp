// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Pose
#include "UnityEngine/Pose.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
  // Forward declaring type: Handedness
  struct Handedness;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandWristOffset
  class HandWristOffset;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandWristOffset);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandWristOffset*, "Oculus.Interaction", "HandWristOffset");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandWristOffset
  // [TokenAttribute] Offset: FFFFFFFF
  class HandWristOffset : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Quaternion _rotation
    // Size: 0x10
    // Offset: 0x3C
    ::UnityEngine::Quaternion rotation;
    // Field size check
    static_assert(sizeof(::UnityEngine::Quaternion) == 0x10);
    // private System.Boolean _mirrorLeftRotation
    // Size: 0x1
    // Offset: 0x4C
    bool mirrorLeftRotation;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mirrorLeftRotation and: cachedPose
    char __padding4[0x3] = {};
    // private UnityEngine.Pose _cachedPose
    // Size: 0x1C
    // Offset: 0x50
    ::UnityEngine::Pose cachedPose;
    // Field size check
    static_assert(sizeof(::UnityEngine::Pose) == 0x1C);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x6C
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static private readonly UnityEngine.Quaternion LEFT_MIRROR_ROTATION
    static ::UnityEngine::Quaternion _get_LEFT_MIRROR_ROTATION();
    // Set static field: static private readonly UnityEngine.Quaternion LEFT_MIRROR_ROTATION
    static void _set_LEFT_MIRROR_ROTATION(::UnityEngine::Quaternion value);
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.Input.IHand <Hand>k__BackingField
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_$Hand$k__BackingField();
    // Get instance field reference: private UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: private UnityEngine.Quaternion _rotation
    [[deprecated("Use field access instead!")]] ::UnityEngine::Quaternion& dyn__rotation();
    // Get instance field reference: private System.Boolean _mirrorLeftRotation
    [[deprecated("Use field access instead!")]] bool& dyn__mirrorLeftRotation();
    // Get instance field reference: private UnityEngine.Pose _cachedPose
    [[deprecated("Use field access instead!")]] ::UnityEngine::Pose& dyn__cachedPose();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.IHand get_Hand()
    // Offset: 0x47D2614
    ::Oculus::Interaction::Input::IHand* get_Hand();
    // private System.Void set_Hand(Oculus.Interaction.Input.IHand value)
    // Offset: 0x47D261C
    void set_Hand(::Oculus::Interaction::Input::IHand* value);
    // public UnityEngine.Vector3 get_Offset()
    // Offset: 0x47D2624
    ::UnityEngine::Vector3 get_Offset();
    // public System.Void set_Offset(UnityEngine.Vector3 value)
    // Offset: 0x47D2630
    void set_Offset(::UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_Rotation()
    // Offset: 0x47D263C
    ::UnityEngine::Quaternion get_Rotation();
    // public System.Void set_Rotation(UnityEngine.Quaternion value)
    // Offset: 0x47D2648
    void set_Rotation(::UnityEngine::Quaternion value);
    // public System.Boolean get_MirrorLeftRotation()
    // Offset: 0x47D2654
    bool get_MirrorLeftRotation();
    // public System.Void set_MirrorLeftRotation(System.Boolean value)
    // Offset: 0x47D265C
    void set_MirrorLeftRotation(bool value);
    // protected System.Void Awake()
    // Offset: 0x47D2668
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47D26C0
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47D26F8
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x47D27F8
    void OnDisable();
    // private System.Void HandleHandUpdated()
    // Offset: 0x47D28F8
    void HandleHandUpdated();
    // public System.Void GetOffset(ref UnityEngine.Pose pose)
    // Offset: 0x47D29F8
    void GetOffset(ByRef<::UnityEngine::Pose> pose);
    // public System.Void GetOffset(ref UnityEngine.Pose pose, Oculus.Interaction.Input.Handedness handedness, System.Single scale)
    // Offset: 0x47D2B34
    void GetOffset(ByRef<::UnityEngine::Pose> pose, ::Oculus::Interaction::Input::Handedness handedness, float scale);
    // public System.Void GetWorldPose(ref UnityEngine.Pose pose)
    // Offset: 0x47D2C8C
    void GetWorldPose(ByRef<::UnityEngine::Pose> pose);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x47D2CE8
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectOffset(UnityEngine.Vector3 offset)
    // Offset: 0x47D2DB8
    void InjectOffset(::UnityEngine::Vector3 offset);
    // public System.Void InjectRotation(UnityEngine.Quaternion rotation)
    // Offset: 0x47D2DC4
    void InjectRotation(::UnityEngine::Quaternion rotation);
    // public System.Void InjectAllHandWristOffset(Oculus.Interaction.Input.IHand hand, UnityEngine.Vector3 offset, UnityEngine.Quaternion rotation)
    // Offset: 0x47D2DD0
    void InjectAllHandWristOffset(::Oculus::Interaction::Input::IHand* hand, ::UnityEngine::Vector3 offset, ::UnityEngine::Quaternion rotation);
    // public System.Void .ctor()
    // Offset: 0x47D2E30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandWristOffset* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandWristOffset::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandWristOffset*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x47D2F00
    static void _cctor();
  }; // Oculus.Interaction.HandWristOffset
  #pragma pack(pop)
  static check_size<sizeof(HandWristOffset), 108 + sizeof(bool)> __Oculus_Interaction_HandWristOffsetSizeCheck;
  static_assert(sizeof(HandWristOffset) == 0x6D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::get_Hand
// Il2CppName: get_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::IHand* (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::get_Hand)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "get_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::set_Hand
// Il2CppName: set_Hand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandWristOffset::set_Hand)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "set_Hand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::get_Offset
// Il2CppName: get_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::get_Offset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "get_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::set_Offset
// Il2CppName: set_Offset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::HandWristOffset::set_Offset)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "set_Offset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::get_Rotation
// Il2CppName: get_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::get_Rotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "get_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::set_Rotation
// Il2CppName: set_Rotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::UnityEngine::Quaternion)>(&Oculus::Interaction::HandWristOffset::set_Rotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "set_Rotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::get_MirrorLeftRotation
// Il2CppName: get_MirrorLeftRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::get_MirrorLeftRotation)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "get_MirrorLeftRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::set_MirrorLeftRotation
// Il2CppName: set_MirrorLeftRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(bool)>(&Oculus::Interaction::HandWristOffset::set_MirrorLeftRotation)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "set_MirrorLeftRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::HandleHandUpdated
// Il2CppName: HandleHandUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)()>(&Oculus::Interaction::HandWristOffset::HandleHandUpdated)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "HandleHandUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::GetOffset
// Il2CppName: GetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::HandWristOffset::GetOffset)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "GetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::GetOffset
// Il2CppName: GetOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(ByRef<::UnityEngine::Pose>, ::Oculus::Interaction::Input::Handedness, float)>(&Oculus::Interaction::HandWristOffset::GetOffset)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    static auto* handedness = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "Handedness")->byval_arg;
    static auto* scale = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "GetOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose, handedness, scale});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::GetWorldPose
// Il2CppName: GetWorldPose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(ByRef<::UnityEngine::Pose>)>(&Oculus::Interaction::HandWristOffset::GetWorldPose)> {
  static const MethodInfo* get() {
    static auto* pose = &::il2cpp_utils::GetClassFromName("UnityEngine", "Pose")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "GetWorldPose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pose});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandWristOffset::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::InjectOffset
// Il2CppName: InjectOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::UnityEngine::Vector3)>(&Oculus::Interaction::HandWristOffset::InjectOffset)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "InjectOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::InjectRotation
// Il2CppName: InjectRotation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::UnityEngine::Quaternion)>(&Oculus::Interaction::HandWristOffset::InjectRotation)> {
  static const MethodInfo* get() {
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "InjectRotation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rotation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::InjectAllHandWristOffset
// Il2CppName: InjectAllHandWristOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandWristOffset::*)(::Oculus::Interaction::Input::IHand*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&Oculus::Interaction::HandWristOffset::InjectAllHandWristOffset)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* rotation = &::il2cpp_utils::GetClassFromName("UnityEngine", "Quaternion")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), "InjectAllHandWristOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, offset, rotation});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Interaction::HandWristOffset::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Oculus::Interaction::HandWristOffset::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandWristOffset*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};