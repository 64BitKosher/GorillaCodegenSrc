// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.BaseVerticalCollectionView
#include "UnityEngine/UIElements/BaseVerticalCollectionView.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: ReusableCollectionItem
  class ReusableCollectionItem;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0*, "UnityEngine.UIElements", "BaseVerticalCollectionView/<>c__DisplayClass163_0");
// Type namespace: UnityEngine.UIElements
namespace UnityEngine::UIElements {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass163_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class BaseVerticalCollectionView::$$c__DisplayClass163_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 id
    // Size: 0x4
    // Offset: 0x10
    int id;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return id;
    }
    // Get instance field reference: public System.Int32 id
    [[deprecated("Use field access instead!")]] int& dyn_id();
    // public System.Void .ctor()
    // Offset: 0x55A8600
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseVerticalCollectionView::$$c__DisplayClass163_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseVerticalCollectionView::$$c__DisplayClass163_0*, creationType>()));
    }
    // System.Boolean <GetRootElementForId>b__0(UnityEngine.UIElements.ReusableCollectionItem t)
    // Offset: 0x55AD1F8
    bool $GetRootElementForId$b__0(::UnityEngine::UIElements::ReusableCollectionItem* t);
  }; // UnityEngine.UIElements.BaseVerticalCollectionView/<>c__DisplayClass163_0
  #pragma pack(pop)
  static check_size<sizeof(BaseVerticalCollectionView::$$c__DisplayClass163_0), 16 + sizeof(int)> __UnityEngine_UIElements_BaseVerticalCollectionView_$$c__DisplayClass163_0SizeCheck;
  static_assert(sizeof(BaseVerticalCollectionView::$$c__DisplayClass163_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0::$GetRootElementForId$b__0
// Il2CppName: <GetRootElementForId>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0::*)(::UnityEngine::UIElements::ReusableCollectionItem*)>(&UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0::$GetRootElementForId$b__0)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements", "ReusableCollectionItem")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::BaseVerticalCollectionView::$$c__DisplayClass163_0*), "<GetRootElementForId>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
