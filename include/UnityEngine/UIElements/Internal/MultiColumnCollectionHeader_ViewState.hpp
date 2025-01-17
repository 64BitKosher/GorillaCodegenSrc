// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
#include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader.hpp"
// Including type: UnityEngine.ISerializationCallbackReceiver
#include "UnityEngine/ISerializationCallbackReceiver.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::UIElements
namespace UnityEngine::UIElements {
  // Forward declaring type: SortColumnDescription
  class SortColumnDescription;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState");
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiColumnCollectionHeader::ViewState : public ::Il2CppObject/*, public ::UnityEngine::ISerializationCallbackReceiver*/ {
    public:
    // Nested type: ::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState
    struct ColumnState;
    // Size: 0x19
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState
    // [TokenAttribute] Offset: FFFFFFFF
    struct ColumnState/*, public ::System::ValueType*/ {
      public:
      public:
      // public System.Int32 index
      // Size: 0x4
      // Offset: 0x0
      int index;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Padding between fields: index and: name
      char __padding0[0x4] = {};
      // public System.String name
      // Size: 0x8
      // Offset: 0x8
      ::StringW name;
      // Field size check
      static_assert(sizeof(::StringW) == 0x8);
      // public System.Single actualWidth
      // Size: 0x4
      // Offset: 0x10
      float actualWidth;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Single width
      // Size: 0x4
      // Offset: 0x14
      float width;
      // Field size check
      static_assert(sizeof(float) == 0x4);
      // public System.Boolean visible
      // Size: 0x1
      // Offset: 0x18
      bool visible;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      public:
      // Creating value type constructor for type: ColumnState
      constexpr ColumnState(int index_ = {}, ::StringW name_ = {}, float actualWidth_ = {}, float width_ = {}, bool visible_ = {}) noexcept : index{index_}, name{name_}, actualWidth{actualWidth_}, width{width_}, visible{visible_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: public System.Int32 index
      [[deprecated("Use field access instead!")]] int& dyn_index();
      // Get instance field reference: public System.String name
      [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
      // Get instance field reference: public System.Single actualWidth
      [[deprecated("Use field access instead!")]] float& dyn_actualWidth();
      // Get instance field reference: public System.Single width
      [[deprecated("Use field access instead!")]] float& dyn_width();
      // Get instance field reference: public System.Boolean visible
      [[deprecated("Use field access instead!")]] bool& dyn_visible();
    }; // UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState
    #pragma pack(pop)
    static check_size<sizeof(MultiColumnCollectionHeader::ViewState::ColumnState), 24 + sizeof(bool)> __UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnStateSizeCheck;
    static_assert(sizeof(MultiColumnCollectionHeader::ViewState::ColumnState) == 0x19);
    public:
    // private System.Boolean m_HasPersistedData
    // Size: 0x1
    // Offset: 0x10
    bool m_HasPersistedData;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_HasPersistedData and: m_SortDescriptions
    char __padding0[0x7] = {};
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> m_SortDescriptions
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>* m_SortDescriptions;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*) == 0x8);
    // private System.Collections.Generic.List`1<UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState> m_OrderedColumnStates
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState>* m_OrderedColumnStates;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ISerializationCallbackReceiver
    operator ::UnityEngine::ISerializationCallbackReceiver() noexcept {
      return *reinterpret_cast<::UnityEngine::ISerializationCallbackReceiver*>(this);
    }
    // Get instance field reference: private System.Boolean m_HasPersistedData
    [[deprecated("Use field access instead!")]] bool& dyn_m_HasPersistedData();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.SortColumnDescription> m_SortDescriptions
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::SortColumnDescription*>*& dyn_m_SortDescriptions();
    // Get instance field reference: private System.Collections.Generic.List`1<UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState/ColumnState> m_OrderedColumnStates
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState>*& dyn_m_OrderedColumnStates();
    // System.Void Save(UnityEngine.UIElements.Internal.MultiColumnCollectionHeader header)
    // Offset: 0x560F6E4
    void Save(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);
    // System.Void Apply(UnityEngine.UIElements.Internal.MultiColumnCollectionHeader header)
    // Offset: 0x560F380
    void Apply(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader* header);
    // public System.Void OnBeforeSerialize()
    // Offset: 0x56103EC
    void OnBeforeSerialize();
    // public System.Void OnAfterDeserialize()
    // Offset: 0x56103F8
    void OnAfterDeserialize();
    // public System.Void .ctor()
    // Offset: 0x5610404
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnCollectionHeader::ViewState* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnCollectionHeader::ViewState*, creationType>()));
    }
  }; // UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ViewState
  #pragma pack(pop)
  static check_size<sizeof(MultiColumnCollectionHeader::ViewState), 32 + sizeof(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState>*)> __UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewStateSizeCheck;
  static_assert(sizeof(MultiColumnCollectionHeader::ViewState) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::ColumnState, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ViewState/ColumnState");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::Save
// Il2CppName: Save
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::*)(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::Save)> {
  static const MethodInfo* get() {
    static auto* header = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState*), "Save", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::Apply
// Il2CppName: Apply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::*)(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader*)>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::Apply)> {
  static const MethodInfo* get() {
    static auto* header = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState*), "Apply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{header});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::OnBeforeSerialize
// Il2CppName: OnBeforeSerialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::*)()>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::OnBeforeSerialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState*), "OnBeforeSerialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::OnAfterDeserialize
// Il2CppName: OnAfterDeserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::*)()>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::OnAfterDeserialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState*), "OnAfterDeserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ViewState::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
