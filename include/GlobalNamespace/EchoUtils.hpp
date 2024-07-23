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
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: EchoUtils
  class EchoUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::EchoUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EchoUtils*, "", "EchoUtils");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: EchoUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class EchoUtils : public ::Il2CppObject {
    public:
    // static public T Echo(T message)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Echo(T message) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EchoUtils::Echo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EchoUtils", "Echo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, message);
    }
    // static public T Echo(T message, UnityEngine.Object context)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Echo(T message, ::UnityEngine::Object* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::EchoUtils::Echo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "EchoUtils", "Echo", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(message), ::il2cpp_utils::ExtractType(context)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, message, context);
    }
  }; // EchoUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::EchoUtils::Echo
// Il2CppName: Echo
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::EchoUtils::Echo
// Il2CppName: Echo
// Cannot write MetadataGetter for generic methods!