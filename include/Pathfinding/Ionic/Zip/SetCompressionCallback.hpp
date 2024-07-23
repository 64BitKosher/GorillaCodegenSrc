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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Pathfinding::Ionic::Zlib
namespace Pathfinding::Ionic::Zlib {
  // Forward declaring type: CompressionLevel
  struct CompressionLevel;
}
// Completed forward declares
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Forward declaring type: SetCompressionCallback
  class SetCompressionCallback;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::Ionic::Zip::SetCompressionCallback);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::Ionic::Zip::SetCompressionCallback*, "Pathfinding.Ionic.Zip", "SetCompressionCallback");
// Type namespace: Pathfinding.Ionic.Zip
namespace Pathfinding::Ionic::Zip {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.Ionic.Zip.SetCompressionCallback
  // [TokenAttribute] Offset: FFFFFFFF
  class SetCompressionCallback : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x499D47C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SetCompressionCallback* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::Ionic::Zip::SetCompressionCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SetCompressionCallback*, creationType>(object, method)));
    }
    // public Pathfinding.Ionic.Zlib.CompressionLevel Invoke(System.String localFileName, System.String fileNameInArchive)
    // Offset: 0x499D530
    ::Pathfinding::Ionic::Zlib::CompressionLevel Invoke(::StringW localFileName, ::StringW fileNameInArchive);
  }; // Pathfinding.Ionic.Zip.SetCompressionCallback
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SetCompressionCallback::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Pathfinding::Ionic::Zip::SetCompressionCallback::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Pathfinding::Ionic::Zlib::CompressionLevel (Pathfinding::Ionic::Zip::SetCompressionCallback::*)(::StringW, ::StringW)>(&Pathfinding::Ionic::Zip::SetCompressionCallback::Invoke)> {
  static const MethodInfo* get() {
    static auto* localFileName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* fileNameInArchive = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::Ionic::Zip::SetCompressionCallback*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{localFileName, fileNameInArchive});
  }
};
