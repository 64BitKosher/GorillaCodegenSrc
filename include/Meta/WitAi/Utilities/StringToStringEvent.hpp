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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Meta::WitAi::Utilities
namespace Meta::WitAi::Utilities {
  // Forward declaring type: StringEvent
  class StringEvent;
}
// Completed forward declares
// Type namespace: Meta.WitAi.Utilities
namespace Meta::WitAi::Utilities {
  // Forward declaring type: StringToStringEvent
  class StringToStringEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Meta::WitAi::Utilities::StringToStringEvent);
DEFINE_IL2CPP_ARG_TYPE(::Meta::WitAi::Utilities::StringToStringEvent*, "Meta.WitAi.Utilities", "StringToStringEvent");
// Type namespace: Meta.WitAi.Utilities
namespace Meta::WitAi::Utilities {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Meta.WitAi.Utilities.StringToStringEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: FFFFFFFF
  class StringToStringEvent : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.String _format
    // Size: 0x8
    // Offset: 0x20
    ::StringW format;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public Meta.WitAi.Utilities.StringEvent onStringEvent
    // Size: 0x8
    // Offset: 0x28
    ::Meta::WitAi::Utilities::StringEvent* onStringEvent;
    // Field size check
    static_assert(sizeof(::Meta::WitAi::Utilities::StringEvent*) == 0x8);
    public:
    // Get instance field reference: private System.String _format
    [[deprecated("Use field access instead!")]] ::StringW& dyn__format();
    // Get instance field reference: public Meta.WitAi.Utilities.StringEvent onStringEvent
    [[deprecated("Use field access instead!")]] ::Meta::WitAi::Utilities::StringEvent*& dyn_onStringEvent();
    // public System.Void FormatString(System.String format, System.String value)
    // Offset: 0x4437084
    void FormatString(::StringW format, ::StringW value);
    // public System.Void FormatString(System.String value)
    // Offset: 0x4437130
    void FormatString(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x4437140
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StringToStringEvent* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Meta::WitAi::Utilities::StringToStringEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StringToStringEvent*, creationType>()));
    }
  }; // Meta.WitAi.Utilities.StringToStringEvent
  #pragma pack(pop)
  static check_size<sizeof(StringToStringEvent), 40 + sizeof(::Meta::WitAi::Utilities::StringEvent*)> __Meta_WitAi_Utilities_StringToStringEventSizeCheck;
  static_assert(sizeof(StringToStringEvent) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Meta::WitAi::Utilities::StringToStringEvent::FormatString
// Il2CppName: FormatString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Utilities::StringToStringEvent::*)(::StringW, ::StringW)>(&Meta::WitAi::Utilities::StringToStringEvent::FormatString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Utilities::StringToStringEvent*), "FormatString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Utilities::StringToStringEvent::FormatString
// Il2CppName: FormatString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Meta::WitAi::Utilities::StringToStringEvent::*)(::StringW)>(&Meta::WitAi::Utilities::StringToStringEvent::FormatString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Meta::WitAi::Utilities::StringToStringEvent*), "FormatString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Meta::WitAi::Utilities::StringToStringEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
