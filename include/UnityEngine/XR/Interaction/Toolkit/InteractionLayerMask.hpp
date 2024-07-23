// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: InteractionLayerMask
  struct InteractionLayerMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask, "UnityEngine.XR.Interaction.Toolkit", "InteractionLayerMask");
// Type namespace: UnityEngine.XR.Interaction.Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Size: 0x8
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
  // [TokenAttribute] Offset: FFFFFFFF
  struct InteractionLayerMask/*, public ::System::ValueType, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    public:
    // private System.UInt32 m_Bits
    // Size: 0x4
    // Offset: 0x0
    uint m_Bits;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.Int32 m_Mask
    // Size: 0x4
    // Offset: 0x4
    int m_Mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: InteractionLayerMask
    constexpr InteractionLayerMask(uint m_Bits_ = {}, int m_Mask_ = {}) noexcept : m_Bits{m_Bits_}, m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private System.UInt32 m_Bits
    [[deprecated("Use field access instead!")]] uint& dyn_m_Bits();
    // Get instance field reference: private System.Int32 m_Mask
    [[deprecated("Use field access instead!")]] int& dyn_m_Mask();
    // public System.Int32 get_value()
    // Offset: 0x53FD88C
    int get_value();
    // public System.Void set_value(System.Int32 value)
    // Offset: 0x53FD894
    void set_value(int value);
    // static public System.String LayerToName(System.Int32 layer)
    // Offset: 0x53FD89C
    static ::StringW LayerToName(int layer);
    // static public System.Int32 NameToLayer(System.String layerName)
    // Offset: 0x53FD954
    static int NameToLayer(::StringW layerName);
    // static public System.Int32 GetMask(params System.String[] layerNames)
    // Offset: 0x53FDA18
    static int GetMask(::ArrayW<::StringW> layerNames);
    // public System.Void OnAfterDeserialize()
    // Offset: 0x53FDAE4
    void OnAfterDeserialize();
    // public System.Void OnBeforeSerialize()
    // Offset: 0x53FDAF0
    void OnBeforeSerialize();
  }; // UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
  #pragma pack(pop)
  static check_size<sizeof(InteractionLayerMask), 4 + sizeof(int)> __UnityEngine_XR_Interaction_Toolkit_InteractionLayerMaskSizeCheck;
  static_assert(sizeof(InteractionLayerMask) == 0x8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::set_value
// Il2CppName: set_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::*)(int)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::set_value)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "set_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::LayerToName
// Il2CppName: LayerToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::LayerToName)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "LayerToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::NameToLayer
// Il2CppName: NameToLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::NameToLayer)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "NameToLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::GetMask
// Il2CppName: GetMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::StringW>)>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::GetMask)> {
  static const MethodInfo* get() {
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "GetMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNames});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::*)()>(&UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
