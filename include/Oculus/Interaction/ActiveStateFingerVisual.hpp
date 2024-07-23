// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: Oculus.Interaction.Input.HandFingerFlags
#include "Oculus/Interaction/Input/HandFingerFlags.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IActiveState
  class IActiveState;
  // Forward declaring type: MaterialPropertyBlockEditor
  class MaterialPropertyBlockEditor;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Object because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: ActiveStateFingerVisual
  class ActiveStateFingerVisual;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::ActiveStateFingerVisual);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::ActiveStateFingerVisual*, "Oculus.Interaction", "ActiveStateFingerVisual");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x66
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.ActiveStateFingerVisual
  // [TokenAttribute] Offset: FFFFFFFF
  class ActiveStateFingerVisual : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Oculus::Interaction::ActiveStateFingerVisual::$UpdateGlowValue$d__22
    class $UpdateGlowValue$d__22;
    public:
    // private UnityEngine.Object _activeState
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Object* activeState;
    // Field size check
    static_assert(sizeof(::UnityEngine::Object*) == 0x8);
    // private Oculus.Interaction.IActiveState ActiveState
    // Size: 0x8
    // Offset: 0x28
    ::Oculus::Interaction::IActiveState* ActiveState;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::IActiveState*) == 0x8);
    // private Oculus.Interaction.Input.HandFingerFlags _fingersMask
    // Size: 0x4
    // Offset: 0x30
    ::Oculus::Interaction::Input::HandFingerFlags fingersMask;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::Input::HandFingerFlags) == 0x4);
    // Padding between fields: fingersMask and: handMaterialPropertyBlockEditor
    char __padding2[0x4] = {};
    // private Oculus.Interaction.MaterialPropertyBlockEditor _handMaterialPropertyBlockEditor
    // Size: 0x8
    // Offset: 0x38
    ::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor;
    // Field size check
    static_assert(sizeof(::Oculus::Interaction::MaterialPropertyBlockEditor*) == 0x8);
    // private System.Single _glowLerpSpeed
    // Size: 0x4
    // Offset: 0x40
    float glowLerpSpeed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _fingerGlowColor
    // Size: 0x10
    // Offset: 0x44
    ::UnityEngine::Color fingerGlowColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: fingerGlowColor and: handShaderGlowPropertyIds
    char __padding5[0x4] = {};
    // private readonly System.Int32[] _handShaderGlowPropertyIds
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<int> handShaderGlowPropertyIds;
    // Field size check
    static_assert(sizeof(::ArrayW<int>) == 0x8);
    // private readonly System.Int32 _fingerGlowColorPropertyId
    // Size: 0x4
    // Offset: 0x60
    int fingerGlowColorPropertyId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _prevActive
    // Size: 0x1
    // Offset: 0x64
    bool prevActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // protected System.Boolean _started
    // Size: 0x1
    // Offset: 0x65
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: private UnityEngine.Object _activeState
    [[deprecated("Use field access instead!")]] ::UnityEngine::Object*& dyn__activeState();
    // Get instance field reference: private Oculus.Interaction.IActiveState ActiveState
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::IActiveState*& dyn_ActiveState();
    // Get instance field reference: private Oculus.Interaction.Input.HandFingerFlags _fingersMask
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::Input::HandFingerFlags& dyn__fingersMask();
    // Get instance field reference: private Oculus.Interaction.MaterialPropertyBlockEditor _handMaterialPropertyBlockEditor
    [[deprecated("Use field access instead!")]] ::Oculus::Interaction::MaterialPropertyBlockEditor*& dyn__handMaterialPropertyBlockEditor();
    // Get instance field reference: private System.Single _glowLerpSpeed
    [[deprecated("Use field access instead!")]] float& dyn__glowLerpSpeed();
    // Get instance field reference: private UnityEngine.Color _fingerGlowColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__fingerGlowColor();
    // Get instance field reference: private readonly System.Int32[] _handShaderGlowPropertyIds
    [[deprecated("Use field access instead!")]] ::ArrayW<int>& dyn__handShaderGlowPropertyIds();
    // Get instance field reference: private readonly System.Int32 _fingerGlowColorPropertyId
    [[deprecated("Use field access instead!")]] int& dyn__fingerGlowColorPropertyId();
    // Get instance field reference: private System.Boolean _prevActive
    [[deprecated("Use field access instead!")]] bool& dyn__prevActive();
    // Get instance field reference: protected System.Boolean _started
    [[deprecated("Use field access instead!")]] bool& dyn__started();
    // public Oculus.Interaction.Input.HandFingerFlags get_FingersMask()
    // Offset: 0x47ABD90
    ::Oculus::Interaction::Input::HandFingerFlags get_FingersMask();
    // public System.Void set_FingersMask(Oculus.Interaction.Input.HandFingerFlags value)
    // Offset: 0x47ABD98
    void set_FingersMask(::Oculus::Interaction::Input::HandFingerFlags value);
    // public System.Single get_GlowLerpSpeed()
    // Offset: 0x47ABDA0
    float get_GlowLerpSpeed();
    // public System.Void set_GlowLerpSpeed(System.Single value)
    // Offset: 0x47ABDA8
    void set_GlowLerpSpeed(float value);
    // public UnityEngine.Color get_FingerGlowColor()
    // Offset: 0x47ABDB0
    ::UnityEngine::Color get_FingerGlowColor();
    // public System.Void set_FingerGlowColor(UnityEngine.Color value)
    // Offset: 0x47ABDBC
    void set_FingerGlowColor(::UnityEngine::Color value);
    // protected System.Void Awake()
    // Offset: 0x47ABDC8
    void Awake();
    // protected System.Void Start()
    // Offset: 0x47ABE30
    void Start();
    // private System.Void Update()
    // Offset: 0x47ABE68
    void Update();
    // private System.Collections.IEnumerator UpdateGlowValue(System.Int32 fingerIndex, System.Single targetGlow)
    // Offset: 0x47AC098
    ::System::Collections::IEnumerator* UpdateGlowValue(int fingerIndex, float targetGlow);
    // public System.Void InjectAllActiveStateFingerVisual(Oculus.Interaction.IActiveState activeState, Oculus.Interaction.MaterialPropertyBlockEditor handMaterialPropertyBlockEditor)
    // Offset: 0x47AC14C
    void InjectAllActiveStateFingerVisual(::Oculus::Interaction::IActiveState* activeState, ::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor);
    // public System.Void InjectActiveState(Oculus.Interaction.IActiveState activeState)
    // Offset: 0x47AC178
    void InjectActiveState(::Oculus::Interaction::IActiveState* activeState);
    // public System.Void InjectHandMaterialPropertyBlockEditor(Oculus.Interaction.MaterialPropertyBlockEditor handMaterialPropertyBlockEditor)
    // Offset: 0x47AC244
    void InjectHandMaterialPropertyBlockEditor(::Oculus::Interaction::MaterialPropertyBlockEditor* handMaterialPropertyBlockEditor);
    // public System.Void .ctor()
    // Offset: 0x47AC24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActiveStateFingerVisual* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Interaction::ActiveStateFingerVisual::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActiveStateFingerVisual*, creationType>()));
    }
  }; // Oculus.Interaction.ActiveStateFingerVisual
  #pragma pack(pop)
  static check_size<sizeof(ActiveStateFingerVisual), 101 + sizeof(bool)> __Oculus_Interaction_ActiveStateFingerVisualSizeCheck;
  static_assert(sizeof(ActiveStateFingerVisual) == 0x66);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::get_FingersMask
