// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.VisualTreeAsset
#include "UnityEngine/UIElements/VisualTreeAsset.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: VisualElementAsset
  class VisualElementAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0*, "UnityEngine.UIElements", "VisualTreeAsset/<>c__DisplayClass61_0");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass61_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class VisualTreeAsset::$$c__DisplayClass61_0 : public ::Il2CppObject {
    public:
    public:
    // public UnityEngine.UIElements.VisualElementAsset childVea
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::VisualElementAsset* childVea;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::VisualElementAsset*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::UIElements::VisualElementAsset*
    constexpr operator ::UnityEngine::UIElements::VisualElementAsset*() const noexcept {
      return childVea;
    }
    // Get instance field reference: public UnityEngine.UIElements.VisualElementAsset childVea
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::VisualElementAsset*& dyn_childVea();
    // public System.Void .ctor()
    // Offset: 0x55BF808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static VisualTreeAsset::$$c__DisplayClass61_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<VisualTreeAsset::$$c__DisplayClass61_0*, creationType>()));
    }
    // System.Boolean <CloneSetupRecursively>b__0(UnityEngine.UIElements.VisualTreeAsset/SlotUsageEntry u)
    // Offset: 0x55BF810
    bool $CloneSetupRecursively$b__0(::UnityEngine::UIElements::VisualTreeAsset::SlotUsageEntry u);
  }; // UnityEngine.UIElements.VisualTreeAsset/<>c__DisplayClass61_0
  #pragma pack(pop)
  static check_size<sizeof(VisualTreeAsset::$$c__DisplayClass61_0), 16 + sizeof(::UnityEngine::UIElements::VisualElementAsset*)> __UnityEngine_UIElements_VisualTreeAsset_$$c__DisplayClass61_0SizeCheck;
  static_assert(sizeof(VisualTreeAsset::$$c__DisplayClass61_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0::$CloneSetupRecursively$b__0
// Il2CppName: <CloneSetupRecursively>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0::*)(::UnityEngine::UIElements::VisualTreeAsset::SlotUsageEntry)>(&UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0::$CloneSetupRecursively$b__0)> {
  static const MethodInfo* get() {
    static auto* u = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "VisualTreeAsset/SlotUsageEntry")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::VisualTreeAsset::$$c__DisplayClass61_0*), "<CloneSetupRecursively>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{u});
  }
};
