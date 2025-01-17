// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.MaskedTextProvider
#include "System/ComponentModel/MaskedTextProvider.hpp"
// Including type: System.ComponentModel.MaskedTextProvider/CaseConversion
#include "System/ComponentModel/MaskedTextProvider_CaseConversion.hpp"
// Including type: System.ComponentModel.MaskedTextProvider/CharType
#include "System/ComponentModel/MaskedTextProvider_CharType.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::MaskedTextProvider::CharDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::MaskedTextProvider::CharDescriptor*, "System.ComponentModel", "MaskedTextProvider/CharDescriptor");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x1D
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.MaskedTextProvider/CharDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  class MaskedTextProvider::CharDescriptor : public ::Il2CppObject {
    public:
    public:
    // public System.Int32 MaskPosition
    // Size: 0x4
    // Offset: 0x10
    int MaskPosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.ComponentModel.MaskedTextProvider/CaseConversion CaseConversion
    // Size: 0x4
    // Offset: 0x14
    ::System::ComponentModel::MaskedTextProvider::CaseConversion CaseConversion;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::MaskedTextProvider::CaseConversion) == 0x4);
    // public System.ComponentModel.MaskedTextProvider/CharType CharType
    // Size: 0x4
    // Offset: 0x18
    ::System::ComponentModel::MaskedTextProvider::CharType CharType;
    // Field size check
    static_assert(sizeof(::System::ComponentModel::MaskedTextProvider::CharType) == 0x4);
    // public System.Boolean IsAssigned
    // Size: 0x1
    // Offset: 0x1C
    bool IsAssigned;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get instance field reference: public System.Int32 MaskPosition
    [[deprecated("Use field access instead!")]] int& dyn_MaskPosition();
    // Get instance field reference: public System.ComponentModel.MaskedTextProvider/CaseConversion CaseConversion
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::MaskedTextProvider::CaseConversion& dyn_CaseConversion();
    // Get instance field reference: public System.ComponentModel.MaskedTextProvider/CharType CharType
    [[deprecated("Use field access instead!")]] ::System::ComponentModel::MaskedTextProvider::CharType& dyn_CharType();
    // Get instance field reference: public System.Boolean IsAssigned
    [[deprecated("Use field access instead!")]] bool& dyn_IsAssigned();
    // public System.Void .ctor(System.Int32 maskPos, System.ComponentModel.MaskedTextProvider/CharType charType)
    // Offset: 0x4F0D330
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MaskedTextProvider::CharDescriptor* New_ctor(int maskPos, ::System::ComponentModel::MaskedTextProvider::CharType charType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::ComponentModel::MaskedTextProvider::CharDescriptor::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MaskedTextProvider::CharDescriptor*, creationType>(maskPos, charType)));
    }
    // public override System.String ToString()
    // Offset: 0x4F0D360
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.ComponentModel.MaskedTextProvider/CharDescriptor
  #pragma pack(pop)
  static check_size<sizeof(MaskedTextProvider::CharDescriptor), 28 + sizeof(bool)> __System_ComponentModel_MaskedTextProvider_CharDescriptorSizeCheck;
  static_assert(sizeof(MaskedTextProvider::CharDescriptor) == 0x1D);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::MaskedTextProvider::CharDescriptor::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::ComponentModel::MaskedTextProvider::CharDescriptor::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::MaskedTextProvider::CharDescriptor::*)()>(&System::ComponentModel::MaskedTextProvider::CharDescriptor::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::MaskedTextProvider::CharDescriptor*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
