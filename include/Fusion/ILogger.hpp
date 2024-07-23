// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.LogType
#include "Fusion/LogType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: ILogBuilder
  class ILogBuilder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ILogger
  class ILogger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::ILogger);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ILogger*, "Fusion", "ILogger");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ILogger
  // [TokenAttribute] Offset: FFFFFFFF
  class ILogger {
    public:
    // public System.Void Log(Fusion.LogType logType, System.String prefix, ref T context, System.String message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void Log(::Fusion::LogType logType, ::StringW prefix, ByRef<T> context, ::StringW message) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::ILogBuilder>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::ILogger::Log");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::ILogger*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, logType, prefix, byref(context), message);
    }
    // public System.Void LogException(System.String prefix, ref T context, System.Exception ex)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    void LogException(::StringW prefix, ByRef<T> context, ::System::Exception* ex) {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::Fusion::ILogBuilder>);
      static auto ___internal__logger = ::Logger::get().WithContext("::Fusion::ILogger::LogException");
      auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(this, classof(::Fusion::ILogger*), -1));
      auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___generic__method, prefix, byref(context), ex);
    }
  }; // Fusion.ILogger
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::ILogger::Log
// Il2CppName: Log
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: Fusion::ILogger::LogException
// Il2CppName: LogException
// Cannot write MetadataGetter for generic methods!