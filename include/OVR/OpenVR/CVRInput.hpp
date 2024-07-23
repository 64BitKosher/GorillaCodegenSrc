// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVR.OpenVR.IVRInput
#include "OVR/OpenVR/IVRInput.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: OVR.OpenVR.VRActiveActionSet_t
#include "OVR/OpenVR/VRActiveActionSet_t.hpp"
// Including type: OVR.OpenVR.VRBoneTransform_t
#include "OVR/OpenVR/VRBoneTransform_t.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVR::OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: EVRInputError
  struct EVRInputError;
  // Forward declaring type: InputDigitalActionData_t
  struct InputDigitalActionData_t;
  // Forward declaring type: InputAnalogActionData_t
  struct InputAnalogActionData_t;
  // Forward declaring type: ETrackingUniverseOrigin
  struct ETrackingUniverseOrigin;
  // Forward declaring type: InputPoseActionData_t
  struct InputPoseActionData_t;
  // Forward declaring type: InputSkeletalActionData_t
  struct InputSkeletalActionData_t;
  // Forward declaring type: EVRSkeletalTransformSpace
  struct EVRSkeletalTransformSpace;
  // Forward declaring type: EVRSkeletalMotionRange
  struct EVRSkeletalMotionRange;
  // Forward declaring type: InputOriginInfo_t
  struct InputOriginInfo_t;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Forward declaring type: CVRInput
  class CVRInput;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::OVR::OpenVR::CVRInput);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRInput*, "OVR.OpenVR", "CVRInput");
