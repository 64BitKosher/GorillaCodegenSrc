// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: Oculus.Voice.Core.Utilities
namespace Oculus::Voice::Core::Utilities {
  // Forward declaring type: DateTimeUtility
  class DateTimeUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Voice::Core::Utilities::DateTimeUtility);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Voice::Core::Utilities::DateTimeUtility*, "Oculus.Voice.Core.Utilities", "DateTimeUtility");
// Type namespace: Oculus.Voice.Core.Utilities
namespace Oculus::Voice::Core::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Voice.Core.Utilities.DateTimeUtility
  // [TokenAttribute] Offset: FFFFFFFF
  class DateTimeUtility : public ::Il2CppObject {
    public:
    // static public System.DateTime get_UtcNow()
    // Offset: 0x2980E18
    static ::System::DateTime get_UtcNow();
    // static public System.Int64 get_ElapsedMilliseconds()
    // Offset: 0x2980E68
    static int64_t get_ElapsedMilliseconds();
    // public System.Void .ctor()
    // Offset: 0x2980EA4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DateTimeUtility* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Voice::Core::Utilities::DateTimeUtility::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DateTimeUtility*, creationType>()));
    }
  }; // Oculus.Voice.Core.Utilities.DateTimeUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Voice::Core::Utilities::DateTimeUtility::get_UtcNow
// Il2CppName: get_UtcNow
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (*)()>(&Oculus::Voice::Core::Utilities::DateTimeUtility::get_UtcNow)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Utilities::DateTimeUtility*), "get_UtcNow", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Utilities::DateTimeUtility::get_ElapsedMilliseconds
// Il2CppName: get_ElapsedMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&Oculus::Voice::Core::Utilities::DateTimeUtility::get_ElapsedMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Voice::Core::Utilities::DateTimeUtility*), "get_ElapsedMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Voice::Core::Utilities::DateTimeUtility::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!