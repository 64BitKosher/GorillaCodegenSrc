// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
#include "Meta/Voice/Samples/TTSVoices/TTSSpeakerObserver.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::Voice::Samples::TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Forward declaring type: SimpleDropdownList
  class SimpleDropdownList;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Forward declaring type: TTSSpeakerEffectSelect
  class TTSSpeakerEffectSelect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect);
DEFINE_IL2CPP_ARG_TYPE(::Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*, "Meta.Voice.Samples.TTSVoices", "TTSSpeakerEffectSelect");
// Type namespace: Meta.Voice.Samples.TTSVoices
namespace Meta::Voice::Samples::TTSVoices {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect
  // [TokenAttribute] Offset: FFFFFFFF
  class TTSSpeakerEffectSelect : public ::Meta::Voice::Samples::TTSVoices::TTSSpeakerObserver {
    public:
    public:
    // private Meta.Voice.Samples.TTSVoices.SimpleDropdownList _characterDropdown
    // Size: 0x8
    // Offset: 0x28
    ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList* characterDropdown;
    // Field size check
    static_assert(sizeof(::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*) == 0x8);
    // private Meta.Voice.Samples.TTSVoices.SimpleDropdownList _environmentDropdown
    // Size: 0x8
    // Offset: 0x30
    ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList* environmentDropdown;
    // Field size check
    static_assert(sizeof(::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*) == 0x8);
    public:
    // static field const value: static private System.String NONE_ID
    static constexpr const char* NONE_ID = "NONE";
    // Get static field: static private System.String NONE_ID
    static ::StringW _get_NONE_ID();
    // Set static field: static private System.String NONE_ID
    static void _set_NONE_ID(::StringW value);
    // Get static field: static private readonly System.String[] CHARACTER_IDS
    static ::ArrayW<::StringW> _get_CHARACTER_IDS();
    // Set static field: static private readonly System.String[] CHARACTER_IDS
    static void _set_CHARACTER_IDS(::ArrayW<::StringW> value);
    // Get static field: static private readonly System.String[] ENVIRONMENT_IDS
    static ::ArrayW<::StringW> _get_ENVIRONMENT_IDS();
    // Set static field: static private readonly System.String[] ENVIRONMENT_IDS
    static void _set_ENVIRONMENT_IDS(::ArrayW<::StringW> value);
    // Get instance field reference: private Meta.Voice.Samples.TTSVoices.SimpleDropdownList _characterDropdown
    [[deprecated("Use field access instead!")]] ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*& dyn__characterDropdown();
    // Get instance field reference: private Meta.Voice.Samples.TTSVoices.SimpleDropdownList _environmentDropdown
    [[deprecated("Use field access instead!")]] ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*& dyn__environmentDropdown();
    // private System.Void RefreshDropdowns()
    // Offset: 0x441422C
    void RefreshDropdowns();
    // private System.Void RefreshDropdown(System.String id, Meta.Voice.Samples.TTSVoices.SimpleDropdownList dropdown, System.String[] options)
    // Offset: 0x4414804
    void RefreshDropdown(::StringW id, ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList* dropdown, ::ArrayW<::StringW> options);
    // private System.Void OnCharacterSelected(System.Int32 newIndex)
    // Offset: 0x4414908
    void OnCharacterSelected(int newIndex);
    // private System.Void OnEnvironmentSelected(System.Int32 newIndex)
    // Offset: 0x4414C40
    void OnEnvironmentSelected(int newIndex);
    // private System.Void RefreshSsml()
    // Offset: 0x441490C
    void RefreshSsml();
    // static private System.Void .cctor()
    // Offset: 0x4414C54
    static void _cctor();
    // protected override System.Void OnEnable()
    // Offset: 0x4413D60
    // Implemented from: Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
    // Base method: System.Void TTSSpeakerObserver::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x4414340
    // Implemented from: Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
    // Base method: System.Void TTSSpeakerObserver::OnDisable()
    void OnDisable();
    // public System.Void .ctor()
    // Offset: 0x4414C44
    // Implemented from: Meta.Voice.Samples.TTSVoices.TTSSpeakerObserver
    // Base method: System.Void TTSSpeakerObserver::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TTSSpeakerEffectSelect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TTSSpeakerEffectSelect*, creationType>()));
    }
  }; // Meta.Voice.Samples.TTSVoices.TTSSpeakerEffectSelect
  #pragma pack(pop)
  static check_size<sizeof(TTSSpeakerEffectSelect), 48 + sizeof(::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*)> __Meta_Voice_Samples_TTSVoices_TTSSpeakerEffectSelectSizeCheck;
  static_assert(sizeof(TTSSpeakerEffectSelect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshDropdowns
// Il2CppName: RefreshDropdowns
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshDropdowns)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "RefreshDropdowns", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshDropdown
// Il2CppName: RefreshDropdown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)(::StringW, ::Meta::Voice::Samples::TTSVoices::SimpleDropdownList*, ::ArrayW<::StringW>)>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshDropdown)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* dropdown = &::il2cpp_utils::GetClassFromName("Meta.Voice.Samples.TTSVoices", "SimpleDropdownList")->byval_arg;
    static auto* options = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "RefreshDropdown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id, dropdown, options});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnCharacterSelected
// Il2CppName: OnCharacterSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)(int)>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnCharacterSelected)> {
  static const MethodInfo* get() {
    static auto* newIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "OnCharacterSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newIndex});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnEnvironmentSelected
// Il2CppName: OnEnvironmentSelected
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)(int)>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnEnvironmentSelected)> {
  static const MethodInfo* get() {
    static auto* newIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "OnEnvironmentSelected", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newIndex});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshSsml
// Il2CppName: RefreshSsml
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::RefreshSsml)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "RefreshSsml", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::*)()>(&Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Meta::Voice::Samples::TTSVoices::TTSSpeakerEffectSelect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
