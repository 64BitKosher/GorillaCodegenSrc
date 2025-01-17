// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::Voice::Samples::Shapes
namespace Meta::Voice::Samples::Shapes {
  // Skipping declaration: Step because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Text
  class Text;
}
// Completed forward declares
// Type namespace: Meta.Voice.Samples.Shapes
namespace Meta::Voice::Samples::Shapes {
  // Forward declaring type: ShapeSampleInstructions
  class ShapeSampleInstructions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions*, "Meta.Voice.Samples.Shapes", "ShapeSampleInstructions");
// Type namespace: Meta.Voice.Samples.Shapes
namespace Meta::Voice::Samples::Shapes {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Samples.Shapes.ShapeSampleInstructions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class ShapeSampleInstructions : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step
    struct Step;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step
    // [TokenAttribute] Offset: FFFFFFFF
    struct Step/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Step
      constexpr Step(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetupWit
      static constexpr const int SetupWit = 0;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetupWit
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_SetupWit();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetupWit
      static void _set_SetupWit(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingServerToken
      static constexpr const int MissingServerToken = 1;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingServerToken
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_MissingServerToken();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingServerToken
      static void _set_MissingServerToken(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingClientToken
      static constexpr const int MissingClientToken = 2;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingClientToken
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_MissingClientToken();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step MissingClientToken
      static void _set_MissingClientToken(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddConfig
      static constexpr const int AddConfig = 3;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddConfig
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_AddConfig();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddConfig
      static void _set_AddConfig(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddVoiceExperiences
      static constexpr const int AddVoiceExperiences = 4;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddVoiceExperiences
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_AddVoiceExperiences();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step AddVoiceExperiences
      static void _set_AddVoiceExperiences(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetConfig
      static constexpr const int SetConfig = 5;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetConfig
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_SetConfig();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step SetConfig
      static void _set_SetConfig(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // static field const value: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step Ready
      static constexpr const int Ready = 6;
      // Get static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step Ready
      static ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step _get_Ready();
      // Set static field: static public Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step Ready
      static void _set_Ready(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step value);
      // Get instance field reference: public System.Int32 value__
      [[deprecated("Use field access instead!")]] int& dyn_value__();
    }; // Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step
    #pragma pack(pop)
    static check_size<sizeof(ShapeSampleInstructions::Step), 0 + sizeof(int)> __Meta_Voice_Samples_Shapes_ShapeSampleInstructions_StepSizeCheck;
    static_assert(sizeof(ShapeSampleInstructions::Step) == 0x4);
    public:
    // private UnityEngine.UI.Text instructionText
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Text* instructionText;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Text*) == 0x8);
    // private Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step currentStep
    // Size: 0x4
    // Offset: 0x28
    ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step currentStep;
    // Field size check
    static_assert(sizeof(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step) == 0x4);
    public:
    // Get static field: static private readonly System.String[] steps
    static ::ArrayW<::StringW> _get_steps();
    // Set static field: static private readonly System.String[] steps
    static void _set_steps(::ArrayW<::StringW> value);
    // Get instance field reference: private UnityEngine.UI.Text instructionText
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Text*& dyn_instructionText();
    // Get instance field reference: private Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step currentStep
    [[deprecated("Use field access instead!")]] ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step& dyn_currentStep();
    // Meta.Voice.Samples.Shapes.ShapeSampleInstructions/Step get_CurrentStep()
    // Offset: 0x4411674
    ::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step get_CurrentStep();
    // System.String get_CurrentStepText()
    // Offset: 0x441167C
    ::StringW get_CurrentStepText();
    // private System.Void OnValidate()
    // Offset: 0x44116FC
    void OnValidate();
    // private System.Void OnEnable()
    // Offset: 0x4411704
    void OnEnable();
    // private System.Void Update()
    // Offset: 0x4411708
    void Update();
    // private System.Void UpdateStep()
    // Offset: 0x4411700
    void UpdateStep();
    // public System.Void .ctor()
    // Offset: 0x441170C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ShapeSampleInstructions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ShapeSampleInstructions*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x441171C
    static void _cctor();
  }; // Meta.Voice.Samples.Shapes.ShapeSampleInstructions
  #pragma pack(pop)
  static check_size<sizeof(ShapeSampleInstructions), 40 + sizeof(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step)> __Meta_Voice_Samples_Shapes_ShapeSampleInstructionsSizeCheck;
  static_assert(sizeof(ShapeSampleInstructions) == 0x2C);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step, "Meta.Voice.Samples.Shapes", "ShapeSampleInstructions/Step");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::get_CurrentStep
// Il2CppName: get_CurrentStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Step (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::get_CurrentStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "get_CurrentStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::get_CurrentStepText
// Il2CppName: get_CurrentStepText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::get_CurrentStepText)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "get_CurrentStepText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::UpdateStep
// Il2CppName: UpdateStep
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::Shapes::ShapeSampleInstructions::*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::UpdateStep)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), "UpdateStep", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Meta::Voice::Samples::Shapes::ShapeSampleInstructions::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::Voice::Samples::Shapes::ShapeSampleInstructions::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::Shapes::ShapeSampleInstructions*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
