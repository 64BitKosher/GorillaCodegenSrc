// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Pathfinding.WindowsStore
namespace Pathfinding::WindowsStore {
  // Forward declaring type: WindowsStoreCompatibility
  class WindowsStoreCompatibility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::WindowsStore::WindowsStoreCompatibility);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::WindowsStore::WindowsStoreCompatibility*, "Pathfinding.WindowsStore", "WindowsStoreCompatibility");
// Type namespace: Pathfinding.WindowsStore
namespace Pathfinding::WindowsStore {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.WindowsStore.WindowsStoreCompatibility
  // [TokenAttribute] Offset: FFFFFFFF
  class WindowsStoreCompatibility : public ::Il2CppObject {
    public:
    // static public System.Type GetTypeFromInfo(System.Type type)
    // Offset: 0x2A26EF4
    static ::System::Type* GetTypeFromInfo(::System::Type* type);
    // static public System.Type GetTypeInfo(System.Type type)
    // Offset: 0x2A2475C
    static ::System::Type* GetTypeInfo(::System::Type* type);
  }; // Pathfinding.WindowsStore.WindowsStoreCompatibility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeFromInfo
// Il2CppName: GetTypeFromInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeFromInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WindowsStore::WindowsStoreCompatibility*), "GetTypeFromInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeInfo
// Il2CppName: GetTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Type*)>(&Pathfinding::WindowsStore::WindowsStoreCompatibility::GetTypeInfo)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::WindowsStore::WindowsStoreCompatibility*), "GetTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
