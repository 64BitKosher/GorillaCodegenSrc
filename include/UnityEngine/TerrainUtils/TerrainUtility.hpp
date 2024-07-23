// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Forward declaring type: TerrainMap
  class TerrainMap;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: UnityEngine.TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Forward declaring type: TerrainUtility
  class TerrainUtility;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::TerrainUtils::TerrainUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainUtility*, "UnityEngine.TerrainUtils", "TerrainUtility");
// Type namespace: UnityEngine.TerrainUtils
namespace UnityEngine::TerrainUtils {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TerrainUtils.TerrainUtility
  // [TokenAttribute] Offset: FFFFFFFF
  // [MovedFromAttribute] Offset: FFFFFFFF
  class TerrainUtility : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::TerrainUtils::TerrainUtility::$$c__DisplayClass2_0
    class $$c__DisplayClass2_0;
    // Nested type: ::UnityEngine::TerrainUtils::TerrainUtility::$$c__DisplayClass2_1
    class $$c__DisplayClass2_1;
    // static System.Boolean ValidTerrainsExist()
    // Offset: 0x5540678
    static bool ValidTerrainsExist();
    // static System.Void ClearConnectivity()
    // Offset: 0x55406E0
    static void ClearConnectivity();
    // static System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.TerrainUtils.TerrainMap> CollectTerrains(System.Boolean onlyAutoConnectedTerrains)
    // Offset: 0x55407D8
    static ::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::TerrainUtils::TerrainMap*>* CollectTerrains(bool onlyAutoConnectedTerrains);
    // static public System.Void AutoConnect()
    // Offset: 0x5540AFC
    static void AutoConnect();
  }; // UnityEngine.TerrainUtils.TerrainUtility
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist
// Il2CppName: ValidTerrainsExist
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::TerrainUtils::TerrainUtility::ValidTerrainsExist)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainUtils::TerrainUtility*), "ValidTerrainsExist", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity
// Il2CppName: ClearConnectivity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TerrainUtils::TerrainUtility::ClearConnectivity)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainUtils::TerrainUtility*), "ClearConnectivity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains
// Il2CppName: CollectTerrains
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<int, ::UnityEngine::TerrainUtils::TerrainMap*>* (*)(bool)>(&UnityEngine::TerrainUtils::TerrainUtility::CollectTerrains)> {
  static const MethodInfo* get() {
    static auto* onlyAutoConnectedTerrains = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainUtils::TerrainUtility*), "CollectTerrains", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{onlyAutoConnectedTerrains});
  }
};
// Writing MetadataGetter for method: UnityEngine::TerrainUtils::TerrainUtility::AutoConnect
// Il2CppName: AutoConnect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::TerrainUtils::TerrainUtility::AutoConnect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::TerrainUtils::TerrainUtility*), "AutoConnect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};