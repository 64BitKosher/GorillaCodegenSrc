// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.TypeName
#include "System/TypeName.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: TypeIdentifier
  class TypeIdentifier;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::TypeIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::System::TypeIdentifier*, "System", "TypeIdentifier");
// Type namespace: System
namespace System {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: System.TypeIdentifier
  // [TokenAttribute] Offset: FFFFFFFF
  class TypeIdentifier/*, public ::System::TypeName*/ {
    public:
    // Creating interface conversion operator: operator ::System::TypeName
    operator ::System::TypeName() noexcept {
      return *reinterpret_cast<::System::TypeName*>(this);
    }
    // public System.String get_InternalName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_InternalName();
  }; // System.TypeIdentifier
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::TypeIdentifier::get_InternalName
// Il2CppName: get_InternalName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::TypeIdentifier::*)()>(&System::TypeIdentifier::get_InternalName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::TypeIdentifier*), "get_InternalName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