// Type namespace: OVR.OpenVR
namespace OVR::OpenVR {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: OVR.OpenVR.CVRInput
  // [TokenAttribute] Offset: FFFFFFFF
  class CVRInput : public ::Il2CppObject {
    public:
    public:
    // private OVR.OpenVR.IVRInput FnTable
    // Size: 0x90
    // Offset: 0x10
    ::OVR::OpenVR::IVRInput FnTable;
    // Field size check
    static_assert(sizeof(::OVR::OpenVR::IVRInput) == 0x90);
    public:
    // Creating conversion operator: operator ::OVR::OpenVR::IVRInput
    constexpr operator ::OVR::OpenVR::IVRInput() const noexcept {
      return FnTable;
    }
    // Get instance field reference: private OVR.OpenVR.IVRInput FnTable
    [[deprecated("Use field access instead!")]] ::OVR::OpenVR::IVRInput& dyn_FnTable();
    // System.Void .ctor(System.IntPtr pInterface)
    // Offset: 0x498D7B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CVRInput* New_ctor(::System::IntPtr pInterface) {
      static auto ___internal__logger = ::Logger::get().WithContext("::OVR::OpenVR::CVRInput::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CVRInput*, creationType>(pInterface)));
    }
    // public OVR.OpenVR.EVRInputError SetActionManifestPath(System.String pchActionManifestPath)
    // Offset: 0x498D8D4
    ::OVR::OpenVR::EVRInputError SetActionManifestPath(::StringW pchActionManifestPath);
    // public OVR.OpenVR.EVRInputError GetActionSetHandle(System.String pchActionSetName, ref System.UInt64 pHandle)
    // Offset: 0x498D8F8
    ::OVR::OpenVR::EVRInputError GetActionSetHandle(::StringW pchActionSetName, ByRef<uint64_t> pHandle);
    // public OVR.OpenVR.EVRInputError GetActionHandle(System.String pchActionName, ref System.UInt64 pHandle)
    // Offset: 0x498D920
    ::OVR::OpenVR::EVRInputError GetActionHandle(::StringW pchActionName, ByRef<uint64_t> pHandle);
    // public OVR.OpenVR.EVRInputError GetInputSourceHandle(System.String pchInputSourcePath, ref System.UInt64 pHandle)
    // Offset: 0x498D948
    ::OVR::OpenVR::EVRInputError GetInputSourceHandle(::StringW pchInputSourcePath, ByRef<uint64_t> pHandle);
    // public OVR.OpenVR.EVRInputError UpdateActionState(OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t)
    // Offset: 0x498D970
    ::OVR::OpenVR::EVRInputError UpdateActionState(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint unSizeOfVRSelectedActionSet_t);
    // public OVR.OpenVR.EVRInputError GetDigitalActionData(System.UInt64 action, ref OVR.OpenVR.InputDigitalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498D99C
    ::OVR::OpenVR::EVRInputError GetDigitalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputDigitalActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetAnalogActionData(System.UInt64 action, ref OVR.OpenVR.InputAnalogActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498D9C0
    ::OVR::OpenVR::EVRInputError GetAnalogActionData(uint64_t action, ByRef<::OVR::OpenVR::InputAnalogActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetPoseActionData(System.UInt64 action, OVR.OpenVR.ETrackingUniverseOrigin eOrigin, System.Single fPredictedSecondsFromNow, ref OVR.OpenVR.InputPoseActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498D9E4
    ::OVR::OpenVR::EVRInputError GetPoseActionData(uint64_t action, ::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, float fPredictedSecondsFromNow, ByRef<::OVR::OpenVR::InputPoseActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetSkeletalActionData(System.UInt64 action, ref OVR.OpenVR.InputSkeletalActionData_t pActionData, System.UInt32 unActionDataSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498DA08
    ::OVR::OpenVR::EVRInputError GetSkeletalActionData(uint64_t action, ByRef<::OVR::OpenVR::InputSkeletalActionData_t> pActionData, uint unActionDataSize, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetSkeletalBoneData(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, OVR.OpenVR.VRBoneTransform_t[] pTransformArray, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498DA2C
    ::OVR::OpenVR::EVRInputError GetSkeletalBoneData(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetSkeletalBoneDataCompressed(System.UInt64 action, OVR.OpenVR.EVRSkeletalTransformSpace eTransformSpace, OVR.OpenVR.EVRSkeletalMotionRange eMotionRange, System.IntPtr pvCompressedData, System.UInt32 unCompressedSize, ref System.UInt32 punRequiredCompressedSize, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498DA5C
    ::OVR::OpenVR::EVRInputError GetSkeletalBoneDataCompressed(uint64_t action, ::OVR::OpenVR::EVRSkeletalTransformSpace eTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange eMotionRange, ::System::IntPtr pvCompressedData, uint unCompressedSize, ByRef<uint> punRequiredCompressedSize, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError DecompressSkeletalBoneData(System.IntPtr pvCompressedBuffer, System.UInt32 unCompressedBufferSize, ref OVR.OpenVR.EVRSkeletalTransformSpace peTransformSpace, OVR.OpenVR.VRBoneTransform_t[] pTransformArray)
    // Offset: 0x498DA88
    ::OVR::OpenVR::EVRInputError DecompressSkeletalBoneData(::System::IntPtr pvCompressedBuffer, uint unCompressedBufferSize, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace> peTransformSpace, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t> pTransformArray);
    // public OVR.OpenVR.EVRInputError TriggerHapticVibrationAction(System.UInt64 action, System.Single fStartSecondsFromNow, System.Single fDurationSeconds, System.Single fFrequency, System.Single fAmplitude, System.UInt64 ulRestrictToDevice)
    // Offset: 0x498DAB4
    ::OVR::OpenVR::EVRInputError TriggerHapticVibrationAction(uint64_t action, float fStartSecondsFromNow, float fDurationSeconds, float fFrequency, float fAmplitude, uint64_t ulRestrictToDevice);
    // public OVR.OpenVR.EVRInputError GetActionOrigins(System.UInt64 actionSetHandle, System.UInt64 digitalActionHandle, System.UInt64[] originsOut)
    // Offset: 0x498DAD8
    ::OVR::OpenVR::EVRInputError GetActionOrigins(uint64_t actionSetHandle, uint64_t digitalActionHandle, ::ArrayW<uint64_t> originsOut);
    // public OVR.OpenVR.EVRInputError GetOriginLocalizedName(System.UInt64 origin, System.Text.StringBuilder pchNameArray, System.UInt32 unNameArraySize)
    // Offset: 0x498DB04
    ::OVR::OpenVR::EVRInputError GetOriginLocalizedName(uint64_t origin, ::System::Text::StringBuilder* pchNameArray, uint unNameArraySize);
    // public OVR.OpenVR.EVRInputError GetOriginTrackedDeviceInfo(System.UInt64 origin, ref OVR.OpenVR.InputOriginInfo_t pOriginInfo, System.UInt32 unOriginInfoSize)
    // Offset: 0x498DB28
    ::OVR::OpenVR::EVRInputError GetOriginTrackedDeviceInfo(uint64_t origin, ByRef<::OVR::OpenVR::InputOriginInfo_t> pOriginInfo, uint unOriginInfoSize);
    // public OVR.OpenVR.EVRInputError ShowActionOrigins(System.UInt64 actionSetHandle, System.UInt64 ulActionHandle)
    // Offset: 0x498DB4C
    ::OVR::OpenVR::EVRInputError ShowActionOrigins(uint64_t actionSetHandle, uint64_t ulActionHandle);
    // public OVR.OpenVR.EVRInputError ShowBindingsForActionSet(OVR.OpenVR.VRActiveActionSet_t[] pSets, System.UInt32 unSizeOfVRSelectedActionSet_t, System.UInt64 originToHighlight)
    // Offset: 0x498DB70
    ::OVR::OpenVR::EVRInputError ShowBindingsForActionSet(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t> pSets, uint unSizeOfVRSelectedActionSet_t, uint64_t originToHighlight);
  }; // OVR.OpenVR.CVRInput
  #pragma pack(pop)
  static check_size<sizeof(CVRInput), 16 + sizeof(::OVR::OpenVR::IVRInput)> __OVR_OpenVR_CVRInputSizeCheck;
  static_assert(sizeof(CVRInput) == 0xA0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::SetActionManifestPath
// Il2CppName: SetActionManifestPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::StringW)>(&OVR::OpenVR::CVRInput::SetActionManifestPath)> {
  static const MethodInfo* get() {
    static auto* pchActionManifestPath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "SetActionManifestPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionManifestPath});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetActionSetHandle
// Il2CppName: GetActionSetHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&OVR::OpenVR::CVRInput::GetActionSetHandle)> {
  static const MethodInfo* get() {
    static auto* pchActionSetName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetActionSetHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionSetName, pHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetActionHandle
// Il2CppName: GetActionHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&OVR::OpenVR::CVRInput::GetActionHandle)> {
  static const MethodInfo* get() {
    static auto* pchActionName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetActionHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchActionName, pHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetInputSourceHandle
// Il2CppName: GetInputSourceHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::StringW, ByRef<uint64_t>)>(&OVR::OpenVR::CVRInput::GetInputSourceHandle)> {
  static const MethodInfo* get() {
    static auto* pchInputSourcePath = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* pHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetInputSourceHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pchInputSourcePath, pHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::UpdateActionState
// Il2CppName: UpdateActionState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint)>(&OVR::OpenVR::CVRInput::UpdateActionState)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->byval_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "UpdateActionState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetDigitalActionData
// Il2CppName: GetDigitalActionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputDigitalActionData_t>, uint, uint64_t)>(&OVR::OpenVR::CVRInput::GetDigitalActionData)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputDigitalActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetDigitalActionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetAnalogActionData
// Il2CppName: GetAnalogActionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputAnalogActionData_t>, uint, uint64_t)>(&OVR::OpenVR::CVRInput::GetAnalogActionData)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputAnalogActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetAnalogActionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetPoseActionData
// Il2CppName: GetPoseActionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::ETrackingUniverseOrigin, float, ByRef<::OVR::OpenVR::InputPoseActionData_t>, uint, uint64_t)>(&OVR::OpenVR::CVRInput::GetPoseActionData)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eOrigin = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "ETrackingUniverseOrigin")->byval_arg;
    static auto* fPredictedSecondsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputPoseActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetPoseActionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eOrigin, fPredictedSecondsFromNow, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetSkeletalActionData
// Il2CppName: GetSkeletalActionData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputSkeletalActionData_t>, uint, uint64_t)>(&OVR::OpenVR::CVRInput::GetSkeletalActionData)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pActionData = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputSkeletalActionData_t")->this_arg;
    static auto* unActionDataSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetSkeletalActionData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, pActionData, unActionDataSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetSkeletalBoneData
// Il2CppName: GetSkeletalBoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>, uint64_t)>(&OVR::OpenVR::CVRInput::GetSkeletalBoneData)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->byval_arg;
    static auto* eMotionRange = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalMotionRange")->byval_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetSkeletalBoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eTransformSpace, eMotionRange, pTransformArray, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed
// Il2CppName: GetSkeletalBoneDataCompressed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ::OVR::OpenVR::EVRSkeletalTransformSpace, ::OVR::OpenVR::EVRSkeletalMotionRange, ::System::IntPtr, uint, ByRef<uint>, uint64_t)>(&OVR::OpenVR::CVRInput::GetSkeletalBoneDataCompressed)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* eTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->byval_arg;
    static auto* eMotionRange = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalMotionRange")->byval_arg;
    static auto* pvCompressedData = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unCompressedSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* punRequiredCompressedSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->this_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetSkeletalBoneDataCompressed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, eTransformSpace, eMotionRange, pvCompressedData, unCompressedSize, punRequiredCompressedSize, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::DecompressSkeletalBoneData
// Il2CppName: DecompressSkeletalBoneData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::System::IntPtr, uint, ByRef<::OVR::OpenVR::EVRSkeletalTransformSpace>, ::ArrayW<::OVR::OpenVR::VRBoneTransform_t>)>(&OVR::OpenVR::CVRInput::DecompressSkeletalBoneData)> {
  static const MethodInfo* get() {
    static auto* pvCompressedBuffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* unCompressedBufferSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* peTransformSpace = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "EVRSkeletalTransformSpace")->this_arg;
    static auto* pTransformArray = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRBoneTransform_t"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "DecompressSkeletalBoneData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pvCompressedBuffer, unCompressedBufferSize, peTransformSpace, pTransformArray});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::TriggerHapticVibrationAction
// Il2CppName: TriggerHapticVibrationAction
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, float, float, float, float, uint64_t)>(&OVR::OpenVR::CVRInput::TriggerHapticVibrationAction)> {
  static const MethodInfo* get() {
    static auto* action = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* fStartSecondsFromNow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fDurationSeconds = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fFrequency = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fAmplitude = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* ulRestrictToDevice = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "TriggerHapticVibrationAction", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{action, fStartSecondsFromNow, fDurationSeconds, fFrequency, fAmplitude, ulRestrictToDevice});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetActionOrigins
// Il2CppName: GetActionOrigins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t, ::ArrayW<uint64_t>)>(&OVR::OpenVR::CVRInput::GetActionOrigins)> {
  static const MethodInfo* get() {
    static auto* actionSetHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* digitalActionHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* originsOut = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "UInt64"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetActionOrigins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionSetHandle, digitalActionHandle, originsOut});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetOriginLocalizedName
// Il2CppName: GetOriginLocalizedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ::System::Text::StringBuilder*, uint)>(&OVR::OpenVR::CVRInput::GetOriginLocalizedName)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pchNameArray = &::il2cpp_utils::GetClassFromName("System.Text", "StringBuilder")->byval_arg;
    static auto* unNameArraySize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetOriginLocalizedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, pchNameArray, unNameArraySize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo
// Il2CppName: GetOriginTrackedDeviceInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, ByRef<::OVR::OpenVR::InputOriginInfo_t>, uint)>(&OVR::OpenVR::CVRInput::GetOriginTrackedDeviceInfo)> {
  static const MethodInfo* get() {
    static auto* origin = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* pOriginInfo = &::il2cpp_utils::GetClassFromName("OVR.OpenVR", "InputOriginInfo_t")->this_arg;
    static auto* unOriginInfoSize = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "GetOriginTrackedDeviceInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{origin, pOriginInfo, unOriginInfoSize});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::ShowActionOrigins
// Il2CppName: ShowActionOrigins
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(uint64_t, uint64_t)>(&OVR::OpenVR::CVRInput::ShowActionOrigins)> {
  static const MethodInfo* get() {
    static auto* actionSetHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    static auto* ulActionHandle = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "ShowActionOrigins", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actionSetHandle, ulActionHandle});
  }
};
// Writing MetadataGetter for method: OVR::OpenVR::CVRInput::ShowBindingsForActionSet
// Il2CppName: ShowBindingsForActionSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVR::OpenVR::EVRInputError (OVR::OpenVR::CVRInput::*)(::ArrayW<::OVR::OpenVR::VRActiveActionSet_t>, uint, uint64_t)>(&OVR::OpenVR::CVRInput::ShowBindingsForActionSet)> {
  static const MethodInfo* get() {
    static auto* pSets = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("OVR.OpenVR", "VRActiveActionSet_t"), 1)->byval_arg;
    static auto* unSizeOfVRSelectedActionSet_t = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    static auto* originToHighlight = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(OVR::OpenVR::CVRInput*), "ShowBindingsForActionSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pSets, unSizeOfVRSelectedActionSet_t, originToHighlight});
  }
};
