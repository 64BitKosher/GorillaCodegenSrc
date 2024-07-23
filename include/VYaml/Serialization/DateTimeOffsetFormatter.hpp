// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
// Including type: System.DateTimeOffset
#include "System/DateTimeOffset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Emitter
namespace VYaml::Emitter {
  // Skipping declaration: Utf8YamlEmitter because it is already included!
}
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializationContext
  class YamlSerializationContext;
  // Forward declaring type: YamlDeserializationContext
  class YamlDeserializationContext;
}
// Forward declaring namespace: VYaml::Parser
namespace VYaml::Parser {
  // Skipping declaration: YamlParser because it is already included!
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: DateTimeOffsetFormatter
  class DateTimeOffsetFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::DateTimeOffsetFormatter);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::DateTimeOffsetFormatter*, "VYaml.Serialization", "DateTimeOffsetFormatter");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.DateTimeOffsetFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeOffsetFormatter : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>
    operator ::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<::System::DateTimeOffset>*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.DateTimeOffsetFormatter Instance
    static ::VYaml::Serialization::DateTimeOffsetFormatter* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.DateTimeOffsetFormatter Instance
    static void _set_Instance(::VYaml::Serialization::DateTimeOffsetFormatter* value);
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.DateTimeOffset value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0x572860C
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, ::System::DateTimeOffset value, ::VYaml::Serialization::YamlSerializationContext* context);
    // public System.DateTimeOffset Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0x57287D4
    ::System::DateTimeOffset Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context);
    // public System.Void .ctor()
    // Offset: 0x572891C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeOffsetFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::DateTimeOffsetFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeOffsetFormatter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x5728924
    static void _cctor();
  }; // VYaml.Serialization.DateTimeOffsetFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::DateTimeOffsetFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::DateTimeOffsetFormatter::*)(ByRef<::VYaml::Emitter::Utf8YamlEmitter>, ::System::DateTimeOffset, ::VYaml::Serialization::YamlSerializationContext*)>(&VYaml::Serialization::DateTimeOffsetFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* emitter = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "Utf8YamlEmitter")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "DateTimeOffset")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::DateTimeOffsetFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitter, value, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::DateTimeOffsetFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTimeOffset (VYaml::Serialization::DateTimeOffsetFormatter::*)(ByRef<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&VYaml::Serialization::DateTimeOffsetFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("VYaml.Parser", "YamlParser")->this_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlDeserializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::DateTimeOffsetFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::DateTimeOffsetFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::DateTimeOffsetFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::DateTimeOffsetFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::DateTimeOffsetFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
