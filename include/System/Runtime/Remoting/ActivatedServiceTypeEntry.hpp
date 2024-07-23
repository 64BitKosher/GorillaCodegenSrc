// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Remoting.TypeEntry
#include "System/Runtime/Remoting/TypeEntry.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ActivatedServiceTypeEntry
  class ActivatedServiceTypeEntry;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedServiceTypeEntry*, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ActivatedServiceTypeEntry
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: FFFFFFFF
  class ActivatedServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
    public:
    public:
    // private System.Type obj_type
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* obj_type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Type*
    constexpr operator ::System::Type*() const noexcept {
      return obj_type;
    }
    // Get instance field reference: private System.Type obj_type
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_obj_type();
    // public System.Void .ctor(System.String typeName, System.String assemblyName)
    // Offset: 0x4522508
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActivatedServiceTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Remoting::ActivatedServiceTypeEntry::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActivatedServiceTypeEntry*, creationType>(typeName, assemblyName)));
    }
    // public System.Type get_ObjectType()
    // Offset: 0x4522650
    ::System::Type* get_ObjectType();
    // public override System.String ToString()
    // Offset: 0x4522658
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::StringW ToString();
  }; // System.Runtime.Remoting.ActivatedServiceTypeEntry
  #pragma pack(pop)
  static check_size<sizeof(ActivatedServiceTypeEntry), 32 + sizeof(::System::Type*)> __System_Runtime_Remoting_ActivatedServiceTypeEntrySizeCheck;
  static_assert(sizeof(ActivatedServiceTypeEntry) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType
// Il2CppName: get_ObjectType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedServiceTypeEntry::get_ObjectType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedServiceTypeEntry*), "get_ObjectType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Runtime::Remoting::ActivatedServiceTypeEntry::*)()>(&System::Runtime::Remoting::ActivatedServiceTypeEntry::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Runtime::Remoting::ActivatedServiceTypeEntry*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
