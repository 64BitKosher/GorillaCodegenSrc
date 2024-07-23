// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Forward declaring type: MB_TGAWriter
  class MB_TGAWriter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::DigitalOpus::MB::Core::MB_TGAWriter);
DEFINE_IL2CPP_ARG_TYPE(::DigitalOpus::MB::Core::MB_TGAWriter*, "DigitalOpus.MB.Core", "MB_TGAWriter");
// Type namespace: DigitalOpus.MB.Core
namespace DigitalOpus::MB::Core {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DigitalOpus.MB.Core.MB_TGAWriter
  // [TokenAttribute] Offset: FFFFFFFF
  class MB_TGAWriter : public ::Il2CppObject {
    public:
    // static public System.Void Write(UnityEngine.Color[] pixels, System.Int32 width, System.Int32 height, System.String path)
    // Offset: 0x43D316C
    static void Write(::ArrayW<::UnityEngine::Color> pixels, int width, int height, ::StringW path);
    // static public System.Void Write(UnityEngine.Color[] pixels, System.Int32 width, System.Int32 height, System.IO.Stream output)
    // Offset: 0x43D31D0
    static void Write(::ArrayW<::UnityEngine::Color> pixels, int width, int height, ::System::IO::Stream* output);
  }; // DigitalOpus.MB.Core.MB_TGAWriter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TGAWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Color>, int, int, ::StringW)>(&DigitalOpus::MB::Core::MB_TGAWriter::Write)> {
  static const MethodInfo* get() {
    static auto* pixels = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* path = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TGAWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, width, height, path});
  }
};
// Writing MetadataGetter for method: DigitalOpus::MB::Core::MB_TGAWriter::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Color>, int, int, ::System::IO::Stream*)>(&DigitalOpus::MB::Core::MB_TGAWriter::Write)> {
  static const MethodInfo* get() {
    static auto* pixels = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Color"), 1)->byval_arg;
    static auto* width = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* height = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* output = &::il2cpp_utils::GetClassFromName("System.IO", "Stream")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(DigitalOpus::MB::Core::MB_TGAWriter*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pixels, width, height, output});
  }
};
