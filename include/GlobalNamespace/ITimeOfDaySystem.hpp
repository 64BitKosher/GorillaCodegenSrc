// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ITimeOfDaySystem
  class ITimeOfDaySystem;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ITimeOfDaySystem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ITimeOfDaySystem*, "", "ITimeOfDaySystem");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: ITimeOfDaySystem
  // [TokenAttribute] Offset: FFFFFFFF
  class ITimeOfDaySystem {
    public:
    // public System.Double get_currentTimeInSeconds()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_currentTimeInSeconds();
    // public System.Double get_totalTimeInSeconds()
    // Offset: 0xFFFFFFFFFFFFFFFF
    double get_totalTimeInSeconds();
  }; // ITimeOfDaySystem
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ITimeOfDaySystem::get_currentTimeInSeconds
// Il2CppName: get_currentTimeInSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::ITimeOfDaySystem::*)()>(&GlobalNamespace::ITimeOfDaySystem::get_currentTimeInSeconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITimeOfDaySystem*), "get_currentTimeInSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ITimeOfDaySystem::get_totalTimeInSeconds
// Il2CppName: get_totalTimeInSeconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (GlobalNamespace::ITimeOfDaySystem::*)()>(&GlobalNamespace::ITimeOfDaySystem::get_totalTimeInSeconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ITimeOfDaySystem*), "get_totalTimeInSeconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
