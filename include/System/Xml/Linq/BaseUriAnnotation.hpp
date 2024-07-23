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
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Forward declaring type: BaseUriAnnotation
  class BaseUriAnnotation;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::Linq::BaseUriAnnotation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::BaseUriAnnotation*, "System.Xml.Linq", "BaseUriAnnotation");
// Type namespace: System.Xml.Linq
namespace System::Xml::Linq {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.Linq.BaseUriAnnotation
  // [TokenAttribute] Offset: FFFFFFFF
  class BaseUriAnnotation : public ::Il2CppObject {
    public:
    public:
    // System.String baseUri
    // Size: 0x8
    // Offset: 0x10
    ::StringW baseUri;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return baseUri;
    }
    // Get instance field reference: System.String baseUri
    [[deprecated("Use field access instead!")]] ::StringW& dyn_baseUri();
    // public System.Void .ctor(System.String baseUri)
    // Offset: 0x4D16D9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseUriAnnotation* New_ctor(::StringW baseUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::Linq::BaseUriAnnotation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseUriAnnotation*, creationType>(baseUri)));
    }
  }; // System.Xml.Linq.BaseUriAnnotation
  #pragma pack(pop)
  static check_size<sizeof(BaseUriAnnotation), 16 + sizeof(::StringW)> __System_Xml_Linq_BaseUriAnnotationSizeCheck;
  static_assert(sizeof(BaseUriAnnotation) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::Linq::BaseUriAnnotation::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
