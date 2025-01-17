// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: IdRefNode
  class IdRefNode;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::IdRefNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::IdRefNode*, "System.Xml.Schema", "IdRefNode");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.IdRefNode
  // [TokenAttribute] Offset: FFFFFFFF
  class IdRefNode : public ::Il2CppObject {
    public:
    public:
    // System.String Id
    // Size: 0x8
    // Offset: 0x10
    ::StringW Id;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // System.Int32 LineNo
    // Size: 0x4
    // Offset: 0x18
    int LineNo;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 LinePos
    // Size: 0x4
    // Offset: 0x1C
    int LinePos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Xml.Schema.IdRefNode Next
    // Size: 0x8
    // Offset: 0x20
    ::System::Xml::Schema::IdRefNode* Next;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::IdRefNode*) == 0x8);
    public:
    // Get instance field reference: System.String Id
    [[deprecated("Use field access instead!")]] ::StringW& dyn_Id();
    // Get instance field reference: System.Int32 LineNo
    [[deprecated("Use field access instead!")]] int& dyn_LineNo();
    // Get instance field reference: System.Int32 LinePos
    [[deprecated("Use field access instead!")]] int& dyn_LinePos();
    // Get instance field reference: System.Xml.Schema.IdRefNode Next
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::IdRefNode*& dyn_Next();
    // System.Void .ctor(System.Xml.Schema.IdRefNode next, System.String id, System.Int32 lineNo, System.Int32 linePos)
    // Offset: 0x4DA0850
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IdRefNode* New_ctor(::System::Xml::Schema::IdRefNode* next, ::StringW id, int lineNo, int linePos) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::IdRefNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IdRefNode*, creationType>(next, id, lineNo, linePos)));
    }
  }; // System.Xml.Schema.IdRefNode
  #pragma pack(pop)
  static check_size<sizeof(IdRefNode), 32 + sizeof(::System::Xml::Schema::IdRefNode*)> __System_Xml_Schema_IdRefNodeSizeCheck;
  static_assert(sizeof(IdRefNode) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::IdRefNode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
