// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver
#include "UnityEngine/XR/Interaction/Toolkit/AffordanceSystem/Receiver/Primitives/Vector3AffordanceReceiver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering {
  // Forward declaring type: MaterialPropertyBlockHelper
  class MaterialPropertyBlockHelper;
}
// Forward declaring namespace: Unity::Mathematics
namespace Unity::Mathematics {
  // Skipping declaration: float3 because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
  // Forward declaring type: Vector3MaterialPropertyAffordanceReceiver
  class Vector3MaterialPropertyAffordanceReceiver;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*, "UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering", "Vector3MaterialPropertyAffordanceReceiver");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering
namespace UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector3MaterialPropertyAffordanceReceiver
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  // [HelpURLAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: FFFFFFFF
  class Vector3MaterialPropertyAffordanceReceiver : public ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Primitives::Vector3AffordanceReceiver {
    public:
    public:
    // private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper m_MaterialPropertyBlockHelper
    // Size: 0x8
    // Offset: 0xB0
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* m_MaterialPropertyBlockHelper;
    // Field size check
    static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*) == 0x8);
    // private System.String m_Vector3PropertyName
    // Size: 0x8
    // Offset: 0xB8
    ::StringW m_Vector3PropertyName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Int32 m_Vector3Property
    // Size: 0x4
    // Offset: 0xC0
    int m_Vector3Property;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper m_MaterialPropertyBlockHelper
    [[deprecated("Use field access instead!")]] ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*& dyn_m_MaterialPropertyBlockHelper();
    // Get instance field reference: private System.String m_Vector3PropertyName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_Vector3PropertyName();
    // Get instance field reference: private System.Int32 m_Vector3Property
    [[deprecated("Use field access instead!")]] int& dyn_m_Vector3Property();
    // public UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper get_materialPropertyBlockHelper()
    // Offset: 0x5442FC0
    ::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* get_materialPropertyBlockHelper();
    // public System.Void set_materialPropertyBlockHelper(UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper value)
    // Offset: 0x5442FC8
    void set_materialPropertyBlockHelper(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* value);
    // public System.String get_vector3PropertyName()
    // Offset: 0x5442FD0
    ::StringW get_vector3PropertyName();
    // public System.Void set_vector3PropertyName(System.String value)
    // Offset: 0x5442FD8
    void set_vector3PropertyName(::StringW value);
    // protected System.Void OnValidate()
    // Offset: 0x5443004
    void OnValidate();
    // protected Unity.Mathematics.float3 GetCurrentValueForCapture()
    // Offset: 0x54432A8
    ::Unity::Mathematics::float3 GetCurrentValueForCapture();
    // protected override System.Void Awake()
    // Offset: 0x54430B4
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.BaseAffordanceStateReceiver`1
    // Base method: System.Void BaseAffordanceStateReceiver_1::Awake()
    void Awake();
    // protected override System.Void OnAffordanceValueUpdated(Unity.Mathematics.float3 newValue)
    // Offset: 0x5443188
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver
    // Base method: System.Void Vector3AffordanceReceiver::OnAffordanceValueUpdated(Unity.Mathematics.float3 newValue)
    void OnAffordanceValueUpdated(::Unity::Mathematics::float3 newValue);
    // public System.Void .ctor()
    // Offset: 0x54432DC
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver
    // Base method: System.Void Vector3AffordanceReceiver::.ctor()
    // Base method: System.Void BaseAsyncAffordanceStateReceiver_1::.ctor()
    // Base method: System.Void BaseAffordanceStateReceiver_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector3MaterialPropertyAffordanceReceiver* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector3MaterialPropertyAffordanceReceiver*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector3MaterialPropertyAffordanceReceiver
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::get_materialPropertyBlockHelper
// Il2CppName: get_materialPropertyBlockHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper* (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::get_materialPropertyBlockHelper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "get_materialPropertyBlockHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::set_materialPropertyBlockHelper
// Il2CppName: set_materialPropertyBlockHelper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)(::UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Rendering::MaterialPropertyBlockHelper*)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::set_materialPropertyBlockHelper)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering", "MaterialPropertyBlockHelper")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "set_materialPropertyBlockHelper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::get_vector3PropertyName
// Il2CppName: get_vector3PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::get_vector3PropertyName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "get_vector3PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::set_vector3PropertyName
// Il2CppName: set_vector3PropertyName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)(::StringW)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::set_vector3PropertyName)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "set_vector3PropertyName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::GetCurrentValueForCapture
// Il2CppName: GetCurrentValueForCapture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Mathematics::float3 (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::GetCurrentValueForCapture)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "GetCurrentValueForCapture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)()>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::OnAffordanceValueUpdated
// Il2CppName: OnAffordanceValueUpdated
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::*)(::Unity::Mathematics::float3)>(&UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::OnAffordanceValueUpdated)> {
  static const MethodInfo* get() {
    static auto* newValue = &::il2cpp_utils::GetClassFromName("Unity.Mathematics", "float3")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver*), "OnAffordanceValueUpdated", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newValue});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::AffordanceSystem::Receiver::Rendering::Vector3MaterialPropertyAffordanceReceiver::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!