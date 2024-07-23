// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: ArraySegment`1<T>
  template<typename T>
  struct ArraySegment_1;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: RangeValidationHelpers
  class RangeValidationHelpers;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::RangeValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::RangeValidationHelpers*, "System.Net", "RangeValidationHelpers");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.RangeValidationHelpers
  // [TokenAttribute] Offset: FFFFFFFF
  class RangeValidationHelpers : public ::Il2CppObject {
    public:
    // static public System.Boolean ValidateRange(System.Int32 actual, System.Int32 fromAllowed, System.Int32 toAllowed)
    // Offset: 0x4FA937C
    static bool ValidateRange(int actual, int fromAllowed, int toAllowed);
    // static public System.Void ValidateSegment(System.ArraySegment`1<System.Byte> segment)
    // Offset: 0x4FA9394
    static void ValidateSegment(::System::ArraySegment_1<uint8_t> segment);
  }; // System.Net.RangeValidationHelpers
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::RangeValidationHelpers::ValidateRange
// Il2CppName: ValidateRange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int, int, int)>(&System::Net::RangeValidationHelpers::ValidateRange)> {
  static const MethodInfo* get() {
    static auto* actual = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* fromAllowed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* toAllowed = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::RangeValidationHelpers*), "ValidateRange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{actual, fromAllowed, toAllowed});
  }
};
// Writing MetadataGetter for method: System::Net::RangeValidationHelpers::ValidateSegment
// Il2CppName: ValidateSegment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::ArraySegment_1<uint8_t>)>(&System::Net::RangeValidationHelpers::ValidateSegment)> {
  static const MethodInfo* get() {
    static auto* segment = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "ArraySegment`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Byte")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::RangeValidationHelpers*), "ValidateSegment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{segment});
  }
};
