// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IO.Compression.DeflateStreamNative
#include "System/IO/Compression/DeflateStreamNative.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*, "System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite");
// Type namespace: System.IO.Compression
namespace System::IO::Compression {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
  // [TokenAttribute] Offset: FFFFFFFF
  // [UnmanagedFunctionPointerAttribute] Offset: FFFFFFFF
  class DeflateStreamNative::UnmanagedReadOrWrite : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x4F54F00
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeflateStreamNative::UnmanagedReadOrWrite* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeflateStreamNative::UnmanagedReadOrWrite*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.IntPtr buffer, System.Int32 length, System.IntPtr data)
    // Offset: 0x4F55730
    int Invoke(::System::IntPtr buffer, int length, ::System::IntPtr data);
  }; // System.IO.Compression.DeflateStreamNative/UnmanagedReadOrWrite
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::*)(::System::IntPtr, int, ::System::IntPtr)>(&System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite::Invoke)> {
  static const MethodInfo* get() {
    static auto* buffer = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* data = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IO::Compression::DeflateStreamNative::UnmanagedReadOrWrite*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, length, data});
  }
};
