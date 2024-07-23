// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader
#include "UnityEngine/UIElements/Internal/MultiColumnCollectionHeader.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UIElements::Internal
namespace UnityEngine::UIElements::Internal {
  // Forward declaring type: MultiColumnHeaderColumn
  class MultiColumnHeaderColumn;
  // Forward declaring type: MultiColumnHeaderColumnResizeHandle
  class MultiColumnHeaderColumnResizeHandle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData*, "UnityEngine.UIElements.Internal", "MultiColumnCollectionHeader/ColumnData");
// Type namespace: UnityEngine.UIElements.Internal
namespace UnityEngine::UIElements::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ColumnData
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiColumnCollectionHeader::ColumnData : public ::Il2CppObject {
    public:
    public:
    // private UnityEngine.UIElements.Internal.MultiColumnHeaderColumn <control>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* control;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*) == 0x8);
    // private UnityEngine.UIElements.Internal.MultiColumnHeaderColumnResizeHandle <resizeHandle>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* resizeHandle;
    // Field size check
    static_assert(sizeof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.UIElements.Internal.MultiColumnHeaderColumn <control>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*& dyn_$control$k__BackingField();
    // Get instance field reference: private UnityEngine.UIElements.Internal.MultiColumnHeaderColumnResizeHandle <resizeHandle>k__BackingField
    [[deprecated("Use field access instead!")]] ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*& dyn_$resizeHandle$k__BackingField();
    // public UnityEngine.UIElements.Internal.MultiColumnHeaderColumn get_control()
    // Offset: 0x56104E0
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* get_control();
    // public System.Void set_control(UnityEngine.UIElements.Internal.MultiColumnHeaderColumn value)
    // Offset: 0x56104E8
    void set_control(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* value);
    // public UnityEngine.UIElements.Internal.MultiColumnHeaderColumnResizeHandle get_resizeHandle()
    // Offset: 0x56104F0
    ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* get_resizeHandle();
    // public System.Void set_resizeHandle(UnityEngine.UIElements.Internal.MultiColumnHeaderColumnResizeHandle value)
    // Offset: 0x56104F8
    void set_resizeHandle(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* value);
    // public System.Void .ctor()
    // Offset: 0x560D1A8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiColumnCollectionHeader::ColumnData* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiColumnCollectionHeader::ColumnData*, creationType>()));
    }
  }; // UnityEngine.UIElements.Internal.MultiColumnCollectionHeader/ColumnData
  #pragma pack(pop)
  static check_size<sizeof(MultiColumnCollectionHeader::ColumnData), 24 + sizeof(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*)> __UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ColumnDataSizeCheck;
  static_assert(sizeof(MultiColumnCollectionHeader::ColumnData) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::get_control
// Il2CppName: get_control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn* (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::*)()>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::get_control)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData*), "get_control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::set_control
// Il2CppName: set_control
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::*)(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumn*)>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::set_control)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "MultiColumnHeaderColumn")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData*), "set_control", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::get_resizeHandle
// Il2CppName: get_resizeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle* (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::*)()>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::get_resizeHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData*), "get_resizeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::set_resizeHandle
// Il2CppName: set_resizeHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::*)(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnResizeHandle*)>(&UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::set_resizeHandle)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnResizeHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData*), "set_resizeHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UIElements::Internal::MultiColumnCollectionHeader::ColumnData::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
