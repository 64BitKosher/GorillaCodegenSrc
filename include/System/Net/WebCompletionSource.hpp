// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.WebCompletionSource`1
#include "System/Net/WebCompletionSource_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: WebCompletionSource
  class WebCompletionSource;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::WebCompletionSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::WebCompletionSource*, "System.Net", "WebCompletionSource");
// Type namespace: System.Net
namespace System::Net {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Net.WebCompletionSource
  // [TokenAttribute] Offset: FFFFFFFF
  class WebCompletionSource : public ::System::Net::WebCompletionSource_1<::Il2CppObject*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x4EA6764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebCompletionSource* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::WebCompletionSource::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebCompletionSource*, creationType>()));
    }
  }; // System.Net.WebCompletionSource
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::WebCompletionSource::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
