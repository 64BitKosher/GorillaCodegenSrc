// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: VYaml.Serialization.IYamlFormatter`1
#include "VYaml/Serialization/IYamlFormatter_1.hpp"
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
  // Forward declaring type: SByteFormatter
  class SByteFormatter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::SByteFormatter);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::SByteFormatter*, "VYaml.Serialization", "SByteFormatter");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.SByteFormatter
  // [TokenAttribute] Offset: FFFFFFFF
  class SByteFormatter : public ::Il2CppObject/*, public ::VYaml::Serialization::IYamlFormatter_1<int8_t>*/ {
    public:
    // Creating interface conversion operator: operator ::VYaml::Serialization::IYamlFormatter_1<int8_t>
    operator ::VYaml::Serialization::IYamlFormatter_1<int8_t>() noexcept {
      return *reinterpret_cast<::VYaml::Serialization::IYamlFormatter_1<int8_t>*>(this);
    }
    // Get static field: static public readonly VYaml.Serialization.SByteFormatter Instance
    static ::VYaml::Serialization::SByteFormatter* _get_Instance();
    // Set static field: static public readonly VYaml.Serialization.SByteFormatter Instance
    static void _set_Instance(::VYaml::Serialization::SByteFormatter* value);
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, System.SByte value, VYaml.Serialization.YamlSerializationContext context)
    // Offset: 0x572BF98
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, int8_t value, ::VYaml::Serialization::YamlSerializationContext* context);
    // public System.SByte Deserialize(ref VYaml.Parser.YamlParser parser, VYaml.Serialization.YamlDeserializationContext context)
    // Offset: 0x572BFAC
    int8_t Deserialize(ByRef<::VYaml::Parser::YamlParser> parser, ::VYaml::Serialization::YamlDeserializationContext* context);
    // public System.Void .ctor()
    // Offset: 0x572C0B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SByteFormatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::SByteFormatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SByteFormatter*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x572C0BC
    static void _cctor();
  }; // VYaml.Serialization.SByteFormatter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::SByteFormatter::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::SByteFormatter::*)(ByRef<::VYaml::Emitter::Utf8YamlEmitter>, int8_t, ::VYaml::Serialization::YamlSerializationContext*)>(&VYaml::Serialization::SByteFormatter::Serialize)> {
  static const MethodInfo* get() {
    static auto* emitter = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "Utf8YamlEmitter")->this_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "SByte")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlSerializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::SByteFormatter*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{emitter, value, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::SByteFormatter::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (VYaml::Serialization::SByteFormatter::*)(ByRef<::VYaml::Parser::YamlParser>, ::VYaml::Serialization::YamlDeserializationContext*)>(&VYaml::Serialization::SByteFormatter::Deserialize)> {
  static const MethodInfo* get() {
    static auto* parser = &::il2cpp_utils::GetClassFromName("VYaml.Parser", "YamlParser")->this_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlDeserializationContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::SByteFormatter*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{parser, context});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::SByteFormatter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::SByteFormatter::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&VYaml::Serialization::SByteFormatter::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::SByteFormatter*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};