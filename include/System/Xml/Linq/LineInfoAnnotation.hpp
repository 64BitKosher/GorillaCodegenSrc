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
// Completed includes
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: LineInfoAnnotation
  class LineInfoAnnotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::LineInfoAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::LineInfoAnnotation*, "System.Xml.Linq", "LineInfoAnnotation");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.LineInfoAnnotation
  // [TokenAttribute] Offset: FFFFFFFF
  class LineInfoAnnotation : public ::Il2CppObject {
    public:
    public:
    // System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x10
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x14
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: System.Int32 lineNumber
    [[deprecated("Use field access instead!")]] int& dyn_lineNumber();
    // Get instance field reference: System.Int32 linePosition
    [[deprecated("Use field access instead!")]] int& dyn_linePosition();
    // public System.Void .ctor(System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x4D16DCC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LineInfoAnnotation* New_ctor(int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::LineInfoAnnotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LineInfoAnnotation*, creationType>(lineNumber, linePosition)));
    }
  }; // System.Xml.Linq.LineInfoAnnotation
  #pragma pack(pop)
  static check_size<sizeof(LineInfoAnnotation), 20 + sizeof(int)> __System_Xml_Linq_LineInfoAnnotationSizeCheck;
  static_assert(sizeof(LineInfoAnnotation) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::LineInfoAnnotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!