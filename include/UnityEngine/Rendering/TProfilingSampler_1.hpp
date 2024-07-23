// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.ProfilingSampler
#include "UnityEngine/Rendering/ProfilingSampler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Enum
  class Enum;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: TProfilingSampler`1<TEnum>
  template<typename TEnum>
  class TProfilingSampler_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::TProfilingSampler_1, "UnityEngine.Rendering", "TProfilingSampler`1");
// Type namespace: UnityEngine.Rendering
namespace UnityEngine::Rendering {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.TProfilingSampler`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TEnum>
  class TProfilingSampler_1 : public ::UnityEngine::Rendering::ProfilingSampler {
    public:
    // Autogenerated static field getter
    // Get static field: static System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> samples
    static ::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* _get_samples() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::TProfilingSampler_1::_get_samples");
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProfilingSampler_1<TEnum>*>::get(), "samples")));
    }
    // Autogenerated static field setter
    // Set static field: static System.Collections.Generic.Dictionary`2<TEnum,UnityEngine.Rendering.TProfilingSampler`1<TEnum>> samples
    static void _set_samples(::System::Collections::Generic::Dictionary_2<TEnum, ::UnityEngine::Rendering::TProfilingSampler_1<TEnum>*>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::TProfilingSampler_1::_set_samples");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProfilingSampler_1<TEnum>*>::get(), "samples", value));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::TProfilingSampler_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TProfilingSampler_1<TEnum>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor(System.String name)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: UnityEngine.Rendering.ProfilingSampler
    // Base method: System.Void ProfilingSampler::.ctor(System.String name)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TProfilingSampler_1<TEnum>* New_ctor(::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::TProfilingSampler_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TProfilingSampler_1<TEnum>*, creationType>(name)));
    }
  }; // UnityEngine.Rendering.TProfilingSampler`1
  // Could not write size check! Type: UnityEngine.Rendering.TProfilingSampler`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"