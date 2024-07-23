// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NetworkSystemPUN
#include "GlobalNamespace/NetworkSystemPUN.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetworkSystemPUN::$$c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkSystemPUN::$$c*, "", "NetworkSystemPUN/<>c");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkSystemPUN/<>c
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class NetworkSystemPUN::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly NetworkSystemPUN/<>c <>9
    static ::GlobalNamespace::NetworkSystemPUN::$$c* _get_$$9();
    // Set static field: static public readonly NetworkSystemPUN/<>c <>9
    static void _set_$$9(::GlobalNamespace::NetworkSystemPUN::$$c* value);
    // Get static field: static public System.Action`1<System.Threading.CancellationTokenSource> <>9__58_0
    static ::System::Action_1<::System::Threading::CancellationTokenSource*>* _get_$$9__58_0();
    // Set static field: static public System.Action`1<System.Threading.CancellationTokenSource> <>9__58_0
    static void _set_$$9__58_0(::System::Action_1<::System::Threading::CancellationTokenSource*>* value);
    // Get static field: static public System.Action`1<System.Threading.CancellationTokenSource> <>9__103_0
    static ::System::Action_1<::System::Threading::CancellationTokenSource*>* _get_$$9__103_0();
    // Set static field: static public System.Action`1<System.Threading.CancellationTokenSource> <>9__103_0
    static void _set_$$9__103_0(::System::Action_1<::System::Threading::CancellationTokenSource*>* value);
    // static private System.Void .cctor()
    // Offset: 0x2916428
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x2916490
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetworkSystemPUN::$$c* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetworkSystemPUN::$$c::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetworkSystemPUN::$$c*, creationType>()));
    }
    // System.Void <ReturnToSinglePlayer>b__58_0(System.Threading.CancellationTokenSource cts)
    // Offset: 0x2916498
    void $ReturnToSinglePlayer$b__58_0(::System::Threading::CancellationTokenSource* cts);
    // System.Void <ResetSystem>b__103_0(System.Threading.CancellationTokenSource token)
    // Offset: 0x29164B0
    void $ResetSystem$b__103_0(::System::Threading::CancellationTokenSource* token);
  }; // NetworkSystemPUN/<>c
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$$c::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::NetworkSystemPUN::$$c::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$$c*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$$c::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$$c::$ReturnToSinglePlayer$b__58_0
// Il2CppName: <ReturnToSinglePlayer>b__58_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$$c::*)(::System::Threading::CancellationTokenSource*)>(&GlobalNamespace::NetworkSystemPUN::$$c::$ReturnToSinglePlayer$b__58_0)> {
  static const MethodInfo* get() {
    static auto* cts = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationTokenSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$$c*), "<ReturnToSinglePlayer>b__58_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cts});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetworkSystemPUN::$$c::$ResetSystem$b__103_0
// Il2CppName: <ResetSystem>b__103_0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetworkSystemPUN::$$c::*)(::System::Threading::CancellationTokenSource*)>(&GlobalNamespace::NetworkSystemPUN::$$c::$ResetSystem$b__103_0)> {
  static const MethodInfo* get() {
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationTokenSource")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetworkSystemPUN::$$c*), "<ResetSystem>b__103_0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{token});
  }
};