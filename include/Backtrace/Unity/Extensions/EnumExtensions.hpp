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
  // Forward declaring type: Enum
  class Enum;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Extensions
namespace Backtrace::Unity::Extensions {
  // Forward declaring type: EnumExtensions
  class EnumExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Extensions::EnumExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Extensions::EnumExtensions*, "Backtrace.Unity.Extensions", "EnumExtensions");
// Type namespace: Backtrace.Unity.Extensions
namespace Backtrace::Unity::Extensions {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Extensions.EnumExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class EnumExtensions : public ::Il2CppObject {
    public:
    // static System.Boolean HasFlag(System.Enum variable, System.Enum value)
    // Offset: 0x2A76E68
    static bool HasFlag(::System::Enum* variable, ::System::Enum* value);
    // static public System.Boolean HasAllFlags(T rawSource)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static bool HasAllFlags(T rawSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Extensions::EnumExtensions::HasAllFlags");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Backtrace.Unity.Extensions", "EnumExtensions", "HasAllFlags", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(rawSource)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, rawSource);
    }
  }; // Backtrace.Unity.Extensions.EnumExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Extensions::EnumExtensions::HasFlag
// Il2CppName: HasFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Enum*, ::System::Enum*)>(&Backtrace::Unity::Extensions::EnumExtensions::HasFlag)> {
  static const MethodInfo* get() {
    static auto* variable = &::il2cpp_utils::GetClassFromName("System", "Enum")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Enum")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Extensions::EnumExtensions*), "HasFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variable, value});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Extensions::EnumExtensions::HasAllFlags
// Il2CppName: HasAllFlags
// Cannot write MetadataGetter for generic methods!
