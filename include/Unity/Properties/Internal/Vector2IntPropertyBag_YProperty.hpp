// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Unity.Properties.Internal.Vector2IntPropertyBag
#include "Unity/Properties/Internal/Vector2IntPropertyBag.hpp"
// Including type: Unity.Properties.Property`2
#include "Unity/Properties/Property_2.hpp"
// Including type: UnityEngine.Vector2Int
#include "UnityEngine/Vector2Int.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Unity::Properties::Internal::Vector2IntPropertyBag::YProperty);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::Internal::Vector2IntPropertyBag::YProperty*, "Unity.Properties.Internal", "Vector2IntPropertyBag/YProperty");
// Type namespace: Unity.Properties.Internal
namespace Unity::Properties::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Unity.Properties.Internal.Vector2IntPropertyBag/YProperty
  // [TokenAttribute] Offset: FFFFFFFF
  class Vector2IntPropertyBag::YProperty : public ::Unity::Properties::Property_2<::UnityEngine::Vector2Int, int> {
    public:
    // public override System.String get_Name()
    // Offset: 0x5538B2C
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.String Property_2::get_Name()
    ::StringW get_Name();
    // public System.Void .ctor()
    // Offset: 0x5538AA4
    // Implemented from: Unity.Properties.Property`2
    // Base method: System.Void Property_2::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Vector2IntPropertyBag::YProperty* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Unity::Properties::Internal::Vector2IntPropertyBag::YProperty::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Vector2IntPropertyBag::YProperty*, creationType>()));
    }
  }; // Unity.Properties.Internal.Vector2IntPropertyBag/YProperty
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Unity::Properties::Internal::Vector2IntPropertyBag::YProperty::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Unity::Properties::Internal::Vector2IntPropertyBag::YProperty::*)()>(&Unity::Properties::Internal::Vector2IntPropertyBag::YProperty::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Unity::Properties::Internal::Vector2IntPropertyBag::YProperty*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Unity::Properties::Internal::Vector2IntPropertyBag::YProperty::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
