// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.PropertyAttribute
#include "UnityEngine/PropertyAttribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MultilineAttribute
  class MultilineAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::MultilineAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::MultilineAttribute*, "UnityEngine", "MultilineAttribute");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.MultilineAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: FFFFFFFF
  class MultilineAttribute : public ::UnityEngine::PropertyAttribute {
    public:
    public:
    // public readonly System.Int32 lines
    // Size: 0x4
    // Offset: 0x14
    int lines;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // Get instance field reference: public readonly System.Int32 lines
    [[deprecated("Use field access instead!")]] int& dyn_lines();
    // public System.Void .ctor()
    // Offset: 0x54BFFCC
    // Implemented from: UnityEngine.PropertyAttribute
    // Base method: System.Void PropertyAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultilineAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::MultilineAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultilineAttribute*, creationType>()));
    }
  }; // UnityEngine.MultilineAttribute
  #pragma pack(pop)
  static check_size<sizeof(MultilineAttribute), 20 + sizeof(int)> __UnityEngine_MultilineAttributeSizeCheck;
  static_assert(sizeof(MultilineAttribute) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::MultilineAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
