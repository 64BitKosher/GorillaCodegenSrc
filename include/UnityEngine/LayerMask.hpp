// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LayerMask
  struct LayerMask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LayerMask, "UnityEngine", "LayerMask");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.LayerMask
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  // [NativeClassAttribute] Offset: FFFFFFFF
  // [RequiredByNativeCodeAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: FFFFFFFF
  struct LayerMask/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Int32 m_Mask
    // Size: 0x4
    // Offset: 0x0
    int m_Mask;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: LayerMask
    constexpr LayerMask(int m_Mask_ = {}) noexcept : m_Mask{m_Mask_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Mask;
    }
    // Get instance field reference: private System.Int32 m_Mask
    [[deprecated("Use field access instead!")]] int& dyn_m_Mask();
    // public System.Int32 get_value()
    // Offset: 0x54C6698
    int get_value();
    // static public System.String LayerToName(System.Int32 layer)
    // Offset: 0x54C66A0
    static ::StringW LayerToName(int layer);
    // static public System.Int32 NameToLayer(System.String layerName)
    // Offset: 0x54C66DC
    static int NameToLayer(::StringW layerName);
    // static public System.Int32 GetMask(params System.String[] layerNames)
    // Offset: 0x54C6718
    static int GetMask(::ArrayW<::StringW> layerNames);
  }; // UnityEngine.LayerMask
  #pragma pack(pop)
  static check_size<sizeof(LayerMask), 0 + sizeof(int)> __UnityEngine_LayerMaskSizeCheck;
  static_assert(sizeof(LayerMask) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::LayerMask::get_value
// Il2CppName: get_value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::LayerMask::*)()>(&UnityEngine::LayerMask::get_value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LayerMask), "get_value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::LayerMask::LayerToName
// Il2CppName: LayerToName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::LayerMask::LayerToName)> {
  static const MethodInfo* get() {
    static auto* layer = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LayerMask), "LayerToName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layer});
  }
};
// Writing MetadataGetter for method: UnityEngine::LayerMask::NameToLayer
// Il2CppName: NameToLayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::StringW)>(&UnityEngine::LayerMask::NameToLayer)> {
  static const MethodInfo* get() {
    static auto* layerName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LayerMask), "NameToLayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerName});
  }
};
// Writing MetadataGetter for method: UnityEngine::LayerMask::GetMask
// Il2CppName: GetMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::StringW>)>(&UnityEngine::LayerMask::GetMask)> {
  static const MethodInfo* get() {
    static auto* layerNames = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::LayerMask), "GetMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{layerNames});
  }
};
