// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.Index
#include "System/Data/Index.hpp"
// Including type: System.ComponentModel.ListChangedType
#include "System/ComponentModel/ListChangedType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataViewListener
  class DataViewListener;
  // Forward declaring type: DataRow
  class DataRow;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::Index::$$c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::Index::$$c__DisplayClass86_0*, "System.Data", "Index/<>c__DisplayClass86_0");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.Index/<>c__DisplayClass86_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class Index::$$c__DisplayClass86_0 : public ::Il2CppObject {
    public:
    public:
    // public System.ComponentModel.ListChangedType changedType
    // Size: 0x4
    // Offset: 0x10
    ::System::ComponentModel::ListChangedType changedType;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::ListChangedType) == 0x4);
    public:
    // Creating conversion operator: operator ::System::ComponentModel::ListChangedType
    constexpr operator ::System::ComponentModel::ListChangedType() const noexcept {
      return changedType;
    }
    // Get instance field reference: public System.ComponentModel.ListChangedType changedType
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::ListChangedType& dyn_changedType();
    // public System.Void .ctor()
    // Offset: 0x4C74E74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Index::$$c__DisplayClass86_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::Index::$$c__DisplayClass86_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Index::$$c__DisplayClass86_0*, creationType>()));
    }
    // System.Void <MaintainDataView>b__0(System.Data.DataViewListener listener, System.ComponentModel.ListChangedType type, System.Data.DataRow row, System.Boolean track)
    // Offset: 0x4C75694
    void $MaintainDataView$b__0(::System::Data::DataViewListener* listener, ::System::ComponentModel::ListChangedType type, ::System::Data::DataRow* row, bool track);
  }; // System.Data.Index/<>c__DisplayClass86_0
  #pragma pack(pop)
  static check_size<sizeof(Index::$$c__DisplayClass86_0), 16 + sizeof(::System::ComponentModel::ListChangedType)> __System_Data_Index_$$c__DisplayClass86_0SizeCheck;
  static_assert(sizeof(Index::$$c__DisplayClass86_0) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::Index::$$c__DisplayClass86_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::Index::$$c__DisplayClass86_0::$MaintainDataView$b__0
// Il2CppName: <MaintainDataView>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::Index::$$c__DisplayClass86_0::*)(::System::Data::DataViewListener*, ::System::ComponentModel::ListChangedType, ::System::Data::DataRow*, bool)>(&System::Data::Index::$$c__DisplayClass86_0::$MaintainDataView$b__0)> {
  static const MethodInfo* get() {
    static auto* listener = &::il2cpp_utils::GetClassFromName("System.Data", "DataViewListener")->byval_arg;
    static auto* type = &::il2cpp_utils::GetClassFromName("System.ComponentModel", "ListChangedType")->byval_arg;
    static auto* row = &::il2cpp_utils::GetClassFromName("System.Data", "DataRow")->byval_arg;
    static auto* track = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Data::Index::$$c__DisplayClass86_0*), "<MaintainDataView>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{listener, type, row, track});
  }
};
