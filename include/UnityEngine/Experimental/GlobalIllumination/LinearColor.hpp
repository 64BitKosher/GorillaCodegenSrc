// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Forward declaring type: LinearColor
  struct LinearColor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::GlobalIllumination::LinearColor, "UnityEngine.Experimental.GlobalIllumination", "LinearColor");
// Type namespace: UnityEngine.Experimental.GlobalIllumination
namespace UnityEngine::Experimental::GlobalIllumination {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Experimental.GlobalIllumination.LinearColor
  // [TokenAttribute] Offset: FFFFFFFF
  struct LinearColor/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single m_red
    // Size: 0x4
    // Offset: 0x0
    float m_red;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_green
    // Size: 0x4
    // Offset: 0x4
    float m_green;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_blue
    // Size: 0x4
    // Offset: 0x8
    float m_blue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single m_intensity
    // Size: 0x4
    // Offset: 0xC
    float m_intensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: LinearColor
    constexpr LinearColor(float m_red_ = {}, float m_green_ = {}, float m_blue_ = {}, float m_intensity_ = {}) noexcept : m_red{m_red_}, m_green{m_green_}, m_blue{m_blue_}, m_intensity{m_intensity_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single m_red
    [[deprecated("Use field access instead!")]] float& dyn_m_red();
    // Get instance field reference: private System.Single m_green
    [[deprecated("Use field access instead!")]] float& dyn_m_green();
    // Get instance field reference: private System.Single m_blue
    [[deprecated("Use field access instead!")]] float& dyn_m_blue();
    // Get instance field reference: private System.Single m_intensity
    [[deprecated("Use field access instead!")]] float& dyn_m_intensity();
    // public System.Single get_red()
    // Offset: 0x54F4354
    float get_red();
    // public System.Void set_red(System.Single value)
    // Offset: 0x54F435C
    void set_red(float value);
    // public System.Single get_green()
    // Offset: 0x54F4408
    float get_green();
    // public System.Void set_green(System.Single value)
    // Offset: 0x54F4410
    void set_green(float value);
    // public System.Single get_blue()
    // Offset: 0x54F44BC
    float get_blue();
    // public System.Void set_blue(System.Single value)
    // Offset: 0x54F44C4
    void set_blue(float value);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Convert(UnityEngine.Color color, System.Single intensity)
    // Offset: 0x54F4570
    static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Convert(::UnityEngine::Color color, float intensity);
    // static public UnityEngine.Experimental.GlobalIllumination.LinearColor Black()
    // Offset: 0x54F4818
    static ::UnityEngine::Experimental::GlobalIllumination::LinearColor Black();
  }; // UnityEngine.Experimental.GlobalIllumination.LinearColor
  #pragma pack(pop)
  static check_size<sizeof(LinearColor), 12 + sizeof(float)> __UnityEngine_Experimental_GlobalIllumination_LinearColorSizeCheck;
  static_assert(sizeof(LinearColor) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::get_red
// Il2CppName: get_red
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::get_red)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "get_red", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::set_red
// Il2CppName: set_red
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float)>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::set_red)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "set_red", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::get_green
// Il2CppName: get_green
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::get_green)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "get_green", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::set_green
// Il2CppName: set_green
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float)>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::set_green)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "set_green", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::get_blue
// Il2CppName: get_blue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)()>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::get_blue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "get_blue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::set_blue
// Il2CppName: set_blue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Experimental::GlobalIllumination::LinearColor::*)(float)>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::set_blue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "set_blue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert
// Il2CppName: Convert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)(::UnityEngine::Color, float)>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::Convert)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* intensity = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "Convert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, intensity});
  }
};
// Writing MetadataGetter for method: UnityEngine::Experimental::GlobalIllumination::LinearColor::Black
// Il2CppName: Black
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::GlobalIllumination::LinearColor (*)()>(&UnityEngine::Experimental::GlobalIllumination::LinearColor::Black)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Experimental::GlobalIllumination::LinearColor), "Black", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
