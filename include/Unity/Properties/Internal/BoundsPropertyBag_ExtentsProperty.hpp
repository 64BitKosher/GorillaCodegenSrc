// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.Internal.BoundsPropertyBag
#include "Unity/Properties/Internal/BoundsPropertyBag.hpp"
// Including type: Unity.Properties.Property`2
#include "Unity/Properties/Property_2.hpp"
// Including type: UnityEngine.Bounds
#include "UnityEngine/Bounds.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty*, "Unity.Properties.Internal", "BoundsPropertyBag/ExtentsProperty");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.Internal.BoundsPropertyBag/ExtentsProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class BoundsPropertyBag::ExtentsProperty : public ::Unity::Properties::Property_2<::UnityEngine::Bounds, ::UnityEngine::Vector3> {
    public:
    // public override System.String get_Name()
    // Offset: 0x5539214
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.String Property_2::get_Name()
    ::StringW get_Name();
    // public System.Void .ctor()
    // Offset: 0x553918C
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.Void Property_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoundsPropertyBag::ExtentsProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoundsPropertyBag::ExtentsProperty*, creationType>()));
    }
  }; // Unity.Properties.Internal.BoundsPropertyBag/ExtentsProperty
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty::*)()>(&Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::BoundsPropertyBag::ExtentsProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
