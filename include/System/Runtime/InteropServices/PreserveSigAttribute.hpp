// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: PreserveSigAttribute
  class PreserveSigAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::InteropServices::PreserveSigAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::PreserveSigAttribute*, "System.Runtime.InteropServices", "PreserveSigAttribute");
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.InteropServices.PreserveSigAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class PreserveSigAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x4573634
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PreserveSigAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::InteropServices::PreserveSigAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PreserveSigAttribute*, creationType>()));
    }
  }; // System.Runtime.InteropServices.PreserveSigAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::InteropServices::PreserveSigAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
