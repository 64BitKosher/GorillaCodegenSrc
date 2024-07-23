// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
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
  // Forward declaring type: NullableByteFormatter
  class NullableByteFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::NullableByteFormatter);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::NullableByteFormatter*, "VYaml.Serialization", "NullableByteFormatter");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.NullableByteFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  class NullableByteFormatter : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>
    operator ::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<::System::Nullable_1<uint8_t>>*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.NullableByteFormatter Instance
    static ::VYaml::Serialization::NullableByteFormatter* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.NullableByteFormatter Instance
    static void _set_Instance(::VYaml::Serialization::NullableByteFormatter* value);
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.Nullable`1<System.Byte> value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0x5727560
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, ::System::Nullable_1<uint8_t> value, ::VYaml::Serialization::YamlSerializationContext* context);
    // public System.Nullable`1<System.Byte> Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0x5727668
    ::System::Nullable_1<uint8_t> Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context);
    // public System.Void .ctor()
    // Offset: 0x57277C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NullableByteFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::NullableByteFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NullableByteFormatter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x57277D0
    static void _cctor();
  }; // VYaml.Serialization.NullableByteFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::NullableByteFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::NullableByteFormatter::*)(ByRef<::VYaml::Emitter::Utf8YamlEmitter>, ::System::Nullable_1<uint8_t>, ::VYaml::Serialization::YamlSerializationContext*)>(&VYaml::Serialization::NullableByteFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* emitter = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "Utf8YamlEmitter")->this_arg;
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::NullableByteFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitter, value, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::NullableByteFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<uint8_t> (VYaml::Serialization::NullableByteFormatter::*)(ByRef<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&VYaml::Serialization::NullableByteFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("VYaml.Parser", "YamlParser")->this_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlDeserializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::NullableByteFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::NullableByteFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::NullableByteFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::NullableByteFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::NullableByteFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
