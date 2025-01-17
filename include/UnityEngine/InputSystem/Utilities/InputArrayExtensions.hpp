// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.InputSystem.Utilities.InlinedArray`1
#include "UnityEngine/InputSystem/Utilities/InlinedArray_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Forward declaring type: InputArrayExtensions
  class InputArrayExtensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::InputArrayExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::InputArrayExtensions*, "UnityEngine.InputSystem.Utilities", "InputArrayExtensions");
// Type namespace: UnityEngine.InputSystem.Utilities
namespace UnityEngine::InputSystem::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.InputSystem.Utilities.InputArrayExtensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class InputArrayExtensions : public ::Il2CppObject {
    public:
    // static public System.Int32 IndexOfReference(UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> array, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    static int IndexOfReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InputArrayExtensions::IndexOfReference");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.InputSystem.Utilities", "InputArrayExtensions", "IndexOfReference", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<int, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, value);
    }
    // static public System.Boolean Contains(UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> array, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    static bool Contains(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InputArrayExtensions::Contains");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.InputSystem.Utilities", "InputArrayExtensions", "Contains", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, value);
    }
    // static public System.Boolean ContainsReference(UnityEngine.InputSystem.Utilities.InlinedArray`1<TValue> array, TValue value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class TValue>
    static bool ContainsReference(::UnityEngine::InputSystem::Utilities::InlinedArray_1<TValue> array, TValue value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::InputSystem::Utilities::InputArrayExtensions::ContainsReference");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("UnityEngine.InputSystem.Utilities", "InputArrayExtensions", "ContainsReference", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(array), ::il2cpp_utils::ExtractType(value)})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TValue>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<bool, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method, array, value);
    }
  }; // UnityEngine.InputSystem.Utilities.InputArrayExtensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputArrayExtensions::IndexOfReference
// Il2CppName: IndexOfReference
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputArrayExtensions::Contains
// Il2CppName: Contains
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: UnityEngine::InputSystem::Utilities::InputArrayExtensions::ContainsReference
// Il2CppName: ContainsReference
// Cannot write MetadataGetter for generic methods!
