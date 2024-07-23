// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Pathfinding.AdvancedSmooth
#include "Pathfinding/AdvancedSmooth.hpp"
// Including type: Pathfinding.AdvancedSmooth/TurnConstructor
#include "Pathfinding/AdvancedSmooth_TurnConstructor.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Pathfinding::AdvancedSmooth::MaxTurn);
DEFINE_IL2CPP_ARG_TYPE(::Pathfinding::AdvancedSmooth::MaxTurn*, "Pathfinding", "AdvancedSmooth/MaxTurn");
// Type namespace: Pathfinding
namespace Pathfinding {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: Pathfinding.AdvancedSmooth/MaxTurn
  // [TokenAttribute] Offset: FFFFFFFF
  class AdvancedSmooth::MaxTurn : public ::Pathfinding::AdvancedSmooth::TurnConstructor {
    public:
    public:
    // private UnityEngine.Vector3 preRightCircleCenter
    // Size: 0xC
    // Offset: 0x18
    ::UnityEngine::Vector3 preRightCircleCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 preLeftCircleCenter
    // Size: 0xC
    // Offset: 0x24
    ::UnityEngine::Vector3 preLeftCircleCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 rightCircleCenter
    // Size: 0xC
    // Offset: 0x30
    ::UnityEngine::Vector3 rightCircleCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 leftCircleCenter
    // Size: 0xC
    // Offset: 0x3C
    ::UnityEngine::Vector3 leftCircleCenter;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private System.Double vaRight
    // Size: 0x8
    // Offset: 0x48
    double vaRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double vaLeft
    // Size: 0x8
    // Offset: 0x50
    double vaLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double preVaLeft
    // Size: 0x8
    // Offset: 0x58
    double preVaLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double preVaRight
    // Size: 0x8
    // Offset: 0x60
    double preVaRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double gammaLeft
    // Size: 0x8
    // Offset: 0x68
    double gammaLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double gammaRight
    // Size: 0x8
    // Offset: 0x70
    double gammaRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double betaRightRight
    // Size: 0x8
    // Offset: 0x78
    double betaRightRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double betaRightLeft
    // Size: 0x8
    // Offset: 0x80
    double betaRightLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double betaLeftRight
    // Size: 0x8
    // Offset: 0x88
    double betaLeftRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double betaLeftLeft
    // Size: 0x8
    // Offset: 0x90
    double betaLeftLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double deltaRightLeft
    // Size: 0x8
    // Offset: 0x98
    double deltaRightLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double deltaLeftRight
    // Size: 0x8
    // Offset: 0xA0
    double deltaLeftRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double alfaRightRight
    // Size: 0x8
    // Offset: 0xA8
    double alfaRightRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double alfaLeftLeft
    // Size: 0x8
    // Offset: 0xB0
    double alfaLeftLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double alfaRightLeft
    // Size: 0x8
    // Offset: 0xB8
    double alfaRightLeft;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // private System.Double alfaLeftRight
    // Size: 0x8
    // Offset: 0xC0
    double alfaLeftRight;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.Vector3 preRightCircleCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_preRightCircleCenter();
    // Get instance field reference: private UnityEngine.Vector3 preLeftCircleCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_preLeftCircleCenter();
    // Get instance field reference: private UnityEngine.Vector3 rightCircleCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_rightCircleCenter();
    // Get instance field reference: private UnityEngine.Vector3 leftCircleCenter
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn_leftCircleCenter();
    // Get instance field reference: private System.Double vaRight
    [[deprecated("Use field access instead!")]] double& dyn_vaRight();
    // Get instance field reference: private System.Double vaLeft
    [[deprecated("Use field access instead!")]] double& dyn_vaLeft();
    // Get instance field reference: private System.Double preVaLeft
    [[deprecated("Use field access instead!")]] double& dyn_preVaLeft();
    // Get instance field reference: private System.Double preVaRight
    [[deprecated("Use field access instead!")]] double& dyn_preVaRight();
    // Get instance field reference: private System.Double gammaLeft
    [[deprecated("Use field access instead!")]] double& dyn_gammaLeft();
    // Get instance field reference: private System.Double gammaRight
    [[deprecated("Use field access instead!")]] double& dyn_gammaRight();
    // Get instance field reference: private System.Double betaRightRight
    [[deprecated("Use field access instead!")]] double& dyn_betaRightRight();
    // Get instance field reference: private System.Double betaRightLeft
    [[deprecated("Use field access instead!")]] double& dyn_betaRightLeft();
    // Get instance field reference: private System.Double betaLeftRight
    [[deprecated("Use field access instead!")]] double& dyn_betaLeftRight();
    // Get instance field reference: private System.Double betaLeftLeft
    [[deprecated("Use field access instead!")]] double& dyn_betaLeftLeft();
    // Get instance field reference: private System.Double deltaRightLeft
    [[deprecated("Use field access instead!")]] double& dyn_deltaRightLeft();
    // Get instance field reference: private System.Double deltaLeftRight
    [[deprecated("Use field access instead!")]] double& dyn_deltaLeftRight();
    // Get instance field reference: private System.Double alfaRightRight
    [[deprecated("Use field access instead!")]] double& dyn_alfaRightRight();
    // Get instance field reference: private System.Double alfaLeftLeft
    [[deprecated("Use field access instead!")]] double& dyn_alfaLeftLeft();
    // Get instance field reference: private System.Double alfaRightLeft
    [[deprecated("Use field access instead!")]] double& dyn_alfaRightLeft();
    // Get instance field reference: private System.Double alfaLeftRight
    [[deprecated("Use field access instead!")]] double& dyn_alfaLeftRight();
    // public override System.Void OnTangentUpdate()
    // Offset: 0x29EF410
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::OnTangentUpdate()
    void OnTangentUpdate();
    // public override System.Void Prepare(System.Int32 i, UnityEngine.Vector3[] vectorPath)
    // Offset: 0x29EF554
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::Prepare(System.Int32 i, UnityEngine.Vector3[] vectorPath)
    void Prepare(int i, ::ArrayW<::UnityEngine::Vector3> vectorPath);
    // public override System.Void TangentToTangent(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    // Offset: 0x29EF660
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::TangentToTangent(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    void TangentToTangent(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>* turnList);
    // public override System.Void PointToTangent(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    // Offset: 0x29F04D4
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::PointToTangent(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    void PointToTangent(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>* turnList);
    // public override System.Void TangentToPoint(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    // Offset: 0x29F0A70
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::TangentToPoint(System.Collections.Generic.List`1<Pathfinding.AdvancedSmooth/Turn> turnList)
    void TangentToPoint(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>* turnList);
    // public override System.Void GetPath(Pathfinding.AdvancedSmooth/Turn turn, System.Collections.Generic.List`1<UnityEngine.Vector3> output)
    // Offset: 0x29F0F00
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::GetPath(Pathfinding.AdvancedSmooth/Turn turn, System.Collections.Generic.List`1<UnityEngine.Vector3> output)
    void GetPath(::Pathfinding::AdvancedSmooth::Turn turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* output);
    // public System.Void .ctor()
    // Offset: 0x29EF2F4
    // Implemented from: Pathfinding.AdvancedSmooth/TurnConstructor
    // Base method: System.Void TurnConstructor::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AdvancedSmooth::MaxTurn* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Pathfinding::AdvancedSmooth::MaxTurn::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AdvancedSmooth::MaxTurn*, creationType>()));
    }
  }; // Pathfinding.AdvancedSmooth/MaxTurn
  #pragma pack(pop)
  static check_size<sizeof(AdvancedSmooth::MaxTurn), 192 + sizeof(double)> __Pathfinding_AdvancedSmooth_MaxTurnSizeCheck;
  static_assert(sizeof(AdvancedSmooth::MaxTurn) == 0xC8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::OnTangentUpdate
// Il2CppName: OnTangentUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)()>(&Pathfinding::AdvancedSmooth::MaxTurn::OnTangentUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "OnTangentUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::Prepare
// Il2CppName: Prepare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)(int, ::ArrayW<::UnityEngine::Vector3>)>(&Pathfinding::AdvancedSmooth::MaxTurn::Prepare)> {
  static const MethodInfo* get() {
    static auto* i = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* vectorPath = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "Prepare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{i, vectorPath});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::TangentToTangent
// Il2CppName: TangentToTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>*)>(&Pathfinding::AdvancedSmooth::MaxTurn::TangentToTangent)> {
  static const MethodInfo* get() {
    static auto* turnList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "AdvancedSmooth/Turn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "TangentToTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turnList});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::PointToTangent
// Il2CppName: PointToTangent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>*)>(&Pathfinding::AdvancedSmooth::MaxTurn::PointToTangent)> {
  static const MethodInfo* get() {
    static auto* turnList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "AdvancedSmooth/Turn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "PointToTangent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turnList});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::TangentToPoint
// Il2CppName: TangentToPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)(::System::Collections::Generic::List_1<::Pathfinding::AdvancedSmooth::Turn>*)>(&Pathfinding::AdvancedSmooth::MaxTurn::TangentToPoint)> {
  static const MethodInfo* get() {
    static auto* turnList = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Pathfinding", "AdvancedSmooth/Turn")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "TangentToPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turnList});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::GetPath
// Il2CppName: GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Pathfinding::AdvancedSmooth::MaxTurn::*)(::Pathfinding::AdvancedSmooth::Turn, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*)>(&Pathfinding::AdvancedSmooth::MaxTurn::GetPath)> {
  static const MethodInfo* get() {
    static auto* turn = &::il2cpp_utils::GetClassFromName("Pathfinding", "AdvancedSmooth/Turn")->byval_arg;
    static auto* output = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "List`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Pathfinding::AdvancedSmooth::MaxTurn*), "GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{turn, output});
  }
};
// Writing MetadataGetter for method: Pathfinding::AdvancedSmooth::MaxTurn::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!