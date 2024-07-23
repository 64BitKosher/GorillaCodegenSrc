// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: CSCore
namespace CSCore {
  // Forward declaring type: IWriteable
  class IWriteable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::CSCore::IWriteable);
DEFINE_IL2CPP_ARG_TYPE(::CSCore::IWriteable*, "CSCore", "IWriteable");
// Type namespace: CSCore
namespace CSCore {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: CSCore.IWriteable
  // [TokenAttribute] Offset: FFFFFFFF
  class IWriteable {
    public:
    // public System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Write(::ArrayW<uint8_t> buffer, int offset, int count);
  }; // CSCore.IWriteable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: CSCore::IWriteable::Write
// Il2CppName: Write
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (CSCore::IWriteable::*)(::ArrayW<uint8_t>, int, int)>(&CSCore::IWriteable::Write)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* count = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(CSCore::IWriteable*), "Write", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, count});
  }
};
