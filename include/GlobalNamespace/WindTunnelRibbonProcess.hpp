// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: WindTunnelRibbonProcess
  class WindTunnelRibbonProcess;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::WindTunnelRibbonProcess);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::WindTunnelRibbonProcess*, "", "WindTunnelRibbonProcess");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: WindTunnelRibbonProcess
  // [TokenAttribute] Offset: FFFFFFFF
  class WindTunnelRibbonProcess : public ::UnityEngine::MonoBehaviour {
    public:
    // private System.Void Start()
    // Offset: 0x269B57C
    void Start();
    // private System.Void Update()
    // Offset: 0x269B580
    void Update();
    // public System.Void .ctor()
    // Offset: 0x269B584
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WindTunnelRibbonProcess* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::WindTunnelRibbonProcess::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WindTunnelRibbonProcess*, creationType>()));
    }
  }; // WindTunnelRibbonProcess
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::WindTunnelRibbonProcess::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WindTunnelRibbonProcess::*)()>(&GlobalNamespace::WindTunnelRibbonProcess::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindTunnelRibbonProcess*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindTunnelRibbonProcess::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::WindTunnelRibbonProcess::*)()>(&GlobalNamespace::WindTunnelRibbonProcess::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::WindTunnelRibbonProcess*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::WindTunnelRibbonProcess::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!