// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPassthroughLayer
#include "GlobalNamespace/OVRPassthroughLayer.hpp"
// Including type: OVRPassthroughLayer/IStyleHandler
#include "GlobalNamespace/OVRPassthroughLayer_IStyleHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture2D
  class Texture2D;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRPassthroughColorLut
  class OVRPassthroughColorLut;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRPassthroughLayer::ColorLutHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*, "", "OVRPassthroughLayer/ColorLutHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x2D
  #pragma pack(push, 1)
  // Autogenerated type: OVRPassthroughLayer/ColorLutHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRPassthroughLayer::ColorLutHandler : public ::Il2CppObject/*, public ::GlobalNamespace::OVRPassthroughLayer::IStyleHandler*/ {
    public:
    public:
    // protected System.Boolean _currentFlipLutY
    // Size: 0x1
    // Offset: 0x10
    bool currentFlipLutY;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: currentFlipLutY and: currentColorLutSourceTexture
    char __padding0[0x7] = {};
    // protected UnityEngine.Texture2D _currentColorLutSourceTexture
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Texture2D* currentColorLutSourceTexture;
    // Field size check
    static_assert(sizeof(::UnityEngine::Texture2D*) == 0x8);
    // private OVRPassthroughColorLut <Lut>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRPassthroughColorLut* Lut;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRPassthroughColorLut*) == 0x8);
    // private System.Single <Weight>k__BackingField
    // Size: 0x4
    // Offset: 0x28
    float Weight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <IsValid>k__BackingField
    // Size: 0x1
    // Offset: 0x2C
    bool IsValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::OVRPassthroughLayer::IStyleHandler
    operator ::GlobalNamespace::OVRPassthroughLayer::IStyleHandler() noexcept {
      return *reinterpret_cast<::GlobalNamespace::OVRPassthroughLayer::IStyleHandler*>(this);
    }
    // Get instance field reference: protected System.Boolean _currentFlipLutY
    [[deprecated("Use field access instead!")]] bool& dyn__currentFlipLutY();
    // Get instance field reference: protected UnityEngine.Texture2D _currentColorLutSourceTexture
    [[deprecated("Use field access instead!")]] ::UnityEngine::Texture2D*& dyn__currentColorLutSourceTexture();
    // Get instance field reference: private OVRPassthroughColorLut <Lut>k__BackingField
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRPassthroughColorLut*& dyn_$Lut$k__BackingField();
    // Get instance field reference: private System.Single <Weight>k__BackingField
    [[deprecated("Use field access instead!")]] float& dyn_$Weight$k__BackingField();
    // Get instance field reference: private System.Boolean <IsValid>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$IsValid$k__BackingField();
    // public OVRPassthroughColorLut get_Lut()
    // Offset: 0x48EC550
    ::GlobalNamespace::OVRPassthroughColorLut* get_Lut();
    // public System.Void set_Lut(OVRPassthroughColorLut value)
    // Offset: 0x48EC558
    void set_Lut(::GlobalNamespace::OVRPassthroughColorLut* value);
    // public System.Single get_Weight()
    // Offset: 0x48EC560
    float get_Weight();
    // public System.Void set_Weight(System.Single value)
    // Offset: 0x48EC568
    void set_Weight(float value);
    // public System.Boolean get_IsValid()
    // Offset: 0x48EC570
    bool get_IsValid();
    // protected System.Void set_IsValid(System.Boolean value)
    // Offset: 0x48EC578
    void set_IsValid(bool value);
    // public System.Void ApplyStyleSettings(ref OVRPlugin/InsightPassthroughStyle2 style)
    // Offset: 0x48EC584
    void ApplyStyleSettings(ByRef<::GlobalNamespace::OVRPlugin::InsightPassthroughStyle2> style);
    // public System.Void Update(OVRPassthroughLayer/Settings settings)
    // Offset: 0x48EC5AC
    void Update(::GlobalNamespace::OVRPassthroughLayer::Settings settings);
    // protected OVRPassthroughColorLut GetColorLutForTexture(UnityEngine.Texture2D newTexture, OVRPassthroughColorLut lut, ref UnityEngine.Texture2D lastTexture, System.Boolean flipY)
    // Offset: 0x48EC618
    ::GlobalNamespace::OVRPassthroughColorLut* GetColorLutForTexture(::UnityEngine::Texture2D* newTexture, ::GlobalNamespace::OVRPassthroughColorLut* lut, ByRef<::UnityEngine::Texture2D*> lastTexture, bool flipY);
    // System.Void Update(OVRPassthroughColorLut lut, System.Single weight)
    // Offset: 0x48EBDC8
    void Update(::GlobalNamespace::OVRPassthroughColorLut* lut, float weight);
    // public System.Void Clear()
    // Offset: 0x48EC77C
    void Clear();
    // public System.Void .ctor()
    // Offset: 0x48EBC2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRPassthroughLayer::ColorLutHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRPassthroughLayer::ColorLutHandler*, creationType>()));
    }
  }; // OVRPassthroughLayer/ColorLutHandler
  #pragma pack(pop)
  static check_size<sizeof(OVRPassthroughLayer::ColorLutHandler), 44 + sizeof(bool)> __GlobalNamespace_OVRPassthroughLayer_ColorLutHandlerSizeCheck;
  static_assert(sizeof(OVRPassthroughLayer::ColorLutHandler) == 0x2D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_Lut
// Il2CppName: get_Lut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)()>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_Lut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "get_Lut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_Lut
// Il2CppName: set_Lut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_Lut)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRPassthroughColorLut")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "set_Lut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_Weight
// Il2CppName: get_Weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)()>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_Weight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "get_Weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_Weight
// Il2CppName: set_Weight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(float)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_Weight)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "set_Weight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_IsValid
// Il2CppName: get_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)()>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::get_IsValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "get_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_IsValid
// Il2CppName: set_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(bool)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::set_IsValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "set_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::ApplyStyleSettings
// Il2CppName: ApplyStyleSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(ByRef<::GlobalNamespace::OVRPlugin::InsightPassthroughStyle2>)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::ApplyStyleSettings)> {
  static const MethodInfo* get() {
    static auto* style = &::il2cpp_utils::GetClassFromName("", "OVRPlugin/InsightPassthroughStyle2")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "ApplyStyleSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{style});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughLayer::Settings)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Update)> {
  static const MethodInfo* get() {
    static auto* settings = &::il2cpp_utils::GetClassFromName("", "OVRPassthroughLayer/Settings")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{settings});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::GetColorLutForTexture
// Il2CppName: GetColorLutForTexture
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPassthroughColorLut* (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(::UnityEngine::Texture2D*, ::GlobalNamespace::OVRPassthroughColorLut*, ByRef<::UnityEngine::Texture2D*>, bool)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::GetColorLutForTexture)> {
  static const MethodInfo* get() {
    static auto* newTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->byval_arg;
    static auto* lut = &::il2cpp_utils::GetClassFromName("", "OVRPassthroughColorLut")->byval_arg;
    static auto* lastTexture = &::il2cpp_utils::GetClassFromName("UnityEngine", "Texture2D")->this_arg;
    static auto* flipY = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "GetColorLutForTexture", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newTexture, lut, lastTexture, flipY});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)(::GlobalNamespace::OVRPassthroughColorLut*, float)>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Update)> {
  static const MethodInfo* get() {
    static auto* lut = &::il2cpp_utils::GetClassFromName("", "OVRPassthroughColorLut")->byval_arg;
    static auto* weight = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lut, weight});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Clear
// Il2CppName: Clear
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::*)()>(&GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::Clear)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPassthroughLayer::ColorLutHandler*), "Clear", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRPassthroughLayer::ColorLutHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!