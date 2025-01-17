// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Forward declaring type: StreamHelpers
  class StreamHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::StreamHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::StreamHelpers*, "System.IO", "StreamHelpers");
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class StreamHelpers : public ::Il2CppObject {
    public:
    // static public System.Void ValidateCopyToArgs(System.IO.Stream source, System.IO.Stream destination, System.Int32 bufferSize)
    // Offset: 0x459ED7C
    static void ValidateCopyToArgs(::System::IO::Stream* source, ::System::IO::Stream* destination, int bufferSize);
  }; // System.IO.StreamHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::StreamHelpers::ValidateCopyToArgs
// Il2CppName: ValidateCopyToArgs
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*, int)>(&System::IO::StreamHelpers::ValidateCopyToArgs)> {
  static const MethodInfo* get() {
    static auto* source = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* bufferSize = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::StreamHelpers*), "ValidateCopyToArgs", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{source, destination, bufferSize});
  }
};
