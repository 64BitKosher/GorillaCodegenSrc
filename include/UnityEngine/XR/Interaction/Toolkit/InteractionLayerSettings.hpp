// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Utilities.ScriptableSettings`1
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/ScriptableSettings_1.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: InteractionLayerSettings
  class InteractionLayerSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*, "UnityEngine.XR.Interaction.Toolkit", "InteractionLayerSettings");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.InteractionLayerSettings
  // [TokenAttribute] Offset: FFFFFFFF
  // [ScriptableSettingsPathAttribute] Offset: FFFFFFFF
  class InteractionLayerSettings : public ::UnityEngine::XR::Interaction::Toolkit::Utilities::ScriptableSettings_1<::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*>/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // private System.String[] m_LayerNames
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> m_LayerNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.String k_DefaultLayerName
    static constexpr const char* k_DefaultLayerName = "Default";
    // Get static field: static private System.String k_DefaultLayerName
    static ::StringW _get_k_DefaultLayerName();
    // Set static field: static private System.String k_DefaultLayerName
    static void _set_k_DefaultLayerName(::StringW value);
    // static field const value: static System.Int32 layerSize
    static constexpr const int layerSize = 32;
    // Get static field: static System.Int32 layerSize
    static int _get_layerSize();
    // Set static field: static System.Int32 layerSize
    static void _set_layerSize(int value);
    // static field const value: static System.Int32 builtInLayerSize
    static constexpr const int builtInLayerSize = 1;
    // Get static field: static System.Int32 builtInLayerSize
    static int _get_builtInLayerSize();
    // Set static field: static System.Int32 builtInLayerSize
    static void _set_builtInLayerSize(int value);
    // Get instance field reference: private System.String[] m_LayerNames
    [[deprecated("Use field access instead!")]] ::ArrayW<::StringW>& dyn_m_LayerNames();
    // System.Boolean IsLayerEmpty(System.Int32 index)
    // Offset: 0x53FDAF4
    bool IsLayerEmpty(int index);
    // System.Void SetLayerNameAt(System.Int32 index, System.String layerName)
    // Offset: 0x53FDB28
    void SetLayerNameAt(int index, ::StringW layerName);
    // System.String GetLayerNameAt(System.Int32 index)
    // Offset: 0x53FD924
    ::StringW GetLayerNameAt(int index);
    // System.Int32 GetLayer(System.String layerName)
    // Offset: 0x53FD9A8
    int GetLayer(::StringW layerName);
    // System.Void GetLayerNamesAndValues(System.Collections.Generic.List`1<System.String> names, System.Collections.Generic.List`1<System.Int32> values)
    // Offset: 0x53FDB5C
    void GetLayerNamesAndValues(::System::Collections::Generic::List_1<::StringW>* names, ::System::Collections::Generic::List_1<int>* values);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x53FDCCC
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x53FDDCC
    void OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x53FDDD0
    // Implemented from: UnityEngine.XR.Interaction.Toolkit.Utilities.ScriptableSettings`1
    // Base method: System.Void ScriptableSettings_1::.ctor()
    // Base method: System.Void ScriptableSettingsBase_1::.ctor()
    // Base method: System.Void ScriptableSettingsBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InteractionLayerSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InteractionLayerSettings*, creationType>()));
    }
  }; // UnityEngine.XR.Interaction.Toolkit.InteractionLayerSettings
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::IsLayerEmpty
// Il2CppName: IsLayerEmpty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::IsLayerEmpty)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "IsLayerEmpty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::SetLayerNameAt
// Il2CppName: SetLayerNameAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int, ::StringW)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::SetLayerNameAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "SetLayerNameAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, layerName});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNameAt
// Il2CppName: GetLayerNameAt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(int)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNameAt)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "GetLayerNameAt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayer
// Il2CppName: GetLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(::StringW)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayer)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "GetLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNamesAndValues
// Il2CppName: GetLayerNamesAndValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)(::System::Collections::Generic::List_1<::StringW>*, ::System::Collections::Generic::List_1<int>*)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::GetLayerNamesAndValues)> {
  static const MethodInfo* get() {
    static auto* names = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "String")})->byval_arg;
    static auto* values = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Int32")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "GetLayerNamesAndValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{names, values});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
