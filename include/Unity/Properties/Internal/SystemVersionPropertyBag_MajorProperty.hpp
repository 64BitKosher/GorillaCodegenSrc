// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.Internal.SystemVersionPropertyBag
#include "Unity/Properties/Internal/SystemVersionPropertyBag.hpp"
// Including type: Unity.Properties.Property`2
#include "Unity/Properties/Property_2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Version
  class Version;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty*, "Unity.Properties.Internal", "SystemVersionPropertyBag/MajorProperty");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.Internal.SystemVersionPropertyBag/MajorProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class SystemVersionPropertyBag::MajorProperty : public ::Unity::Properties::Property_2<::System::Version*, int> {
    public:
    // public System.Void .ctor()
    // Offset: 0x5539364
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.Void Property_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SystemVersionPropertyBag::MajorProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SystemVersionPropertyBag::MajorProperty*, creationType>()));
    }
    // public override System.String get_Name()
    // Offset: 0x55395E4
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.String Property_2::get_Name()
    ::StringW get_Name();
  }; // Unity.Properties.Internal.SystemVersionPropertyBag/MajorProperty
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty::*)()>(&Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::SystemVersionPropertyBag::MajorProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
