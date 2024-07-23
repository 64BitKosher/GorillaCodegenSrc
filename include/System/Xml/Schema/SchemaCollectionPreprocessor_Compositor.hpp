// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.SchemaCollectionPreprocessor
#include "System/Xml/Schema/SchemaCollectionPreprocessor.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor, "System.Xml.Schema", "SchemaCollectionPreprocessor/Compositor");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.SchemaCollectionPreprocessor/Compositor
  // [TokenAttribute] Offset: FFFFFFFF
  struct SchemaCollectionPreprocessor::Compositor/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Compositor
    constexpr Compositor(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Root
    static constexpr const int Root = 0;
    // Get static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Root
    static ::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor _get_Root();
    // Set static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Root
    static void _set_Root(::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor value);
    // static field const value: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Include
    static constexpr const int Include = 1;
    // Get static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Include
    static ::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor _get_Include();
    // Set static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Include
    static void _set_Include(::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor value);
    // static field const value: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Import
    static constexpr const int Import = 2;
    // Get static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Import
    static ::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor _get_Import();
    // Set static field: static public System.Xml.Schema.SchemaCollectionPreprocessor/Compositor Import
    static void _set_Import(::System::Xml::Schema::SchemaCollectionPreprocessor::Compositor value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // System.Xml.Schema.SchemaCollectionPreprocessor/Compositor
  #pragma pack(pop)
  static check_size<sizeof(SchemaCollectionPreprocessor::Compositor), 0 + sizeof(int)> __System_Xml_Schema_SchemaCollectionPreprocessor_CompositorSizeCheck;
  static_assert(sizeof(SchemaCollectionPreprocessor::Compositor) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
