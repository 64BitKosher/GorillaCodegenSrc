// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Fusion.ShutdownReason
#include "Fusion/ShutdownReason.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: ShutdownReasonExt
  class ShutdownReasonExt;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Fusion::ShutdownReasonExt);
DEFINE_IL2CPP_ARG_TYPE(::Fusion::ShutdownReasonExt*, "Fusion", "ShutdownReasonExt");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Fusion.ShutdownReasonExt
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class ShutdownReasonExt : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<Fusion.ShutdownReason,System.String> ShutdownReasonDescription
    static ::System::Collections::Generic::Dictionary_2<::Fusion::ShutdownReason, ::StringW>* _get_ShutdownReasonDescription();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<Fusion.ShutdownReason,System.String> ShutdownReasonDescription
    static void _set_ShutdownReasonDescription(::System::Collections::Generic::Dictionary_2<::Fusion::ShutdownReason, ::StringW>* value);
    // static public System.String ErrorDescription(Fusion.ShutdownReason shutdownReason)
    // Offset: 0x2B6BC60
    static ::StringW ErrorDescription(::Fusion::ShutdownReason shutdownReason);
    // static private System.Void .cctor()
    // Offset: 0x2B6C330
    static void _cctor();
  }; // Fusion.ShutdownReasonExt
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::ShutdownReasonExt::ErrorDescription
// Il2CppName: ErrorDescription
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::Fusion::ShutdownReason)>(&Fusion::ShutdownReasonExt::ErrorDescription)> {
  static const MethodInfo* get() {
    static auto* shutdownReason = &::il2cpp_utils::GetClassFromName("Fusion", "ShutdownReason")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::ShutdownReasonExt*), "ErrorDescription", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{shutdownReason});
  }
};
// Writing MetadataGetter for method: Fusion::ShutdownReasonExt::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Fusion::ShutdownReasonExt::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Fusion::ShutdownReasonExt*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
