// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.ICursorManager
#include "UnityEngine/UIElements/ICursorManager.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: Cursor
  struct Cursor;
}
// Completed forward declares
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: CursorManager
  class CursorManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::CursorManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::CursorManager*, "UnityEngine.UIElements", "CursorManager");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.CursorManager
  // [TokenAttribute] Offset: FFFFFFFF
  class CursorManager : public ::Il2CppObject/*, public ::UnityEngine::UIElements::ICursorManager*/ {
    public:
    public:
    // private System.Boolean <isCursorOverriden>k__BackingField
    // Size: 0x1
    // Offset: 0x10
    bool isCursorOverriden;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UIElements::ICursorManager
    operator ::UnityEngine::UIElements::ICursorManager() noexcept {
      return *reinterpret_cast<::UnityEngine::UIElements::ICursorManager*>(this);
    }
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return isCursorOverriden;
    }
    // Get instance field reference: private System.Boolean <isCursorOverriden>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$isCursorOverriden$k__BackingField();
    // public System.Boolean get_isCursorOverriden()
    // Offset: 0x56369EC
    bool get_isCursorOverriden();
    // private System.Void set_isCursorOverriden(System.Boolean value)
    // Offset: 0x56369F4
    void set_isCursorOverriden(bool value);
    // public System.Void SetCursor(UnityEngine.UIElements.Cursor cursor)
    // Offset: 0x5636A00
    void SetCursor(::UnityEngine::UIElements::Cursor cursor);
    // public System.Void ResetCursor()
    // Offset: 0x5636AF0
    void ResetCursor();
    // public System.Void .ctor()
    // Offset: 0x5636B58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CursorManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::CursorManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CursorManager*, creationType>()));
    }
  }; // UnityEngine.UIElements.CursorManager
  #pragma pack(pop)
  static check_size<sizeof(CursorManager), 16 + sizeof(bool)> __UnityEngine_UIElements_CursorManagerSizeCheck;
  static_assert(sizeof(CursorManager) == 0x11);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::CursorManager::get_isCursorOverriden
// Il2CppName: get_isCursorOverriden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::CursorManager::*)()>(&UnityEngine::UIElements::CursorManager::get_isCursorOverriden)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CursorManager*), "get_isCursorOverriden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CursorManager::set_isCursorOverriden
// Il2CppName: set_isCursorOverriden
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CursorManager::*)(bool)>(&UnityEngine::UIElements::CursorManager::set_isCursorOverriden)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CursorManager*), "set_isCursorOverriden", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CursorManager::SetCursor
// Il2CppName: SetCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CursorManager::*)(::UnityEngine::UIElements::Cursor)>(&UnityEngine::UIElements::CursorManager::SetCursor)> {
  static const MethodInfo* get() {
    static auto* cursor = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "Cursor")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CursorManager*), "SetCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cursor});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CursorManager::ResetCursor
// Il2CppName: ResetCursor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::CursorManager::*)()>(&UnityEngine::UIElements::CursorManager::ResetCursor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::CursorManager*), "ResetCursor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::CursorManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
