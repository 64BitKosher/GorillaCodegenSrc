// Autogenerated from CppHeaderCreator
// Custom Codegen for GORILLA TAG by chcoal
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter
#include "UnityEngine/XR/Interaction/Toolkit/Filtering/IXRHoverFilter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: UnityEngine::XR::Interaction::Toolkit
namespace UnityEngine::XR::Interaction::Toolkit {
  // Forward declaring type: IXRHoverInteractor
  class IXRHoverInteractor;
  // Forward declaring type: IXRHoverInteractable
  class IXRHoverInteractable;
}
// Completed forward declares
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Forward declaring type: XRHoverFilterDelegate
  class XRHoverFilterDelegate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*, "UnityEngine.XR.Interaction.Toolkit.Filtering", "XRHoverFilterDelegate");
// Type namespace: UnityEngine.XR.Interaction.Toolkit.Filtering
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
  // Size: 0x19
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.XR.Interaction.Toolkit.Filtering.XRHoverFilterDelegate
  // [TokenAttribute] Offset: FFFFFFFF
  class XRHoverFilterDelegate : public ::Il2CppObject/*, public ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*/ {
    public:
    public:
    // private System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,System.Boolean> <delegateToProcess>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* delegateToProcess;
    // Field size check
    static_assert(sizeof(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>*) == 0x8);
    // private System.Boolean <canProcess>k__BackingField
    // Size: 0x1
    // Offset: 0x18
    bool canProcess;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter
    operator ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>(this);
    }
    // Get instance field reference: private System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,System.Boolean> <delegateToProcess>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>*& dyn_$delegateToProcess$k__BackingField();
    // Get instance field reference: private System.Boolean <canProcess>k__BackingField
    [[deprecated("Use field access instead!")]] bool& dyn_$canProcess$k__BackingField();
    // public System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,System.Boolean> get_delegateToProcess()
    // Offset: 0x542B044
    ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* get_delegateToProcess();
    // public System.Void set_delegateToProcess(System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,System.Boolean> value)
    // Offset: 0x542B04C
    void set_delegateToProcess(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* value);
    // public System.Boolean get_canProcess()
    // Offset: 0x542B054
    bool get_canProcess();
    // public System.Void set_canProcess(System.Boolean value)
    // Offset: 0x542B05C
    void set_canProcess(bool value);
    // public System.Void .ctor(System.Func`3<UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor,UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable,System.Boolean> delegateToProcess)
    // Offset: 0x542B068
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XRHoverFilterDelegate* New_ctor(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* delegateToProcess) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XRHoverFilterDelegate*, creationType>(delegateToProcess)));
    }
    // public System.Boolean Process(UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractor interactor, UnityEngine.XR.Interaction.Toolkit.IXRHoverInteractable interactable)
    // Offset: 0x542B0EC
    bool Process(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor* interactor, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable* interactable);
  }; // UnityEngine.XR.Interaction.Toolkit.Filtering.XRHoverFilterDelegate
  #pragma pack(pop)
  static check_size<sizeof(XRHoverFilterDelegate), 24 + sizeof(bool)> __UnityEngine_XR_Interaction_Toolkit_Filtering_XRHoverFilterDelegateSizeCheck;
  static_assert(sizeof(XRHoverFilterDelegate) == 0x19);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::get_delegateToProcess
// Il2CppName: get_delegateToProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>* (UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::get_delegateToProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*), "get_delegateToProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::set_delegateToProcess
// Il2CppName: set_delegateToProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::*)(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*, bool>*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::set_delegateToProcess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`3"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor"), ::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*), "set_delegateToProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::get_canProcess
// Il2CppName: get_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::*)()>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::get_canProcess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*), "get_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::set_canProcess
// Il2CppName: set_canProcess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::*)(bool)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::set_canProcess)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*), "set_canProcess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::Process
// Il2CppName: Process
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::*)(::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractor*, ::UnityEngine::XR::Interaction::Toolkit::IXRHoverInteractable*)>(&UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate::Process)> {
  static const MethodInfo* get() {
    static auto* interactor = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractor")->byval_arg;
    static auto* interactable = &::il2cpp_utils::GetClassFromName("UnityEngine.XR.Interaction.Toolkit", "IXRHoverInteractable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::XR::Interaction::Toolkit::Filtering::XRHoverFilterDelegate*), "Process", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{interactor, interactable});
  }
};
