// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Xml.Schema.ContentValidator
#include "System/Xml/Schema/ContentValidator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml::Schema
namespace System::Xml::Schema {
  // Forward declaring type: BitSet
  class BitSet;
  // Forward declaring type: SymbolsDictionary
  class SymbolsDictionary;
  // Forward declaring type: Positions
  class Positions;
  // Forward declaring type: ValidationState
  class ValidationState;
  // Forward declaring type: XmlSchemaSet
  class XmlSchemaSet;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlQualifiedName
  class XmlQualifiedName;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Completed forward declares
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Forward declaring type: RangeContentValidator
  class RangeContentValidator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Schema::RangeContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::RangeContentValidator*, "System.Xml.Schema", "RangeContentValidator");
// Type namespace: System.Xml.Schema
namespace System::Xml::Schema {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Schema.RangeContentValidator
  // [TokenAttribute] Offset: FFFFFFFF
  class RangeContentValidator : public ::System::Xml::Schema::ContentValidator {
    public:
    // Writing base type padding for base size: 0x16 to desired offset: 0x18
    char ___base_padding[0x2] = {};
    public:
    // private System.Xml.Schema.BitSet firstpos
    // Size: 0x8
    // Offset: 0x18
    ::System::Xml::Schema::BitSet* firstpos;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    // private System.Xml.Schema.BitSet[] followpos
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<::System::Xml::Schema::BitSet*> followpos;
    // Field size check
    static_assert(sizeof(::ArrayW<::System::Xml::Schema::BitSet*>) == 0x8);
    // private System.Xml.Schema.BitSet positionsWithRangeTerminals
    // Size: 0x8
    // Offset: 0x28
    ::System::Xml::Schema::BitSet* positionsWithRangeTerminals;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::BitSet*) == 0x8);
    // private System.Xml.Schema.SymbolsDictionary symbols
    // Size: 0x8
    // Offset: 0x30
    ::System::Xml::Schema::SymbolsDictionary* symbols;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::SymbolsDictionary*) == 0x8);
    // private System.Xml.Schema.Positions positions
    // Size: 0x8
    // Offset: 0x38
    ::System::Xml::Schema::Positions* positions;
    // Field size check
    static_assert(sizeof(::System::Xml::Schema::Positions*) == 0x8);
    // private System.Int32 minMaxNodesCount
    // Size: 0x4
    // Offset: 0x40
    int minMaxNodesCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 endMarkerPos
    // Size: 0x4
    // Offset: 0x44
    int endMarkerPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Xml.Schema.BitSet firstpos
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::BitSet*& dyn_firstpos();
    // Get instance field reference: private System.Xml.Schema.BitSet[] followpos
    [[deprecated("Use field access instead!")]] ::ArrayW<::System::Xml::Schema::BitSet*>& dyn_followpos();
    // Get instance field reference: private System.Xml.Schema.BitSet positionsWithRangeTerminals
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::BitSet*& dyn_positionsWithRangeTerminals();
    // Get instance field reference: private System.Xml.Schema.SymbolsDictionary symbols
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::SymbolsDictionary*& dyn_symbols();
    // Get instance field reference: private System.Xml.Schema.Positions positions
    [[deprecated("Use field access instead!")]] ::System::Xml::Schema::Positions*& dyn_positions();
    // Get instance field reference: private System.Int32 minMaxNodesCount
    [[deprecated("Use field access instead!")]] int& dyn_minMaxNodesCount();
    // Get instance field reference: private System.Int32 endMarkerPos
    [[deprecated("Use field access instead!")]] int& dyn_endMarkerPos();
    // System.Void .ctor(System.Xml.Schema.BitSet firstpos, System.Xml.Schema.BitSet[] followpos, System.Xml.Schema.SymbolsDictionary symbols, System.Xml.Schema.Positions positions, System.Int32 endMarkerPos, System.Xml.Schema.XmlSchemaContentType contentType, System.Boolean isEmptiable, System.Xml.Schema.BitSet positionsWithRangeTerminals, System.Int32 minmaxNodesCount)
    // Offset: 0x4E7C104
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RangeContentValidator* New_ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*> followpos, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isEmptiable, ::System::Xml::Schema::BitSet* positionsWithRangeTerminals, int minmaxNodesCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Schema::RangeContentValidator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RangeContentValidator*, creationType>(firstpos, followpos, symbols, positions, endMarkerPos, contentType, isEmptiable, positionsWithRangeTerminals, minmaxNodesCount)));
    }
    // public override System.Void InitValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0x4E7C204
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Void ContentValidator::InitValidation(System.Xml.Schema.ValidationState context)
    void InitValidation(::System::Xml::Schema::ValidationState* context);
    // public override System.Object ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    // Offset: 0x4E7C3DC
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Object ContentValidator::ValidateElement(System.Xml.XmlQualifiedName name, System.Xml.Schema.ValidationState context, out System.Int32 errorCode)
    ::Il2CppObject* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ByRef<int> errorCode);
    // public override System.Boolean CompleteValidation(System.Xml.Schema.ValidationState context)
    // Offset: 0x4E7CCBC
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Boolean ContentValidator::CompleteValidation(System.Xml.Schema.ValidationState context)
    bool CompleteValidation(::System::Xml::Schema::ValidationState* context);
    // public override System.Collections.ArrayList ExpectedElements(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly)
    // Offset: 0x4E7CCD4
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Collections.ArrayList ContentValidator::ExpectedElements(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly)
    ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);
    // public override System.Collections.ArrayList ExpectedParticles(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly, System.Xml.Schema.XmlSchemaSet schemaSet)
    // Offset: 0x4E7CF3C
    // Implemented from: System.Xml.Schema.ContentValidator
    // Base method: System.Collections.ArrayList ContentValidator::ExpectedParticles(System.Xml.Schema.ValidationState context, System.Boolean isRequiredOnly, System.Xml.Schema.XmlSchemaSet schemaSet)
    ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);
  }; // System.Xml.Schema.RangeContentValidator
  #pragma pack(pop)
  static check_size<sizeof(RangeContentValidator), 68 + sizeof(int)> __System_Xml_Schema_RangeContentValidatorSizeCheck;
  static_assert(sizeof(RangeContentValidator) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::InitValidation
// Il2CppName: InitValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::RangeContentValidator::InitValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::RangeContentValidator*), "InitValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::ValidateElement
// Il2CppName: ValidateElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Xml::Schema::RangeContentValidator::*)(::System::Xml::XmlQualifiedName*, ::System::Xml::Schema::ValidationState*, ByRef<int>)>(&System::Xml::Schema::RangeContentValidator::ValidateElement)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System.Xml", "XmlQualifiedName")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::RangeContentValidator*), "ValidateElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, context, errorCode});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::CompleteValidation
// Il2CppName: CompleteValidation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*)>(&System::Xml::Schema::RangeContentValidator::CompleteValidation)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::RangeContentValidator*), "CompleteValidation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::ExpectedElements
// Il2CppName: ExpectedElements
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*, bool)>(&System::Xml::Schema::RangeContentValidator::ExpectedElements)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* isRequiredOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::RangeContentValidator*), "ExpectedElements", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, isRequiredOnly});
  }
};
// Writing MetadataGetter for method: System::Xml::Schema::RangeContentValidator::ExpectedParticles
// Il2CppName: ExpectedParticles
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ArrayList* (System::Xml::Schema::RangeContentValidator::*)(::System::Xml::Schema::ValidationState*, bool, ::System::Xml::Schema::XmlSchemaSet*)>(&System::Xml::Schema::RangeContentValidator::ExpectedParticles)> {
  static const MethodInfo* get() {
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "ValidationState")->byval_arg;
    static auto* isRequiredOnly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* schemaSet = &::il2cpp_utils::GetClassFromName("System.Xml.Schema", "XmlSchemaSet")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::Schema::RangeContentValidator*), "ExpectedParticles", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{context, isRequiredOnly, schemaSet});
  }
};
