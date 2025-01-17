// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PlayFab.SharedModels.PlayFabBaseModel
#include "PlayFab/SharedModels/PlayFabBaseModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Forward declaring type: ObjectResult
  class ObjectResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::PlayFab::DataModels::ObjectResult);
DEFINE_IL2CPP_ARG_TYPE(::PlayFab::DataModels::ObjectResult*, "PlayFab.DataModels", "ObjectResult");
// Type namespace: PlayFab.DataModels
namespace PlayFab::DataModels {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayFab.DataModels.ObjectResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ObjectResult : public ::PlayFab::SharedModels::PlayFabBaseModel {
    public:
    public:
    // public System.Object DataObject
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* DataObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String EscapedDataObject
    // Size: 0x8
    // Offset: 0x18
    ::StringW EscapedDataObject;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public System.String ObjectName
    // Size: 0x8
    // Offset: 0x20
    ::StringW ObjectName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: public System.Object DataObject
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_DataObject();
    // Get instance field reference: public System.String EscapedDataObject
    [[deprecated("Use field access instead!")]] ::StringW& dyn_EscapedDataObject();
    // Get instance field reference: public System.String ObjectName
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ObjectName();
    // public System.Void .ctor()
    // Offset: 0x4B633B8
    // Implemented from: PlayFab.SharedModels.PlayFabBaseModel
    // Base method: System.Void PlayFabBaseModel::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::PlayFab::DataModels::ObjectResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectResult*, creationType>()));
    }
  }; // PlayFab.DataModels.ObjectResult
  #pragma pack(pop)
  static check_size<sizeof(ObjectResult), 32 + sizeof(::StringW)> __PlayFab_DataModels_ObjectResultSizeCheck;
  static_assert(sizeof(ObjectResult) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: PlayFab::DataModels::ObjectResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
