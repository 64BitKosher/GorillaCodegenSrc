// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.DropdownMenuItem
#include "UnityEngine/UIElements/DropdownMenuItem.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: DropdownMenuSeparator
  class DropdownMenuSeparator;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::DropdownMenuSeparator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DropdownMenuSeparator*, "UnityEngine.UIElements", "DropdownMenuSeparator");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.DropdownMenuSeparator
  // [TokenAttribute] Offset: FFFFFFFF
  class DropdownMenuSeparator : public ::UnityEngine::UIElements::DropdownMenuItem {
    public:
    public:
    // private readonly System.String <subMenuPath>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW subMenuPath;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return subMenuPath;
    }
    // Get instance field reference: private readonly System.String <subMenuPath>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$subMenuPath$k__BackingField();
    // public System.Void .ctor(System.String subMenuPath)
    // Offset: 0x5644188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DropdownMenuSeparator* New_ctor(::StringW subMenuPath) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::DropdownMenuSeparator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DropdownMenuSeparator*, creationType>(subMenuPath)));
    }
  }; // UnityEngine.UIElements.DropdownMenuSeparator
  #pragma pack(pop)
  static check_size<sizeof(DropdownMenuSeparator), 16 + sizeof(::StringW)> __UnityEngine_UIElements_DropdownMenuSeparatorSizeCheck;
  static_assert(sizeof(DropdownMenuSeparator) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::DropdownMenuSeparator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
