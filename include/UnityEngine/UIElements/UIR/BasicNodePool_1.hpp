// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.UIR.LinkedPool`1
#include "UnityEngine/UIElements/UIR/LinkedPool_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: BasicNode`1<T>
  template<typename T>
  class BasicNode_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // Forward declaring type: BasicNodePool`1<T>
  template<typename T>
  class BasicNodePool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::UIR::BasicNodePool_1, "UnityEngine.UIElements.UIR", "BasicNodePool`1");
// Type namespace: UnityEngine.UIElements.UIR
namespace UnityEngine::UIElements::UIR {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.UIElements.UIR.BasicNodePool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class BasicNodePool_1 : public ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::BasicNode_1<T>*> {
    public:
    // static private System.Void Reset(UnityEngine.UIElements.UIR.BasicNode`1<T> node)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void Reset(::UnityEngine::UIElements::UIR::BasicNode_1<T>* node) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::BasicNodePool_1::Reset");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BasicNodePool_1<T>*>::get(), "Reset", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(node)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, node);
    }
    // static private UnityEngine.UIElements.UIR.BasicNode`1<T> Create()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::UnityEngine::UIElements::UIR::BasicNode_1<T>* Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::BasicNodePool_1::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<BasicNodePool_1<T>*>::get(), "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::UnityEngine::UIElements::UIR::BasicNode_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicNodePool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::UIR::BasicNodePool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicNodePool_1<T>*, creationType>()));
    }
  }; // UnityEngine.UIElements.UIR.BasicNodePool`1
  // Could not write size check! Type: UnityEngine.UIElements.UIR.BasicNodePool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
