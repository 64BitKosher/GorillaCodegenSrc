// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OnEnterPlay_Attribute
#include "GlobalNamespace/OnEnterPlay_Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OnEnterPlay_SetNull
  class OnEnterPlay_SetNull;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnEnterPlay_SetNull);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnEnterPlay_SetNull*, "", "OnEnterPlay_SetNull");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnEnterPlay_SetNull
  // [TokenAttribute] Offset: FFFFFFFF
  class OnEnterPlay_SetNull : public ::GlobalNamespace::OnEnterPlay_Attribute {
    public:
    // public override System.Void OnEnterPlay(System.Reflection.FieldInfo field)
    // Offset: 0x27792FC
    // Implemented from: OnPlayChange_BaseAttribute
    // Base method: System.Void OnPlayChange_BaseAttribute::OnEnterPlay(System.Reflection.FieldInfo field)
    void OnEnterPlay(::System::Reflection::FieldInfo* field);
    // public System.Void .ctor()
    // Offset: 0x27793E0
    // Implemented from: OnEnterPlay_Attribute
    // Base method: System.Void OnEnterPlay_Attribute::.ctor()
    // Base method: System.Void OnPlayChange_BaseAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnEnterPlay_SetNull* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OnEnterPlay_SetNull::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnEnterPlay_SetNull*, creationType>()));
    }
  }; // OnEnterPlay_SetNull
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnEnterPlay_SetNull::OnEnterPlay
// Il2CppName: OnEnterPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnEnterPlay_SetNull::*)(::System::Reflection::FieldInfo*)>(&GlobalNamespace::OnEnterPlay_SetNull::OnEnterPlay)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnEnterPlay_SetNull*), "OnEnterPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnEnterPlay_SetNull::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
