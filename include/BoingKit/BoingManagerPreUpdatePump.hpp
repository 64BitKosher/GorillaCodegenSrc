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
// Type namespace: BoingKit
namespace BoingKit {
  // Forward declaring type: BoingManagerPreUpdatePump
  class BoingManagerPreUpdatePump;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::BoingKit::BoingManagerPreUpdatePump);
DEFINE_IL2CPP_ARG_TYPE(::BoingKit::BoingManagerPreUpdatePump*, "BoingKit", "BoingManagerPreUpdatePump");
// Type namespace: BoingKit
namespace BoingKit {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: BoingKit.BoingManagerPreUpdatePump
  // [TokenAttribute] Offset: FFFFFFFF
  class BoingManagerPreUpdatePump : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 m_lastPumpedFrame
    // Size: 0x4
    // Offset: 0x20
    int m_lastPumpedFrame;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: private System.Int32 m_lastPumpedFrame
    [[deprecated("Use field access instead!")]] int& dyn_m_lastPumpedFrame();
    // private System.Void FixedUpdate()
    // Offset: 0x28F2790
    void FixedUpdate();
    // private System.Void Update()
    // Offset: 0x28F27D8
    void Update();
    // private System.Void TryPump()
    // Offset: 0x28F2794
    void TryPump();
    // private System.Void DoPump()
    // Offset: 0x28F27DC
    void DoPump();
    // public System.Void .ctor()
    // Offset: 0x28F2834
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BoingManagerPreUpdatePump* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::BoingKit::BoingManagerPreUpdatePump::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BoingManagerPreUpdatePump*, creationType>()));
    }
  }; // BoingKit.BoingManagerPreUpdatePump
  #pragma pack(pop)
  static check_size<sizeof(BoingManagerPreUpdatePump), 32 + sizeof(int)> __BoingKit_BoingManagerPreUpdatePumpSizeCheck;
  static_assert(sizeof(BoingManagerPreUpdatePump) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: BoingKit::BoingManagerPreUpdatePump::FixedUpdate
// Il2CppName: FixedUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPreUpdatePump::*)()>(&BoingKit::BoingManagerPreUpdatePump::FixedUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPreUpdatePump*), "FixedUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPreUpdatePump::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPreUpdatePump::*)()>(&BoingKit::BoingManagerPreUpdatePump::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPreUpdatePump*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPreUpdatePump::TryPump
// Il2CppName: TryPump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPreUpdatePump::*)()>(&BoingKit::BoingManagerPreUpdatePump::TryPump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPreUpdatePump*), "TryPump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPreUpdatePump::DoPump
// Il2CppName: DoPump
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (BoingKit::BoingManagerPreUpdatePump::*)()>(&BoingKit::BoingManagerPreUpdatePump::DoPump)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(BoingKit::BoingManagerPreUpdatePump*), "DoPump", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: BoingKit::BoingManagerPreUpdatePump::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
