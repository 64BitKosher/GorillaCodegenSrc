// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Rendering.Universal.UTess.ArraySlice`1
#include "UnityEngine/Rendering/Universal/UTess/ArraySlice_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // Forward declaring type: ArraySliceDebugView`1<T>
  template<typename T>
  class ArraySliceDebugView_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::Universal::UTess::ArraySliceDebugView_1, "UnityEngine.Rendering.Universal.UTess", "ArraySliceDebugView`1");
// Type namespace: UnityEngine.Rendering.Universal.UTess
namespace UnityEngine::Rendering::Universal::UTess {
  // WARNING Size may be invalid!
  // Autogenerated type: UnityEngine.Rendering.Universal.UTess.ArraySliceDebugView`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ArraySliceDebugView_1 : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> m_Slice
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T> m_Slice;
    public:
    // Creating conversion operator: operator ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>
    constexpr operator ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>() const noexcept {
      return m_Slice;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> m_Slice
    [[deprecated("Use field access instead!")]] ::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>& dyn_m_Slice() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySliceDebugView_1::dyn_m_Slice");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "m_Slice"))->offset;
      return *reinterpret_cast<::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(UnityEngine.Rendering.Universal.UTess.ArraySlice`1<T> slice)
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArraySliceDebugView_1<T>* New_ctor(::UnityEngine::Rendering::Universal::UTess::ArraySlice_1<T> slice) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySliceDebugView_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArraySliceDebugView_1<T>*, creationType>(slice)));
    }
    // public T[] get_Items()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::ArrayW<T> get_Items() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Rendering::Universal::UTess::ArraySliceDebugView_1::get_Items");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_Items", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::ArrayW<T>, false>(this, ___internal__method);
    }
  }; // UnityEngine.Rendering.Universal.UTess.ArraySliceDebugView`1
  // Could not write size check! Type: UnityEngine.Rendering.Universal.UTess.ArraySliceDebugView`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
