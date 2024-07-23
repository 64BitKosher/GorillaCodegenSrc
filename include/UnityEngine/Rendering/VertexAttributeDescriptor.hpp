// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: UnityEngine.Rendering.VertexAttribute
#include "UnityEngine/Rendering/VertexAttribute.hpp"
// Including type: UnityEngine.Rendering.VertexAttributeFormat
#include "UnityEngine/Rendering/VertexAttributeFormat.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: VertexAttributeDescriptor
  struct VertexAttributeDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeDescriptor, "UnityEngine.Rendering", "VertexAttributeDescriptor");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Size: 0x10
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Rendering.VertexAttributeDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [UsedByNativeCodeAttribute] Offset: FFFFFFFF
  struct VertexAttributeDescriptor/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*/ {
    public:
    public:
    // private UnityEngine.Rendering.VertexAttribute <attribute>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    ::UnityEngine::Rendering::VertexAttribute attribute;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VertexAttribute) == 0x4);
    // private UnityEngine.Rendering.VertexAttributeFormat <format>k__BackingField
    // Size: 0x4
    // Offset: 0x4
    ::UnityEngine::Rendering::VertexAttributeFormat format;
    // Field size check
    static_assert(sizeof(::UnityEngine::Rendering::VertexAttributeFormat) == 0x4);
    // private System.Int32 <dimension>k__BackingField
    // Size: 0x4
    // Offset: 0x8
    int dimension;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 <stream>k__BackingField
    // Size: 0x4
    // Offset: 0xC
    int stream;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: VertexAttributeDescriptor
    constexpr VertexAttributeDescriptor(::UnityEngine::Rendering::VertexAttribute attribute_ = {}, ::UnityEngine::Rendering::VertexAttributeFormat format_ = {}, int dimension_ = {}, int stream_ = {}) noexcept : attribute{attribute_}, format{format_}, dimension{dimension_}, stream{stream_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>
    operator ::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Rendering::VertexAttributeDescriptor>*>(this);
    }
    // Get instance field reference: private UnityEngine.Rendering.VertexAttribute <attribute>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VertexAttribute& dyn_$attribute$k__BackingField();
    // Get instance field reference: private UnityEngine.Rendering.VertexAttributeFormat <format>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::VertexAttributeFormat& dyn_$format$k__BackingField();
    // Get instance field reference: private System.Int32 <dimension>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$dimension$k__BackingField();
    // Get instance field reference: private System.Int32 <stream>k__BackingField
    [[deprecated("Use field access instead!")]] int& dyn_$stream$k__BackingField();
    // public UnityEngine.Rendering.VertexAttribute get_attribute()
    // Offset: 0x54DFA8C
    ::UnityEngine::Rendering::VertexAttribute get_attribute();
    // public System.Void set_attribute(UnityEngine.Rendering.VertexAttribute value)
    // Offset: 0x54DFA94
    void set_attribute(::UnityEngine::Rendering::VertexAttribute value);
    // public UnityEngine.Rendering.VertexAttributeFormat get_format()
    // Offset: 0x54DFA9C
    ::UnityEngine::Rendering::VertexAttributeFormat get_format();
    // public System.Void set_format(UnityEngine.Rendering.VertexAttributeFormat value)
    // Offset: 0x54DFAA4
    void set_format(::UnityEngine::Rendering::VertexAttributeFormat value);
    // public System.Int32 get_dimension()
    // Offset: 0x54DFAAC
    int get_dimension();
    // public System.Void set_dimension(System.Int32 value)
    // Offset: 0x54DFAB4
    void set_dimension(int value);
    // public System.Int32 get_stream()
    // Offset: 0x54DFABC
    int get_stream();
    // public System.Void set_stream(System.Int32 value)
    // Offset: 0x54DFAC4
    void set_stream(int value);
    // public System.Void .ctor(UnityEngine.Rendering.VertexAttribute attribute, UnityEngine.Rendering.VertexAttributeFormat format, System.Int32 dimension, System.Int32 stream)
    // Offset: 0x54DFACC
    // ABORTED: conflicts with another method.  VertexAttributeDescriptor(::UnityEngine::Rendering::VertexAttribute attribute, ::UnityEngine::Rendering::VertexAttributeFormat format, int dimension, int stream);
    // public System.Boolean Equals(UnityEngine.Rendering.VertexAttributeDescriptor other)
    // Offset: 0x54DFDAC
    bool Equals(::UnityEngine::Rendering::VertexAttributeDescriptor other);
    // public override System.String ToString()
    // Offset: 0x54DFAD8
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
    // public override System.Int32 GetHashCode()
    // Offset: 0x54DFCDC
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x54DFD04
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Rendering.VertexAttributeDescriptor
  #pragma pack(pop)
  static check_size<sizeof(VertexAttributeDescriptor), 12 + sizeof(int)> __UnityEngine_Rendering_VertexAttributeDescriptorSizeCheck;
  static_assert(sizeof(VertexAttributeDescriptor) == 0x10);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute
// Il2CppName: get_attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VertexAttribute (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_attribute)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::set_attribute
// Il2CppName: set_attribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::UnityEngine::Rendering::VertexAttribute)>(&UnityEngine::Rendering::VertexAttributeDescriptor::set_attribute)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttribute")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "set_attribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_format
// Il2CppName: get_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rendering::VertexAttributeFormat (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_format)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::set_format
// Il2CppName: set_format
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::UnityEngine::Rendering::VertexAttributeFormat)>(&UnityEngine::Rendering::VertexAttributeDescriptor::set_format)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttributeFormat")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "set_format", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension
// Il2CppName: get_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_dimension)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::set_dimension
// Il2CppName: set_dimension
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VertexAttributeDescriptor::*)(int)>(&UnityEngine::Rendering::VertexAttributeDescriptor::set_dimension)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "set_dimension", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::get_stream
// Il2CppName: get_stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::get_stream)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "get_stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::set_stream
// Il2CppName: set_stream
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Rendering::VertexAttributeDescriptor::*)(int)>(&UnityEngine::Rendering::VertexAttributeDescriptor::set_stream)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "set_stream", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::VertexAttributeDescriptor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::UnityEngine::Rendering::VertexAttributeDescriptor)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine.Rendering", "VertexAttributeDescriptor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Rendering::VertexAttributeDescriptor::*)()>(&UnityEngine::Rendering::VertexAttributeDescriptor::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Rendering::VertexAttributeDescriptor::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Rendering::VertexAttributeDescriptor::*)(::Il2CppObject*)>(&UnityEngine::Rendering::VertexAttributeDescriptor::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Rendering::VertexAttributeDescriptor), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
