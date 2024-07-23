// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualTreeUpdater
#include "UnityEngine/UIElements/VisualTreeUpdater.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: IVisualTreeUpdater
  class IVisualTreeUpdater;
  // Forward declaring type: VisualTreeUpdatePhase
  struct VisualTreeUpdatePhase;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: FFFFFFFF
  class VisualTreeUpdater::UpdaterArray : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.UIElements.IVisualTreeUpdater[] m_VisualTreeUpdaters
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*> m_VisualTreeUpdaters;
    // Field size check
    static_assert(sizeof(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>) == 0x8);
    public:
    // Creating conversion operator: operator ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>
    constexpr operator ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>() const noexcept {
      return m_VisualTreeUpdaters;
    }
    // Get instance field reference: private UnityEngine.UIElements.IVisualTreeUpdater[] m_VisualTreeUpdaters
    [[deprecated("Use field access instead!")]] ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>& dyn_m_VisualTreeUpdaters();
    // public System.Void .ctor()
    // Offset: 0x55C880C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualTreeUpdater::UpdaterArray* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualTreeUpdater::UpdaterArray*, creationType>()));
    }
    // public System.Void set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase phase, UnityEngine.UIElements.IVisualTreeUpdater value)
    // Offset: 0x55C8DA4
    void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater* value);
    // public UnityEngine.UIElements.IVisualTreeUpdater get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase phase)
    // Offset: 0x55C8C74
    ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase);
    // public UnityEngine.UIElements.IVisualTreeUpdater get_Item(System.Int32 index)
    // Offset: 0x55C8A78
    ::UnityEngine::UIElements::IVisualTreeUpdater* get_Item(int index);
  }; // UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
  #pragma pack(pop)
  static check_size<sizeof(VisualTreeUpdater::UpdaterArray), 16 + sizeof(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater*>)> __UnityEngine_UIElements_VisualTreeUpdater_UpdaterArraySizeCheck;
  static_assert(sizeof(VisualTreeUpdater::UpdaterArray) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::set_Item
// Il2CppName: set_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase, ::UnityEngine::UIElements::IVisualTreeUpdater*)>(&UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::set_Item)> {
  static const MethodInfo* get() {
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualTreeUpdatePhase")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "IVisualTreeUpdater")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*), "set_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{phase, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::*)(::UnityEngine::UIElements::VisualTreeUpdatePhase)>(&UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* phase = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualTreeUpdatePhase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{phase});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::get_Item
// Il2CppName: get_Item
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::IVisualTreeUpdater* (UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::*)(int)>(&UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray::get_Item)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeUpdater::UpdaterArray*), "get_Item", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};