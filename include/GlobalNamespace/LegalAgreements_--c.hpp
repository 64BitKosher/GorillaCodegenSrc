// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LegalAgreements
#include "GlobalNamespace/LegalAgreements.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LegalAgreementTextAsset
  class LegalAgreementTextAsset;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LegalAgreements::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LegalAgreements::$$c*, "", "LegalAgreements/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: LegalAgreements/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LegalAgreements::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly LegalAgreements/<>c <>9
    static ::GlobalNamespace::LegalAgreements::$$c* _get_$$9();
    // Set static field: static public readonly LegalAgreements/<>c <>9
    static void _set_$$9(::GlobalNamespace::LegalAgreements::$$c* value);
    // Get static field: static public System.Func`2<LegalAgreementTextAsset,System.String> <>9__27_0
    static ::System::Func_2<::GlobalNamespace::LegalAgreementTextAsset*, ::StringW>* _get_$$9__27_0();
    // Set static field: static public System.Func`2<LegalAgreementTextAsset,System.String> <>9__27_0
    static void _set_$$9__27_0(::System::Func_2<::GlobalNamespace::LegalAgreementTextAsset*, ::StringW>* value);
    // static private System.Void .cctor()
    // Offset: 0x2753834
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x275389C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LegalAgreements::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LegalAgreements::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LegalAgreements::$$c*, creationType>()));
    }
    // System.String <GetAcceptedAgreements>b__27_0(LegalAgreementTextAsset x)
    // Offset: 0x27538A4
    ::StringW $GetAcceptedAgreements$b__27_0(::GlobalNamespace::LegalAgreementTextAsset* x);
  }; // LegalAgreements/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::LegalAgreements::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LegalAgreements::$$c::$GetAcceptedAgreements$b__27_0
// Il2CppName: <GetAcceptedAgreements>b__27_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::LegalAgreements::$$c::*)(::GlobalNamespace::LegalAgreementTextAsset*)>(&GlobalNamespace::LegalAgreements::$$c::$GetAcceptedAgreements$b__27_0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("", "LegalAgreementTextAsset")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LegalAgreements::$$c*), "<GetAcceptedAgreements>b__27_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
