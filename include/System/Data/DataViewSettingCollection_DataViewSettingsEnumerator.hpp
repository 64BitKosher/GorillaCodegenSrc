// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Data.DataViewSettingCollection
#include "System/Data/DataViewSettingCollection.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Data
namespace System::Data {
  // Forward declaring type: DataViewManager
  class DataViewManager;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Data::DataViewSettingCollection::DataViewSettingsEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewSettingCollection::DataViewSettingsEnumerator*, "System.Data", "DataViewSettingCollection/DataViewSettingsEnumerator");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewSettingCollection/DataViewSettingsEnumerator
  // [TokenAttribute] Offset: FFFFFFFF
  class DataViewSettingCollection::DataViewSettingsEnumerator : public ::Il2CppObject/*, public ::System::Collections::IEnumerator*/ {
    public:
    public:
    // private System.Data.DataViewSettingCollection _dataViewSettings
    // Size: 0x8
    // Offset: 0x10
    ::System::Data::DataViewSettingCollection* dataViewSettings;
    // Field size check
    static_assert(sizeof(::System::Data::DataViewSettingCollection*) == 0x8);
    // private System.Collections.IEnumerator _tableEnumerator
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::IEnumerator* tableEnumerator;
    // Field size check
    static_assert(sizeof(::System::Collections::IEnumerator*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Collections::IEnumerator
    operator ::System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<::System::Collections::IEnumerator*>(this);
    }
    // Get instance field reference: private System.Data.DataViewSettingCollection _dataViewSettings
    [[deprecated("Use field access instead!")]] ::System::Data::DataViewSettingCollection*& dyn__dataViewSettings();
    // Get instance field reference: private System.Collections.IEnumerator _tableEnumerator
    [[deprecated("Use field access instead!")]] ::System::Collections::IEnumerator*& dyn__tableEnumerator();
    // public System.Void .ctor(System.Data.DataViewManager dvm)
    // Offset: 0x4C55508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataViewSettingCollection::DataViewSettingsEnumerator* New_ctor(::System::Data::DataViewManager* dvm) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataViewSettingCollection::DataViewSettingsEnumerator*, creationType>(dvm)));
    }
    // public System.Boolean MoveNext()
    // Offset: 0x4C55640
    bool MoveNext();
    // public System.Void Reset()
    // Offset: 0x4C556E0
    void Reset();
    // public System.Object get_Current()
    // Offset: 0x4C55784
    ::Il2CppObject* get_Current();
  }; // System.Data.DataViewSettingCollection/DataViewSettingsEnumerator
  #pragma pack(pop)
  static check_size<sizeof(DataViewSettingCollection::DataViewSettingsEnumerator), 24 + sizeof(::System::Collections::IEnumerator*)> __System_Data_DataViewSettingCollection_DataViewSettingsEnumeratorSizeCheck;
  static_assert(sizeof(DataViewSettingCollection::DataViewSettingsEnumerator) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::MoveNext
// Il2CppName: MoveNext
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::*)()>(&System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::MoveNext)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection::DataViewSettingsEnumerator*), "MoveNext", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::*)()>(&System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection::DataViewSettingsEnumerator*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::get_Current
// Il2CppName: get_Current
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::*)()>(&System::Data::DataViewSettingCollection::DataViewSettingsEnumerator::get_Current)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Data::DataViewSettingCollection::DataViewSettingsEnumerator*), "get_Current", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