// Il2CppName: get_FingersMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Interaction::Input::HandFingerFlags (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::get_FingersMask)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "get_FingersMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::set_FingersMask
// Il2CppName: set_FingersMask
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::Input::HandFingerFlags)>(&Oculus::Interaction::ActiveStateFingerVisual::set_FingersMask)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Interaction.Input", "HandFingerFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "set_FingersMask", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::get_GlowLerpSpeed
// Il2CppName: get_GlowLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::get_GlowLerpSpeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "get_GlowLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::set_GlowLerpSpeed
// Il2CppName: set_GlowLerpSpeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(float)>(&Oculus::Interaction::ActiveStateFingerVisual::set_GlowLerpSpeed)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "set_GlowLerpSpeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::get_FingerGlowColor
// Il2CppName: get_FingerGlowColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::get_FingerGlowColor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "get_FingerGlowColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::set_FingerGlowColor
// Il2CppName: set_FingerGlowColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(::UnityEngine::Color)>(&Oculus::Interaction::ActiveStateFingerVisual::set_FingerGlowColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "set_FingerGlowColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)()>(&Oculus::Interaction::ActiveStateFingerVisual::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::UpdateGlowValue
// Il2CppName: UpdateGlowValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (Oculus::Interaction::ActiveStateFingerVisual::*)(int, float)>(&Oculus::Interaction::ActiveStateFingerVisual::UpdateGlowValue)> {
  static const MethodInfo* get() {
    static auto* fingerIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* targetGlow = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "UpdateGlowValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fingerIndex, targetGlow});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::InjectAllActiveStateFingerVisual
// Il2CppName: InjectAllActiveStateFingerVisual
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::IActiveState*, ::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::ActiveStateFingerVisual::InjectAllActiveStateFingerVisual)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    static auto* handMaterialPropertyBlockEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "InjectAllActiveStateFingerVisual", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState, handMaterialPropertyBlockEditor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::InjectActiveState
// Il2CppName: InjectActiveState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::IActiveState*)>(&Oculus::Interaction::ActiveStateFingerVisual::InjectActiveState)> {
  static const MethodInfo* get() {
    static auto* activeState = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "IActiveState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "InjectActiveState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{activeState});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::InjectHandMaterialPropertyBlockEditor
// Il2CppName: InjectHandMaterialPropertyBlockEditor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::ActiveStateFingerVisual::*)(::Oculus::Interaction::MaterialPropertyBlockEditor*)>(&Oculus::Interaction::ActiveStateFingerVisual::InjectHandMaterialPropertyBlockEditor)> {
  static const MethodInfo* get() {
    static auto* handMaterialPropertyBlockEditor = &::il2cpp_utils::GetClassFromName("Oculus.Interaction", "MaterialPropertyBlockEditor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::ActiveStateFingerVisual*), "InjectHandMaterialPropertyBlockEditor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handMaterialPropertyBlockEditor});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::ActiveStateFingerVisual::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
