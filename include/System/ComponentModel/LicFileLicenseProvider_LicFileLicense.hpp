// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.LicFileLicenseProvider
#include "System/ComponentModel/LicFileLicenseProvider.hpp"
// Including type: System.ComponentModel.License
#include "System/ComponentModel/License.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::LicFileLicenseProvider::LicFileLicense);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::LicFileLicenseProvider::LicFileLicense*, "System.ComponentModel", "LicFileLicenseProvider/LicFileLicense");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.LicFileLicenseProvider/LicFileLicense
  // [TokenAttribute] Offset: FFFFFFFF
  class LicFileLicenseProvider::LicFileLicense : public ::System::ComponentModel::License {
    public:
    public:
    // private System.ComponentModel.LicFileLicenseProvider _owner
    // Size: 0x8
    // Offset: 0x10
    ::System::ComponentModel::LicFileLicenseProvider* owner;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::LicFileLicenseProvider*) == 0x8);
    // private readonly System.String <LicenseKey>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW LicenseKey;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.ComponentModel.LicFileLicenseProvider _owner
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::LicFileLicenseProvider*& dyn__owner();
    // Get instance field reference: private readonly System.String <LicenseKey>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$LicenseKey$k__BackingField();
    // public System.Void .ctor(System.ComponentModel.LicFileLicenseProvider owner, System.String key)
    // Offset: 0x4F05700
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LicFileLicenseProvider::LicFileLicense* New_ctor(::System::ComponentModel::LicFileLicenseProvider* owner, ::StringW key) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::LicFileLicenseProvider::LicFileLicense::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LicFileLicenseProvider::LicFileLicense*, creationType>(owner, key)));
    }
    // public override System.String get_LicenseKey()
    // Offset: 0x4F0575C
    // Implemented from: System.ComponentModel.License
    // Base method: System.String License::get_LicenseKey()
    ::StringW get_LicenseKey();
    // public override System.Void Dispose()
    // Offset: 0x4F05764
    // Implemented from: System.ComponentModel.License
    // Base method: System.Void License::Dispose()
    void Dispose();
  }; // System.ComponentModel.LicFileLicenseProvider/LicFileLicense
  #pragma pack(pop)
  static check_size<sizeof(LicFileLicenseProvider::LicFileLicense), 24 + sizeof(::StringW)> __System_ComponentModel_LicFileLicenseProvider_LicFileLicenseSizeCheck;
  static_assert(sizeof(LicFileLicenseProvider::LicFileLicense) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::LicFileLicenseProvider::LicFileLicense::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::LicFileLicenseProvider::LicFileLicense::get_LicenseKey
// Il2CppName: get_LicenseKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::LicFileLicenseProvider::LicFileLicense::*)()>(&System::ComponentModel::LicFileLicenseProvider::LicFileLicense::get_LicenseKey)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicFileLicenseProvider::LicFileLicense*), "get_LicenseKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::LicFileLicenseProvider::LicFileLicense::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::ComponentModel::LicFileLicenseProvider::LicFileLicense::*)()>(&System::ComponentModel::LicFileLicenseProvider::LicFileLicense::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::LicFileLicenseProvider::LicFileLicense*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};