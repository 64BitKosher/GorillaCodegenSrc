// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IBuilderPieceComponent
  class IBuilderPieceComponent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IBuilderPieceComponent);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBuilderPieceComponent*, "", "IBuilderPieceComponent");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IBuilderPieceComponent
  // [TokenAttribute] Offset: FFFFFFFF
  class IBuilderPieceComponent {
    public:
    // public System.Void OnPieceCreate(System.Int32 pieceType, System.Int32 pieceId)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPieceCreate(int pieceType, int pieceId);
    // public System.Void OnPieceDestroy()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPieceDestroy();
    // public System.Void OnPieceActivate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPieceActivate();
    // public System.Void OnPieceDeactivate()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnPieceDeactivate();
  }; // IBuilderPieceComponent
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IBuilderPieceComponent::OnPieceCreate
// Il2CppName: OnPieceCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBuilderPieceComponent::*)(int, int)>(&GlobalNamespace::IBuilderPieceComponent::OnPieceCreate)> {
  static const MethodInfo* get() {
    static auto* pieceType = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* pieceId = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBuilderPieceComponent*), "OnPieceCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{pieceType, pieceId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBuilderPieceComponent::OnPieceDestroy
// Il2CppName: OnPieceDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBuilderPieceComponent::*)()>(&GlobalNamespace::IBuilderPieceComponent::OnPieceDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBuilderPieceComponent*), "OnPieceDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBuilderPieceComponent::OnPieceActivate
// Il2CppName: OnPieceActivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBuilderPieceComponent::*)()>(&GlobalNamespace::IBuilderPieceComponent::OnPieceActivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBuilderPieceComponent*), "OnPieceActivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IBuilderPieceComponent::OnPieceDeactivate
// Il2CppName: OnPieceDeactivate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IBuilderPieceComponent::*)()>(&GlobalNamespace::IBuilderPieceComponent::OnPieceDeactivate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IBuilderPieceComponent*), "OnPieceDeactivate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
