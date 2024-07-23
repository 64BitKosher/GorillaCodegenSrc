// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: Fusion.NetworkPrefabId
#include "Fusion/NetworkPrefabId.hpp"
// Including type: Fusion.NetworkPrefabTable
#include "Fusion/NetworkPrefabTable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Fusion
namespace Fusion {
  // Forward declaring type: INetworkPrefabSource
  class INetworkPrefabSource;
  // Forward declaring type: NetworkObject
  class NetworkObject;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Fusion
namespace Fusion {
  // Forward declaring type: NetworkPrefabLoadContext
  struct NetworkPrefabLoadContext;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Fusion::NetworkPrefabLoadContext, "Fusion", "NetworkPrefabLoadContext");
// Type namespace: Fusion
namespace Fusion {
  // Size: 0x18
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: Fusion.NetworkPrefabLoadContext
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct NetworkPrefabLoadContext/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Int32 Flags
    // Size: 0x4
    // Offset: 0x0
    int Flags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public readonly Fusion.NetworkPrefabId Id
    // Size: 0x4
    // Offset: 0x4
    ::Fusion::NetworkPrefabId Id;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabId) == 0x4);
    // public readonly Fusion.INetworkPrefabSource Prefab
    // Size: 0x8
    // Offset: 0x8
    ::Fusion::INetworkPrefabSource* Prefab;
    // Field size check
    static_assert(sizeof(::Fusion::INetworkPrefabSource*) == 0x8);
    // private readonly Fusion.NetworkPrefabTable/PrefabEntry Entry
    // Size: 0x8
    // Offset: 0x10
    ::Fusion::NetworkPrefabTable::PrefabEntry* Entry;
    // Field size check
    static_assert(sizeof(::Fusion::NetworkPrefabTable::PrefabEntry*) == 0x8);
    public:
    // Creating value type constructor for type: NetworkPrefabLoadContext
    constexpr NetworkPrefabLoadContext(int Flags_ = {}, ::Fusion::NetworkPrefabId Id_ = {}, ::Fusion::INetworkPrefabSource* Prefab_ = {}, ::Fusion::NetworkPrefabTable::PrefabEntry* Entry_ = {}) noexcept : Flags{Flags_}, Id{Id_}, Prefab{Prefab_}, Entry{Entry_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // static field const value: static public System.Int32 FLAGS_RESERVED_BITS
    static constexpr const int FLAGS_RESERVED_BITS = 8;
    // Get static field: static public System.Int32 FLAGS_RESERVED_BITS
    static int _get_FLAGS_RESERVED_BITS();
    // Set static field: static public System.Int32 FLAGS_RESERVED_BITS
    static void _set_FLAGS_RESERVED_BITS(int value);
    // static field const value: static public System.Int32 FLAGS_RESERVED
    static constexpr const int FLAGS_RESERVED = 255;
    // Get static field: static public System.Int32 FLAGS_RESERVED
    static int _get_FLAGS_RESERVED();
    // Set static field: static public System.Int32 FLAGS_RESERVED
    static void _set_FLAGS_RESERVED(int value);
    // static field const value: static public System.Int32 FLAGS_PREFER_ASYNC
    static constexpr const int FLAGS_PREFER_ASYNC = 1;
    // Get static field: static public System.Int32 FLAGS_PREFER_ASYNC
    static int _get_FLAGS_PREFER_ASYNC();
    // Set static field: static public System.Int32 FLAGS_PREFER_ASYNC
    static void _set_FLAGS_PREFER_ASYNC(int value);
    // Get instance field reference: public readonly System.Int32 Flags
    [[deprecated("Use field access instead!")]] int& dyn_Flags();
    // Get instance field reference: public readonly Fusion.NetworkPrefabId Id
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabId& dyn_Id();
    // Get instance field reference: public readonly Fusion.INetworkPrefabSource Prefab
    [[deprecated("Use field access instead!")]] ::Fusion::INetworkPrefabSource*& dyn_Prefab();
    // Get instance field reference: private readonly Fusion.NetworkPrefabTable/PrefabEntry Entry
    [[deprecated("Use field access instead!")]] ::Fusion::NetworkPrefabTable::PrefabEntry*& dyn_Entry();
    // System.Void .ctor(Fusion.NetworkPrefabTable/PrefabEntry entry, System.Int32 flags, Fusion.INetworkPrefabSource prefab, Fusion.NetworkPrefabId id)
    // Offset: 0x2B4ECB8
    NetworkPrefabLoadContext(::Fusion::NetworkPrefabTable::PrefabEntry* entry, int flags, ::Fusion::INetworkPrefabSource* prefab, ::Fusion::NetworkPrefabId id);
    // public System.Boolean HasFlag(System.Int32 flag)
    // Offset: 0x2B4ECF0
    bool HasFlag(int flag);
    // public System.Void Loaded(UnityEngine.GameObject prefab)
    // Offset: 0x2B4ED00
    void Loaded(::UnityEngine::GameObject* prefab);
    // public System.Void Loaded(Fusion.NetworkObject prefab)
    // Offset: 0x2B4F0A4
    void Loaded(::Fusion::NetworkObject* prefab);
    // public System.Void Error(System.Exception error)
    // Offset: 0x2B4F0C8
    void Error(::System::Exception* error);
  }; // Fusion.NetworkPrefabLoadContext
  #pragma pack(pop)
  static check_size<sizeof(NetworkPrefabLoadContext), 16 + sizeof(::Fusion::NetworkPrefabTable::PrefabEntry*)> __Fusion_NetworkPrefabLoadContextSizeCheck;
  static_assert(sizeof(NetworkPrefabLoadContext) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Fusion::NetworkPrefabLoadContext::NetworkPrefabLoadContext
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Fusion::NetworkPrefabLoadContext::HasFlag
// Il2CppName: HasFlag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Fusion::NetworkPrefabLoadContext::*)(int)>(&Fusion::NetworkPrefabLoadContext::HasFlag)> {
  static const MethodInfo* get() {
    static auto* flag = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabLoadContext), "HasFlag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flag});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabLoadContext::Loaded
// Il2CppName: Loaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabLoadContext::*)(::UnityEngine::GameObject*)>(&Fusion::NetworkPrefabLoadContext::Loaded)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("UnityEngine", "GameObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabLoadContext), "Loaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabLoadContext::Loaded
// Il2CppName: Loaded
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabLoadContext::*)(::Fusion::NetworkObject*)>(&Fusion::NetworkPrefabLoadContext::Loaded)> {
  static const MethodInfo* get() {
    static auto* prefab = &::il2cpp_utils::GetClassFromName("Fusion", "NetworkObject")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabLoadContext), "Loaded", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{prefab});
  }
};
// Writing MetadataGetter for method: Fusion::NetworkPrefabLoadContext::Error
// Il2CppName: Error
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Fusion::NetworkPrefabLoadContext::*)(::System::Exception*)>(&Fusion::NetworkPrefabLoadContext::Error)> {
  static const MethodInfo* get() {
    static auto* error = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Fusion::NetworkPrefabLoadContext), "Error", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{error});
  }
};