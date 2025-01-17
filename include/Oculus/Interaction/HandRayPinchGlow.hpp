// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction::Input
namespace Oculus::Interaction::Input {
  // Forward declaring type: IHand
  class IHand;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: RayInteractor
  class RayInteractor;
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
  // Forward declaring type: InteractorStateChangeArgs
  struct InteractorStateChangeArgs;
  // Skipping declaration: GlowType because it is already included!
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: HandRayPinchGlow
  class HandRayPinchGlow;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::HandRayPinchGlow);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandRayPinchGlow*, "Oculus.Interaction", "HandRayPinchGlow");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x72
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.HandRayPinchGlow
  // [TokenAttribute] Offset: FFFFFFFF
  class HandRayPinchGlow : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::HandRayPinchGlow::GlowType
    struct GlowType;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Oculus.Interaction.HandRayPinchGlow/GlowType
    // [TokenAttribute] Offset: FFFFFFFF
    struct GlowType/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: GlowType
      constexpr GlowType(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Oculus.Interaction.HandRayPinchGlow/GlowType Fill
      static constexpr const int Fill = 17;
      // Get static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Fill
      static ::Oculus::Interaction::HandRayPinchGlow::GlowType _get_Fill();
      // Set static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Fill
      static void _set_Fill(::Oculus::Interaction::HandRayPinchGlow::GlowType value);
      // static field const value: static public Oculus.Interaction.HandRayPinchGlow/GlowType Outline
      static constexpr const int Outline = 18;
      // Get static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Outline
      static ::Oculus::Interaction::HandRayPinchGlow::GlowType _get_Outline();
      // Set static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Outline
      static void _set_Outline(::Oculus::Interaction::HandRayPinchGlow::GlowType value);
      // static field const value: static public Oculus.Interaction.HandRayPinchGlow/GlowType Both
      static constexpr const int Both = 16;
      // Get static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Both
      static ::Oculus::Interaction::HandRayPinchGlow::GlowType _get_Both();
      // Set static field: static public Oculus.Interaction.HandRayPinchGlow/GlowType Both
      static void _set_Both(::Oculus::Interaction::HandRayPinchGlow::GlowType value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Oculus.Interaction.HandRayPinchGlow/GlowType
    #pragma pack(pop)
    static check_size<sizeof(HandRayPinchGlow::GlowType), 0 + sizeof(int)> __Oculus_Interaction_HandRayPinchGlow_GlowTypeSizeCheck;
    static_assert(sizeof(HandRayPinchGlow::GlowType) == 0x4);
    public:
    // private UnityEngine.Object _hand
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* hand;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.RayInteractor _rayInteractor
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::RayInteractor* rayInteractor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::RayInteractor*) == 0x8);
    // private Oculus.Interaction.MaterialPropertyBlockEditor _materialEditor
    // Size: 0x8
    // Offset: 0x30
    ::Oculus::Interaction::MaterialPropertyBlockEditor* materialEditor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private UnityEngine.Color _glowColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color glowColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private Oculus.Interaction.HandRayPinchGlow/GlowType _glowType
    // Size: 0x4
    // Offset: 0x48
    ::Oculus::Interaction::HandRayPinchGlow::GlowType glowType;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::HandRayPinchGlow::GlowType) == 0x4);
    // Padding between fields: glowType and: Hand
    char __padding4[0x4] = {};
    // private Oculus.Interaction.Input.IHand Hand
    // Size: 0x8
    // Offset: 0x50
    ::Oculus::Interaction::Input::IHand* Hand;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::IHand*) == 0x8);
    // private readonly System.Int32 _generateGlowID
    // Size: 0x4
    // Offset: 0x58
    int generateGlowID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _glowPositionID
    // Size: 0x4
    // Offset: 0x5C
    int glowPositionID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _glowColorID
    // Size: 0x4
    // Offset: 0x60
    int glowColorID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _glowTypeID
    // Size: 0x4
    // Offset: 0x64
    int glowTypeID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _glowParameterID
    // Size: 0x4
    // Offset: 0x68
    int glowParameterID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 _glowMaxLengthID
    // Size: 0x4
    // Offset: 0x6C
    int glowMaxLengthID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _glowEnabled
    // Size: 0x1
    // Offset: 0x70
    bool glowEnabled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x71
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _hand
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__hand();
    // Get instance field reference: private Oculus.Interaction.RayInteractor _rayInteractor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::RayInteractor*& dyn__rayInteractor();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _materialEditor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__materialEditor();
    // Get instance field reference: private UnityEngine.Color _glowColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__glowColor();
    // Get instance field reference: private Oculus.Interaction.HandRayPinchGlow/GlowType _glowType
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::HandRayPinchGlow::GlowType& dyn__glowType();
    // Get instance field reference: private Oculus.Interaction.Input.IHand Hand
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::IHand*& dyn_Hand();
    // Get instance field reference: private readonly System.Int32 _generateGlowID
    [[deprecated("Use field access instead!")]] int& dyn__generateGlowID();
    // Get instance field reference: private readonly System.Int32 _glowPositionID
    [[deprecated("Use field access instead!")]] int& dyn__glowPositionID();
    // Get instance field reference: private readonly System.Int32 _glowColorID
    [[deprecated("Use field access instead!")]] int& dyn__glowColorID();
    // Get instance field reference: private readonly System.Int32 _glowTypeID
    [[deprecated("Use field access instead!")]] int& dyn__glowTypeID();
    // Get instance field reference: private readonly System.Int32 _glowParameterID
    [[deprecated("Use field access instead!")]] int& dyn__glowParameterID();
    // Get instance field reference: private readonly System.Int32 _glowMaxLengthID
    [[deprecated("Use field access instead!")]] int& dyn__glowMaxLengthID();
    // Get instance field reference: private System.Boolean _glowEnabled
    [[deprecated("Use field access instead!")]] bool& dyn__glowEnabled();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // protected System.Void Awake()
    // Offset: 0x4777314
    void Awake();
    // protected System.Void Start()
    // Offset: 0x477737C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x47773B0
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x4777878
    void OnDisable();
    // private System.Void UpdateVisualState(Oculus.Interaction.InteractorStateChangeArgs args)
    // Offset: 0x47779A4
    void UpdateVisualState(::Oculus::Interaction::InteractorStateChangeArgs args);
    // private System.Void UpdateGlow(UnityEngine.Vector3 glowPosition, System.Single pinchStrength, System.Single glowMaxLength)
    // Offset: 0x47779A8
    void UpdateGlow(::UnityEngine::Vector3 glowPosition, float pinchStrength, float glowMaxLength);
    // private System.Void UpdateVisual()
    // Offset: 0x47774E4
    void UpdateVisual();
    // public System.Void InjectAllHandRayPinchGlow(Oculus.Interaction.Input.IHand hand, Oculus.Interaction.RayInteractor interactor, Oculus.Interaction.MaterialPropertyBlockEditor materialEditor, UnityEngine.Color color, Oculus.Interaction.HandRayPinchGlow/GlowType glowType)
    // Offset: 0x4777AF0
    void InjectAllHandRayPinchGlow(::Oculus::Interaction::Input::IHand* hand, ::Oculus::Interaction::RayInteractor* interactor, ::Oculus::Interaction::MaterialPropertyBlockEditor* materialEditor, ::UnityEngine::Color color, ::Oculus::Interaction::HandRayPinchGlow::GlowType glowType);
    // public System.Void InjectHand(Oculus.Interaction.Input.IHand hand)
    // Offset: 0x4777B6C
    void InjectHand(::Oculus::Interaction::Input::IHand* hand);
    // public System.Void InjectRayInteractor(Oculus.Interaction.RayInteractor interactor)
    // Offset: 0x4777C3C
    void InjectRayInteractor(::Oculus::Interaction::RayInteractor* interactor);
    // public System.Void InjectMaterialPropertyBlockEditor(Oculus.Interaction.MaterialPropertyBlockEditor materialEditor)
    // Offset: 0x4777C44
    void InjectMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor* materialEditor);
    // public System.Void InjectGlowColor(UnityEngine.Color color)
    // Offset: 0x4777C4C
    void InjectGlowColor(::UnityEngine::Color color);
    // public System.Void InjectGlowType(Oculus.Interaction.HandRayPinchGlow/GlowType glowType)
    // Offset: 0x4777C58
    void InjectGlowType(::Oculus::Interaction::HandRayPinchGlow::GlowType glowType);
    // public System.Void .ctor()
    // Offset: 0x4777C60
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HandRayPinchGlow* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::HandRayPinchGlow::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HandRayPinchGlow*, creationType>()));
    }
  }; // Oculus.Interaction.HandRayPinchGlow
  #pragma pack(pop)
  static check_size<sizeof(HandRayPinchGlow), 113 + sizeof(bool)> __Oculus_Interaction_HandRayPinchGlowSizeCheck;
  static_assert(sizeof(HandRayPinchGlow) == 0x72);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::HandRayPinchGlow::GlowType, "Oculus.Interaction", "HandRayPinchGlow/GlowType");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)()>(&Oculus::Interaction::HandRayPinchGlow::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)()>(&Oculus::Interaction::HandRayPinchGlow::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)()>(&Oculus::Interaction::HandRayPinchGlow::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)()>(&Oculus::Interaction::HandRayPinchGlow::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::UpdateVisualState
// Il2CppName: UpdateVisualState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::InteractorStateChangeArgs)>(&Oculus::Interaction::HandRayPinchGlow::UpdateVisualState)> {
  static const MethodInfo* get() {
    static auto* args = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "InteractorStateChangeArgs")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "UpdateVisualState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{args});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::UpdateGlow
// Il2CppName: UpdateGlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::UnityEngine::Vector3, float, float)>(&Oculus::Interaction::HandRayPinchGlow::UpdateGlow)> {
  static const MethodInfo* get() {
    static auto* glowPosition = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->byval_arg;
    static auto* pinchStrength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* glowMaxLength = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "UpdateGlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glowPosition, pinchStrength, glowMaxLength});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::UpdateVisual
// Il2CppName: UpdateVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)()>(&Oculus::Interaction::HandRayPinchGlow::UpdateVisual)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "UpdateVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectAllHandRayPinchGlow
// Il2CppName: InjectAllHandRayPinchGlow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::Input::IHand*, ::Oculus::Interaction::RayInteractor*, ::Oculus::Interaction::MaterialPropertyBlockEditor*, ::UnityEngine::Color, ::Oculus::Interaction::HandRayPinchGlow::GlowType)>(&Oculus::Interaction::HandRayPinchGlow::InjectAllHandRayPinchGlow)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "RayInteractor")->byval_arg;
    static auto* materialEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* glowType = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "HandRayPinchGlow/GlowType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectAllHandRayPinchGlow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand, interactor, materialEditor, color, glowType});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectHand
// Il2CppName: InjectHand
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::Input::IHand*)>(&Oculus::Interaction::HandRayPinchGlow::InjectHand)> {
  static const MethodInfo* get() {
    static auto* hand = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "IHand")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectHand", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{hand});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectRayInteractor
// Il2CppName: InjectRayInteractor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::RayInteractor*)>(&Oculus::Interaction::HandRayPinchGlow::InjectRayInteractor)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "RayInteractor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectRayInteractor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectMaterialPropertyBlockEditor
// Il2CppName: InjectMaterialPropertyBlockEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::HandRayPinchGlow::InjectMaterialPropertyBlockEditor)> {
  static const MethodInfo* get() {
    static auto* materialEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectMaterialPropertyBlockEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{materialEditor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectGlowColor
// Il2CppName: InjectGlowColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::UnityEngine::Color)>(&Oculus::Interaction::HandRayPinchGlow::InjectGlowColor)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectGlowColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::InjectGlowType
// Il2CppName: InjectGlowType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::HandRayPinchGlow::*)(::Oculus::Interaction::HandRayPinchGlow::GlowType)>(&Oculus::Interaction::HandRayPinchGlow::InjectGlowType)> {
  static const MethodInfo* get() {
    static auto* glowType = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "HandRayPinchGlow/GlowType")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::HandRayPinchGlow*), "InjectGlowType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{glowType});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::HandRayPinchGlow::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
