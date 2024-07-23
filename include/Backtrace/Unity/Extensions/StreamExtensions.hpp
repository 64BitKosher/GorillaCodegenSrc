// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Extensions
namespace Backtrace::Unity::Extensions {
  // Forward declaring type: StreamExtensions
  class StreamExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Extensions::StreamExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Extensions::StreamExtensions*, "Backtrace.Unity.Extensions", "StreamExtensions");
// Type namespace: Backtrace.Unity.Extensions
namespace Backtrace::Unity::Extensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Extensions.StreamExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class StreamExtensions : public ::Il2CppObject {
    public:
    // static field const value: static private System.Int32 _DefaultCopyBufferSize
    static constexpr const int _DefaultCopyBufferSize = 81920;
    // Get static field: static private System.Int32 _DefaultCopyBufferSize
    static int _get__DefaultCopyBufferSize();
    // Set static field: static private System.Int32 _DefaultCopyBufferSize
    static void _set__DefaultCopyBufferSize(int value);
    // static public System.Void CopyTo(System.IO.Stream original, System.IO.Stream destination)
    // Offset: 0x2A7700C
    static void CopyTo(::System::IO::Stream* original, ::System::IO::Stream* destination);
  }; // Backtrace.Unity.Extensions.StreamExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Extensions::StreamExtensions::CopyTo
// Il2CppName: CopyTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IO::Stream*, ::System::IO::Stream*)>(&Backtrace::Unity::Extensions::StreamExtensions::CopyTo)> {
  static const MethodInfo* get() {
    static auto* original = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    static auto* destination = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Extensions::StreamExtensions*), "CopyTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{original, destination});
  }
};