// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
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
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OnPlayChange_BaseAttribute
  class OnPlayChange_BaseAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OnPlayChange_BaseAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OnPlayChange_BaseAttribute*, "", "OnPlayChange_BaseAttribute");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: OnPlayChange_BaseAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  class OnPlayChange_BaseAttribute : public ::System::Attribute {
    public:
    // public System.Void OnEnterPlay(System.Reflection.FieldInfo field)
    // Offset: 0x27792F4
    void OnEnterPlay(::System::Reflection::FieldInfo* field);
    // public System.Void OnEnterPlay(System.Reflection.MethodInfo method)
    // Offset: 0x27792F8
    void OnEnterPlay(::System::Reflection::MethodInfo* method);
    // public System.Void .ctor()
    // Offset: 0x27792EC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnPlayChange_BaseAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OnPlayChange_BaseAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnPlayChange_BaseAttribute*, creationType>()));
    }
  }; // OnPlayChange_BaseAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay
// Il2CppName: OnEnterPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnPlayChange_BaseAttribute::*)(::System::Reflection::FieldInfo*)>(&GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay)> {
  static const MethodInfo* get() {
    static auto* field = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnPlayChange_BaseAttribute*), "OnEnterPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{field});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay
// Il2CppName: OnEnterPlay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OnPlayChange_BaseAttribute::*)(::System::Reflection::MethodInfo*)>(&GlobalNamespace::OnPlayChange_BaseAttribute::OnEnterPlay)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OnPlayChange_BaseAttribute*), "OnEnterPlay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OnPlayChange_BaseAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
