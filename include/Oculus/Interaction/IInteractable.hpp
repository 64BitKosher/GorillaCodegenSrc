// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Oculus.Interaction.IInteractableView
#include "Oculus/Interaction/IInteractableView.hpp"
// Completed includes
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Forward declaring type: IInteractable
  class IInteractable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Interaction::IInteractable);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Interaction::IInteractable*, "Oculus.Interaction", "IInteractable");
// Type namespace: Oculus.Interaction
namespace Oculus::Interaction {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Interaction.IInteractable
  // [TokenAttribute] Offset: FFFFFFFF
  class IInteractable/*, public ::Oculus::Interaction::IInteractableView*/ {
    public:
    // Creating interface conversion operator: operator ::Oculus::Interaction::IInteractableView
    operator ::Oculus::Interaction::IInteractableView() noexcept {
      return *reinterpret_cast<::Oculus::Interaction::IInteractableView*>(this);
    }
    // public System.Void Enable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Enable();
    // public System.Void Disable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Disable();
    // public System.Int32 get_MaxInteractors()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_MaxInteractors();
    // public System.Void set_MaxInteractors(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_MaxInteractors(int value);
    // public System.Int32 get_MaxSelectingInteractors()
    // Offset: 0xFFFFFFFFFFFFFFFF
    int get_MaxSelectingInteractors();
    // public System.Void set_MaxSelectingInteractors(System.Int32 value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void set_MaxSelectingInteractors(int value);
    // public System.Void RemoveInteractorByIdentifier(System.Int32 id)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void RemoveInteractorByIdentifier(int id);
  }; // Oculus.Interaction.IInteractable
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::Enable
// Il2CppName: Enable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::IInteractable::*)()>(&Oculus::Interaction::IInteractable::Enable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "Enable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::Disable
// Il2CppName: Disable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::IInteractable::*)()>(&Oculus::Interaction::IInteractable::Disable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "Disable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::get_MaxInteractors
// Il2CppName: get_MaxInteractors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::IInteractable::*)()>(&Oculus::Interaction::IInteractable::get_MaxInteractors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "get_MaxInteractors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::set_MaxInteractors
// Il2CppName: set_MaxInteractors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::IInteractable::*)(int)>(&Oculus::Interaction::IInteractable::set_MaxInteractors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "set_MaxInteractors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::get_MaxSelectingInteractors
// Il2CppName: get_MaxSelectingInteractors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Oculus::Interaction::IInteractable::*)()>(&Oculus::Interaction::IInteractable::get_MaxSelectingInteractors)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "get_MaxSelectingInteractors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::set_MaxSelectingInteractors
// Il2CppName: set_MaxSelectingInteractors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::IInteractable::*)(int)>(&Oculus::Interaction::IInteractable::set_MaxSelectingInteractors)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "set_MaxSelectingInteractors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Interaction::IInteractable::RemoveInteractorByIdentifier
// Il2CppName: RemoveInteractorByIdentifier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Interaction::IInteractable::*)(int)>(&Oculus::Interaction::IInteractable::RemoveInteractorByIdentifier)> {
  static const MethodInfo* get() {
    static auto* id = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Interaction::IInteractable*), "RemoveInteractorByIdentifier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{id});
  }
};