// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XsdCachingReader
  class XsdCachingReader;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Forward declaring type: CachingEventHandler
  class CachingEventHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Xml::CachingEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CachingEventHandler*, "System.Xml", "CachingEventHandler");
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.CachingEventHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class CachingEventHandler : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4E07874
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CachingEventHandler* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Xml::CachingEventHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CachingEventHandler*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Xml.XsdCachingReader cachingReader)
    // Offset: 0x4E0797C
    void Invoke(::System::Xml::XsdCachingReader* cachingReader);
  }; // System.Xml.CachingEventHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Xml::CachingEventHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Xml::CachingEventHandler::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Xml::CachingEventHandler::*)(::System::Xml::XsdCachingReader*)>(&System::Xml::CachingEventHandler::Invoke)> {
  static const MethodInfo* get() {
    static auto* cachingReader = &::il2cpp_utils::GetClassFromName("System.Xml", "XsdCachingReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Xml::CachingEventHandler*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cachingReader});
  }
};
