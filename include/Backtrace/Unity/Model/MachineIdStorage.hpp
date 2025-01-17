// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Backtrace::Unity::Model
namespace Backtrace::Unity::Model {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Forward declaring type: MachineIdStorage
  class MachineIdStorage;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Backtrace::Unity::Model::MachineIdStorage);
DEFINE_IL2CPP_ARG_TYPE(::Backtrace::Unity::Model::MachineIdStorage*, "Backtrace.Unity.Model", "MachineIdStorage");
// Type namespace: Backtrace.Unity.Model
namespace Backtrace::Unity::Model {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Backtrace.Unity.Model.MachineIdStorage
  // [TokenAttribute] Offset: FFFFFFFF
  class MachineIdStorage : public ::Il2CppObject {
    public:
    // Nested type: ::Backtrace::Unity::Model::MachineIdStorage::$$c
    class $$c;
    // static field const value: static System.String MachineIdentifierKey
    static constexpr const char* MachineIdentifierKey = "backtrace-machine-id";
    // Get static field: static System.String MachineIdentifierKey
    static ::StringW _get_MachineIdentifierKey();
    // Set static field: static System.String MachineIdentifierKey
    static void _set_MachineIdentifierKey(::StringW value);
    // System.String GenerateMachineId()
    // Offset: 0x2A66D70
    ::StringW GenerateMachineId();
    // private System.String FetchMachineIdFromStorage()
    // Offset: 0x2A66E18
    ::StringW FetchMachineIdFromStorage();
    // private System.Void StoreMachineId(System.String machineId)
    // Offset: 0x2A66E5C
    void StoreMachineId(::StringW machineId);
    // protected System.String UseUnityIdentifier()
    // Offset: 0x2A66EA8
    ::StringW UseUnityIdentifier();
    // protected System.String UseNetworkingIdentifier()
    // Offset: 0x2A66F10
    ::StringW UseNetworkingIdentifier();
    // public System.Void .ctor()
    // Offset: 0x2A673B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MachineIdStorage* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Backtrace::Unity::Model::MachineIdStorage::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MachineIdStorage*, creationType>()));
    }
  }; // Backtrace.Unity.Model.MachineIdStorage
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::GenerateMachineId
// Il2CppName: GenerateMachineId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::MachineIdStorage::*)()>(&Backtrace::Unity::Model::MachineIdStorage::GenerateMachineId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::MachineIdStorage*), "GenerateMachineId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::FetchMachineIdFromStorage
// Il2CppName: FetchMachineIdFromStorage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::MachineIdStorage::*)()>(&Backtrace::Unity::Model::MachineIdStorage::FetchMachineIdFromStorage)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::MachineIdStorage*), "FetchMachineIdFromStorage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::StoreMachineId
// Il2CppName: StoreMachineId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Backtrace::Unity::Model::MachineIdStorage::*)(::StringW)>(&Backtrace::Unity::Model::MachineIdStorage::StoreMachineId)> {
  static const MethodInfo* get() {
    static auto* machineId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::MachineIdStorage*), "StoreMachineId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{machineId});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::UseUnityIdentifier
// Il2CppName: UseUnityIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::MachineIdStorage::*)()>(&Backtrace::Unity::Model::MachineIdStorage::UseUnityIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::MachineIdStorage*), "UseUnityIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::UseNetworkingIdentifier
// Il2CppName: UseNetworkingIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Backtrace::Unity::Model::MachineIdStorage::*)()>(&Backtrace::Unity::Model::MachineIdStorage::UseNetworkingIdentifier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Backtrace::Unity::Model::MachineIdStorage*), "UseNetworkingIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Backtrace::Unity::Model::MachineIdStorage::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
