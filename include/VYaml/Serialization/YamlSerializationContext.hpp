// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: VYaml.Emitter.Utf8YamlEmitter
#include "VYaml/Emitter/Utf8YamlEmitter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: VYaml::Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializerOptions
  class YamlSerializerOptions;
  // Forward declaring type: IYamlFormatterResolver
  class IYamlFormatterResolver;
}
// Forward declaring namespace: VYaml::Emitter
namespace VYaml::Emitter {
  // Forward declaring type: YamlEmitOptions
  class YamlEmitOptions;
}
// Forward declaring namespace: System::Buffers
namespace System::Buffers {
  // Forward declaring type: ArrayBufferWriter`1<T>
  template<typename T>
  class ArrayBufferWriter_1;
}
// Completed forward declares
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Forward declaring type: YamlSerializationContext
  class YamlSerializationContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::VYaml::Serialization::YamlSerializationContext);
DEFINE_IL2CPP_ARG_TYPE(::VYaml::Serialization::YamlSerializationContext*, "VYaml.Serialization", "YamlSerializationContext");
// Type namespace: VYaml.Serialization
namespace VYaml::Serialization {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: VYaml.Serialization.YamlSerializationContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [NullableContextAttribute] Offset: FFFFFFFF
  // [NullableAttribute] Offset: FFFFFFFF
  class YamlSerializationContext : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private VYaml.Serialization.YamlSerializerOptions <Options>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::VYaml::Serialization::YamlSerializerOptions* Options;
    // Field size check
    static_assert(sizeof(::VYaml::Serialization::YamlSerializerOptions*) == 0x8);
    // private VYaml.Serialization.IYamlFormatterResolver <Resolver>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::VYaml::Serialization::IYamlFormatterResolver* Resolver;
    // Field size check
    static_assert(sizeof(::VYaml::Serialization::IYamlFormatterResolver*) == 0x8);
    // private VYaml.Emitter.YamlEmitOptions <EmitOptions>k__BackingField
    // Size: 0x8
    // Offset: 0x20
    ::VYaml::Emitter::YamlEmitOptions* EmitOptions;
    // Field size check
    static_assert(sizeof(::VYaml::Emitter::YamlEmitOptions*) == 0x8);
    // private readonly System.Byte[] primitiveValueBuffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> primitiveValueBuffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Buffers.ArrayBufferWriter`1<System.Byte> arrayBufferWriter
    // Size: 0x8
    // Offset: 0x30
    ::System::Buffers::ArrayBufferWriter_1<uint8_t>* arrayBufferWriter;
    // Field size check
    static_assert(sizeof(::System::Buffers::ArrayBufferWriter_1<uint8_t>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private VYaml.Serialization.YamlSerializerOptions <Options>k__BackingField
    [[deprecated("Use field access instead!")]] ::VYaml::Serialization::YamlSerializerOptions*& dyn_$Options$k__BackingField();
    // Get instance field reference: private VYaml.Serialization.IYamlFormatterResolver <Resolver>k__BackingField
    [[deprecated("Use field access instead!")]] ::VYaml::Serialization::IYamlFormatterResolver*& dyn_$Resolver$k__BackingField();
    // Get instance field reference: private VYaml.Emitter.YamlEmitOptions <EmitOptions>k__BackingField
    [[deprecated("Use field access instead!")]] ::VYaml::Emitter::YamlEmitOptions*& dyn_$EmitOptions$k__BackingField();
    // Get instance field reference: private readonly System.Byte[] primitiveValueBuffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_primitiveValueBuffer();
    // Get instance field reference: private System.Buffers.ArrayBufferWriter`1<System.Byte> arrayBufferWriter
    [[deprecated("Use field access instead!")]] ::System::Buffers::ArrayBufferWriter_1<uint8_t>*& dyn_arrayBufferWriter();
    // public VYaml.Serialization.YamlSerializerOptions get_Options()
    // Offset: 0x572D5A0
    ::VYaml::Serialization::YamlSerializerOptions* get_Options();
    // public System.Void set_Options(VYaml.Serialization.YamlSerializerOptions value)
    // Offset: 0x572D5A8
    void set_Options(::VYaml::Serialization::YamlSerializerOptions* value);
    // public VYaml.Serialization.IYamlFormatterResolver get_Resolver()
    // Offset: 0x572D5B0
    ::VYaml::Serialization::IYamlFormatterResolver* get_Resolver();
    // public System.Void set_Resolver(VYaml.Serialization.IYamlFormatterResolver value)
    // Offset: 0x572D5B8
    void set_Resolver(::VYaml::Serialization::IYamlFormatterResolver* value);
    // public VYaml.Emitter.YamlEmitOptions get_EmitOptions()
    // Offset: 0x572D5C0
    ::VYaml::Emitter::YamlEmitOptions* get_EmitOptions();
    // public System.Void set_EmitOptions(VYaml.Emitter.YamlEmitOptions value)
    // Offset: 0x572D5C8
    void set_EmitOptions(::VYaml::Emitter::YamlEmitOptions* value);
    // public System.Void .ctor(VYaml.Serialization.YamlSerializerOptions options)
    // Offset: 0x572D5D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static YamlSerializationContext* New_ctor(::VYaml::Serialization::YamlSerializerOptions* options) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializationContext::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<YamlSerializationContext*, creationType>(options)));
    }
    // public System.Void Serialize(ref VYaml.Emitter.Utf8YamlEmitter emitter, T value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Serialize(ByRef<::VYaml::Emitter::Utf8YamlEmitter> emitter, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::VYaml::Serialization::YamlSerializationContext::Serialize");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Serialize", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(emitter), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, byref(emitter), value);
    }
    // public System.Buffers.ArrayBufferWriter`1<System.Byte> GetArrayBufferWriter()
    // Offset: 0x572D704
    ::System::Buffers::ArrayBufferWriter_1<uint8_t>* GetArrayBufferWriter();
    // public System.Void Reset()
    // Offset: 0x572D78C
    void Reset();
    // public System.Void Dispose()
    // Offset: 0x572D7E4
    void Dispose();
    // public System.Byte[] GetBuffer64()
    // Offset: 0x572D8C0
    ::ArrayW<uint8_t> GetBuffer64();
  }; // VYaml.Serialization.YamlSerializationContext
  #pragma pack(pop)
  static check_size<sizeof(YamlSerializationContext), 48 + sizeof(::System::Buffers::ArrayBufferWriter_1<uint8_t>*)> __VYaml_Serialization_YamlSerializationContextSizeCheck;
  static_assert(sizeof(YamlSerializationContext) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::get_Options
// Il2CppName: get_Options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Serialization::YamlSerializerOptions* (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::get_Options)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "get_Options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::set_Options
// Il2CppName: set_Options
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Serialization::YamlSerializerOptions*)>(&VYaml::Serialization::YamlSerializationContext::set_Options)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "YamlSerializerOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "set_Options", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::get_Resolver
// Il2CppName: get_Resolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Serialization::IYamlFormatterResolver* (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::get_Resolver)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "get_Resolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::set_Resolver
// Il2CppName: set_Resolver
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Serialization::IYamlFormatterResolver*)>(&VYaml::Serialization::YamlSerializationContext::set_Resolver)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VYaml.Serialization", "IYamlFormatterResolver")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "set_Resolver", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::get_EmitOptions
// Il2CppName: get_EmitOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::VYaml::Emitter::YamlEmitOptions* (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::get_EmitOptions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "get_EmitOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::set_EmitOptions
// Il2CppName: set_EmitOptions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializationContext::*)(::VYaml::Emitter::YamlEmitOptions*)>(&VYaml::Serialization::YamlSerializationContext::set_EmitOptions)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("VYaml.Emitter", "YamlEmitOptions")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "set_EmitOptions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::Serialize
// Il2CppName: Serialize
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::GetArrayBufferWriter
// Il2CppName: GetArrayBufferWriter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Buffers::ArrayBufferWriter_1<uint8_t>* (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::GetArrayBufferWriter)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "GetArrayBufferWriter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: VYaml::Serialization::YamlSerializationContext::GetBuffer64
// Il2CppName: GetBuffer64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (VYaml::Serialization::YamlSerializationContext::*)()>(&VYaml::Serialization::YamlSerializationContext::GetBuffer64)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(VYaml::Serialization::YamlSerializationContext*), "GetBuffer64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
