// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.XsdBuilder
#include "System/Xml/Schema/XsdBuilder.hpp"
// Including type: System.Xml.Schema.SchemaNames/Token
#include "System/Xml/Schema/SchemaNames_Token.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::XsdBuilder::XsdEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdBuilder::XsdEntry*, "System.Xml.Schema", "XsdBuilder/XsdEntry");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x39
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.XsdBuilder/XsdEntry
  // [TokenAttribute] Offset: FFFFFFFF
  class XsdBuilder::XsdEntry : public ::Il2CppObject {
    public:
    public:
    // public System.Xml.Schema.SchemaNames/Token Name
    // Size: 0x4
    // Offset: 0x10
    ::System::Xml::Schema::SchemaNames::Token Name;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SchemaNames::Token) == 0x4);
    // public System.Xml.Schema.XsdBuilder/State CurrentState
    // Size: 0x4
    // Offset: 0x14
    ::System::Xml::Schema::XsdBuilder::State CurrentState;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XsdBuilder::State) == 0x4);
    // public System.Xml.Schema.XsdBuilder/State[] NextStates
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::System::Xml::Schema::XsdBuilder::State> NextStates;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XsdBuilder::State>) == 0x8);
    // public System.Xml.Schema.XsdBuilder/XsdAttributeEntry[] Attributes
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Xml::Schema::XsdBuilder::XsdAttributeEntry*> Attributes;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::XsdBuilder::XsdAttributeEntry*>) == 0x8);
    // public System.Xml.Schema.XsdBuilder/XsdInitFunction InitFunc
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::XsdBuilder::XsdInitFunction* InitFunc;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XsdBuilder::XsdInitFunction*) == 0x8);
    // public System.Xml.Schema.XsdBuilder/XsdEndChildFunction EndChildFunc
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::XsdBuilder::XsdEndChildFunction* EndChildFunc;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::XsdBuilder::XsdEndChildFunction*) == 0x8);
    // public System.Boolean ParseContent
    // Size: 0x1
    // Offset: 0x38
    bool ParseContent;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Xml.Schema.SchemaNames/Token Name
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SchemaNames::Token& dyn_Name();
    // Get instance field reference: public System.Xml.Schema.XsdBuilder/State CurrentState
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XsdBuilder::State& dyn_CurrentState();
    // Get instance field reference: public System.Xml.Schema.XsdBuilder/State[] NextStates
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::XsdBuilder::State>& dyn_NextStates();
    // Get instance field reference: public System.Xml.Schema.XsdBuilder/XsdAttributeEntry[] Attributes
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::XsdBuilder::XsdAttributeEntry*>& dyn_Attributes();
    // Get instance field reference: public System.Xml.Schema.XsdBuilder/XsdInitFunction InitFunc
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XsdBuilder::XsdInitFunction*& dyn_InitFunc();
    // Get instance field reference: public System.Xml.Schema.XsdBuilder/XsdEndChildFunction EndChildFunc
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::XsdBuilder::XsdEndChildFunction*& dyn_EndChildFunc();
    // Get instance field reference: public System.Boolean ParseContent
    [[deprecated("Use field access instead!")]] bool& dyn_ParseContent();
    // public System.Void .ctor(System.Xml.Schema.SchemaNames/Token n, System.Xml.Schema.XsdBuilder/State state, System.Xml.Schema.XsdBuilder/State[] nextStates, System.Xml.Schema.XsdBuilder/XsdAttributeEntry[] attributes, System.Xml.Schema.XsdBuilder/XsdInitFunction init, System.Xml.Schema.XsdBuilder/XsdEndChildFunction end, System.Boolean parseContent)
    // Offset: 0x4DD410C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XsdBuilder::XsdEntry* New_ctor(::System::Xml::Schema::SchemaNames::Token n, ::System::Xml::Schema::XsdBuilder::State state, ::ArrayW<::System::Xml::Schema::XsdBuilder::State> nextStates, ::ArrayW<::System::Xml::Schema::XsdBuilder::XsdAttributeEntry*> attributes, ::System::Xml::Schema::XsdBuilder::XsdInitFunction* init, ::System::Xml::Schema::XsdBuilder::XsdEndChildFunction* end, bool parseContent) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::XsdBuilder::XsdEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XsdBuilder::XsdEntry*, creationType>(n, state, nextStates, attributes, init, end, parseContent)));
    }
  }; // System.Xml.Schema.XsdBuilder/XsdEntry
  #pragma pack(pop)
  static check_size<sizeof(XsdBuilder::XsdEntry), 56 + sizeof(bool)> __System_Xml_Schema_XsdBuilder_XsdEntrySizeCheck;
  static_assert(sizeof(XsdBuilder::XsdEntry) == 0x39);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::XsdBuilder::XsdEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
